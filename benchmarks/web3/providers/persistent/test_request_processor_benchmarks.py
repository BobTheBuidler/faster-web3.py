import pytest
from pytest_codspeed import (
    BenchmarkFixture,
)

import web3._utils.caching

import faster_web3._utils.caching

from benchmarks.batching import (
    run_10_async,
    run_100,
    run_1000,
)
from benchmarks.web3.fixtures.core import (
    HEX_1,
)
from benchmarks.web3.fixtures.persistent import (
    RESPONSE_FORMATTERS,
    cache_request_info,
    faster_request_processor,
    seed_active_subscription,
    web3_request_processor,
)
from benchmarks.web3.fixtures.rpc import (
    BATCH_JSONRPC_RESPONSES_ORDERED,
    DEFAULT_RPC_ID,
    RPC_SUCCESS_0X1,
    SUBSCRIPTION_ID_1,
    SUBSCRIPTION_NOTIFICATION,
    rpc_success,
)


RPC_REQUEST = {"id": DEFAULT_RPC_ID, "method": "eth_chainId", "params": []}
UNSUBSCRIBE_RESPONSE = rpc_success(True, DEFAULT_RPC_ID)
web3_processor = web3_request_processor
faster_processor = faster_request_processor


def cache_duplicate_request_info(processor):
    return processor.cache_request_information(
        RPC_REQUEST["id"],
        RPC_REQUEST["method"],
        RPC_REQUEST["params"],
        RESPONSE_FORMATTERS,
    )


def seed_duplicate_cached_request(processor, cache_module):
    cached_requests_key = cache_module.generate_cache_key(
        (RPC_REQUEST["method"], RPC_REQUEST["params"])
    )
    processor._provider._request_cache._data[cached_requests_key] = RPC_SUCCESS_0X1
    cache_request_info(processor)


class CachedRequestState:
    def __init__(self, processor, cache_module):
        self.processor = processor
        self.cache_module = cache_module
        self.keys = ()
        self.index = 0

    def reset(self, *_args, **_kwargs):
        self.processor.clear_caches()
        self.index = 0
        keys = []
        for request_id in range(100):
            key = self.processor.cache_request_information(
                request_id,
                RPC_REQUEST["method"],
                [request_id],
                RESPONSE_FORMATTERS,
            )
            keys.append(key)
        self.keys = tuple(keys)

    def pop_next(self):
        key = self.keys[self.index]
        self.index += 1
        return self.processor.pop_cached_request_information(key)


class RawResponseState:
    def __init__(self, processor, cache_module):
        self.processor = processor
        self.cache_module = cache_module
        self.keys = ()
        self.index = 0

    def reset(self, *_args, **_kwargs):
        self.processor.clear_caches()
        self.index = 0
        keys = []
        for request_id in range(10):
            response = rpc_success(HEX_1, request_id)
            cache_key = self.cache_module.generate_cache_key(request_id)
            self.processor._request_response_cache.cache(cache_key, response)
            keys.append(cache_key)
        self.keys = tuple(keys)

    async def pop_next(self):
        key = self.keys[self.index]
        self.index += 1
        return await self.processor.pop_raw_response(key)


class SubscriptionQueueState:
    def __init__(self, processor, preload_count):
        self.processor = processor
        self.preload_count = preload_count

    def reset(self, *_args, **_kwargs):
        self.processor.clear_caches()
        for _ in range(self.preload_count):
            self.processor._subscription_response_queue.put_nowait(
                SUBSCRIPTION_NOTIFICATION
            )


class ClearCachesState:
    def __init__(self, processors):
        self.processors = processors
        self.index = 0

    def reset(self, *_args, **_kwargs):
        self.index = 0
        for processor in self.processors:
            processor.clear_caches()
            cache_request_info(processor)
            processor._request_response_cache.cache("response", RPC_SUCCESS_0X1)

    def clear_next(self):
        processor = self.processors[self.index]
        self.index += 1
        return processor.clear_caches()


class UnsubscribeCleanupState:
    def __init__(self, processor_factory, cache_module):
        self.processor_factory = processor_factory
        self.cache_module = cache_module
        self.processors = ()
        self.index = 0

    def reset(self, *_args, **_kwargs):
        self.index = 0
        processors = []
        for _ in range(100):
            processor = self.processor_factory()
            subscribe_info = self.cache_module.RequestInformation(
                "eth_subscribe",
                ["newHeads"],
                RESPONSE_FORMATTERS,
                subscription_id=SUBSCRIPTION_ID_1,
            )
            unsubscribe_info = self.cache_module.RequestInformation(
                "eth_unsubscribe",
                [SUBSCRIPTION_ID_1],
                RESPONSE_FORMATTERS,
            )
            processor._request_information_cache.cache(
                self.cache_module.generate_cache_key(SUBSCRIPTION_ID_1),
                subscribe_info,
            )
            processor._request_information_cache.cache(
                self.cache_module.generate_cache_key(DEFAULT_RPC_ID),
                unsubscribe_info,
            )
            processors.append(processor)
        self.processors = tuple(processors)

    def cleanup_next(self):
        processor = self.processors[self.index]
        self.index += 1
        return processor.get_request_information_for_response(UNSUBSCRIBE_RESPONSE)


def active_subscriptions(processor):
    return processor.active_subscriptions


def get_request_information(processor, response):
    return processor.get_request_information_for_response(response)


def pop_cached_request_information(state):
    return state.pop_next()


async def pop_raw_response(state):
    return await state.pop_next()


async def cache_raw_response(processor):
    await processor.cache_raw_response(RPC_SUCCESS_0X1)


async def cache_subscription_response(processor):
    await processor.cache_raw_response(SUBSCRIPTION_NOTIFICATION, subscription=True)


async def pop_subscription_response(processor):
    return await processor.pop_raw_response(subscription=True)


def clear_caches(state):
    return state.clear_next()


def reset_handler_subscription_queue(processor):
    return processor._reset_handler_subscription_queue()


def unsubscribe_cleanup(state):
    return state.cleanup_next()


@pytest.mark.benchmark(group="RequestProcessor.active_subscriptions")
def test_active_subscriptions(benchmark: BenchmarkFixture):
    processor = web3_processor()
    seed_active_subscription(processor, web3._utils.caching)
    benchmark(run_1000, active_subscriptions, processor)


@pytest.mark.benchmark(group="RequestProcessor.active_subscriptions")
def test_faster_active_subscriptions(benchmark: BenchmarkFixture):
    processor = faster_processor()
    seed_active_subscription(processor, faster_web3._utils.caching)
    benchmark(run_1000, active_subscriptions, processor)


@pytest.mark.benchmark(group="RequestProcessor.cache_request_information")
def test_cache_request_information(benchmark: BenchmarkFixture):
    processor = web3_processor()
    benchmark(run_1000, cache_request_info, processor)


@pytest.mark.benchmark(group="RequestProcessor.cache_request_information")
def test_faster_cache_request_information(benchmark: BenchmarkFixture):
    processor = faster_processor()
    benchmark(run_1000, cache_request_info, processor)


@pytest.mark.benchmark(group="RequestProcessor.cache_request_information_duplicate")
def test_cache_request_information_duplicate(benchmark: BenchmarkFixture):
    processor = web3_processor()
    seed_duplicate_cached_request(processor, web3._utils.caching)
    benchmark(run_1000, cache_duplicate_request_info, processor)


@pytest.mark.benchmark(group="RequestProcessor.cache_request_information_duplicate")
def test_faster_cache_request_information_duplicate(benchmark: BenchmarkFixture):
    processor = faster_processor()
    seed_duplicate_cached_request(processor, faster_web3._utils.caching)
    benchmark(run_1000, cache_duplicate_request_info, processor)


@pytest.mark.benchmark(group="RequestProcessor.pop_cached_request_information")
def test_pop_cached_request_information(benchmark: BenchmarkFixture):
    state = CachedRequestState(web3_processor(), web3._utils.caching)
    benchmark.pedantic(
        run_100,
        args=(pop_cached_request_information, state),
        setup=state.reset,
        iterations=1,
    )


@pytest.mark.benchmark(group="RequestProcessor.pop_cached_request_information")
def test_faster_pop_cached_request_information(benchmark: BenchmarkFixture):
    state = CachedRequestState(faster_processor(), faster_web3._utils.caching)
    benchmark.pedantic(
        run_100,
        args=(pop_cached_request_information, state),
        setup=state.reset,
        iterations=1,
    )


@pytest.mark.benchmark(group="RequestProcessor.get_request_information_for_response")
def test_get_request_information_for_subscription(benchmark: BenchmarkFixture):
    processor = web3_processor()
    seed_active_subscription(processor, web3._utils.caching)
    benchmark(run_1000, get_request_information, processor, SUBSCRIPTION_NOTIFICATION)


@pytest.mark.benchmark(group="RequestProcessor.get_request_information_for_response")
def test_faster_get_request_information_for_subscription(
    benchmark: BenchmarkFixture,
):
    processor = faster_processor()
    seed_active_subscription(processor, faster_web3._utils.caching)
    benchmark(run_1000, get_request_information, processor, SUBSCRIPTION_NOTIFICATION)


@pytest.mark.benchmark(group="RequestProcessor.unsubscribe_cleanup")
def test_unsubscribe_cleanup(benchmark: BenchmarkFixture):
    state = UnsubscribeCleanupState(web3_processor, web3._utils.caching)
    benchmark.pedantic(
        run_100,
        args=(unsubscribe_cleanup, state),
        setup=state.reset,
        iterations=1,
    )


@pytest.mark.benchmark(group="RequestProcessor.unsubscribe_cleanup")
def test_faster_unsubscribe_cleanup(benchmark: BenchmarkFixture):
    state = UnsubscribeCleanupState(faster_processor, faster_web3._utils.caching)
    benchmark.pedantic(
        run_100,
        args=(unsubscribe_cleanup, state),
        setup=state.reset,
        iterations=1,
    )


@pytest.mark.benchmark(group="RequestProcessor._is_batch_response")
def test_is_batch_response(benchmark: BenchmarkFixture):
    processor = web3_processor()
    benchmark(run_1000, processor._is_batch_response, BATCH_JSONRPC_RESPONSES_ORDERED)


@pytest.mark.benchmark(group="RequestProcessor._is_batch_response")
def test_faster_is_batch_response(benchmark: BenchmarkFixture):
    processor = faster_processor()
    benchmark(run_1000, processor._is_batch_response, BATCH_JSONRPC_RESPONSES_ORDERED)


@pytest.mark.benchmark(group="RequestProcessor.cache_raw_response")
def test_cache_raw_response(benchmark: BenchmarkFixture):
    benchmark(run_10_async, cache_raw_response, web3_processor())


@pytest.mark.benchmark(group="RequestProcessor.cache_raw_response")
def test_faster_cache_raw_response(benchmark: BenchmarkFixture):
    benchmark(run_10_async, cache_raw_response, faster_processor())


@pytest.mark.benchmark(group="RequestProcessor.pop_raw_response")
def test_pop_raw_response(benchmark: BenchmarkFixture):
    state = RawResponseState(web3_processor(), web3._utils.caching)
    benchmark.pedantic(
        run_10_async,
        args=(pop_raw_response, state),
        setup=state.reset,
        iterations=1,
    )


@pytest.mark.benchmark(group="RequestProcessor.pop_raw_response")
def test_faster_pop_raw_response(benchmark: BenchmarkFixture):
    state = RawResponseState(faster_processor(), faster_web3._utils.caching)
    benchmark.pedantic(
        run_10_async,
        args=(pop_raw_response, state),
        setup=state.reset,
        iterations=1,
    )


@pytest.mark.benchmark(group="RequestProcessor.subscription_queue")
def test_subscription_queue(benchmark: BenchmarkFixture):
    state = SubscriptionQueueState(web3_processor(), 0)
    benchmark.pedantic(
        run_10_async,
        args=(cache_subscription_response, state.processor),
        setup=state.reset,
        iterations=1,
    )


@pytest.mark.benchmark(group="RequestProcessor.subscription_queue")
def test_faster_subscription_queue(benchmark: BenchmarkFixture):
    state = SubscriptionQueueState(faster_processor(), 0)
    benchmark.pedantic(
        run_10_async,
        args=(cache_subscription_response, state.processor),
        setup=state.reset,
        iterations=1,
    )


@pytest.mark.benchmark(group="RequestProcessor.pop_subscription_queue")
def test_pop_subscription_queue(benchmark: BenchmarkFixture):
    state = SubscriptionQueueState(web3_processor(), 10)
    benchmark.pedantic(
        run_10_async,
        args=(pop_subscription_response, state.processor),
        setup=state.reset,
        iterations=1,
    )


@pytest.mark.benchmark(group="RequestProcessor.pop_subscription_queue")
def test_faster_pop_subscription_queue(benchmark: BenchmarkFixture):
    state = SubscriptionQueueState(faster_processor(), 10)
    benchmark.pedantic(
        run_10_async,
        args=(pop_subscription_response, state.processor),
        setup=state.reset,
        iterations=1,
    )


@pytest.mark.benchmark(group="RequestProcessor.clear_caches")
def test_clear_caches(benchmark: BenchmarkFixture):
    state = ClearCachesState(tuple(web3_processor() for _ in range(100)))
    benchmark.pedantic(
        run_100,
        args=(clear_caches, state),
        setup=state.reset,
        iterations=1,
    )


@pytest.mark.benchmark(group="RequestProcessor.clear_caches")
def test_faster_clear_caches(benchmark: BenchmarkFixture):
    state = ClearCachesState(tuple(faster_processor() for _ in range(100)))
    benchmark.pedantic(
        run_100,
        args=(clear_caches, state),
        setup=state.reset,
        iterations=1,
    )


@pytest.mark.benchmark(group="RequestProcessor._reset_handler_subscription_queue")
def test_reset_handler_subscription_queue(benchmark: BenchmarkFixture):
    benchmark(run_1000, reset_handler_subscription_queue, web3_processor())


@pytest.mark.benchmark(group="RequestProcessor._reset_handler_subscription_queue")
def test_faster_reset_handler_subscription_queue(benchmark: BenchmarkFixture):
    benchmark(run_1000, reset_handler_subscription_queue, faster_processor())
