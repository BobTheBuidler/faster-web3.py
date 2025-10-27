import pytest
from pytest_codspeed import BenchmarkFixture

try:
    import web3._utils.validation
    import web3.exceptions
except ImportError:
    pass

import faster_web3._utils.validation
import faster_web3.exceptions
from eth_utils.abi import function_abi_to_4byte_selector
from eth_utils.hexadecimal import encode_hex

from benchmarks.web3._utils import abis


# --- Helpers ---
def run_1000(func, *args, **kwargs):
    for _ in range(1000):
        func(*args, **kwargs)


def run_1000_exc(exc, func, *args, **kwargs):
    for _ in range(1000):
        try:
            func(*args, **kwargs)
        except exc:
            pass


# Real selector collision example: two functions with the same signature
COLLISION_ABI = [
    {"type": "function", "name": "foo", "inputs": [{"type": "uint256"}]},
    {"type": "function", "name": "bar", "inputs": [{"type": "uint256"}]},
]
selector = encode_hex(function_abi_to_4byte_selector(COLLISION_ABI[0]))
FAKE_DUPLICATES = {selector: [COLLISION_ABI[0], COLLISION_ABI[1]]}

VALID_TYPES = ["uint256", "address", "bool", "bytes", "string"]
VALID_ADDRESS = "0x1234567890123456789012345678901234567890"
VALID_VALUES = [123, VALID_ADDRESS, True, b"bytes", "hello"]
VALID_ENS = "alice.eth"
ONE_VAL_ARGS = (1, None, None)
ONE_VAL_KWARGS = {"a": None, "b": 2, "c": None}
VALID_SUBSCRIPTION_RESPONSE = {
    "jsonrpc": "2.0",
    "method": "eth_subscription",
    "params": {
        "subscription": "0x1234567890abcdef1234567890abcdef1234567890abcdef1234567890abcdef",
        "result": {"foo": "bar"},
    },
}
BAD_RESPONSE = {"jsonrpc": "2.0", "id": 1, "result": None}
VALID_RPC_RESPONSE = {"jsonrpc": "2.0", "id": 1, "result": 42}
ERROR_RPC_RESPONSE = {
    "jsonrpc": "2.0",
    "id": 1,
    "error": {"code": -32601, "message": "Method not found"},
}

# --- Microbenchmarks ---


@pytest.mark.benchmark(group="validation-validate_abi")
@pytest.mark.parametrize("abi", abis.ABIS)
def test_validate_abi(benchmark: BenchmarkFixture, abi):
    benchmark(run_1000, web3._utils.validation.validate_abi, abi)


@pytest.mark.benchmark(group="validation-validate_abi")
@pytest.mark.parametrize("abi", abis.ABIS)
def test_faster_validate_abi(benchmark: BenchmarkFixture, abi):
    benchmark(run_1000, faster_web3._utils.validation.validate_abi, abi)


@pytest.mark.benchmark(group="validation-_prepare_selector_collision_msg")
def test_prepare_selector_collision_msg(benchmark: BenchmarkFixture):
    benchmark(
        run_1000,
        web3._utils.validation._prepare_selector_collision_msg,
        FAKE_DUPLICATES,
    )


@pytest.mark.benchmark(group="validation-_prepare_selector_collision_msg")
def test_faster_prepare_selector_collision_msg(benchmark: BenchmarkFixture):
    benchmark(
        run_1000,
        faster_web3._utils.validation._prepare_selector_collision_msg,
        FAKE_DUPLICATES,
    )


@pytest.mark.benchmark(group="validation-validate_abi_type")
@pytest.mark.parametrize("abi_type", VALID_TYPES)
def test_validate_abi_type(benchmark: BenchmarkFixture, abi_type):
    benchmark(run_1000, web3._utils.validation.validate_abi_type, abi_type)


@pytest.mark.benchmark(group="validation-validate_abi_type")
@pytest.mark.parametrize("abi_type", VALID_TYPES)
def test_faster_validate_abi_type(benchmark: BenchmarkFixture, abi_type):
    benchmark(run_1000, faster_web3._utils.validation.validate_abi_type, abi_type)


@pytest.mark.benchmark(group="validation-validate_abi_value")
@pytest.mark.parametrize("abi_type,value", zip(VALID_TYPES, VALID_VALUES))
def test_validate_abi_value(benchmark: BenchmarkFixture, abi_type, value):
    benchmark(run_1000, web3._utils.validation.validate_abi_value, abi_type, value)


@pytest.mark.benchmark(group="validation-validate_abi_value")
@pytest.mark.parametrize("abi_type,value", zip(VALID_TYPES, VALID_VALUES))
def test_faster_validate_abi_value(benchmark: BenchmarkFixture, abi_type, value):
    benchmark(
        run_1000, faster_web3._utils.validation.validate_abi_value, abi_type, value
    )


@pytest.mark.benchmark(group="validation-is_not_address_string")
@pytest.mark.parametrize(
    "val", [VALID_ENS, "notanaddress", "0x123", b"bytes", VALID_ADDRESS]
)
def test_is_not_address_string(benchmark: BenchmarkFixture, val):
    benchmark(run_1000, web3._utils.validation.is_not_address_string, val)


@pytest.mark.benchmark(group="validation-is_not_address_string")
@pytest.mark.parametrize(
    "val", [VALID_ENS, "notanaddress", "0x123", b"bytes", VALID_ADDRESS]
)
def test_faster_is_not_address_string(benchmark: BenchmarkFixture, val):
    benchmark(run_1000, faster_web3._utils.validation.is_not_address_string, val)


@pytest.mark.benchmark(group="validation-validate_address")
@pytest.mark.parametrize("val", [VALID_ADDRESS, VALID_ENS])
def test_validate_address(benchmark: BenchmarkFixture, val):
    benchmark(run_1000, web3._utils.validation.validate_address, val)


@pytest.mark.benchmark(group="validation-validate_address")
@pytest.mark.parametrize("val", [VALID_ADDRESS, VALID_ENS])
def test_faster_validate_address(benchmark: BenchmarkFixture, val):
    benchmark(run_1000, faster_web3._utils.validation.validate_address, val)


@pytest.mark.benchmark(group="validation-has_one_val")
def test_has_one_val(benchmark: BenchmarkFixture):
    benchmark(run_1000, web3._utils.validation.has_one_val, *ONE_VAL_ARGS)


@pytest.mark.benchmark(group="validation-has_one_val")
def test_faster_has_one_val(benchmark: BenchmarkFixture):
    benchmark(run_1000, faster_web3._utils.validation.has_one_val, *ONE_VAL_ARGS)


@pytest.mark.benchmark(group="validation-assert_one_val")
def test_assert_one_val(benchmark: BenchmarkFixture):
    benchmark(run_1000, web3._utils.validation.assert_one_val, *ONE_VAL_ARGS)


@pytest.mark.benchmark(group="validation-assert_one_val")
def test_faster_assert_one_val(benchmark: BenchmarkFixture):
    benchmark(run_1000, faster_web3._utils.validation.assert_one_val, *ONE_VAL_ARGS)


@pytest.mark.benchmark(group="validation-_validate_subscription_fields")
def test_validate_subscription_fields(benchmark: BenchmarkFixture):
    benchmark(
        run_1000,
        web3._utils.validation._validate_subscription_fields,
        VALID_SUBSCRIPTION_RESPONSE,
    )


@pytest.mark.benchmark(group="validation-_validate_subscription_fields")
def test_faster_validate_subscription_fields(benchmark: BenchmarkFixture):
    benchmark(
        run_1000,
        faster_web3._utils.validation._validate_subscription_fields,
        VALID_SUBSCRIPTION_RESPONSE,
    )


@pytest.mark.benchmark(group="validation-_raise_bad_response_format")
def test_raise_bad_response_format(benchmark: BenchmarkFixture):
    benchmark(
        run_1000_exc,
        web3.exceptions.BadResponseFormat,
        web3._utils.validation._raise_bad_response_format,
        BAD_RESPONSE,
    )


@pytest.mark.benchmark(group="validation-_raise_bad_response_format")
def test_faster_raise_bad_response_format(benchmark: BenchmarkFixture):
    benchmark(
        run_1000_exc,
        faster_web3.exceptions.BadResponseFormat,
        faster_web3._utils.validation._raise_bad_response_format,
        BAD_RESPONSE,
    )


@pytest.mark.benchmark(group="validation-raise_error_for_batch_response")
def test_raise_error_for_batch_response(benchmark: BenchmarkFixture):
    benchmark(
        run_1000_exc,
        web3.exceptions.Web3RPCError,
        web3._utils.validation.raise_error_for_batch_response,
        ERROR_RPC_RESPONSE,
    )


@pytest.mark.benchmark(group="validation-raise_error_for_batch_response")
def test_faster_raise_error_for_batch_response(benchmark: BenchmarkFixture):
    benchmark(
        run_1000_exc,
        faster_web3.exceptions.Web3RPCError,
        faster_web3._utils.validation.raise_error_for_batch_response,
        ERROR_RPC_RESPONSE,
    )


@pytest.mark.benchmark(group="validation-validate_rpc_response_and_raise_if_error")
def test_validate_rpc_response_and_raise_if_error(benchmark: BenchmarkFixture):
    benchmark(
        run_1000,
        web3._utils.validation.validate_rpc_response_and_raise_if_error,
        VALID_RPC_RESPONSE,
        None,
    )


@pytest.mark.benchmark(group="validation-validate_rpc_response_and_raise_if_error")
def test_faster_validate_rpc_response_and_raise_if_error(benchmark: BenchmarkFixture):
    benchmark(
        run_1000,
        faster_web3._utils.validation.validate_rpc_response_and_raise_if_error,
        VALID_RPC_RESPONSE,
        None,
    )
