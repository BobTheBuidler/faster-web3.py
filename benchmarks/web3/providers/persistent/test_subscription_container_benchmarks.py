import pytest
from pytest_codspeed import (
    BenchmarkFixture,
)

import web3.providers.persistent.subscription_container

import faster_web3.providers.persistent.subscription_container

from benchmarks.batching import (
    run_100,
    run_1000,
)
from benchmarks.web3.fixtures.core import (
    HEX_2,
)
from benchmarks.web3.fixtures.rpc import (
    SUBSCRIPTION_ID_1,
)
from benchmarks.web3.fixtures.subscriptions import (
    HANDLED_SUBSCRIPTION_ID,
    SUBSCRIPTION_ID_3,
    assign_id,
    faster_handler_subscription,
    faster_subscription,
    faster_subscription_set,
    web3_handler_subscription,
    web3_subscription,
    web3_subscription_set,
)


def web3_container():
    container = web3.providers.persistent.subscription_container.SubscriptionContainer()
    for subscription in web3_subscription_set():
        container.add_subscription(subscription)
    return container


def faster_container():
    container = (
        faster_web3.providers.persistent.subscription_container.SubscriptionContainer()
    )
    for subscription in faster_subscription_set():
        container.add_subscription(subscription)
    return container


def web3_handler_container():
    container = web3_container()
    container.add_subscription(web3_handler_subscription())
    return container


def faster_handler_container():
    container = faster_container()
    container.add_subscription(faster_handler_subscription())
    return container


class RemoveState:
    def __init__(self, container_factory):
        self.container_factory = container_factory
        self.containers = ()
        self.index = 0

    def reset(self, *_args, **_kwargs):
        self.index = 0
        self.containers = tuple(self.container_factory() for _ in range(100))

    def remove_next(self):
        container = self.containers[self.index]
        self.index += 1
        subscription = container.get_by_id(SUBSCRIPTION_ID_1)
        return container.remove_subscription(subscription)


class AddState:
    def __init__(self, container_factory, subscription_factory):
        self.container_factory = container_factory
        self.subscription_factory = subscription_factory
        self.containers = ()
        self.subscriptions = ()
        self.index = 0

    def reset(self, *_args, **_kwargs):
        self.index = 0
        self.containers = tuple(self.container_factory() for _ in range(100))
        self.subscriptions = tuple(
            assign_id(self.subscription_factory(label=f"add-{index}"), hex(index + 10))
            for index in range(100)
        )

    def add_next(self):
        container = self.containers[self.index]
        subscription = self.subscriptions[self.index]
        self.index += 1
        return container.add_subscription(subscription)


def remove_subscription(state):
    return state.remove_next()


def add_subscription(state):
    return state.add_next()


@pytest.mark.benchmark(group="SubscriptionContainer.__len__")
def test_subscription_container_len(benchmark: BenchmarkFixture):
    container = web3_container()
    benchmark(run_1000, len, container)


@pytest.mark.benchmark(group="SubscriptionContainer.__len__")
def test_faster_subscription_container_len(benchmark: BenchmarkFixture):
    container = faster_container()
    benchmark(run_1000, len, container)


@pytest.mark.benchmark(group="SubscriptionContainer.__iter__")
def test_subscription_container_iter(benchmark: BenchmarkFixture):
    container = web3_container()
    benchmark(run_1000, tuple, container)


@pytest.mark.benchmark(group="SubscriptionContainer.__iter__")
def test_faster_subscription_container_iter(benchmark: BenchmarkFixture):
    container = faster_container()
    benchmark(run_1000, tuple, container)


@pytest.mark.benchmark(group="SubscriptionContainer.get_by_label")
@pytest.mark.parametrize("label", ("heads", "logs", "txs"))
def test_subscription_container_get_by_label(benchmark: BenchmarkFixture, label):
    container = web3_container()
    benchmark(run_1000, container.get_by_label, label)


@pytest.mark.benchmark(group="SubscriptionContainer.get_by_label")
@pytest.mark.parametrize("label", ("heads", "logs", "txs"))
def test_faster_subscription_container_get_by_label(
    benchmark: BenchmarkFixture, label
):
    container = faster_container()
    benchmark(run_1000, container.get_by_label, label)


@pytest.mark.benchmark(group="SubscriptionContainer.get_by_id")
@pytest.mark.parametrize(
    "subscription_id",
    (SUBSCRIPTION_ID_1, HEX_2, SUBSCRIPTION_ID_3),
)
def test_subscription_container_get_by_id(benchmark: BenchmarkFixture, subscription_id):
    container = web3_container()
    benchmark(run_1000, container.get_by_id, subscription_id)


@pytest.mark.benchmark(group="SubscriptionContainer.get_by_id")
@pytest.mark.parametrize(
    "subscription_id",
    (SUBSCRIPTION_ID_1, HEX_2, SUBSCRIPTION_ID_3),
)
def test_faster_subscription_container_get_by_id(
    benchmark: BenchmarkFixture, subscription_id
):
    container = faster_container()
    benchmark(run_1000, container.get_by_id, subscription_id)


@pytest.mark.benchmark(group="SubscriptionContainer.get_handler_subscription_by_id")
def test_subscription_container_get_handler_subscription_by_id(
    benchmark: BenchmarkFixture,
):
    container = web3_handler_container()
    benchmark(
        run_1000,
        container.get_handler_subscription_by_id,
        HANDLED_SUBSCRIPTION_ID,
    )


@pytest.mark.benchmark(group="SubscriptionContainer.get_handler_subscription_by_id")
def test_faster_subscription_container_get_handler_subscription_by_id(
    benchmark: BenchmarkFixture,
):
    container = faster_handler_container()
    benchmark(
        run_1000,
        container.get_handler_subscription_by_id,
        HANDLED_SUBSCRIPTION_ID,
    )


@pytest.mark.benchmark(group="SubscriptionContainer.add_subscription")
def test_subscription_container_add_subscription(benchmark: BenchmarkFixture):
    state = AddState(web3_container, web3_subscription)
    benchmark.pedantic(
        run_100,
        args=(add_subscription, state),
        setup=state.reset,
        iterations=1,
    )


@pytest.mark.benchmark(group="SubscriptionContainer.add_subscription")
def test_faster_subscription_container_add_subscription(benchmark: BenchmarkFixture):
    state = AddState(faster_container, faster_subscription)
    benchmark.pedantic(
        run_100,
        args=(add_subscription, state),
        setup=state.reset,
        iterations=1,
    )


@pytest.mark.benchmark(group="SubscriptionContainer.remove_subscription")
def test_subscription_container_remove_by_subscription(benchmark: BenchmarkFixture):
    state = RemoveState(web3_container)
    benchmark.pedantic(
        run_100,
        args=(remove_subscription, state),
        setup=state.reset,
        iterations=1,
    )


@pytest.mark.benchmark(group="SubscriptionContainer.remove_subscription")
def test_faster_subscription_container_remove_by_subscription(
    benchmark: BenchmarkFixture,
):
    state = RemoveState(faster_container)
    benchmark.pedantic(
        run_100,
        args=(remove_subscription, state),
        setup=state.reset,
        iterations=1,
    )
