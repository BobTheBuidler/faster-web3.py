"""This helper file exists because we don't want to compile these classes."""
import binascii
from collections import (
    namedtuple,
)
from typing import (
    TYPE_CHECKING,
    Any,
    Callable,
    Coroutine,
    Dict,
    Iterable,
    Mapping,
    Optional,
    Tuple,
    Type,
    cast,
)

from eth_typing import (
    HexStr,
    TypeStr,
)
from faster_eth_abi import (
    encoding,
)
from faster_eth_abi.exceptions import (
    ValueOutOfBounds,
)
from faster_eth_abi.from_type_str import (
    parse_type_str,
)
from faster_eth_abi.grammar import (
    BasicType,
)
from faster_eth_abi.registry import (
    ABIRegistry,
)
from faster_eth_utils import (
    decode_hex,
    is_bytes,
    is_string,
    is_text,
    to_text,
)

from faster_web3.exceptions import (
    Web3AttributeError,
    Web3ValueError,
)
from faster_web3._utils.decorators import (
    reject_recursive_repeats,
)

if TYPE_CHECKING:
    from faster_web3 import (  # noqa: F401
        AsyncWeb3,
    )
    from faster_web3.types import (
        TReturn,
    )


class ABITypedData(namedtuple("ABITypedData", "abi_type, data")):
    """
    Marks data as having a certain ABI-type.

    >>> a1 = ABITypedData(['address', addr1])
    >>> a2 = ABITypedData(['address', addr2])
    >>> addrs = ABITypedData(['address[]', [a1, a2]])

    You can access the fields using tuple() interface, or with
    attributes:

    >>> assert a1.abi_type == a1[0]
    >>> assert a1.data == a1[1]

    Unlike a typical `namedtuple`, you initialize with a single
    positional argument that is iterable, to match the init
    interface of all other relevant collections.
    """

    def __new__(cls, iterable: Iterable[Any]) -> "ABITypedData":
        return super().__new__(cls, *iterable)


def abi_decoded_namedtuple_factory(
    fields: Tuple[Any, ...]
) -> Callable[..., Tuple[Any, ...]]:
    class ABIDecodedNamedTuple(namedtuple("ABIDecodedNamedTuple", fields, rename=True)):  # type: ignore # noqa: E501
        def __new__(self, args: Any) -> "ABIDecodedNamedTuple":
            return super().__new__(self, *args)

    return ABIDecodedNamedTuple


class TextStringEncoder(encoding.TextStringEncoder):
    @classmethod
    def validate_value(cls, value: Any) -> None:
        if is_bytes(value):
            try:
                value = to_text(value)
            except UnicodeDecodeError:
                cls.invalidate_value(
                    value,
                    msg="not decodable as unicode string",
                )

        super().validate_value(value)


class AcceptsHexStrEncoder(encoding.BaseEncoder):
    subencoder_cls: Type[encoding.BaseEncoder] = None
    is_strict: Optional[bool] = None
    is_big_endian: bool = False
    data_byte_size: Optional[int] = None
    value_bit_size: Optional[int] = None

    def __init__(
        self,
        subencoder: encoding.BaseEncoder,
        **kwargs: Dict[str, Any],
    ) -> None:
        super().__init__(**kwargs)  # type: ignore[no-untyped-call]
        self.subencoder = subencoder
        self.is_dynamic = subencoder.is_dynamic

    @classmethod
    def from_type_str(
        cls, abi_type: TypeStr, registry: ABIRegistry
    ) -> "AcceptsHexStrEncoder":
        subencoder_cls = cls.get_subencoder_class()
        # cast b/c expects BaseCoder but `from_type_string`
        # restricted to BaseEncoder subclasses
        subencoder = cast(
            encoding.BaseEncoder, subencoder_cls.from_type_str(abi_type, registry)  # type: ignore[no-untyped-call]  # noqa: E501
        )
        return cls(subencoder)

    @classmethod
    def get_subencoder_class(cls) -> Type[encoding.BaseEncoder]:
        if cls.subencoder_cls is None:
            raise Web3AttributeError(f"No subencoder class is set. {cls.__name__}")
        return cls.subencoder_cls

    def validate_value(self, value: Any) -> None:
        normalized_value = self.validate_and_normalize(value)
        self.subencoder.validate_value(normalized_value)

    def encode(self, value: Any) -> bytes:
        normalized_value = self.validate_and_normalize(value)
        return self.subencoder.encode(normalized_value)

    def validate_and_normalize(self, value: Any) -> HexStr:
        if not is_bytes(value) and not is_text(value):
            self.invalidate_value(value)

        raw_value = value
        if is_text(value):
            try:
                value = decode_hex(value)
            except binascii.Error:
                self.invalidate_value(
                    value,
                    msg=f"{value} is an invalid hex string",
                )
            else:
                if raw_value[:2] != "0x" and self.is_strict:
                    self.invalidate_value(
                        raw_value, msg="hex string must be prefixed with 0x"
                    )

        if self.is_strict and self.data_byte_size is not None:
            if len(value) > self.data_byte_size:
                self.invalidate_value(
                    value,
                    exc=ValueOutOfBounds,
                    msg=f"exceeds total byte size for bytes{self.data_byte_size} "
                    "encoding",
                )
            elif len(value) < self.data_byte_size:
                self.invalidate_value(
                    value,
                    exc=ValueOutOfBounds,
                    msg=f"less than total byte size for bytes{self.data_byte_size} "
                    "encoding",
                )

        return value


class BytesEncoder(AcceptsHexStrEncoder):
    subencoder_cls = encoding.BytesEncoder
    is_strict = False


class ExactLengthBytesEncoder(BytesEncoder):
    is_strict = True

    def validate(self) -> None:
        super().validate()  # type: ignore[no-untyped-call]
        if self.value_bit_size is None:
            raise Web3ValueError("`value_bit_size` may not be none")
        if self.data_byte_size is None:
            raise Web3ValueError("`data_byte_size` may not be none")
        if self.is_big_endian is None:
            raise Web3ValueError("`is_big_endian` may not be none")

        if self.value_bit_size % 8 != 0:
            raise Web3ValueError(
                f"Invalid value bit size: {self.value_bit_size}. "
                "Must be a multiple of 8"
            )

        if self.value_bit_size > self.data_byte_size * 8:
            raise Web3ValueError("Value byte size exceeds data size")

    @parse_type_str("bytes")  # type: ignore[no-untyped-call]
    def from_type_str(
        cls, abi_type: BasicType, registry: ABIRegistry
    ) -> "ExactLengthBytesEncoder":
        subencoder_cls = cls.get_subencoder_class()
        subencoder = subencoder_cls.from_type_str(abi_type.to_type_str(), registry)  # type: ignore[no-untyped-call]  # noqa: E501
        return cast(
            ExactLengthBytesEncoder,
            # type ignored b/c mypy thinks the __call__ is from BaseEncoder, but it's
            # from ExactLengthBytesEncoder, which does have value_bit_size and
            # data_byte_size attributes
            cls(  # type: ignore[call-arg]
                subencoder,
                value_bit_size=abi_type.sub * 8,
                data_byte_size=abi_type.sub,
            ),
        )


class ByteStringEncoder(AcceptsHexStrEncoder):
    subencoder_cls = encoding.ByteStringEncoder
    is_strict = False


class StrictByteStringEncoder(AcceptsHexStrEncoder):
    subencoder_cls = encoding.ByteStringEncoder
    is_strict = True


@reject_recursive_repeats
async def async_recursive_map(
    async_w3: "AsyncWeb3",
    func: Callable[[Any], Coroutine[Any, Any, "TReturn"]],
    data: Any,
) -> "TReturn":
    """
    Apply an awaitable method to data and any collection items inside data
    (using async_map_collection).

    Define the awaitable method so that it only applies to the type of value that you
    want it to apply to.
    """

    async def async_recurse(item: Any) -> "TReturn":
        return await async_recursive_map(async_w3, func, item)

    items_mapped = await async_map_if_collection(async_recurse, data)
    return await func(items_mapped)


async def async_map_if_collection(
    func: Callable[[Any], Coroutine[Any, Any, Any]], value: Any
) -> Any:
    """
    Apply an awaitable method to each element of a collection or value of a dictionary.
    If the value is not a collection, return it unmodified.
    """
    datatype = type(value)
    if isinstance(value, Mapping):
        return datatype({key: await func(val) for key, val in value.values()})
    if is_string(value):
        return value
    elif isinstance(value, Iterable):
        return datatype([await func(item) for item in value])
    else:
        return value
