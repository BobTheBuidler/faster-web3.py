import pytest

from pytest_codspeed import (
    BenchmarkFixture,
)
import web3.providers.eth_tester.middleware

from benchmarks.batching import (
    run_100,
    run_100_async,
)
from benchmarks.web3.fixtures.eth_tester import (
    ETH_TESTER_BLOCK_ARG_CASES,
    ETH_TESTER_BLOCK_ARG_IDS,
    ETH_TESTER_BLOCK_RESULT,
    ETH_TESTER_FILTER_REQUEST,
    ETH_TESTER_RECEIPT_RESULT,
    ETH_TESTER_TX_REQUEST,
    ETH_TESTER_TX_RESULT,
    faster_async_w3,
    faster_w3,
    web3_async_w3,
    web3_w3,
)
import faster_web3.providers.eth_tester.middleware

# --- request transformers ---


@pytest.mark.benchmark(group="transaction_request_transformer")
def test_transaction_request_transformer(benchmark: BenchmarkFixture):
    benchmark(
        run_100,
        web3.providers.eth_tester.middleware.transaction_request_transformer,
        ETH_TESTER_TX_REQUEST,
    )


@pytest.mark.benchmark(group="transaction_request_transformer")
def test_faster_transaction_request_transformer(benchmark: BenchmarkFixture):
    benchmark(
        run_100,
        faster_web3.providers.eth_tester.middleware.transaction_request_transformer,
        ETH_TESTER_TX_REQUEST,
    )


@pytest.mark.benchmark(group="filter_request_transformer")
def test_filter_request_transformer(benchmark: BenchmarkFixture):
    benchmark(
        run_100,
        web3.providers.eth_tester.middleware.filter_request_transformer,
        ETH_TESTER_FILTER_REQUEST,
    )


@pytest.mark.benchmark(group="filter_request_transformer")
def test_faster_filter_request_transformer(benchmark: BenchmarkFixture):
    benchmark(
        run_100,
        faster_web3.providers.eth_tester.middleware.filter_request_transformer,
        ETH_TESTER_FILTER_REQUEST,
    )


# --- hex_block_to_integer / block_arg_to_integer ---


# Hex block ids and named aliases are both common in middleware paths.
@pytest.mark.benchmark(group="hex_block_to_integer")
@pytest.mark.parametrize(
    "value", ETH_TESTER_BLOCK_ARG_CASES, ids=ETH_TESTER_BLOCK_ARG_IDS
)
def test_hex_block_to_integer(benchmark: BenchmarkFixture, value):
    if not hasattr(web3.providers.eth_tester.middleware, "hex_block_to_integer"):
        pytest.skip("web3 does not expose hex_block_to_integer")
    benchmark(run_100, web3.providers.eth_tester.middleware.hex_block_to_integer, value)


@pytest.mark.benchmark(group="hex_block_to_integer")
@pytest.mark.parametrize(
    "value", ETH_TESTER_BLOCK_ARG_CASES, ids=ETH_TESTER_BLOCK_ARG_IDS
)
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
    benchmark(run_100, formatter, ETH_TESTER_TX_RESULT)


@pytest.mark.benchmark(group="transaction_result_formatter")
def test_faster_transaction_result_formatter(benchmark: BenchmarkFixture):
    formatter = faster_web3.providers.eth_tester.middleware.result_formatters[
        faster_web3.providers.eth_tester.middleware.RPC.eth_getTransactionByHash
    ]
    benchmark(run_100, formatter, ETH_TESTER_TX_RESULT)


@pytest.mark.benchmark(group="receipt_result_formatter")
def test_receipt_result_formatter(benchmark: BenchmarkFixture):
    formatter = web3.providers.eth_tester.middleware.result_formatters[
        "eth_getTransactionReceipt"
    ]
    benchmark(run_100, formatter, ETH_TESTER_RECEIPT_RESULT)


@pytest.mark.benchmark(group="receipt_result_formatter")
def test_faster_receipt_result_formatter(benchmark: BenchmarkFixture):
    formatter = faster_web3.providers.eth_tester.middleware.result_formatters[
        faster_web3.providers.eth_tester.middleware.RPC.eth_getTransactionReceipt
    ]
    benchmark(run_100, formatter, ETH_TESTER_RECEIPT_RESULT)


@pytest.mark.benchmark(group="block_result_formatter")
def test_block_result_formatter(benchmark: BenchmarkFixture):
    formatter = web3.providers.eth_tester.middleware.result_formatters[
        "eth_getBlockByNumber"
    ]
    benchmark(run_100, formatter, ETH_TESTER_BLOCK_RESULT)


@pytest.mark.benchmark(group="block_result_formatter")
def test_faster_block_result_formatter(benchmark: BenchmarkFixture):
    formatter = faster_web3.providers.eth_tester.middleware.result_formatters[
        faster_web3.providers.eth_tester.middleware.RPC.eth_getBlockByNumber
    ]
    benchmark(run_100, formatter, ETH_TESTER_BLOCK_RESULT)


# --- guess_from / fill_default ---


@pytest.mark.benchmark(group="guess_from")
def test_guess_from(benchmark: BenchmarkFixture):
    w3 = web3_w3()
    benchmark(run_100, web3.providers.eth_tester.middleware.guess_from, w3, {})


@pytest.mark.benchmark(group="guess_from")
def test_faster_guess_from(benchmark: BenchmarkFixture):
    w3 = faster_w3()
    benchmark(run_100, faster_web3.providers.eth_tester.middleware.guess_from, w3, {})


@pytest.mark.benchmark(group="fill_default")
def test_fill_default(benchmark: BenchmarkFixture):
    formatter = web3.providers.eth_tester.middleware.fill_default(
        "from", web3.providers.eth_tester.middleware.guess_from
    )
    w3 = web3_w3()
    benchmark(run_100, formatter, w3, {})


@pytest.mark.benchmark(group="fill_default")
def test_faster_fill_default(benchmark: BenchmarkFixture):
    formatter = faster_web3.providers.eth_tester.middleware.fill_default(
        "from", faster_web3.providers.eth_tester.middleware.guess_from
    )
    w3 = faster_w3()
    benchmark(run_100, formatter, w3, {})


# --- async_guess_from / async_fill_default ---


@pytest.mark.benchmark(group="async_guess_from")
def test_async_guess_from(benchmark: BenchmarkFixture):
    async_w3 = web3_async_w3()
    benchmark(
        run_100_async,
        web3.providers.eth_tester.middleware.async_guess_from,
        async_w3,
        {},
    )


@pytest.mark.benchmark(group="async_guess_from")
def test_faster_async_guess_from(benchmark: BenchmarkFixture):
    async_w3 = faster_async_w3()
    benchmark(
        run_100_async,
        faster_web3.providers.eth_tester.middleware.async_guess_from,
        async_w3,
        {},
    )


@pytest.mark.benchmark(group="async_fill_default")
def test_async_fill_default(benchmark: BenchmarkFixture):
    formatter = web3.providers.eth_tester.middleware.async_fill_default(
        "from", web3.providers.eth_tester.middleware.async_guess_from
    )
    async_w3 = web3_async_w3()
    benchmark(run_100_async, formatter, async_w3, {})


@pytest.mark.benchmark(group="async_fill_default")
def test_faster_async_fill_default(benchmark: BenchmarkFixture):
    formatter = faster_web3.providers.eth_tester.middleware.async_fill_default(
        "from", faster_web3.providers.eth_tester.middleware.async_guess_from
    )
    async_w3 = faster_async_w3()
    benchmark(run_100_async, formatter, async_w3, {})
