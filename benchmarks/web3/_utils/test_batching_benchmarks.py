import contextvars

import pytest
from pytest_codspeed import BenchmarkFixture

import web3._utils.batching
import web3.types

import faster_web3._utils.batching
import faster_web3.types
from benchmarks.batching import run_1000, run_1000_async
from benchmarks.web3._utils.rpc_fixtures import (
    BATCH_RESPONSES_MISSING_ID,
    BATCH_RESPONSES_ORDERED,
    BATCH_RESPONSES_UNORDERED,
)


def noop(value):
    return value


class FakeProvider:
    is_async = False
    has_persistent_connection = False

    def __init__(self):
        self._batching_context = contextvars.ContextVar("batching_context", default=None)

    @property
    def _is_batching(self):
        return self._batching_context.get() is not None


class FakeAsyncProvider(FakeProvider):
    is_async = True
    has_persistent_connection = False


class FakeManager:
    def _make_batch_request(self, requests_info):
        responses = []
        for i, _info in enumerate(requests_info):
            responses.append({"id": i, "result": "0x1"})
        return responses

    async def _async_make_batch_request(self, requests_info):
        responses = []
        for i, _info in enumerate(requests_info):
            responses.append({"id": i, "result": "0x1"})
        return responses


class FakeWeb3:
    def __init__(self, provider):
        self.provider = provider
        self.manager = FakeManager()


class FakeBatchPayload:
    def __init__(self, method, params):
        self._method = method
        self._params = params

    def call(self):
        return (
            (self._method, self._params),
            (noop, noop, noop),
        )


class FakeMethod:
    def __init__(self, method):
        self._method = method

    def __call__(self, params):
        return (
            (self._method, params),
            (noop, noop, noop),
        )


RPC_METHOD = faster_web3.types.RPCEndpoint("eth_blockNumber")


def _execute_batch_once(batcher_cls, provider_cls):
    batcher = batcher_cls(FakeWeb3(provider_cls()))
    payload = FakeBatchPayload(RPC_METHOD, [])
    for _ in range(10):
        batcher.add(payload)
    return batcher.execute()


async def _async_execute_batch_once(batcher_cls, provider_cls):
    batcher = batcher_cls(FakeWeb3(provider_cls()))
    payload = FakeBatchPayload(RPC_METHOD, [])
    for _ in range(10):
        batcher.add(payload)
    return await batcher.async_execute()


# --- sort_batch_response_by_response_ids ---

# Responses with ids, shuffled ids, and missing ids cover expected batching patterns.
sort_cases = [
    BATCH_RESPONSES_ORDERED,
    BATCH_RESPONSES_UNORDERED,
    BATCH_RESPONSES_MISSING_ID,
]
sort_ids = ["ordered", "unordered", "missing-id"]


@pytest.mark.benchmark(group="sort_batch_response_by_response_ids")
@pytest.mark.parametrize("responses", sort_cases, ids=sort_ids)
def test_sort_batch_response_by_response_ids(benchmark: BenchmarkFixture, responses):
    benchmark(run_1000, web3._utils.batching.sort_batch_response_by_response_ids, responses)


@pytest.mark.benchmark(group="sort_batch_response_by_response_ids")
@pytest.mark.parametrize("responses", sort_cases, ids=sort_ids)
def test_faster_sort_batch_response_by_response_ids(
    benchmark: BenchmarkFixture, responses
):
    benchmark(
        run_1000,
        faster_web3._utils.batching.sort_batch_response_by_response_ids,
        responses,
    )


# --- RequestBatcher.add / add_mapping / execute ---

@pytest.mark.benchmark(group="RequestBatcher-add")
def test_request_batcher_add(benchmark: BenchmarkFixture):
    batcher = web3._utils.batching.RequestBatcher(FakeWeb3(FakeProvider()))
    payload = FakeBatchPayload(RPC_METHOD, [])
    benchmark(run_1000, batcher.add, payload)


@pytest.mark.benchmark(group="RequestBatcher-add")
def test_faster_request_batcher_add(benchmark: BenchmarkFixture):
    batcher = faster_web3._utils.batching.RequestBatcher(FakeWeb3(FakeProvider()))
    payload = FakeBatchPayload(RPC_METHOD, [])
    benchmark(run_1000, batcher.add, payload)


@pytest.mark.benchmark(group="RequestBatcher-add_mapping")
def test_request_batcher_add_mapping(benchmark: BenchmarkFixture):
    batcher = web3._utils.batching.RequestBatcher(FakeWeb3(FakeProvider()))
    payload = {FakeMethod(RPC_METHOD): [[], []]}
    benchmark(run_1000, batcher.add_mapping, payload)


@pytest.mark.benchmark(group="RequestBatcher-add_mapping")
def test_faster_request_batcher_add_mapping(benchmark: BenchmarkFixture):
    batcher = faster_web3._utils.batching.RequestBatcher(FakeWeb3(FakeProvider()))
    payload = {FakeMethod(RPC_METHOD): [[], []]}
    benchmark(run_1000, batcher.add_mapping, payload)


@pytest.mark.benchmark(group="RequestBatcher-execute")
def test_request_batcher_execute(benchmark: BenchmarkFixture):
    benchmark(
        run_1000,
        _execute_batch_once,
        web3._utils.batching.RequestBatcher,
        FakeProvider,
    )


@pytest.mark.benchmark(group="RequestBatcher-execute")
def test_faster_request_batcher_execute(benchmark: BenchmarkFixture):
    benchmark(
        run_1000,
        _execute_batch_once,
        faster_web3._utils.batching.RequestBatcher,
        FakeProvider,
    )


# --- RequestBatcher.async_execute ---

@pytest.mark.benchmark(group="RequestBatcher-async_execute")
def test_request_batcher_async_execute(benchmark: BenchmarkFixture):
    benchmark(
        run_1000_async,
        _async_execute_batch_once,
        web3._utils.batching.RequestBatcher,
        FakeAsyncProvider,
    )


@pytest.mark.benchmark(group="RequestBatcher-async_execute")
def test_faster_request_batcher_async_execute(benchmark: BenchmarkFixture):
    benchmark(
        run_1000_async,
        _async_execute_batch_once,
        faster_web3._utils.batching.RequestBatcher,
        FakeAsyncProvider,
    )
