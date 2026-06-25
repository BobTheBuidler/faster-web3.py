import pytest
from pytest_codspeed import (
    BenchmarkFixture,
)

from benchmarks.batching import (  # noqa: E402
    run_10_async,
    run_100,
    run_100_exc,
)
from benchmarks.web3.fixtures.eth_tester import (  # noqa: E402
    ETH_TESTER_REQUEST_CASES,
    TransactionFailed,
    faster_async_provider,
    faster_error_provider,
    faster_provider,
    transaction_failed_bytes,
    transaction_failed_string,
    web3_async_provider,
    web3_error_provider,
    web3_provider,
)

import web3.providers.eth_tester.defaults  # noqa: E402
import web3.providers.eth_tester.main  # noqa: E402

import faster_web3.providers.eth_tester.defaults  # noqa: E402
import faster_web3.providers.eth_tester.main  # noqa: E402


@pytest.mark.benchmark(group="EthereumTesterProvider.make_request")
@pytest.mark.parametrize("method,params", ETH_TESTER_REQUEST_CASES)
def test_EthereumTesterProvider_make_request(benchmark: BenchmarkFixture, method, params):
    make_request = web3_provider().make_request
    benchmark(run_100, make_request, method, params)


@pytest.mark.benchmark(group="EthereumTesterProvider.make_request")
@pytest.mark.parametrize("method,params", ETH_TESTER_REQUEST_CASES)
def test_faster_EthereumTesterProvider_make_request(
    benchmark: BenchmarkFixture, method, params
):
    make_request = faster_provider().make_request
    benchmark(run_100, make_request, method, params)


@pytest.mark.benchmark(group="AsyncEthereumTesterProvider.make_request")
@pytest.mark.parametrize("method,params", ETH_TESTER_REQUEST_CASES)
def test_AsyncEthereumTesterProvider_make_request(
    benchmark: BenchmarkFixture, method, params
):
    make_request = web3_async_provider().make_request
    benchmark(run_10_async, make_request, method, params)


@pytest.mark.benchmark(group="AsyncEthereumTesterProvider.make_request")
@pytest.mark.parametrize("method,params", ETH_TESTER_REQUEST_CASES)
def test_faster_AsyncEthereumTesterProvider_make_request(
    benchmark: BenchmarkFixture, method, params
):
    make_request = faster_async_provider().make_request
    benchmark(run_10_async, make_request, method, params)


@pytest.mark.benchmark(group="EthereumTesterProvider.TransactionFailed")
@pytest.mark.parametrize(
    "delegator", (transaction_failed_bytes, transaction_failed_string)
)
def test_EthereumTesterProvider_transaction_failed(
    benchmark: BenchmarkFixture, delegator
):
    make_request = web3_error_provider(delegator).make_request
    benchmark(run_100_exc, TransactionFailed, make_request, "eth_call", [])


@pytest.mark.benchmark(group="EthereumTesterProvider.TransactionFailed")
@pytest.mark.parametrize(
    "delegator", (transaction_failed_bytes, transaction_failed_string)
)
def test_faster_EthereumTesterProvider_transaction_failed(
    benchmark: BenchmarkFixture, delegator
):
    make_request = faster_error_provider(delegator).make_request
    benchmark(run_100_exc, TransactionFailed, make_request, "eth_call", [])
