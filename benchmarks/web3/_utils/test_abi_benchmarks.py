import pytest
from pytest_codspeed import BenchmarkFixture

import web3._utils.abi as web3_abi
import faster_web3._utils.abi as faster_abi

# --- Helpers ---
def run_100(func, *args, **kwargs):
    for _ in range(100):
        func(*args, **kwargs)

def run_500(func, *args, **kwargs):
    for _ in range(500):
        func(*args, **kwargs)

# --- Type Checkers ---

abi_type_cases = [
    "bool",
    "uint256",
    "int256",
    "address",
    "bytes32",
    "string",
    "uint8[]",
    "MyEnum",
    "tuple",
    "tuple[2]",
    "bytes",
    "bytes33",
    "",
    "notatype",
]
abi_type_ids = [
    "bool", "uint256", "int256", "address", "bytes32", "string", "array", "enum",
    "tuple", "tuple-array", "bytes", "bytes33", "empty", "invalid"
]

@pytest.mark.benchmark(group="is_bool_type")
@pytest.mark.parametrize("abi_type", abi_type_cases, ids=abi_type_ids)
def test_web3_is_bool_type(benchmark: BenchmarkFixture, abi_type):
    benchmark(run_100, web3_abi.is_bool_type, abi_type)

@pytest.mark.benchmark(group="is_bool_type")
@pytest.mark.parametrize("abi_type", abi_type_cases, ids=abi_type_ids)
def test_faster_is_bool_type(benchmark: BenchmarkFixture, abi_type):
    benchmark(run_100, faster_abi.is_bool_type, abi_type)

@pytest.mark.benchmark(group="is_uint_type")
@pytest.mark.parametrize("abi_type", abi_type_cases, ids=abi_type_ids)
def test_web3_is_uint_type(benchmark: BenchmarkFixture, abi_type):
    benchmark(run_100, web3_abi.is_uint_type, abi_type)

@pytest.mark.benchmark(group="is_uint_type")
@pytest.mark.parametrize("abi_type", abi_type_cases, ids=abi_type_ids)
def test_faster_is_uint_type(benchmark: BenchmarkFixture, abi_type):
    benchmark(run_100, faster_abi.is_uint_type, abi_type)

@pytest.mark.benchmark(group="is_int_type")
@pytest.mark.parametrize("abi_type", abi_type_cases, ids=abi_type_ids)
def test_web3_is_int_type(benchmark: BenchmarkFixture, abi_type):
    benchmark(run_100, web3_abi.is_int_type, abi_type)

@pytest.mark.benchmark(group="is_int_type")
@pytest.mark.parametrize("abi_type", abi_type_cases, ids=abi_type_ids)
def test_faster_is_int_type(benchmark: BenchmarkFixture, abi_type):
    benchmark(run_100, faster_abi.is_int_type, abi_type)

@pytest.mark.benchmark(group="is_address_type")
@pytest.mark.parametrize("abi_type", abi_type_cases, ids=abi_type_ids)
def test_web3_is_address_type(benchmark: BenchmarkFixture, abi_type):
    benchmark(run_100, web3_abi.is_address_type, abi_type)

@pytest.mark.benchmark(group="is_address_type")
@pytest.mark.parametrize("abi_type", abi_type_cases, ids=abi_type_ids)
def test_faster_is_address_type(benchmark: BenchmarkFixture, abi_type):
    benchmark(run_100, faster_abi.is_address_type, abi_type)

@pytest.mark.benchmark(group="is_bytes_type")
@pytest.mark.parametrize("abi_type", abi_type_cases, ids=abi_type_ids)
def test_web3_is_bytes_type(benchmark: BenchmarkFixture, abi_type):
    benchmark(run_100, web3_abi.is_bytes_type, abi_type)

@pytest.mark.benchmark(group="is_bytes_type")
@pytest.mark.parametrize("abi_type", abi_type_cases, ids=abi_type_ids)
def test_faster_is_bytes_type(benchmark: BenchmarkFixture, abi_type):
    benchmark(run_100, faster_abi.is_bytes_type, abi_type)

@pytest.mark.benchmark(group="is_string_type")
@pytest.mark.parametrize("abi_type", abi_type_cases, ids=abi_type_ids)
def test_web3_is_string_type(benchmark: BenchmarkFixture, abi_type):
    benchmark(run_100, web3_abi.is_string_type, abi_type)

@pytest.mark.benchmark(group="is_string_type")
@pytest.mark.parametrize("abi_type", abi_type_cases, ids=abi_type_ids)
def test_faster_is_string_type(benchmark: BenchmarkFixture, abi_type):
    benchmark(run_100, faster_abi.is_string_type, abi_type)

@pytest.mark.benchmark(group="is_array_type")
@pytest.mark.parametrize("abi_type", abi_type_cases, ids=abi_type_ids)
def test_web3_is_array_type(benchmark: BenchmarkFixture, abi_type):
    benchmark(run_100, web3_abi.is_array_type, abi_type)

@pytest.mark.benchmark(group="is_array_type")
@pytest.mark.parametrize("abi_type", abi_type_cases, ids=abi_type_ids)
def test_faster_is_array_type(benchmark: BenchmarkFixture, abi_type):
    benchmark(run_100, faster_abi.is_array_type, abi_type)

@pytest.mark.benchmark(group="is_probably_enum")
@pytest.mark.parametrize("abi_type", [
    "MyEnum",
    "MyLib.MyEnum",
    "uint256",
    "address",
    "MyLib.",
    "",
], ids=["enum", "lib-enum", "uint256", "address", "lib-dot", "empty"])
def test_web3_is_probably_enum(benchmark: BenchmarkFixture, abi_type):
    benchmark(run_100, web3_abi.is_probably_enum, abi_type)

@pytest.mark.benchmark(group="is_probably_enum")
@pytest.mark.parametrize("abi_type", [
    "MyEnum",
    "MyLib.MyEnum",
    "uint256",
    "address",
    "MyLib.",
    "",
], ids=["enum", "lib-enum", "uint256", "address", "lib-dot", "empty"])
def test_faster_is_probably_enum(benchmark: BenchmarkFixture, abi_type):
    benchmark(run_100, faster_abi.is_probably_enum, abi_type)

@pytest.mark.benchmark(group="is_recognized_type")
@pytest.mark.parametrize("abi_type", abi_type_cases, ids=abi_type_ids)
def test_web3_is_recognized_type(benchmark: BenchmarkFixture, abi_type):
    benchmark(run_100, web3_abi.is_recognized_type, abi_type)

@pytest.mark.benchmark(group="is_recognized_type")
@pytest.mark.parametrize("abi_type", abi_type_cases, ids=abi_type_ids)
def test_faster_is_recognized_type(benchmark: BenchmarkFixture, abi_type):
    benchmark(run_100, faster_abi.is_recognized_type, abi_type)

# --- Type Parsing ---

@pytest.mark.benchmark(group="sub_type_of_array_type")
@pytest.mark.parametrize("abi_type,expected", [
    ("uint256[]", "uint256"),
    ("address[10][5]", "address[10]"),
], ids=["simple", "nested"])
def test_web3_sub_type_of_array_type(benchmark: BenchmarkFixture, abi_type, expected):
    benchmark(run_100, web3_abi.sub_type_of_array_type, abi_type)

@pytest.mark.benchmark(group="sub_type_of_array_type")
@pytest.mark.parametrize("abi_type,expected", [
    ("uint256[]", "uint256"),
    ("address[10][5]", "address[10]"),
], ids=["simple", "nested"])
def test_faster_sub_type_of_array_type(benchmark: BenchmarkFixture, abi_type, expected):
    benchmark(run_100, faster_abi.sub_type_of_array_type, abi_type)

@pytest.mark.benchmark(group="length_of_array_type")
@pytest.mark.parametrize("abi_type,expected", [
    ("uint256[5]", 5),
    ("address[10][5]", 5),
    ("uint256[]", None),
], ids=["fixed", "nested", "dynamic"])
def test_web3_length_of_array_type(benchmark: BenchmarkFixture, abi_type, expected):
    benchmark(run_100, web3_abi.length_of_array_type, abi_type)

@pytest.mark.benchmark(group="length_of_array_type")
@pytest.mark.parametrize("abi_type,expected", [
    ("uint256[5]", 5),
    ("address[10][5]", 5),
    ("uint256[]", None),
], ids=["fixed", "nested", "dynamic"])
def test_faster_length_of_array_type(benchmark: BenchmarkFixture, abi_type, expected):
    benchmark(run_100, faster_abi.length_of_array_type, abi_type)

@pytest.mark.benchmark(group="get_tuple_type_str_parts")
@pytest.mark.parametrize("s,expected", [
    ("tuple", ("tuple", None)),
    ("tuple[2]", ("tuple", "[2]")),
    ("tuple[2][3]", ("tuple", "[2][3]")),
    ("uint256", None),
], ids=["plain", "one-dim", "two-dim", "not-tuple"])
def test_web3_get_tuple_type_str_parts(benchmark: BenchmarkFixture, s, expected):
    benchmark(run_100, web3_abi.get_tuple_type_str_parts, s)

@pytest.mark.benchmark(group="get_tuple_type_str_parts")
@pytest.mark.parametrize("s,expected", [
    ("tuple", ("tuple", None)),
    ("tuple[2]", ("tuple", "[2]")),
    ("tuple[2][3]", ("tuple", "[2][3]")),
    ("uint256", None),
], ids=["plain", "one-dim", "two-dim", "not-tuple"])
def test_faster_get_tuple_type_str_parts(benchmark: BenchmarkFixture, s, expected):
    benchmark(run_100, faster_abi.get_tuple_type_str_parts, s)

@pytest.mark.benchmark(group="get_name_from_abi_element_identifier")
@pytest.mark.parametrize("identifier,expected", [
    ("transfer(address,uint256)", "transfer"),
    ("fallback", "fallback"),
    ("receive", "receive"),
    ("myFunc(uint256)", "myFunc"),
], ids=["func", "fallback", "receive", "custom"])
def test_web3_get_name_from_abi_element_identifier(benchmark: BenchmarkFixture, identifier, expected):
    benchmark(run_100, web3_abi.get_name_from_abi_element_identifier, identifier)

@pytest.mark.benchmark(group="get_name_from_abi_element_identifier")
@pytest.mark.parametrize("identifier,expected", [
    ("transfer(address,uint256)", "transfer"),
    ("fallback", "fallback"),
    ("receive", "receive"),
    ("myFunc(uint256)", "myFunc"),
], ids=["func", "fallback", "receive", "custom"])
def test_faster_get_name_from_abi_element_identifier(benchmark: BenchmarkFixture, identifier, expected):
    benchmark(run_100, faster_abi.get_name_from_abi_element_identifier, identifier)

@pytest.mark.benchmark(group="get_abi_element_signature")
@pytest.mark.parametrize("identifier,arg_types,expected", [
    ("transfer", ["address", "uint256"], "transfer(address,uint256)"),
    ("fallback", [], "fallback"),
    ("receive", [], "receive"),
    ("myFunc", ["uint256"], "myFunc(uint256)"),
], ids=["transfer", "fallback", "receive", "custom"])
def test_web3_get_abi_element_signature(benchmark: BenchmarkFixture, identifier, arg_types, expected):
    benchmark(run_100, web3_abi.get_abi_element_signature, identifier, arg_types)

@pytest.mark.benchmark(group="get_abi_element_signature")
@pytest.mark.parametrize("identifier,arg_types,expected", [
    ("transfer", ["address", "uint256"], "transfer(address,uint256)"),
    ("fallback", [], "fallback"),
    ("receive", [], "receive"),
    ("myFunc", ["uint256"], "myFunc(uint256)"),
], ids=["transfer", "fallback", "receive", "custom"])
def test_faster_get_abi_element_signature(benchmark: BenchmarkFixture, identifier, arg_types, expected):
    benchmark(run_100, faster_abi.get_abi_element_signature, identifier, arg_types)

# --- ABI Filtering ---

example_abi = [
    {"type": "function", "name": "foo", "inputs": [{"name": "a", "type": "uint256"}]},
    {"type": "event", "name": "Bar", "inputs": [{"name": "b", "type": "address", "indexed": True}]},
    {"type": "constructor", "inputs": [{"name": "c", "type": "string"}]},
    {"type": "fallback"},
    {"type": "receive"},
]

@pytest.mark.benchmark(group="filter_by_types")
@pytest.mark.parametrize("types,expected_count", [
    (["function"], 1),
    (["event"], 1),
    (["constructor"], 1),
    (["fallback"], 1),
    (["receive"], 1),
    (["function", "event"], 2),
    (["notatype"], 0),
], ids=["function", "event", "constructor", "fallback", "receive", "func+event", "none"])
def test_web3_filter_by_types(benchmark: BenchmarkFixture, types, expected_count):
    def call():
        res = web3_abi.filter_by_types(types, example_abi)
        assert len(res) == expected_count
    benchmark(run_100, call)

@pytest.mark.benchmark(group="filter_by_types")
@pytest.mark.parametrize("types,expected_count", [
    (["function"], 1),
    (["event"], 1),
    (["constructor"], 1),
    (["fallback"], 1),
    (["receive"], 1),
    (["function", "event"], 2),
    (["notatype"], 0),
], ids=["function", "event", "constructor", "fallback", "receive", "func+event", "none"])
def test_faster_filter_by_types(benchmark: BenchmarkFixture, types, expected_count):
    def call():
        res = faster_abi.filter_by_types(types, example_abi)
        assert len(res) == expected_count
    benchmark(run_100, call)

@pytest.mark.benchmark(group="filter_by_argument_name")
@pytest.mark.parametrize("arg_names,expected_count", [
    (["a"], 1),
    (["b"], 1),
    (["c"], 1),
    (["notfound"], 0),
    (["a", "b"], 0),
], ids=["a", "b", "c", "notfound", "a+b"])
def test_web3_filter_by_argument_name(benchmark: BenchmarkFixture, arg_names, expected_count):
    def call():
        res = web3_abi.filter_by_argument_name(arg_names, example_abi)
        assert len(res) == expected_count
    benchmark(run_100, call)

@pytest.mark.benchmark(group="filter_by_argument_name")
@pytest.mark.parametrize("arg_names,expected_count", [
    (["a"], 1),
    (["b"], 1),
    (["c"], 1),
    (["notfound"], 0),
    (["a", "b"], 0),
], ids=["a", "b", "c", "notfound", "a+b"])
def test_faster_filter_by_argument_name(benchmark: BenchmarkFixture, arg_names, expected_count):
    def call():
        res = faster_abi.filter_by_argument_name(arg_names, example_abi)
        assert len(res) == expected_count
    benchmark(run_100, call)

@pytest.mark.benchmark(group="filter_by_argument_type")
@pytest.mark.parametrize("arg_types,expected_count", [
    (["uint256"], 1),
    (["address"], 1),
    (["string"], 1),
    (["notatype"], 0),
    (["uint256", "address"], 0),
], ids=["uint256", "address", "string", "notatype", "uint+address"])
def test_web3_filter_by_argument_type(benchmark: BenchmarkFixture, arg_types, expected_count):
    def call():
        res = web3_abi.filter_by_argument_type(arg_types, example_abi)
        assert len(res) == expected_count
    benchmark(run_100, call)

@pytest.mark.benchmark(group="filter_by_argument_type")
@pytest.mark.parametrize("arg_types,expected_count", [
    (["uint256"], 1),
    (["address"], 1),
    (["string"], 1),
    (["notatype"], 0),
    (["uint256", "address"], 0),
], ids=["uint256", "address", "string", "notatype", "uint+address"])
def test_faster_filter_by_argument_type(benchmark: BenchmarkFixture, arg_types, expected_count):
    def call():
        res = faster_abi.filter_by_argument_type(arg_types, example_abi)
        assert len(res) == expected_count
    benchmark(run_100, call)

@pytest.mark.benchmark(group="fallback_func_abi_exists")
def test_web3_fallback_func_abi_exists(benchmark: BenchmarkFixture):
    benchmark(run_100, web3_abi.fallback_func_abi_exists, example_abi)

@pytest.mark.benchmark(group="fallback_func_abi_exists")
def test_faster_fallback_func_abi_exists(benchmark: BenchmarkFixture):
    benchmark(run_100, faster_abi.fallback_func_abi_exists, example_abi)

@pytest.mark.benchmark(group="receive_func_abi_exists")
def test_web3_receive_func_abi_exists(benchmark: BenchmarkFixture):
    benchmark(run_100, web3_abi.receive_func_abi_exists, example_abi)

@pytest.mark.benchmark(group="receive_func_abi_exists")
def test_faster_receive_func_abi_exists(benchmark: BenchmarkFixture):
    benchmark(run_100, faster_abi.receive_func_abi_exists, example_abi)

@pytest.mark.benchmark(group="find_constructor_abi_element_by_type")
def test_web3_find_constructor_abi_element_by_type(benchmark: BenchmarkFixture):
    benchmark(run_100, web3_abi.find_constructor_abi_element_by_type, example_abi)

@pytest.mark.benchmark(group="find_constructor_abi_element_by_type")
def test_faster_find_constructor_abi_element_by_type(benchmark: BenchmarkFixture):
    benchmark(run_100, faster_abi.find_constructor_abi_element_by_type, example_abi)

# --- Data Normalization/Tree Utilities ---

event_abi = {
    "name": "TestEvent",
    "type": "event",
    "inputs": [
        {"name": "a", "type": "uint256", "indexed": False},
        {"name": "b", "type": "address", "indexed": True},
        {"name": "c", "type": "MyEnum", "indexed": False},
    ]
}
event_inputs = event_abi["inputs"]

@pytest.mark.benchmark(group="normalize_event_input_types")
def test_web3_normalize_event_input_types(benchmark: BenchmarkFixture):
    benchmark(run_100, web3_abi.normalize_event_input_types, event_inputs)

@pytest.mark.benchmark(group="normalize_event_input_types")
def test_faster_normalize_event_input_types(benchmark: BenchmarkFixture):
    benchmark(run_100, faster_abi.normalize_event_input_types, event_inputs)

# map_abi_data, abi_data_tree, data_tree_map, strip_abi_types are higher-order utilities.
# We'll benchmark a typical use-case: normalizing a tuple of values.

@pytest.mark.benchmark(group="map_abi_data")
def test_web3_map_abi_data(benchmark: BenchmarkFixture):
    types = ["uint256", "address"]
    data = [123, "0x0000000000000000000000000000000000000000"]
    normalizers = [lambda typ, val: (typ, val)]
    fn = web3_abi.map_abi_data(normalizers, types, data)
    benchmark(run_100, lambda: fn)

@pytest.mark.benchmark(group="map_abi_data")
def test_faster_map_abi_data(benchmark: BenchmarkFixture):
    types = ["uint256", "address"]
    data = [123, "0x0000000000000000000000000000000000000000"]
    normalizers = [lambda typ, val: (typ, val)]
    fn = faster_abi.map_abi_data(normalizers, types, data)
    benchmark(run_100, lambda: fn)

@pytest.mark.benchmark(group="abi_data_tree")
def test_web3_abi_data_tree(benchmark: BenchmarkFixture):
    types = ["uint256", "address"]
    data = [123, "0x0000000000000000000000000000000000000000"]
    benchmark(run_100, web3_abi.abi_data_tree(types, data))

@pytest.mark.benchmark(group="abi_data_tree")
def test_faster_abi_data_tree(benchmark: BenchmarkFixture):
    types = ["uint256", "address"]
    data = [123, "0x0000000000000000000000000000000000000000"]
    benchmark(run_100, faster_abi.abi_data_tree(types, data))

@pytest.mark.benchmark(group="strip_abi_types")
def test_web3_strip_abi_types(benchmark: BenchmarkFixture):
    types = ["uint256", "address"]
    data = [123, "0x0000000000000000000000000000000000000000"]
    tree = web3_abi.abi_data_tree(types, data)
    benchmark(run_100, web3_abi.strip_abi_types, tree)

@pytest.mark.benchmark(group="strip_abi_types")
def test_faster_strip_abi_types(benchmark: BenchmarkFixture):
    types = ["uint256", "address"]
    data = [123, "0x0000000000000000000000000000000000000000"]
    tree = faster_abi.abi_data_tree(types, data)
    benchmark(run_100, faster_abi.strip_abi_types, tree)

# --- End of Benchmarks ---
