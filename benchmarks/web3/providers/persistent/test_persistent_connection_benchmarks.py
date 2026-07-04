import pytest
from pytest_codspeed import (
    BenchmarkFixture,
)

import web3._utils.caching

import faster_web3._utils.caching

from benchmarks.batching import (
    run_1000,
    run_1000_async,
)
from benchmarks.web3.fixtures.persistent import (
    faster_persistent_w3,
    faster_socket_provider,
    seed_subscription,
    web3_persistent_w3,
    web3_socket_provider,
)
from benchmarks.web3.fixtures.rpc import (
    RPC_SUCCESS_0X1,
    SUBSCRIPTION_NOTIFICATION,
)
from benchmarks.web3.fixtures.subscriptions import (
    faster_subscription,
    web3_subscription,
)


def active_subscriptions(provider):
    return provider._request_processor.active_subscriptions


@pytest.mark.benchmark(group="PersistentConnectionProvider.socket_recv")
@pytest.mark.parametrize("response", (RPC_SUCCESS_0X1, SUBSCRIPTION_NOTIFICATION))
def test_socket_recv(benchmark: BenchmarkFixture, response):
    provider = web3_socket_provider(response)
    benchmark(run_1000_async, provider.socket_recv)


@pytest.mark.benchmark(group="PersistentConnectionProvider.socket_recv")
@pytest.mark.parametrize("response", (RPC_SUCCESS_0X1, SUBSCRIPTION_NOTIFICATION))
def test_faster_socket_recv(benchmark: BenchmarkFixture, response):
    provider = faster_socket_provider(response)
    benchmark(run_1000_async, provider.socket_recv)


@pytest.mark.benchmark(group="PersistentConnectionProvider.subscriptions")
def test_subscriptions(benchmark: BenchmarkFixture):
    provider = web3_socket_provider(RPC_SUCCESS_0X1)
    seed_subscription(
        provider,
        web3_subscription("heads"),
        web3._utils.caching,
    )
    benchmark(run_1000, active_subscriptions, provider)


@pytest.mark.benchmark(group="PersistentConnectionProvider.subscriptions")
def test_faster_subscriptions(benchmark: BenchmarkFixture):
    provider = faster_socket_provider(RPC_SUCCESS_0X1)
    seed_subscription(
        provider,
        faster_subscription("heads"),
        faster_web3._utils.caching,
    )
    benchmark(run_1000, active_subscriptions, provider)


@pytest.mark.benchmark(group="PersistentConnection.process_subscriptions")
def test_process_subscriptions(benchmark: BenchmarkFixture):
    w3 = web3_persistent_w3(web3_socket_provider(SUBSCRIPTION_NOTIFICATION))
    benchmark(run_1000, w3.socket.process_subscriptions)


@pytest.mark.benchmark(group="PersistentConnection.process_subscriptions")
def test_faster_process_subscriptions(benchmark: BenchmarkFixture):
    w3 = faster_persistent_w3(faster_socket_provider(SUBSCRIPTION_NOTIFICATION))
    benchmark(run_1000, w3.socket.process_subscriptions)
