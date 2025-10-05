import pytest
from pytest_codspeed import BenchmarkFixture

import web3._utils.error_formatters_utils
import faster_web3._utils.error_formatters_utils

from web3.exceptions import (
    BlockNotFound,
    ContractLogicError,
    ContractCustomError,
    TransactionIndexingInProgress,
    Web3ValueError,
)
from faster_web3.exceptions import (
    BlockNotFound as FasterBlockNotFound,
    ContractLogicError as FasterContractLogicError,
    ContractCustomError as FasterContractCustomError,
    TransactionIndexingInProgress as FasterTransactionIndexingInProgress,
    Web3ValueError as FasterWeb3ValueError,
)

def run_100(func, *args, **kwargs):
    for _ in range(100):
        func(*args, **kwargs)

error_data_cases = [
    ("Reverted: execution reverted: reason", True),
    ("Reverted: execution reverted", True),
    ("Some other error", True),
    ("", False),
]
error_data_ids = ["with-reason", "no-reason", "other", "empty"]


def call(fn, exc, *args):
    try:
        fn(*args)
    except exc:
        pass


@pytest.mark.benchmark(group="_parse_error_with_reverted_prefix")
@pytest.mark.parametrize("data,exc", error_data_cases, ids=error_data_ids)
def test_web3_parse_error_with_reverted_prefix(benchmark: BenchmarkFixture, data, exc):
    if not exc:
        benchmark(run_100, web3._utils.error_formatters_utils._parse_error_with_reverted_prefix, data)
        return

    benchmark(run_100, call, web3._utils.error_formatters_utils._parse_error_with_reverted_prefix, ContractLogicError, data)

@pytest.mark.benchmark(group="_parse_error_with_reverted_prefix")
@pytest.mark.parametrize("data,exc", error_data_cases, ids=error_data_ids)
def test_faster_web3_parse_error_with_reverted_prefix(benchmark: BenchmarkFixture, data, exc):
    if not exc:
        benchmark(run_100, faster_web3._utils.error_formatters_utils._parse_error_with_reverted_prefix, FasterContractLogicError, data)
        return
    
    benchmark(run_100, call, faster_web3._utils.error_formatters_utils._parse_error_with_reverted_prefix, data)

raise_contract_error_cases = ["error: contract reverted", "error: some other error", ""]
raise_contract_error_ids = ["reverted", "other", "empty"]

@pytest.mark.benchmark(group="_raise_contract_error")
@pytest.mark.parametrize("data", raise_contract_error_cases, ids=raise_contract_error_ids)
def test_web3_raise_contract_error(benchmark: BenchmarkFixture, data):
    if data == "":
        benchmark(run_100, web3._utils.error_formatters_utils._raise_contract_error, data)
        return

    def call():
        try:
            return web3._utils.error_formatters_utils._raise_contract_error(data)
        except ContractCustomError:
            return

    benchmark(run_100, call)

@pytest.mark.benchmark(group="_raise_contract_error")
@pytest.mark.parametrize("data", raise_contract_error_cases, ids=raise_contract_error_ids)
def test_faster_web3_raise_contract_error(benchmark: BenchmarkFixture, data):
    if data == "":
        benchmark(run_100, faster_web3._utils.error_formatters_utils._raise_contract_error, data)
        return

    def call():
        try:
            return faster_web3._utils.error_formatters_utils._raise_contract_error(data)
        except FasterContractCustomError:
            return

    benchmark(run_100, call)

# raise_contract_logic_error_on_revert
logic_error_response_cases = [
    {"error": "revert"},
    {"error": "other"},
    {"error": ""},
    {},
]
logic_error_response_ids = ["revert", "other", "empty", "empty-dict"]

@pytest.mark.benchmark(group="raise_contract_logic_error_on_revert")
@pytest.mark.parametrize("response", logic_error_response_cases, ids=logic_error_response_ids)
def test_web3_raise_contract_logic_error_on_revert(benchmark: BenchmarkFixture, response):
    def call():
        try:
            web3._utils.error_formatters_utils.raise_contract_logic_error_on_revert(response)
        except Web3ValueError:
            pass
    benchmark(run_100, call)

@pytest.mark.benchmark(group="raise_contract_logic_error_on_revert")
@pytest.mark.parametrize("response", logic_error_response_cases, ids=logic_error_response_ids)
def test_faster_web3_raise_contract_logic_error_on_revert(benchmark: BenchmarkFixture, response):
    def call():
        try:
            faster_web3._utils.error_formatters_utils.raise_contract_logic_error_on_revert(response)
        except FasterWeb3ValueError:
            pass
    benchmark(run_100, call)

# raise_transaction_indexing_error_if_indexing
indexing_error_response_cases = [
    {"error": "indexing"},
    {"error": "not indexing"},
    {"error": ""},
    {},
]
indexing_error_response_ids = ["indexing", "not-indexing", "empty", "empty-dict"]

@pytest.mark.benchmark(group="raise_transaction_indexing_error_if_indexing")
@pytest.mark.parametrize("response", indexing_error_response_cases, ids=indexing_error_response_ids)
def test_web3_raise_transaction_indexing_error_if_indexing(benchmark: BenchmarkFixture, response):
    def call():
        try:
            web3._utils.error_formatters_utils.raise_transaction_indexing_error_if_indexing(response)
        except TransactionIndexingInProgress:
            pass
    benchmark(run_100, call)

@pytest.mark.benchmark(group="raise_transaction_indexing_error_if_indexing")
@pytest.mark.parametrize("response", indexing_error_response_cases, ids=indexing_error_response_ids)
def test_faster_web3_raise_transaction_indexing_error_if_indexing(benchmark: BenchmarkFixture, response):
    def call():
        try:
            faster_web3._utils.error_formatters_utils.raise_transaction_indexing_error_if_indexing(response)
        except FasterTransactionIndexingInProgress:
            pass
    benchmark(run_100, call)

# raise_block_not_found_on_error
block_not_found_response_cases = [
    {"error": "block not found"},
    {"error": "other"},
    {"error": ""},
    {},
]
block_not_found_response_ids = ["block-not-found", "other", "empty", "empty-dict"]

@pytest.mark.benchmark(group="raise_block_not_found_on_error")
@pytest.mark.parametrize("response", block_not_found_response_cases, ids=block_not_found_response_ids)
def test_web3_raise_block_not_found_on_error(benchmark: BenchmarkFixture, response):
    def call():
        try:
            web3._utils.error_formatters_utils.raise_block_not_found_on_error(response)
        except BlockNotFound:
            pass
    benchmark(run_100, call)

@pytest.mark.benchmark(group="raise_block_not_found_on_error")
@pytest.mark.parametrize("response", block_not_found_response_cases, ids=block_not_found_response_ids)
def test_faster_web3_raise_block_not_found_on_error(benchmark: BenchmarkFixture, response):
    def call():
        try:
            faster_web3._utils.error_formatters_utils.raise_block_not_found_on_error(response)
        except FasterBlockNotFound:
            pass
    benchmark(run_100, call)
