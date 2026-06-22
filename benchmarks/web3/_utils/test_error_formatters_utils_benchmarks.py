import pytest
from pytest_codspeed import (
    BenchmarkFixture,
)

from eth_abi import (
    encode,
)

import web3._utils.error_formatters_utils
import web3._utils.method_formatters
from web3.exceptions import (
    BlockNotFound,
    ContractLogicError,
    OffchainLookup,
    TransactionIndexingInProgress,
    Web3ValueError,
)

import faster_web3._utils.error_formatters_utils
import faster_web3._utils.method_formatters
from faster_web3.exceptions import (
    BlockNotFound as FasterBlockNotFound,
    ContractLogicError as FasterContractLogicError,
    OffchainLookup as FasterOffchainLookup,
    TransactionIndexingInProgress as FasterTransactionIndexingInProgress,
    Web3ValueError as FasterWeb3ValueError,
)

from benchmarks.batching import (
    run_100,
    run_100_exc,
)
from benchmarks.web3.fixtures.core import (
    EXAMPLE_ADDRESS_LOWER,
)
from benchmarks.web3.fixtures.rpc import (
    RPC_NULL_RESULT,
    RPC_SUCCESS_0X1,
)


REVERT_WITH_MSG = (
    "0x08c379a0"
    "00000000000000000000000000000000000000000000000000000000000000020"
    "0000000000000000000000000000000000000000000000000000000000000000b"
    "457865637574696f6e000000000000000000000000000000000000000000000000"
)
PANIC = (
    "0x4e487b71"
    "0000000000000000000000000000000000000000000000000000000000000011"
)
CUSTOM_ERROR = (
    "0x82b42900"
    "000000000000000000000000"
    f"{EXAMPLE_ADDRESS_LOWER[2:]}"
)
OFFCHAIN_LOOKUP = "0x556f1830" + encode(
    ("address", "string[]", "bytes", "bytes4", "bytes"),
    (
        EXAMPLE_ADDRESS_LOWER,
        ("https://example.invalid/{data}",),
        b"\x12\x34",
        b"\x12\x34\x56\x78",
        b"\x56\x78",
    ),
).hex()
REVERT_RESPONSES = (
    {
        "error": {
            "code": -32015,
            "message": "VM execution error.",
            "data": REVERT_WITH_MSG,
        }
    },
    {"error": {"code": 3, "message": "execution reverted", "data": REVERT_WITH_MSG}},
    {"error": {"code": 3, "message": "execution reverted", "data": None}},
    {
        "error": {
            "code": -32000,
            "message": "execution reverted",
            "data": {"originalError": {"data": REVERT_WITH_MSG}},
        }
    },
    {"error": {"code": 3, "message": "execution reverted: message only"}},
    {"error": {"code": 3, "message": "execution reverted", "data": PANIC}},
    {"error": {"code": 3, "message": "execution reverted", "data": CUSTOM_ERROR}},
    {"error": {"code": 3, "message": "execution reverted", "data": OFFCHAIN_LOOKUP}},
)
REVERT_RESPONSE_CASES = tuple(
    (
        response,
        OffchainLookup
        if response["error"].get("data") == OFFCHAIN_LOOKUP
        else ContractLogicError,
    )
    for response in REVERT_RESPONSES
)
FASTER_REVERT_RESPONSE_CASES = tuple(
    (
        response,
        FasterOffchainLookup
        if response["error"].get("data") == OFFCHAIN_LOOKUP
        else FasterContractLogicError,
    )
    for response in REVERT_RESPONSES
)
MISSING_ERROR_RESPONSE = RPC_SUCCESS_0X1
INDEXING_RESPONSE = RPC_NULL_RESULT


@pytest.mark.benchmark(group="raise_contract_logic_error_on_revert")
@pytest.mark.parametrize("response,exc", REVERT_RESPONSE_CASES)
def test_raise_contract_logic_error_on_revert(
    benchmark: BenchmarkFixture, response, exc
):
    benchmark(
        run_100_exc,
        exc,
        web3._utils.error_formatters_utils.raise_contract_logic_error_on_revert,
        response,
    )


@pytest.mark.benchmark(group="raise_contract_logic_error_on_revert")
@pytest.mark.parametrize("response,exc", FASTER_REVERT_RESPONSE_CASES)
def test_faster_raise_contract_logic_error_on_revert(
    benchmark: BenchmarkFixture, response, exc
):
    benchmark(
        run_100_exc,
        exc,
        faster_web3._utils.error_formatters_utils.raise_contract_logic_error_on_revert,
        response,
    )


@pytest.mark.benchmark(group="raise_contract_logic_error_on_revert_missing_error")
def test_raise_contract_logic_error_on_revert_missing_error(
    benchmark: BenchmarkFixture,
):
    benchmark(
        run_100_exc,
        Web3ValueError,
        web3._utils.error_formatters_utils.raise_contract_logic_error_on_revert,
        MISSING_ERROR_RESPONSE,
    )


@pytest.mark.benchmark(group="raise_contract_logic_error_on_revert_missing_error")
def test_faster_raise_contract_logic_error_on_revert_missing_error(
    benchmark: BenchmarkFixture,
):
    benchmark(
        run_100_exc,
        FasterWeb3ValueError,
        faster_web3._utils.error_formatters_utils.raise_contract_logic_error_on_revert,
        MISSING_ERROR_RESPONSE,
    )


@pytest.mark.benchmark(group="raise_transaction_indexing_error_if_indexing")
def test_raise_transaction_indexing_error_if_indexing(benchmark: BenchmarkFixture):
    benchmark(
        run_100_exc,
        TransactionIndexingInProgress,
        web3._utils.error_formatters_utils.raise_transaction_indexing_error_if_indexing,
        INDEXING_RESPONSE,
    )


@pytest.mark.benchmark(group="raise_transaction_indexing_error_if_indexing")
def test_faster_raise_transaction_indexing_error_if_indexing(
    benchmark: BenchmarkFixture,
):
    benchmark(
        run_100_exc,
        FasterTransactionIndexingInProgress,
        faster_web3._utils.error_formatters_utils.raise_transaction_indexing_error_if_indexing,
        INDEXING_RESPONSE,
    )


@pytest.mark.benchmark(group="raise_block_not_found")
def test_raise_block_not_found(benchmark: BenchmarkFixture):
    benchmark(
        run_100_exc,
        BlockNotFound,
        web3._utils.method_formatters.raise_block_not_found,
        ("0x0", False),
    )


@pytest.mark.benchmark(group="raise_block_not_found")
def test_faster_raise_block_not_found(benchmark: BenchmarkFixture):
    benchmark(
        run_100_exc,
        FasterBlockNotFound,
        faster_web3._utils.method_formatters.raise_block_not_found,
        ("0x0", False),
    )
