from eth_abi import (
    encode,
)
import pytest
from pytest_codspeed import (
    BenchmarkFixture,
)

eth_tester = pytest.importorskip("eth_tester")
from eth_tester.exceptions import (  # noqa: E402
    TransactionFailed,
)

import web3.providers.eth_tester.defaults  # noqa: E402
import web3.providers.eth_tester.main  # noqa: E402

import faster_web3.providers.eth_tester.defaults  # noqa: E402
import faster_web3.providers.eth_tester.main  # noqa: E402

from benchmarks.batching import (  # noqa: E402
    run_10_async,
    run_100,
    run_100_exc,
)


UNKNOWN_ENDPOINT = "eth_notReal"
NOT_IMPLEMENTED_ENDPOINT = "eth_getWork"
REVERT_REASON_DATA = b"\x08\xc3\x79\xa0" + encode(("string",), ("nope",))
REQUEST_CASES = (
    ("eth_accounts", []),
    (UNKNOWN_ENDPOINT, []),
    (NOT_IMPLEMENTED_ENDPOINT, []),
)


def transaction_failed_bytes(_eth_tester, _params):
    raise TransactionFailed(REVERT_REASON_DATA)


def transaction_failed_string(_eth_tester, _params):
    raise TransactionFailed("plain failure")


def web3_provider():
    return web3.providers.eth_tester.EthereumTesterProvider()


def faster_provider():
    return faster_web3.providers.eth_tester.EthereumTesterProvider()


def web3_async_provider():
    return web3.providers.eth_tester.AsyncEthereumTesterProvider()


def faster_async_provider():
    return faster_web3.providers.eth_tester.AsyncEthereumTesterProvider()


def web3_error_provider(delegator):
    api_endpoints = web3.providers.eth_tester.defaults.API_ENDPOINTS.copy()
    api_endpoints["eth"] = api_endpoints["eth"].copy()
    api_endpoints["eth"]["call"] = delegator
    return web3.providers.eth_tester.EthereumTesterProvider(api_endpoints=api_endpoints)


def faster_error_provider(delegator):
    api_endpoints = faster_web3.providers.eth_tester.defaults.API_ENDPOINTS.copy()
    api_endpoints["eth"] = api_endpoints["eth"].copy()
    api_endpoints["eth"]["call"] = delegator
    return faster_web3.providers.eth_tester.EthereumTesterProvider(
        api_endpoints=api_endpoints
    )


@pytest.mark.benchmark(group="EthereumTesterProvider.make_request")
@pytest.mark.parametrize("method,params", REQUEST_CASES)
def test_EthereumTesterProvider_make_request(benchmark: BenchmarkFixture, method, params):
    make_request = web3_provider().make_request
    benchmark(run_100, make_request, method, params)


@pytest.mark.benchmark(group="EthereumTesterProvider.make_request")
@pytest.mark.parametrize("method,params", REQUEST_CASES)
def test_faster_EthereumTesterProvider_make_request(
    benchmark: BenchmarkFixture, method, params
):
    make_request = faster_provider().make_request
    benchmark(run_100, make_request, method, params)


@pytest.mark.benchmark(group="AsyncEthereumTesterProvider.make_request")
@pytest.mark.parametrize("method,params", REQUEST_CASES)
def test_AsyncEthereumTesterProvider_make_request(
    benchmark: BenchmarkFixture, method, params
):
    make_request = web3_async_provider().make_request
    benchmark(run_10_async, make_request, method, params)


@pytest.mark.benchmark(group="AsyncEthereumTesterProvider.make_request")
@pytest.mark.parametrize("method,params", REQUEST_CASES)
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
