from unittest.mock import (
    patch,
)

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
from benchmarks.web3.fixtures.core import (  # noqa: E402
    EXAMPLE_ADDRESS_LOWER,
    HASH32,
)


TESTER = eth_tester.EthereumTester()
OFFCHAIN_LOOKUP_DATA = b"\x55\x6f\x18\x30" + encode(
    ("address", "string[]", "bytes", "bytes4", "bytes"),
    (
        EXAMPLE_ADDRESS_LOWER,
        ("https://example.invalid/{data}",),
        b"\x12\x34",
        b"\x12\x34\x56\x78",
        b"\x56\x78",
    ),
)
PANIC_DATA = bytes.fromhex(
    "4e487b71"
    "0000000000000000000000000000000000000000000000000000000000000011"
)
ENDPOINT_CASES = (
    ("web3", "sha3", ("0x68656c6c6f",)),
    ("eth", "getBlockByNumber", ("latest", False)),
    ("eth", "getTransactionReceipt", (HASH32,)),
    ("eth", "newFilter", ({},)),
)


def transaction_failed_offchain_lookup(*_args, **_kwargs):
    raise TransactionFailed(repr(OFFCHAIN_LOOKUP_DATA))


def transaction_failed_panic(*_args, **_kwargs):
    raise TransactionFailed(repr(PANIC_DATA))


def raises_value_error():
    raise ValueError("empty")


@pytest.mark.benchmark(group="call_eth_tester")
def test_call_eth_tester_success(benchmark: BenchmarkFixture):
    benchmark(
        run_100,
        web3.providers.eth_tester.defaults.call_eth_tester,
        "get_accounts",
        TESTER,
        (),
    )


@pytest.mark.benchmark(group="call_eth_tester")
def test_faster_call_eth_tester_success(benchmark: BenchmarkFixture):
    benchmark(
        run_100,
        faster_web3.providers.eth_tester.defaults.call_eth_tester,
        "get_accounts",
        TESTER,
        (),
    )


@pytest.mark.benchmark(group="call_eth_tester_offchain_lookup")
def test_call_eth_tester_offchain_lookup(benchmark: BenchmarkFixture):
    with patch.object(TESTER, "call", new=transaction_failed_offchain_lookup):
        benchmark(
            run_100_exc,
            web3.exceptions.OffchainLookup,
            web3.providers.eth_tester.defaults.call_eth_tester,
            "call",
            TESTER,
            (),
        )


@pytest.mark.benchmark(group="call_eth_tester_offchain_lookup")
def test_faster_call_eth_tester_offchain_lookup(benchmark: BenchmarkFixture):
    with patch.object(TESTER, "call", new=transaction_failed_offchain_lookup):
        benchmark(
            run_100_exc,
            faster_web3.exceptions.OffchainLookup,
            faster_web3.providers.eth_tester.defaults.call_eth_tester,
            "call",
            TESTER,
            (),
        )


@pytest.mark.benchmark(group="call_eth_tester_panic")
def test_call_eth_tester_panic(benchmark: BenchmarkFixture):
    with patch.object(TESTER, "call", new=transaction_failed_panic):
        benchmark(
            run_100_exc,
            web3.exceptions.ContractPanicError,
            web3.providers.eth_tester.defaults.call_eth_tester,
            "call",
            TESTER,
            (),
        )


@pytest.mark.benchmark(group="call_eth_tester_panic")
def test_faster_call_eth_tester_panic(benchmark: BenchmarkFixture):
    with patch.object(TESTER, "call", new=transaction_failed_panic):
        benchmark(
            run_100_exc,
            faster_web3.exceptions.ContractPanicError,
            faster_web3.providers.eth_tester.defaults.call_eth_tester,
            "call",
            TESTER,
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
@pytest.mark.parametrize("namespace,endpoint,args", ENDPOINT_CASES)
def test_eth_tester_endpoint(benchmark: BenchmarkFixture, namespace, endpoint, args):
    fn = web3.providers.eth_tester.defaults.API_ENDPOINTS[namespace][endpoint]
    benchmark(run_100, fn, TESTER, args)


@pytest.mark.benchmark(group="eth_tester_endpoint")
@pytest.mark.parametrize("namespace,endpoint,args", ENDPOINT_CASES)
def test_faster_eth_tester_endpoint(
    benchmark: BenchmarkFixture, namespace, endpoint, args
):
    fn = faster_web3.providers.eth_tester.defaults.API_ENDPOINTS[namespace][endpoint]
    benchmark(run_100, fn, TESTER, args)


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
