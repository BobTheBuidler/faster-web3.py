from collections import (
    abc,
)
import copy
import itertools
import re
from typing import (
    TYPE_CHECKING,
    Any,
    Callable,
    Collection,
    Coroutine,
    Dict,
    Final,
    Iterable,
    List,
    Literal,
    Optional,
    Sequence,
    Tuple,
    TypeVar,
    Union,
    cast,
    final,
)

from faster_eth_abi import (
    decoding,
    encoding,
)
from faster_eth_abi.grammar import (
    ABIType,
    TupleType,
    parse,
)
from faster_eth_abi.registry import (
    ABIRegistry,
    BaseEquals,
    registry as default_registry,
)
from eth_typing import (
    ABI,
    ABIComponent,
    ABIComponentIndexed,
    ABIConstructor,
    ABIElement,
    ABIEvent,
    ABIFallback,
    ABIFunction,
    ABIReceive,
    TypeStr,
)
from faster_eth_utils import (
    collapse_if_tuple,
    filter_abi_by_type,
    get_abi_input_names,
    get_abi_input_types,
    is_list_like,
    is_text,
)
from faster_eth_utils.toolz import (
    curry,
)
from typing_extensions import (
    TypeGuard,
)

from faster_web3._utils._abi import (
    ABITypedData,
    BytesEncoder,
    ByteStringEncoder,
    ExactLengthBytesEncoder,
    StrictByteStringEncoder,
    TextStringEncoder,
    abi_decoded_namedtuple_factory,
    async_recursive_map,
)
from faster_web3._utils.abi_element_identifiers import (
    FallbackFn,
    ReceiveFn,
)
from faster_web3._utils.ens import (
    is_ens_name,
)
from faster_web3._utils.formatters import (
    recursive_map,
)
from faster_web3.exceptions import (
    MismatchedABI,
    Web3TypeError,
    Web3ValueError,
)
from faster_web3.types import (
    ABIElementIdentifier,
)

if TYPE_CHECKING:
    from faster_web3 import (  # noqa: F401
        AsyncWeb3,
    )

T = TypeVar("T")


def fallback_func_abi_exists(contract_abi: ABI) -> Sequence[ABIFallback]:
    return filter_abi_by_type("fallback", contract_abi)


def receive_func_abi_exists(contract_abi: ABI) -> Sequence[ABIReceive]:
    return filter_abi_by_type("receive", contract_abi)


def get_indexed_event_inputs(event_abi: ABIEvent) -> List[ABIComponentIndexed]:
    return [arg for arg in event_abi["inputs"] if arg["indexed"] is True]


def exclude_indexed_event_inputs(event_abi: ABIEvent) -> List[ABIComponentIndexed]:
    return [arg for arg in event_abi["inputs"] if arg["indexed"] is False]


def filter_by_types(types: Collection[str], contract_abi: ABI) -> List[ABIElement]:
    return [abi_element for abi_element in contract_abi if abi_element["type"] in types]


def filter_by_argument_name(
    argument_names: Collection[str], contract_abi: ABI
) -> List[ABIElement]:
    """
    Return a list of each ``ABIElement`` which contains arguments matching provided
    names.
    """
    abis_with_matching_args = []
    for abi_element in contract_abi:
        try:
            abi_arg_names = get_abi_input_names(abi_element)

            if set(argument_names).intersection(abi_arg_names) == set(argument_names):
                abis_with_matching_args.append(abi_element)
        except TypeError:
            # fallback or receive functions do not have arguments
            # proceed to next ABIElement
            continue

    return abis_with_matching_args


def filter_by_argument_type(
    argument_types: Collection[str], contract_abi: ABI
) -> List[ABIElement]:
    """
    Return a list of each ``ABIElement`` which contains arguments matching provided
    types.
    """
    abis_with_matching_args = []
    for abi_element in contract_abi:
        try:
            abi_arg_types = get_abi_input_types(abi_element)

            if set(argument_types).intersection(abi_arg_types) == set(argument_types):
                abis_with_matching_args.append(abi_element)
        except ValueError:
            # fallback or receive functions do not have arguments
            # proceed to next ABIElement
            continue

    return abis_with_matching_args


def get_name_from_abi_element_identifier(
    abi_element_identifier: ABIElementIdentifier,
) -> str:
    if abi_element_identifier in ["fallback", FallbackFn]:
        return "fallback"
    elif abi_element_identifier in ["receive", ReceiveFn]:
        return "receive"
    elif is_text(abi_element_identifier):
        return str(abi_element_identifier).split("(")[0]
    else:
        raise Web3TypeError("Unsupported function identifier")


def get_abi_element_signature(
    abi_element_identifier: ABIElementIdentifier,
    abi_element_argument_types: Optional[Iterable[str]] = None,
) -> str:
    element_name = get_name_from_abi_element_identifier(abi_element_identifier)
    argument_types = ",".join(abi_element_argument_types or [])

    if element_name in ["fallback", "receive"]:
        return element_name

    return f"{element_name}({argument_types})"


@final
class AddressEncoder(encoding.AddressEncoder):
    @classmethod
    def validate_value(cls, value: Any) -> None:
        if is_ens_name(value):
            return

        super().validate_value(value)


TUPLE_TYPE_STR_RE: Final = re.compile(r"^(tuple)((\[([1-9]\d*\b)?])*)??$")


def get_tuple_type_str_parts(s: str) -> Optional[Tuple[str, Optional[str]]]:
    """
    Takes a JSON ABI type string.  For tuple type strings, returns the separated
    prefix and array dimension parts.  For all other strings, returns ``None``.
    """
    match = TUPLE_TYPE_STR_RE.match(s)

    if match is not None:
        tuple_prefix = match.group(1)
        tuple_dims = match.group(2)

        return tuple_prefix, tuple_dims

    return None


def _align_abi_input(
    arg_abi: Union[ABIComponent, ABIComponentIndexed], arg: Any
) -> Tuple[Any, ...]:
    """
    Aligns the values of any mapping at any level of nesting in ``arg``
    according to the layout of the corresponding abi spec.
    """
    tuple_parts = get_tuple_type_str_parts(arg_abi["type"])

    if tuple_parts is None:
        # Arg is non-tuple.  Just return value.
        return arg

    tuple_prefix, tuple_dims = tuple_parts
    if tuple_dims is None:
        # Arg is non-list tuple.  Each sub arg in `arg` will be aligned
        # according to its corresponding abi.
        sub_abis = arg_abi["components"]
    else:
        num_dims = tuple_dims.count("[")

        # Arg is list tuple.  A non-list version of its abi will be used to
        # align each element in `arg`.
        new_abi = copy.copy(arg_abi)
        new_abi["type"] = tuple_prefix + "[]" * (num_dims - 1)

        sub_abis = [cast(ABIComponent, abi) for abi in itertools.repeat(new_abi)]

    if isinstance(arg, abc.Mapping):
        # Arg is mapping.  Align values according to abi order.
        aligned_arg = tuple(arg[abi["name"]] for abi in sub_abis)
    else:
        aligned_arg = arg

    if not is_list_like(aligned_arg):
        raise Web3TypeError(
            f'Expected non-string sequence for "{arg_abi.get("type")}" '
            f"component type: got {aligned_arg}"
        )

    # convert NamedTuple to regular tuple
    typing = tuple if isinstance(aligned_arg, tuple) else type(aligned_arg)

    return typing(
        _align_abi_input(sub_abi, sub_arg)
        for sub_abi, sub_arg in zip(sub_abis, aligned_arg)
    )


def find_constructor_abi_element_by_type(contract_abi: ABI) -> ABIConstructor:
    """
    Find the constructor ABI element in the contract ABI.

    This function is often used in place of `web3.utils.abi.get_abi_element` to find
    a constructor without considering its argument types. This is used prior to
    encoding the abi, since the argument types are not known at that time.
    """
    candidates = [abi for abi in contract_abi if abi["type"] == "constructor"]
    if len(candidates) == 1:
        return candidates[0]
    elif len(candidates) == 0:
        return None
    elif len(candidates) > 1:
        raise Web3ValueError("Found multiple constructors.")
    return None


DYNAMIC_TYPES: Final = ["bytes", "string"]

INT_SIZES: Final = range(8, 257, 8)
BYTES_SIZES: Final = range(1, 33)
UINT_TYPES: Final = [f"uint{i}" for i in INT_SIZES]
INT_TYPES: Final = [f"int{i}" for i in INT_SIZES]
BYTES_TYPES: Final = [f"bytes{i}" for i in BYTES_SIZES] + ["bytes32.byte"]

STATIC_TYPES: Final = ["address", "bool"] + UINT_TYPES + INT_TYPES + BYTES_TYPES

BASE_TYPE_REGEX: Final = "|".join(f"{_type}(?![a-z0-9])" for _type in STATIC_TYPES + DYNAMIC_TYPES)

SUB_TYPE_REGEX: Final = r"\[" "[0-9]*" r"\]"

TYPE_REGEX: Final = ("^" "(?:{base_type})" "(?:(?:{sub_type})*)?" "$").format(
    base_type=BASE_TYPE_REGEX,
    sub_type=SUB_TYPE_REGEX,
)


def is_recognized_type(abi_type: TypeStr) -> bool:
    return bool(re.match(TYPE_REGEX, abi_type))


def is_bool_type(abi_type: TypeStr) -> TypeGuard[Literal["bool"]]:
    return abi_type == "bool"


def is_uint_type(abi_type: TypeStr) -> bool:
    return abi_type in UINT_TYPES


def is_int_type(abi_type: TypeStr) -> bool:
    return abi_type in INT_TYPES


def is_address_type(abi_type: TypeStr) -> TypeGuard[Literal["address"]]:
    return abi_type == "address"


def is_bytes_type(abi_type: TypeStr) -> bool:
    return abi_type in BYTES_TYPES + ["bytes"]


def is_string_type(abi_type: TypeStr) -> TypeGuard[Literal["string"]]:
    return abi_type == "string"


@curry
def is_length(target_length: int, value: abc.Sized) -> bool:
    return len(value) == target_length


def size_of_type(abi_type: TypeStr) -> Optional[int]:
    # sourcery skip: assign-if-exp, reintroduce-else
    """
    Returns size in bits of abi_type
    """
    if "string" in abi_type:
        return None
    if "byte" in abi_type:
        return None
    if "[" in abi_type:
        return None
    if abi_type == "bool":
        return 8
    if abi_type == "address":
        return 160
    return int(re.sub(r"\D", "", abi_type))


END_BRACKETS_OF_ARRAY_TYPE_REGEX: Final = r"\[[^]]*\]$"


def sub_type_of_array_type(abi_type: TypeStr) -> str:
    if not is_array_type(abi_type):
        raise Web3ValueError(f"Cannot parse subtype of nonarray abi-type: {abi_type}")

    return re.sub(END_BRACKETS_OF_ARRAY_TYPE_REGEX, "", abi_type, count=1)


def length_of_array_type(abi_type: TypeStr) -> Optional[int]:
    if not is_array_type(abi_type):
        raise Web3ValueError(f"Cannot parse length of nonarray abi-type: {abi_type}")

    if inner_brackets := (
        re.search(END_BRACKETS_OF_ARRAY_TYPE_REGEX, abi_type)[0].strip("[]")
    ):
        return int(inner_brackets)
    else:
        return None


ARRAY_REGEX: Final = ("^" "[a-zA-Z0-9_]+" "({sub_type})+" "$").format(sub_type=SUB_TYPE_REGEX)


def is_array_type(abi_type: TypeStr) -> bool:
    return bool(re.match(ARRAY_REGEX, abi_type))


NAME_REGEX: Final = "[a-zA-Z_]" "[a-zA-Z0-9_]*"


ENUM_REGEX: Final = ("^" "{lib_name}" r"\." "{enum_name}" "$").format(
    lib_name=NAME_REGEX, enum_name=NAME_REGEX
)


def is_probably_enum(abi_type: TypeStr) -> bool:
    return bool(re.match(ENUM_REGEX, abi_type))


def normalize_event_input_types(
    abi_args: Collection[ABIEvent],
) -> Tuple[Union[ABIEvent, Dict[TypeStr, Any]], ...]:
    return tuple(
        (
            arg
            if is_recognized_type(arg_type := arg["type"])
            else (
                {k: "uint8" if k == "type" else v for k, v in arg.items()}
                if is_probably_enum(arg_type)
                else arg
            )
        )
        for arg in abi_args
    )


########################################################
#
#  Conditionally modifying data, tagged with ABI Types
#
########################################################


@curry
def map_abi_data(
    normalizers: Iterable[Callable[[TypeStr, Any], Tuple[TypeStr, Any]]],
    types: Iterable[TypeStr],
    data: Iterable[Any],
) -> Any:
    """
    Applies normalizers to your data, in the context of the relevant types.
    Each normalizer is in the format:

    def normalizer(datatype, data):
        # Conditionally modify data
        return (datatype, data)

    Where datatype is a valid ABI type string, like "uint".

    In case of an array, like "bool[2]", normalizer will receive `data`
    as an iterable of typed data, like `[("bool", True), ("bool", False)]`.

    Internals
    ---

    This is accomplished by:

    1. Decorating the data tree with types
    2. Recursively mapping each of the normalizers to the data
    3. Stripping the types back out of the tree
    """
    # 1. Decorating the data tree with types
    data = abi_data_tree(types, data)
    # 2. Recursively mapping each of the normalizers to the data
    for normalizer in map(data_tree_map, normalizers):
        data = normalizer(data)
    # 3. Stripping the types back out of the tree
    return strip_abi_types(data)


@curry
def abi_data_tree(
    types: Iterable[TypeStr], data: Iterable[Any]
) -> List["ABITypedData"]:
    """
    Decorate the data tree with pairs of (type, data). The pair tuple is actually an
    ABITypedData, but can be accessed as a tuple.

    As an example:

    >>> abi_data_tree(types=["bool[2]", "uint"], data=[[True, False], 0])
    [("bool[2]", [("bool", True), ("bool", False)]), ("uint256", 0)]
    """
    return list(map(abi_sub_tree, types, data))


def data_tree_map(
    func: Callable[[TypeStr, Any], Tuple[TypeStr, Any]],
) -> Callable[[Any], "ABITypedData"]:
    """
    Map func to every ABITypedData element in the tree. func will
    receive two args: abi_type, and data
    """

    def data_tree_map_curried(data_tree: Any) -> "ABITypedData":
        def map_to_typed_data(elements: Any) -> "ABITypedData":
            if isinstance(elements, ABITypedData) and elements.abi_type is not None:
                return ABITypedData(func(*elements))
            else:
                return elements

        return recursive_map(map_to_typed_data, data_tree)

    return data_tree_map_curried


def abi_sub_tree(
    type_str_or_abi_type: Optional[Union[TypeStr, ABIType]], data_value: Any
) -> ABITypedData:
    if type_str_or_abi_type is None:
        return ABITypedData([None, data_value])

    if isinstance(type_str_or_abi_type, TypeStr):
        abi_type = parse(type_str_or_abi_type)
    else:
        abi_type = type_str_or_abi_type

    # In the two special cases below, we rebuild the given data structures with
    # annotated items
    value_to_annotate: Any
    if abi_type.is_array:
        # If type is array, determine item type and annotate all
        # items in iterable with that type
        item_type_str = abi_type.item_type.to_type_str()
        value_to_annotate = [
            abi_sub_tree(item_type_str, item_value) for item_value in data_value
        ]
    elif isinstance(abi_type, TupleType):
        # Otherwise, if type is tuple, determine component types and annotate
        # tuple components in iterable respectively with those types
        value_to_annotate = type(data_value)(
            abi_sub_tree(comp_type.to_type_str(), comp_value)
            for comp_type, comp_value in zip(abi_type.components, data_value)
        )
    else:
        value_to_annotate = data_value

    return ABITypedData(
        [
            abi_type.to_type_str(),
            value_to_annotate,
        ]
    )


def strip_abi_type(elements: Any) -> Any:
    if isinstance(elements, ABITypedData):
        return elements.data
    else:
        return elements


def strip_abi_types(elements: Any) -> Any:
    return recursive_map(strip_abi_type, elements)


def build_non_strict_registry() -> ABIRegistry:
    # We make a copy here just to make sure that eth-abi's default registry is not
    # affected by our custom encoder subclasses
    registry = default_registry.copy()

    registry.unregister("address")
    registry.unregister("bytes<M>")
    registry.unregister("bytes")
    registry.unregister("string")

    registry.register(
        BaseEquals("address"),
        AddressEncoder,
        decoding.AddressDecoder,
        label="address",
    )
    registry.register(
        BaseEquals("bytes", with_sub=True),
        BytesEncoder,
        decoding.BytesDecoder,
        label="bytes<M>",
    )
    registry.register(
        BaseEquals("bytes", with_sub=False),
        ByteStringEncoder,
        decoding.ByteStringDecoder,
        label="bytes",
    )
    registry.register(
        BaseEquals("string"),
        TextStringEncoder,
        decoding.StringDecoder,
        label="string",
    )
    return registry


def build_strict_registry() -> ABIRegistry:
    registry = default_registry.copy()

    registry.unregister("address")
    registry.unregister("bytes<M>")
    registry.unregister("bytes")
    registry.unregister("string")

    registry.register(
        BaseEquals("address"),
        AddressEncoder,
        decoding.AddressDecoder,
        label="address",
    )
    registry.register(
        BaseEquals("bytes", with_sub=True),
        ExactLengthBytesEncoder,
        decoding.BytesDecoder,
        label="bytes<M>",
    )
    registry.register(
        BaseEquals("bytes", with_sub=False),
        StrictByteStringEncoder,
        decoding.ByteStringDecoder,
        label="bytes",
    )
    registry.register(
        BaseEquals("string"),
        encoding.TextStringEncoder,
        decoding.StringDecoder,
        label="string",
    )
    return registry


def named_tree(
    abi: Iterable[
        Union[
            ABIComponent, ABIComponentIndexed, ABIFunction, ABIEvent, Dict[TypeStr, Any]
        ]
    ],
    data: Iterable[Tuple[Any, ...]],
) -> Dict[str, Any]:
    """
    Convert function inputs/outputs or event data tuple to dict with names from ABI.
    """
    names = [item["name"] for item in abi]
    items = [_named_subtree(*item) for item in zip(abi, data)]

    return dict(zip(names, items))


def _named_subtree(
    abi: Union[
        ABIComponent, ABIComponentIndexed, ABIFunction, ABIEvent, Dict[TypeStr, Any]
    ],
    data: Tuple[Any, ...],
) -> Union[Dict[str, Any], Tuple[Any, ...], List[Any]]:
    abi_type = parse(collapse_if_tuple(cast(Dict[str, Any], abi)))

    if abi_type.is_array:
        item_type = abi_type.item_type.to_type_str()
        item_abi = {**abi, "type": item_type, "name": ""}
        return [_named_subtree(item_abi, item) for item in data]

    elif isinstance(abi_type, TupleType):
        if abi.get("indexed"):
            abi = cast(ABIComponentIndexed, abi)
        else:
            abi = cast(ABIComponent, abi)

        names = [item["name"] for item in abi["components"]]
        items = [_named_subtree(*item) for item in zip(abi["components"], data)]

        if len(names) == len(data):
            return dict(zip(names, items))
        else:
            raise MismatchedABI(
                f"ABI fields {names} has length {len(names)} but received "
                f"data {data} with length {len(data)}"
            )

    return data


def recursive_dict_to_namedtuple(data: Dict[str, Any]) -> Tuple[Any, ...]:
    def _dict_to_namedtuple(
        value: Union[Dict[str, Any], List[Any]],
    ) -> Union[Tuple[Any, ...], List[Any]]:
        if not isinstance(value, dict):
            return value

        keys, values = zip(*value.items()) if value else ((), ())
        return abi_decoded_namedtuple_factory(keys)(values)

    return recursive_map(_dict_to_namedtuple, data)


# -- async -- #


async def async_data_tree_map(
    async_w3: "AsyncWeb3[Any]",
    func: Callable[
        ["AsyncWeb3[Any]", TypeStr, Any], Coroutine[Any, Any, Tuple[TypeStr, Any]]
    ],
    data_tree: Any,
) -> "ABITypedData":
    """
    Map an awaitable method to every ABITypedData element in the tree.

    The awaitable method should receive three positional args:
        async_w3, abi_type, and data
    """

    async def async_map_to_typed_data(elements: T) -> Union["ABITypedData", T]:
        if isinstance(elements, ABITypedData) and elements.abi_type is not None:
            formatted = await func(async_w3, *elements)
            return ABITypedData(formatted)
        else:
            return elements

    return await async_recursive_map(async_w3, async_map_to_typed_data, data_tree)
