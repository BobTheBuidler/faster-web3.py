import asyncio

import pytest
from pytest_codspeed import BenchmarkFixture

import web3.providers.eth_tester.middleware

import faster_web3.providers.eth_tester.middleware
from benchmarks.batching import run_100, run_100_async


ADDRESS = "0x742d35Cc6634C0532925a3b844Bc454e4438f44e"

TX_REQUEST = {
    "from": ADDRESS,
    "to": ADDRESS,
    "gas": "0x5208",
    "gasPrice": "0x3b9aca00",
    "maxFeePerGas": "0x77359400",
    "maxPriorityFeePerGas": "0x1",
    "nonce": "0x1",
    "value": "0x0",
    "accessList": [
        {
            "address": ADDRESS,
            "storageKeys": ["0x" + "00" * 32],
        }
    ],
}

FILTER_REQUEST = {"fromBlock": "0x1", "toBlock": "0x2"}

TX_RESULT = {
    "block_hash": "0x" + "11" * 32,
    "block_number": "0x1",
    "transaction_hash": "0x" + "22" * 32,
    "transaction_index": "0x0",
    "access_list": [],
}

RECEIPT_RESULT = {
    "block_hash": "0x" + "11" * 32,
    "block_number": "0x1",
    "transaction_hash": "0x" + "22" * 32,
    "transaction_index": "0x0",
    "logs": [
        {
            "log_index": "0x0",
            "transaction_hash": "0x" + "22" * 32,
            "transaction_index": "0x0",
            "block_hash": "0x" + "11" * 32,
            "block_number": "0x1",
        }
    ],
}

BLOCK_RESULT = {
    "gas_limit": "0x1c9c380",
    "gas_used": "0x5208",
    "sha3_uncles": "0x" + "00" * 32,
    "parent_hash": "0x" + "00" * 32,
    "transactions_root": "0x" + "00" * 32,
    "receipts_root": "0x" + "00" * 32,
    "state_root": "0x" + "00" * 32,
    "logs_bloom": "0x" + "00" * 256,
    "coinbase": ADDRESS,
}


class FakeEth:
    accounts = [ADDRESS]


class FakeWeb3:
    def __init__(self):
        self.eth = FakeEth()


class FakeAsyncEth:
    @property
    def accounts(self):
        return asyncio.sleep(0, result=[ADDRESS])


class FakeAsyncWeb3:
    def __init__(self):
        self.eth = FakeAsyncEth()


# --- request transformers ---

@pytest.mark.benchmark(group="transaction_request_transformer")
def test_transaction_request_transformer(benchmark: BenchmarkFixture):
    benchmark(
        run_100,
        web3.providers.eth_tester.middleware.transaction_request_transformer,
        TX_REQUEST,
    )


@pytest.mark.benchmark(group="transaction_request_transformer")
def test_faster_transaction_request_transformer(benchmark: BenchmarkFixture):
    benchmark(
        run_100,
        faster_web3.providers.eth_tester.middleware.transaction_request_transformer,
        TX_REQUEST,
    )


@pytest.mark.benchmark(group="filter_request_transformer")
def test_filter_request_transformer(benchmark: BenchmarkFixture):
    benchmark(
        run_100,
        web3.providers.eth_tester.middleware.filter_request_transformer,
        FILTER_REQUEST,
    )


@pytest.mark.benchmark(group="filter_request_transformer")
def test_faster_filter_request_transformer(benchmark: BenchmarkFixture):
    benchmark(
        run_100,
        faster_web3.providers.eth_tester.middleware.filter_request_transformer,
        FILTER_REQUEST,
    )


# --- hex_block_to_integer / block_arg_to_integer ---

# Hex block ids and named aliases are both common in middleware paths.
block_arg_cases = ["0x1", "latest"]
block_arg_ids = ["hex", "named"]


@pytest.mark.benchmark(group="hex_block_to_integer")
@pytest.mark.parametrize("value", block_arg_cases, ids=block_arg_ids)
def test_hex_block_to_integer(benchmark: BenchmarkFixture, value):
    if not hasattr(web3.providers.eth_tester.middleware, "hex_block_to_integer"):
        pytest.skip("web3 does not expose hex_block_to_integer")
    benchmark(run_100, web3.providers.eth_tester.middleware.hex_block_to_integer, value)


@pytest.mark.benchmark(group="hex_block_to_integer")
@pytest.mark.parametrize("value", block_arg_cases, ids=block_arg_ids)
def test_faster_hex_block_to_integer(benchmark: BenchmarkFixture, value):
    benchmark(
        run_100, faster_web3.providers.eth_tester.middleware.hex_block_to_integer, value
    )


@pytest.mark.benchmark(group="block_arg_to_integer")
def test_block_arg_to_integer(benchmark: BenchmarkFixture):
    if not hasattr(web3.providers.eth_tester.middleware, "block_arg_to_integer"):
        pytest.skip("web3 does not expose block_arg_to_integer")
    benchmark(
        run_100,
        web3.providers.eth_tester.middleware.block_arg_to_integer,
        "0x1",
    )


@pytest.mark.benchmark(group="block_arg_to_integer")
def test_faster_block_arg_to_integer(benchmark: BenchmarkFixture):
    benchmark(
        run_100,
        faster_web3.providers.eth_tester.middleware.block_arg_to_integer,
        "0x1",
    )


# --- result formatters ---

@pytest.mark.benchmark(group="transaction_result_formatter")
def test_transaction_result_formatter(benchmark: BenchmarkFixture):
    formatter = web3.providers.eth_tester.middleware.result_formatters[
        "eth_getTransactionByHash"
    ]
    benchmark(run_100, formatter, TX_RESULT)


@pytest.mark.benchmark(group="transaction_result_formatter")
def test_faster_transaction_result_formatter(benchmark: BenchmarkFixture):
    formatter = faster_web3.providers.eth_tester.middleware.result_formatters[
        faster_web3.providers.eth_tester.middleware.RPC.eth_getTransactionByHash
    ]
    benchmark(run_100, formatter, TX_RESULT)


@pytest.mark.benchmark(group="receipt_result_formatter")
def test_receipt_result_formatter(benchmark: BenchmarkFixture):
    formatter = web3.providers.eth_tester.middleware.result_formatters[
        "eth_getTransactionReceipt"
    ]
    benchmark(run_100, formatter, RECEIPT_RESULT)


@pytest.mark.benchmark(group="receipt_result_formatter")
def test_faster_receipt_result_formatter(benchmark: BenchmarkFixture):
    formatter = faster_web3.providers.eth_tester.middleware.result_formatters[
        faster_web3.providers.eth_tester.middleware.RPC.eth_getTransactionReceipt
    ]
    benchmark(run_100, formatter, RECEIPT_RESULT)


@pytest.mark.benchmark(group="block_result_formatter")
def test_block_result_formatter(benchmark: BenchmarkFixture):
    formatter = web3.providers.eth_tester.middleware.result_formatters[
        "eth_getBlockByNumber"
    ]
    benchmark(run_100, formatter, BLOCK_RESULT)


@pytest.mark.benchmark(group="block_result_formatter")
def test_faster_block_result_formatter(benchmark: BenchmarkFixture):
    formatter = faster_web3.providers.eth_tester.middleware.result_formatters[
        faster_web3.providers.eth_tester.middleware.RPC.eth_getBlockByNumber
    ]
    benchmark(run_100, formatter, BLOCK_RESULT)


# --- guess_from / fill_default ---

@pytest.mark.benchmark(group="guess_from")
def test_guess_from(benchmark: BenchmarkFixture):
    benchmark(
        run_100, web3.providers.eth_tester.middleware.guess_from, FakeWeb3(), {}
    )


@pytest.mark.benchmark(group="guess_from")
def test_faster_guess_from(benchmark: BenchmarkFixture):
    benchmark(
        run_100, faster_web3.providers.eth_tester.middleware.guess_from, FakeWeb3(), {}
    )


@pytest.mark.benchmark(group="fill_default")
def test_fill_default(benchmark: BenchmarkFixture):
    formatter = web3.providers.eth_tester.middleware.fill_default("from", web3.providers.eth_tester.middleware.guess_from)
    benchmark(run_100, formatter, FakeWeb3(), {})


@pytest.mark.benchmark(group="fill_default")
def test_faster_fill_default(benchmark: BenchmarkFixture):
    formatter = faster_web3.providers.eth_tester.middleware.fill_default(
        "from", faster_web3.providers.eth_tester.middleware.guess_from
    )
    benchmark(run_100, formatter, FakeWeb3(), {})


# --- async_guess_from / async_fill_default ---

@pytest.mark.benchmark(group="async_guess_from")
def test_async_guess_from(benchmark: BenchmarkFixture):
    benchmark(
        run_100_async,
        web3.providers.eth_tester.middleware.async_guess_from,
        FakeAsyncWeb3(),
        {},
    )


@pytest.mark.benchmark(group="async_guess_from")
def test_faster_async_guess_from(benchmark: BenchmarkFixture):
    benchmark(
        run_100_async,
        faster_web3.providers.eth_tester.middleware.async_guess_from,
        FakeAsyncWeb3(),
        {},
    )


@pytest.mark.benchmark(group="async_fill_default")
def test_async_fill_default(benchmark: BenchmarkFixture):
    formatter = web3.providers.eth_tester.middleware.async_fill_default(
        "from", web3.providers.eth_tester.middleware.async_guess_from
    )
    benchmark(run_100_async, formatter, FakeAsyncWeb3(), {})


@pytest.mark.benchmark(group="async_fill_default")
def test_faster_async_fill_default(benchmark: BenchmarkFixture):
    formatter = faster_web3.providers.eth_tester.middleware.async_fill_default(
        "from", faster_web3.providers.eth_tester.middleware.async_guess_from
    )
    benchmark(run_100_async, formatter, FakeAsyncWeb3(), {})
