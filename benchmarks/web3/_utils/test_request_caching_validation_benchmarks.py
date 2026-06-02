import asyncio
import time

import pytest
from pytest_codspeed import BenchmarkFixture

import web3._utils.caching.request_caching_validation
import web3._utils.rpc_abi

import faster_web3._utils.caching.request_caching_validation
import faster_web3._utils.rpc_abi


def run_100(func, *args, **kwargs):
    for _ in range(1000):
        func(*args, **kwargs)


async def _run_1000_async(func, *args, **kwargs):
    for _ in range(100):
        await func(*args, **kwargs)


def run_1000_async(func, *args, **kwargs):
    loop = asyncio.new_event_loop()
    try:
        return loop.run_until_complete(_run_1000_async(func, *args, **kwargs))
    finally:
        loop.close()


NOW = int(time.time())
OLD_BLOCK_TS = NOW - 7200
BLOCK_NUM = "0x1234"
BLOCK_HASH = "0x" + "11" * 32


class FakeProvider:
    def __init__(self):
        self.cache_allowed_requests = True
        self.request_cache_validation_threshold = 3600

    def make_request(self, method, params):
        if method == faster_web3._utils.rpc_abi.RPC.eth_getBlockByNumber:
            return {
                "result": {
                    "number": params[0],
                    "timestamp": hex(OLD_BLOCK_TS),
                }
            }
        if method == faster_web3._utils.rpc_abi.RPC.eth_getBlockByHash:
            return {
                "result": {
                    "number": BLOCK_NUM,
                    "timestamp": hex(OLD_BLOCK_TS),
                }
            }
        return {"result": "0x1"}


class FakeAsyncProvider(FakeProvider):
    async def make_request(self, method, params):
        return super().make_request(method, params)


# --- validate_from_block_id_in_params ---

# Validate cache eligibility for block-number-in-params calls.
block_id_cases = [[BLOCK_NUM], ["0x1"], ["0x2"]]
block_id_ids = ["block-0x1234", "block-0x1", "block-0x2"]


@pytest.mark.benchmark(group="validate_from_block_id_in_params")
@pytest.mark.parametrize("params", block_id_cases, ids=block_id_ids)
def test_validate_from_block_id_in_params(benchmark: BenchmarkFixture, params):
    benchmark(
        run_100,
        web3._utils.caching.request_caching_validation.validate_from_block_id_in_params,
        FakeProvider(),
        params,
        {},
    )


@pytest.mark.benchmark(group="validate_from_block_id_in_params")
@pytest.mark.parametrize("params", block_id_cases, ids=block_id_ids)
def test_faster_validate_from_block_id_in_params(
    benchmark: BenchmarkFixture, params
):
    benchmark(
        run_100,
        faster_web3._utils.caching.request_caching_validation.validate_from_block_id_in_params,
        FakeProvider(),
        params,
        {},
    )


# --- validate_from_blocknum_in_result ---

# Transaction and block results are common caching inputs.
blocknum_result_cases = [
    {"blockNumber": BLOCK_NUM},
    {"number": BLOCK_NUM, "timestamp": hex(OLD_BLOCK_TS)},
]
blocknum_result_ids = ["tx-result", "block-result"]


@pytest.mark.benchmark(group="validate_from_blocknum_in_result")
@pytest.mark.parametrize("result", blocknum_result_cases, ids=blocknum_result_ids)
def test_validate_from_blocknum_in_result(benchmark: BenchmarkFixture, result):
    benchmark(
        run_100,
        web3._utils.caching.request_caching_validation.validate_from_blocknum_in_result,
        FakeProvider(),
        [],
        result,
    )


@pytest.mark.benchmark(group="validate_from_blocknum_in_result")
@pytest.mark.parametrize("result", blocknum_result_cases, ids=blocknum_result_ids)
def test_faster_validate_from_blocknum_in_result(
    benchmark: BenchmarkFixture, result
):
    benchmark(
        run_100,
        faster_web3._utils.caching.request_caching_validation.validate_from_blocknum_in_result,
        FakeProvider(),
        [],
        result,
    )


# --- validate_from_blockhash_in_params ---

# Hash-based lookups are common for tx and block queries.
blockhash_params_cases = [[BLOCK_HASH]]
blockhash_params_ids = ["hash-param"]


@pytest.mark.benchmark(group="validate_from_blockhash_in_params")
@pytest.mark.parametrize("params", blockhash_params_cases, ids=blockhash_params_ids)
def test_validate_from_blockhash_in_params(benchmark: BenchmarkFixture, params):
    benchmark(
        run_100,
        web3._utils.caching.request_caching_validation.validate_from_blockhash_in_params,
        FakeProvider(),
        params,
        {},
    )


@pytest.mark.benchmark(group="validate_from_blockhash_in_params")
@pytest.mark.parametrize("params", blockhash_params_cases, ids=blockhash_params_ids)
def test_faster_validate_from_blockhash_in_params(
    benchmark: BenchmarkFixture, params
):
    benchmark(
        run_100,
        faster_web3._utils.caching.request_caching_validation.validate_from_blockhash_in_params,
        FakeProvider(),
        params,
        {},
    )


# --- async_* validators ---

# Async variants mirror the sync validator behavior for block ids.
@pytest.mark.benchmark(group="async_validate_from_block_id_in_params")
@pytest.mark.parametrize("params", block_id_cases, ids=block_id_ids)
def test_async_validate_from_block_id_in_params(benchmark: BenchmarkFixture, params):
    benchmark(
        run_1000_async,
        web3._utils.caching.request_caching_validation.async_validate_from_block_id_in_params,
        FakeAsyncProvider(),
        params,
        {},
    )


# Async variants mirror the sync validator behavior for block ids.
@pytest.mark.benchmark(group="async_validate_from_block_id_in_params")
@pytest.mark.parametrize("params", block_id_cases, ids=block_id_ids)
def test_faster_async_validate_from_block_id_in_params(
    benchmark: BenchmarkFixture, params
):
    benchmark(
        run_1000_async,
        faster_web3._utils.caching.request_caching_validation.async_validate_from_block_id_in_params,
        FakeAsyncProvider(),
        params,
        {},
    )


# Async variants cover transaction and block result payloads.
@pytest.mark.benchmark(group="async_validate_from_blocknum_in_result")
@pytest.mark.parametrize("result", blocknum_result_cases, ids=blocknum_result_ids)
def test_async_validate_from_blocknum_in_result(benchmark: BenchmarkFixture, result):
    benchmark(
        run_1000_async,
        web3._utils.caching.request_caching_validation.async_validate_from_blocknum_in_result,
        FakeAsyncProvider(),
        [],
        result,
    )


# Async variants cover transaction and block result payloads.
@pytest.mark.benchmark(group="async_validate_from_blocknum_in_result")
@pytest.mark.parametrize("result", blocknum_result_cases, ids=blocknum_result_ids)
def test_faster_async_validate_from_blocknum_in_result(
    benchmark: BenchmarkFixture, result
):
    benchmark(
        run_1000_async,
        faster_web3._utils.caching.request_caching_validation.async_validate_from_blocknum_in_result,
        FakeAsyncProvider(),
        [],
        result,
    )


# Async variants cover hash-based lookups for cached params.
@pytest.mark.benchmark(group="async_validate_from_blockhash_in_params")
@pytest.mark.parametrize("params", blockhash_params_cases, ids=blockhash_params_ids)
def test_async_validate_from_blockhash_in_params(benchmark: BenchmarkFixture, params):
    benchmark(
        run_1000_async,
        web3._utils.caching.request_caching_validation.async_validate_from_blockhash_in_params,
        FakeAsyncProvider(),
        params,
        {},
    )


# Async variants cover hash-based lookups for cached params.
@pytest.mark.benchmark(group="async_validate_from_blockhash_in_params")
@pytest.mark.parametrize("params", blockhash_params_cases, ids=blockhash_params_ids)
def test_faster_async_validate_from_blockhash_in_params(
    benchmark: BenchmarkFixture, params
):
    benchmark(
        run_1000_async,
        faster_web3._utils.caching.request_caching_validation.async_validate_from_blockhash_in_params,
        FakeAsyncProvider(),
        params,
        {},
    )
