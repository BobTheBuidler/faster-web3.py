import pytest
import asyncio
import atexit

from pytest_codspeed import (
    BenchmarkFixture,
)
from web3.exceptions import (
    Web3ValueError,
)

from benchmarks.batching import (
    run_10,
    run_10_async,
    run_10_async_exc,
)
from benchmarks.web3.fixtures.persistent import (
    faster_caching_send_provider,
    faster_persistent_w3,
    web3_caching_send_provider,
    web3_persistent_w3,
)
from benchmarks.web3.fixtures.rpc import (
    rpc_success,
)
from benchmarks.web3.fixtures.subscriptions import (
    faster_duplicate_subscription_sequence,
    faster_subscription,
    faster_subscription_sequence,
    web3_duplicate_subscription_sequence,
    web3_subscription,
    web3_subscription_sequence,
)
from faster_web3.exceptions import (
    Web3ValueError as FasterWeb3ValueError,
)

SUBSCRIBE_RESPONSES = tuple(rpc_success(hex(index + 1), index) for index in range(100))
UNSUBSCRIBE_RESPONSES = tuple(rpc_success(True, index) for index in range(100))
TASK_LOOP = asyncio.new_event_loop()
atexit.register(TASK_LOOP.close)


def web3_manager(responses=SUBSCRIBE_RESPONSES):
    provider = web3_caching_send_provider(responses)
    return web3_persistent_w3(provider).subscription_manager


def faster_manager(responses=SUBSCRIBE_RESPONSES):
    provider = faster_caching_send_provider(responses)
    return faster_persistent_w3(provider).subscription_manager


def assign_subscription(manager, subscription, subscription_id):
    subscription.manager = manager
    subscription._id = subscription_id
    manager._add_subscription(subscription)
    return subscription


class SubscribeState:
    def __init__(self, manager_factory, subscription_factory):
        self.manager_factory = manager_factory
        self.subscription_factory = subscription_factory
        self.managers = ()
        self.subscriptions = ()
        self.index = 0

    def reset(self, *_args, **_kwargs):
        self.index = 0
        managers = []
        subscriptions = []
        for index in range(10):
            managers.append(self.manager_factory())
            subscriptions.append(self.subscription_factory(f"sub-{index}"))
        self.managers = tuple(managers)
        self.subscriptions = tuple(subscriptions)

    async def subscribe_next(self):
        manager = self.managers[self.index]
        subscription = self.subscriptions[self.index]
        self.index += 1
        return await manager.subscribe(subscription)


class SubscribeSequenceState:
    def __init__(self, manager_factory, sequence_factory):
        self.manager_factory = manager_factory
        self.sequence_factory = sequence_factory
        self.managers = ()
        self.subscription_sequences = ()
        self.index = 0

    def reset(self, *_args, **_kwargs):
        self.index = 0
        managers = []
        subscription_sequences = []
        for index in range(10):
            managers.append(self.manager_factory())
            subscription_sequences.append(self.sequence_factory(f"sub-{index}"))
        self.managers = tuple(managers)
        self.subscription_sequences = tuple(subscription_sequences)

    async def subscribe_next(self):
        manager = self.managers[self.index]
        subscriptions = self.subscription_sequences[self.index]
        self.index += 1
        return await manager.subscribe(subscriptions)


class UnsubscribeState:
    def __init__(self, manager_factory, subscription_factory, by):
        self.manager_factory = manager_factory
        self.subscription_factory = subscription_factory
        self.by = by
        self.managers = ()
        self.targets = ()
        self.index = 0

    def reset(self, *_args, **_kwargs):
        self.index = 0
        managers = []
        targets = []
        for index in range(10):
            manager = self.manager_factory(UNSUBSCRIBE_RESPONSES)
            subscription = assign_subscription(
                manager,
                self.subscription_factory(f"sub-{index}"),
                hex(index + 1),
            )
            managers.append(manager)
            targets.append(subscription.id if self.by == "id" else subscription)
        self.managers = tuple(managers)
        self.targets = tuple(targets)

    async def unsubscribe_next(self):
        manager = self.managers[self.index]
        target = self.targets[self.index]
        self.index += 1
        return await manager.unsubscribe(target)


class UnsubscribeAllState:
    def __init__(self, manager_factory, sequence_factory):
        self.manager_factory = manager_factory
        self.sequence_factory = sequence_factory
        self.managers = ()
        self.index = 0

    def reset(self, *_args, **_kwargs):
        self.index = 0
        managers = []
        for index in range(10):
            manager = self.manager_factory(UNSUBSCRIBE_RESPONSES)
            for offset, subscription in enumerate(
                self.sequence_factory(f"sub-{index}")
            ):
                assign_subscription(
                    manager, subscription, hex((index * 3) + offset + 1)
                )
            managers.append(manager)
        self.managers = tuple(managers)

    async def unsubscribe_all_next(self):
        manager = self.managers[self.index]
        self.index += 1
        return await manager.unsubscribe_all()


class UnsubscribeSequenceState:
    def __init__(self, manager_factory, sequence_factory):
        self.manager_factory = manager_factory
        self.sequence_factory = sequence_factory
        self.managers = ()
        self.targets = ()
        self.index = 0

    def reset(self, *_args, **_kwargs):
        self.index = 0
        managers = []
        targets = []
        for index in range(10):
            manager = self.manager_factory(UNSUBSCRIBE_RESPONSES)
            subscriptions = self.sequence_factory(f"sub-{index}")
            for offset, subscription in enumerate(subscriptions):
                assign_subscription(
                    manager, subscription, hex((index * 3) + offset + 1)
                )
            managers.append(manager)
            targets.append(subscriptions)
        self.managers = tuple(managers)
        self.targets = tuple(targets)

    async def unsubscribe_sequence_next(self):
        manager = self.managers[self.index]
        target = self.targets[self.index]
        self.index += 1
        return await manager.unsubscribe(target)


class DuplicateLabelState:
    def __init__(self, manager_factory, sequence_factory):
        self.manager_factory = manager_factory
        self.sequence_factory = sequence_factory
        self.managers = ()
        self.subscription_sequences = ()
        self.index = 0

    def reset(self, *_args, **_kwargs):
        self.index = 0
        managers = []
        subscription_sequences = []
        for index in range(10):
            managers.append(self.manager_factory())
            subscription_sequences.append(self.sequence_factory(f"duplicate-{index}"))
        self.managers = tuple(managers)
        self.subscription_sequences = tuple(subscription_sequences)

    async def subscribe_duplicate_next(self):
        manager = self.managers[self.index]
        subscriptions = self.subscription_sequences[self.index]
        self.index += 1
        return await manager.subscribe(subscriptions)


def successful_future():
    future = TASK_LOOP.create_future()
    future.set_result(None)
    return future


def exception_future():
    future = TASK_LOOP.create_future()
    future.set_exception(RuntimeError("handler failed"))
    return future


def pending_future():
    return TASK_LOOP.create_future()


class HandlerTaskCallbackState:
    def __init__(self, manager_factory, task_factory):
        self.manager_factory = manager_factory
        self.task_factory = task_factory
        self.managers = ()
        self.tasks = ()
        self.index = 0

    def reset(self, *_args, **_kwargs):
        self.index = 0
        managers = []
        tasks = []
        for _ in range(10):
            manager = self.manager_factory()
            task = self.task_factory()
            manager._tasks.add(task)
            managers.append(manager)
            tasks.append(task)
        self.managers = tuple(managers)
        self.tasks = tuple(tasks)

    def callback_next(self):
        manager = self.managers[self.index]
        task = self.tasks[self.index]
        self.index += 1
        return manager._handler_task_callback(task)


class CleanupTasksState:
    def __init__(self, manager_factory):
        self.manager_factory = manager_factory
        self.managers = ()
        self.index = 0

    def reset(self, *_args, **_kwargs):
        self.index = 0
        managers = []
        for _ in range(10):
            manager = self.manager_factory()
            manager._tasks.add(pending_future())
            managers.append(manager)
        self.managers = tuple(managers)

    async def cleanup_next(self):
        manager = self.managers[self.index]
        self.index += 1
        return await manager._cleanup_remaining_tasks()


async def subscribe_next(state):
    return await state.subscribe_next()


async def subscribe_sequence_next(state):
    return await state.subscribe_next()


async def unsubscribe_next(state):
    return await state.unsubscribe_next()


async def unsubscribe_all_next(state):
    return await state.unsubscribe_all_next()


async def unsubscribe_sequence_next(state):
    return await state.unsubscribe_sequence_next()


async def handle_subscriptions(manager):
    return await manager.handle_subscriptions()


async def subscribe_duplicate_next(state):
    return await state.subscribe_duplicate_next()


def handler_task_callback_next(state):
    return state.callback_next()


async def cleanup_tasks_next(state):
    return await state.cleanup_next()


@pytest.mark.benchmark(group="SubscriptionManager.subscribe")
def test_subscribe(benchmark: BenchmarkFixture):
    state = SubscribeState(web3_manager, web3_subscription)
    benchmark.pedantic(
        run_10_async,
        args=(subscribe_next, state),
        setup=state.reset,
        iterations=1,
    )


@pytest.mark.benchmark(group="SubscriptionManager.subscribe")
def test_faster_subscribe(benchmark: BenchmarkFixture):
    state = SubscribeState(faster_manager, faster_subscription)
    benchmark.pedantic(
        run_10_async,
        args=(subscribe_next, state),
        setup=state.reset,
        iterations=1,
    )


@pytest.mark.benchmark(group="SubscriptionManager.subscribe_sequence")
def test_subscribe_sequence(benchmark: BenchmarkFixture):
    state = SubscribeSequenceState(web3_manager, web3_subscription_sequence)
    benchmark.pedantic(
        run_10_async,
        args=(subscribe_sequence_next, state),
        setup=state.reset,
        iterations=1,
    )


@pytest.mark.benchmark(group="SubscriptionManager.subscribe_sequence")
def test_faster_subscribe_sequence(benchmark: BenchmarkFixture):
    state = SubscribeSequenceState(faster_manager, faster_subscription_sequence)
    benchmark.pedantic(
        run_10_async,
        args=(subscribe_sequence_next, state),
        setup=state.reset,
        iterations=1,
    )


@pytest.mark.benchmark(group="SubscriptionManager.unsubscribe_by_id")
def test_unsubscribe_by_id(benchmark: BenchmarkFixture):
    state = UnsubscribeState(web3_manager, web3_subscription, "id")
    benchmark.pedantic(
        run_10_async,
        args=(unsubscribe_next, state),
        setup=state.reset,
        iterations=1,
    )


@pytest.mark.benchmark(group="SubscriptionManager.unsubscribe_by_id")
def test_faster_unsubscribe_by_id(benchmark: BenchmarkFixture):
    state = UnsubscribeState(faster_manager, faster_subscription, "id")
    benchmark.pedantic(
        run_10_async,
        args=(unsubscribe_next, state),
        setup=state.reset,
        iterations=1,
    )


@pytest.mark.benchmark(group="SubscriptionManager.unsubscribe_by_object")
def test_unsubscribe_by_object(benchmark: BenchmarkFixture):
    state = UnsubscribeState(web3_manager, web3_subscription, "object")
    benchmark.pedantic(
        run_10_async,
        args=(unsubscribe_next, state),
        setup=state.reset,
        iterations=1,
    )


@pytest.mark.benchmark(group="SubscriptionManager.unsubscribe_by_object")
def test_faster_unsubscribe_by_object(benchmark: BenchmarkFixture):
    state = UnsubscribeState(faster_manager, faster_subscription, "object")
    benchmark.pedantic(
        run_10_async,
        args=(unsubscribe_next, state),
        setup=state.reset,
        iterations=1,
    )


@pytest.mark.benchmark(group="SubscriptionManager.unsubscribe_sequence")
def test_unsubscribe_sequence(benchmark: BenchmarkFixture):
    state = UnsubscribeSequenceState(web3_manager, web3_subscription_sequence)
    benchmark.pedantic(
        run_10_async,
        args=(unsubscribe_sequence_next, state),
        setup=state.reset,
        iterations=1,
    )


@pytest.mark.benchmark(group="SubscriptionManager.unsubscribe_sequence")
def test_faster_unsubscribe_sequence(benchmark: BenchmarkFixture):
    state = UnsubscribeSequenceState(faster_manager, faster_subscription_sequence)
    benchmark.pedantic(
        run_10_async,
        args=(unsubscribe_sequence_next, state),
        setup=state.reset,
        iterations=1,
    )


@pytest.mark.benchmark(group="SubscriptionManager.unsubscribe_all")
def test_unsubscribe_all(benchmark: BenchmarkFixture):
    state = UnsubscribeAllState(web3_manager, web3_subscription_sequence)
    benchmark.pedantic(
        run_10_async,
        args=(unsubscribe_all_next, state),
        setup=state.reset,
        iterations=1,
    )


@pytest.mark.benchmark(group="SubscriptionManager.unsubscribe_all")
def test_faster_unsubscribe_all(benchmark: BenchmarkFixture):
    state = UnsubscribeAllState(faster_manager, faster_subscription_sequence)
    benchmark.pedantic(
        run_10_async,
        args=(unsubscribe_all_next, state),
        setup=state.reset,
        iterations=1,
    )


@pytest.mark.benchmark(group="SubscriptionManager.handle_subscriptions")
def test_handle_subscriptions_no_handler(benchmark: BenchmarkFixture):
    benchmark(run_10_async, handle_subscriptions, web3_manager())


@pytest.mark.benchmark(group="SubscriptionManager.handle_subscriptions")
def test_faster_handle_subscriptions_no_handler(benchmark: BenchmarkFixture):
    benchmark(run_10_async, handle_subscriptions, faster_manager())


@pytest.mark.benchmark(group="SubscriptionManager._handler_task_callback_success")
def test_handler_task_callback_success(benchmark: BenchmarkFixture):
    state = HandlerTaskCallbackState(web3_manager, successful_future)
    benchmark.pedantic(
        run_10,
        args=(handler_task_callback_next, state),
        setup=state.reset,
        iterations=1,
    )


@pytest.mark.benchmark(group="SubscriptionManager._handler_task_callback_success")
def test_faster_handler_task_callback_success(benchmark: BenchmarkFixture):
    state = HandlerTaskCallbackState(faster_manager, successful_future)
    benchmark.pedantic(
        run_10,
        args=(handler_task_callback_next, state),
        setup=state.reset,
        iterations=1,
    )


@pytest.mark.benchmark(group="SubscriptionManager._handler_task_callback_exception")
def test_handler_task_callback_exception(benchmark: BenchmarkFixture):
    state = HandlerTaskCallbackState(web3_manager, exception_future)
    benchmark.pedantic(
        run_10,
        args=(handler_task_callback_next, state),
        setup=state.reset,
        iterations=1,
    )


@pytest.mark.benchmark(group="SubscriptionManager._handler_task_callback_exception")
def test_faster_handler_task_callback_exception(benchmark: BenchmarkFixture):
    state = HandlerTaskCallbackState(faster_manager, exception_future)
    benchmark.pedantic(
        run_10,
        args=(handler_task_callback_next, state),
        setup=state.reset,
        iterations=1,
    )


@pytest.mark.benchmark(group="SubscriptionManager._cleanup_remaining_tasks")
def test_cleanup_remaining_tasks(benchmark: BenchmarkFixture):
    state = CleanupTasksState(web3_manager)
    benchmark.pedantic(
        run_10_async,
        args=(cleanup_tasks_next, state),
        setup=state.reset,
        iterations=1,
    )


@pytest.mark.benchmark(group="SubscriptionManager._cleanup_remaining_tasks")
def test_faster_cleanup_remaining_tasks(benchmark: BenchmarkFixture):
    state = CleanupTasksState(faster_manager)
    benchmark.pedantic(
        run_10_async,
        args=(cleanup_tasks_next, state),
        setup=state.reset,
        iterations=1,
    )


@pytest.mark.benchmark(group="SubscriptionManager.duplicate_label")
def test_duplicate_custom_label_validation(benchmark: BenchmarkFixture):
    state = DuplicateLabelState(web3_manager, web3_duplicate_subscription_sequence)
    benchmark.pedantic(
        run_10_async_exc,
        args=(Web3ValueError, subscribe_duplicate_next, state),
        setup=state.reset,
        iterations=1,
    )


@pytest.mark.benchmark(group="SubscriptionManager.duplicate_label")
def test_faster_duplicate_custom_label_validation(benchmark: BenchmarkFixture):
    state = DuplicateLabelState(
        faster_manager,
        faster_duplicate_subscription_sequence,
    )
    benchmark.pedantic(
        run_10_async_exc,
        args=(FasterWeb3ValueError, subscribe_duplicate_next, state),
        setup=state.reset,
        iterations=1,
    )
