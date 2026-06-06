import pytest
from pytest_codspeed import BenchmarkFixture

import web3._utils.formatters

import faster_web3._utils.formatters

from benchmarks.batching import run_5000, run_5000_exc
from benchmarks.web3._utils.params import (
    TX_DICT,
    LOG_ENTRY,
    BLOCK_DICT,
)
from benchmarks.web3.rpc_fixtures import (
    RPC_ERROR_REVERTED_MINUS_32000,
    RPC_NULL_RESULT,
)


# --- Helpers ---


def noop(x):
    """This is the "formatter" we will use for our benchmarks to
    eliminate any processing overhead from the benchmark results.
    """
    return x


# --- Real-World Data for Microbenchmarks ---

HEX_STR = "0x5e1d3a76fbf824220e1c5e0c2e5e7e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1"
INT_VAL = 4223868031234567890
KEY_MAP = {"from": "sender", "to": "recipient"}
ARRAY_OF_STRINGS = [
    "0xddf252ad1be2c89b69c2b068fc378daa952ba7f163c4a11628f55a4df523b3ef",
    "0x00000000000000000000000053d284357ec70ce289d6d64134dfac8e511c8a3d",
    "0x000000000000000000000000742d35cc6634c0532925a3b844bc454e4438f44e",
]
ARRAY_OF_DICTS = [LOG_ENTRY, LOG_ENTRY]
MIXED_ARRAY = ["foo", 123, {"a": 1}]
REMOVE_IF_TRUE = lambda d: d.get("remove_me", False)
DICT_WITH_REMOVAL = {**TX_DICT, "remove_me": True}
DICT_WITHOUT_REMOVAL = {**TX_DICT, "remove_me": False}
# --- Shared parameterization constants for deduplication ---
HEX_TO_INTEGER_CASES = [
    HEX_STR,
    "0x0",
    "1234",
    "0x" + "f" * 64,  # large 256-bit hex
    "-0x1a",  # negative hex
    "0XABCDEF",  # uppercase hex
    "0x123",  # odd length hex
]
HEX_TO_INTEGER_IDS = [
    "realistic_hex",
    "zero_hex",
    "no_prefix",
    "large_hex",
    "negative_hex",
    "uppercase_hex",
    "odd_length_hex",
]

APPLY_FORMATTERS_TO_ARGS_CASES = list(range(10))
APPLY_FORMATTERS_TO_ARGS_IDS = [f"{i}-args" for i in range(10)]

MAP_COLLECTION_CASES = [
    ARRAY_OF_STRINGS,
    [],
    TX_DICT,
    "string",
    [[1, 2], [3, 4]],  # nested list
    {1, 2, 3},  # set input
    (1, 2, 3),  # tuple input
    {1: "a", 2: "b"},  # dict with non-string keys
]
MAP_COLLECTION_IDS = [
    "real_topics",
    "empty_list",
    "transaction_dict",
    "string_input",
    "nested_list",
    "set_input",
    "tuple_input",
    "dict_nonstring_keys",
]

# --- Microbenchmarks ---


@pytest.mark.benchmark(group="formatters-hex_to_integer")
@pytest.mark.parametrize("hexstr", HEX_TO_INTEGER_CASES, ids=HEX_TO_INTEGER_IDS)
def test_hex_to_integer(benchmark: BenchmarkFixture, hexstr):
    benchmark(run_5000, web3._utils.formatters.hex_to_integer, hexstr)


@pytest.mark.benchmark(group="formatters-hex_to_integer")
@pytest.mark.parametrize("hexstr", HEX_TO_INTEGER_CASES, ids=HEX_TO_INTEGER_IDS)
def test_faster_hex_to_integer(benchmark: BenchmarkFixture, hexstr):
    benchmark(run_5000, faster_web3._utils.formatters.hex_to_integer, hexstr)


@pytest.mark.benchmark(group="formatters-apply_formatters_to_args")
@pytest.mark.parametrize(
    "num_args", APPLY_FORMATTERS_TO_ARGS_CASES, ids=APPLY_FORMATTERS_TO_ARGS_IDS
)
def test_apply_formatters_to_args(benchmark: BenchmarkFixture, num_args):
    formatters = [noop] * num_args
    args = [object()] * num_args
    f = web3._utils.formatters.apply_formatters_to_args(*formatters)
    benchmark(run_5000, f, args)


@pytest.mark.benchmark(group="formatters-apply_formatters_to_args")
@pytest.mark.parametrize(
    "num_args", APPLY_FORMATTERS_TO_ARGS_CASES, ids=APPLY_FORMATTERS_TO_ARGS_IDS
)
def test_faster_apply_formatters_to_args(benchmark: BenchmarkFixture, num_args):
    formatters = [noop] * num_args
    args = [object()] * num_args
    f = faster_web3._utils.formatters.apply_formatters_to_args(*formatters)
    benchmark(run_5000, f, args)


@pytest.mark.benchmark(group="formatters-map_collection")
@pytest.mark.parametrize("collection", MAP_COLLECTION_CASES, ids=MAP_COLLECTION_IDS)
def test_map_collection(benchmark: BenchmarkFixture, collection):
    benchmark(run_5000, web3._utils.formatters.map_collection, noop, collection)


@pytest.mark.benchmark(group="formatters-map_collection")
@pytest.mark.parametrize("collection", MAP_COLLECTION_CASES, ids=MAP_COLLECTION_IDS)
def test_faster_map_collection(benchmark: BenchmarkFixture, collection):
    benchmark(run_5000, faster_web3._utils.formatters.map_collection, noop, collection)


# --- The rest of the original benchmarks remain unchanged ---


@pytest.mark.benchmark(group="formatters-recursive_map")
@pytest.mark.parametrize(
    "data",
    [
        [ARRAY_OF_STRINGS, ARRAY_OF_STRINGS],
        [BLOCK_DICT, BLOCK_DICT],
        [],
    ],
    ids=["nested_topics", "nested_blocks", "empty_nested"],
)
def test_recursive_map(benchmark: BenchmarkFixture, data):
    benchmark(run_5000, web3._utils.formatters.recursive_map, noop, data)


@pytest.mark.benchmark(group="formatters-recursive_map")
@pytest.mark.parametrize(
    "data",
    [
        [ARRAY_OF_STRINGS, ARRAY_OF_STRINGS],
        [BLOCK_DICT, BLOCK_DICT],
        [],
    ],
    ids=["nested_topics", "nested_blocks", "empty_nested"],
)
def test_faster_recursive_map(benchmark: BenchmarkFixture, data):
    benchmark(run_5000, faster_web3._utils.formatters.recursive_map, noop, data)


@pytest.mark.benchmark(group="formatters-static_return")
def test_static_return(benchmark: BenchmarkFixture):
    f = web3._utils.formatters.static_return(TX_DICT)
    benchmark(run_5000, f)


@pytest.mark.benchmark(group="formatters-static_return")
def test_faster_static_return(benchmark: BenchmarkFixture):
    f = faster_web3._utils.formatters.static_return(TX_DICT)
    benchmark(run_5000, f)


@pytest.mark.benchmark(group="formatters-static_result")
def test_static_result(benchmark: BenchmarkFixture):
    f = web3._utils.formatters.static_result(TX_DICT)
    benchmark(run_5000, f)


@pytest.mark.benchmark(group="formatters-static_result")
def test_faster_static_result(benchmark: BenchmarkFixture):
    f = faster_web3._utils.formatters.static_result(TX_DICT)
    benchmark(run_5000, f)


@pytest.mark.benchmark(group="formatters-apply_key_map")
@pytest.mark.parametrize(
    "input_dict",
    [
        TX_DICT,
        {"foo": 1},
        {},
    ],
    ids=["transaction_dict", "no_keys_to_remap", "empty_dict"],
)
def test_apply_key_map(benchmark: BenchmarkFixture, input_dict):
    f = web3._utils.formatters.apply_key_map(KEY_MAP)
    benchmark(run_5000, f, input_dict)


@pytest.mark.benchmark(group="formatters-apply_key_map")
@pytest.mark.parametrize(
    "input_dict",
    [
        TX_DICT,
        {"foo": 1},
        {},
    ],
    ids=["transaction_dict", "no_keys_to_remap", "empty_dict"],
)
def test_faster_apply_key_map(benchmark: BenchmarkFixture, input_dict):
    f = faster_web3._utils.formatters.apply_key_map(KEY_MAP)
    benchmark(run_5000, f, input_dict)


@pytest.mark.benchmark(group="formatters-is_array_of_strings")
@pytest.mark.parametrize(
    "arr",
    [
        ARRAY_OF_STRINGS,
        LOG_ENTRY["topics"],
        [],
        ["foo", 123],
    ],
    ids=["real_topics", "log_topics", "empty_list", "mixed_array"],
)
def test_is_array_of_strings(benchmark: BenchmarkFixture, arr):
    benchmark(run_5000, web3._utils.formatters.is_array_of_strings, arr)


@pytest.mark.benchmark(group="formatters-is_array_of_strings")
@pytest.mark.parametrize(
    "arr",
    [
        ARRAY_OF_STRINGS,
        LOG_ENTRY["topics"],
        [],
        ["foo", 123],
    ],
    ids=["real_topics", "log_topics", "empty_list", "mixed_array"],
)
def test_faster_is_array_of_strings(benchmark: BenchmarkFixture, arr):
    benchmark(run_5000, faster_web3._utils.formatters.is_array_of_strings, arr)


@pytest.mark.benchmark(group="formatters-is_array_of_dicts")
@pytest.mark.parametrize(
    "arr",
    [
        ARRAY_OF_DICTS,
        BLOCK_DICT["logs"],
        [],
        [{"a": 1}, "foo"],
    ],
    ids=["log_entries", "block_logs", "empty_list", "mixed_array"],
)
def test_is_array_of_dicts(benchmark: BenchmarkFixture, arr):
    benchmark(run_5000, web3._utils.formatters.is_array_of_dicts, arr)


@pytest.mark.benchmark(group="formatters-is_array_of_dicts")
@pytest.mark.parametrize(
    "arr",
    [
        ARRAY_OF_DICTS,
        BLOCK_DICT["logs"],
        [],
        [{"a": 1}, "foo"],
    ],
    ids=["log_entries", "block_logs", "empty_list", "mixed_array"],
)
def test_faster_is_array_of_dicts(benchmark: BenchmarkFixture, arr):
    benchmark(run_5000, faster_web3._utils.formatters.is_array_of_dicts, arr)


@pytest.mark.benchmark(group="formatters-remove_key_if")
@pytest.mark.parametrize(
    "d",
    [
        DICT_WITH_REMOVAL,
        DICT_WITHOUT_REMOVAL,
        {"foo": 1},
        {},
    ],
    ids=["dict_with_removal", "dict_without_removal", "no_remove_key", "empty_dict"],
)
def test_remove_key_if(benchmark: BenchmarkFixture, d):
    f = web3._utils.formatters.remove_key_if("remove_me", REMOVE_IF_TRUE)
    benchmark(run_5000, f, d)


@pytest.mark.benchmark(group="formatters-remove_key_if")
@pytest.mark.parametrize(
    "d",
    [
        DICT_WITH_REMOVAL,
        DICT_WITHOUT_REMOVAL,
        {"foo": 1},
        {},
    ],
    ids=["dict_with_removal", "dict_without_removal", "no_remove_key", "empty_dict"],
)
def test_faster_remove_key_if(benchmark: BenchmarkFixture, d):
    f = faster_web3._utils.formatters.remove_key_if("remove_me", REMOVE_IF_TRUE)
    benchmark(run_5000, f, d)


@pytest.mark.benchmark(group="formatters-apply_error_formatters")
@pytest.mark.parametrize(
    "response",
    [
        RPC_ERROR_REVERTED_MINUS_32000,
        {},
    ],
    ids=["real_error", "empty_response"],
)
def test_apply_error_formatters(benchmark: BenchmarkFixture, response):
    benchmark(run_5000, web3._utils.formatters.apply_error_formatters, None, response)


@pytest.mark.benchmark(group="formatters-apply_error_formatters")
@pytest.mark.parametrize(
    "response",
    [
        RPC_ERROR_REVERTED_MINUS_32000,
        {},
    ],
    ids=["real_error", "empty_response"],
)
def test_faster_apply_error_formatters(benchmark: BenchmarkFixture, response):
    benchmark(
        run_5000, faster_web3._utils.formatters.apply_error_formatters, None, response
    )


@pytest.mark.benchmark(group="formatters-apply_null_result_formatters")
@pytest.mark.parametrize(
    "response",
    [
        RPC_NULL_RESULT,
        {},
    ],
    ids=["null_result", "empty_response"],
)
def test_apply_null_result_formatters(benchmark: BenchmarkFixture, response):
    benchmark(
        run_5000, web3._utils.formatters.apply_null_result_formatters, None, response
    )


@pytest.mark.benchmark(group="formatters-apply_null_result_formatters")
@pytest.mark.parametrize(
    "response",
    [
        RPC_NULL_RESULT,
        {},
    ],
    ids=["null_result", "empty_response"],
)
def test_faster_apply_null_result_formatters(benchmark: BenchmarkFixture, response):
    benchmark(
        run_5000,
        faster_web3._utils.formatters.apply_null_result_formatters,
        None,
        response,
    )
