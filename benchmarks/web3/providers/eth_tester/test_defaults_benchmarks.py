from unittest.mock import (
    patch,
)

import pytest
from pytest_codspeed import (
    BenchmarkFixture,
)

from benchmarks.web3.fixtures.eth_tester import (
    ETH_TESTER,
    ETH_TESTER_DEFAULT_ENDPOINT_CASES,
    eth_tester,
    raises_value_error,
    transaction_failed_offchain_lookup,
    transaction_failed_panic,
)

import web3.exceptions  # noqa: E402
import web3.providers.eth_tester.defaults  # noqa: E402

import faster_web3.exceptions  # noqa: E402
import faster_web3.providers.eth_tester.defaults  # noqa: E402

from benchmarks.batching import (  # noqa: E402
    run_10,
    run_100,
    run_100_exc,
    run_1000,
)


@pytest.mark.benchmark(group="call_eth_tester")
def test_call_eth_tester_success(benchmark: BenchmarkFixture):
    benchmark(
        run_100,
        web3.providers.eth_tester.defaults.call_eth_tester,
        "get_accounts",
        ETH_TESTER,
        (),
    )


@pytest.mark.benchmark(group="call_eth_tester")
def test_faster_call_eth_tester_success(benchmark: BenchmarkFixture):
    benchmark(
        run_100,
        faster_web3.providers.eth_tester.defaults.call_eth_tester,
        "get_accounts",
        ETH_TESTER,
        (),
    )


@pytest.mark.benchmark(group="call_eth_tester_offchain_lookup")
def test_call_eth_tester_offchain_lookup(benchmark: BenchmarkFixture):
    with patch.object(ETH_TESTER, "call", new=transaction_failed_offchain_lookup):
        benchmark(
            run_100_exc,
            web3.exceptions.OffchainLookup,
            web3.providers.eth_tester.defaults.call_eth_tester,
            "call",
            ETH_TESTER,
            (),
        )


@pytest.mark.benchmark(group="call_eth_tester_offchain_lookup")
def test_faster_call_eth_tester_offchain_lookup(benchmark: BenchmarkFixture):
    with patch.object(ETH_TESTER, "call", new=transaction_failed_offchain_lookup):
        benchmark(
            run_100_exc,
            faster_web3.exceptions.OffchainLookup,
            faster_web3.providers.eth_tester.defaults.call_eth_tester,
            "call",
            ETH_TESTER,
            (),
        )


@pytest.mark.benchmark(group="call_eth_tester_panic")
def test_call_eth_tester_panic(benchmark: BenchmarkFixture):
    with patch.object(ETH_TESTER, "call", new=transaction_failed_panic):
        benchmark(
            run_100_exc,
            web3.exceptions.ContractPanicError,
            web3.providers.eth_tester.defaults.call_eth_tester,
            "call",
            ETH_TESTER,
            (),
        )


@pytest.mark.benchmark(group="call_eth_tester_panic")
def test_faster_call_eth_tester_panic(benchmark: BenchmarkFixture):
    with patch.object(ETH_TESTER, "call", new=transaction_failed_panic):
        benchmark(
            run_100_exc,
            faster_web3.exceptions.ContractPanicError,
            faster_web3.providers.eth_tester.defaults.call_eth_tester,
            "call",
            ETH_TESTER,
            (),
        )


@pytest.mark.benchmark(group="null_if_excepts")
def test_null_if_excepts(benchmark: BenchmarkFixture):
    wrapped = web3.providers.eth_tester.defaults.null_if_excepts(ValueError)(
        raises_value_error
    )
    benchmark(run_1000, wrapped)


@pytest.mark.benchmark(group="null_if_excepts")
def test_faster_null_if_excepts(benchmark: BenchmarkFixture):
    wrapped = faster_web3.providers.eth_tester.defaults.null_if_excepts(ValueError)(
        raises_value_error
    )
    benchmark(run_1000, wrapped)


@pytest.mark.benchmark(group="eth_tester_endpoint")
@pytest.mark.parametrize("namespace,endpoint,args", ETH_TESTER_DEFAULT_ENDPOINT_CASES)
def test_eth_tester_endpoint(benchmark: BenchmarkFixture, namespace, endpoint, args):
    fn = web3.providers.eth_tester.defaults.API_ENDPOINTS[namespace][endpoint]
    benchmark(run_100, fn, ETH_TESTER, args)


@pytest.mark.benchmark(group="eth_tester_endpoint")
@pytest.mark.parametrize("namespace,endpoint,args", ETH_TESTER_DEFAULT_ENDPOINT_CASES)
def test_faster_eth_tester_endpoint(
    benchmark: BenchmarkFixture, namespace, endpoint, args
):
    fn = faster_web3.providers.eth_tester.defaults.API_ENDPOINTS[namespace][endpoint]
    benchmark(run_100, fn, ETH_TESTER, args)


@pytest.mark.benchmark(group="create_new_account")
def test_create_new_account(benchmark: BenchmarkFixture):
    account_tester = eth_tester.EthereumTester()
    benchmark(
        run_10,
        web3.providers.eth_tester.defaults.create_new_account,
        account_tester,
    )


@pytest.mark.benchmark(group="create_new_account")
def test_faster_create_new_account(benchmark: BenchmarkFixture):
    account_tester = eth_tester.EthereumTester()
    benchmark(
        run_10,
        faster_web3.providers.eth_tester.defaults.create_new_account,
        account_tester,
    )


@pytest.mark.benchmark(group="not_implemented")
def test_not_implemented(benchmark: BenchmarkFixture):
    benchmark(
        run_100_exc,
        NotImplementedError,
        web3.providers.eth_tester.defaults.not_implemented,
    )


@pytest.mark.benchmark(group="not_implemented")
def test_faster_not_implemented(benchmark: BenchmarkFixture):
    benchmark(
        run_100_exc,
        NotImplementedError,
        faster_web3.providers.eth_tester.defaults.not_implemented,
    )
