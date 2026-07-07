import pytest

from pytest_codspeed import (
    BenchmarkFixture,
)
import web3._utils.caching.request_caching_validation
import web3._utils.rpc_abi

from benchmarks.batching import (
    run_1000,
    run_1000_async,
)
from benchmarks.web3.fixtures.core import (
    HASH32,
)
import faster_web3._utils.caching.request_caching_validation
import faster_web3._utils.rpc_abi

OLD_BLOCK_TS = 1_700_000_000
BLOCK_NUM = "0x1234"
BLOCK_HASH = HASH32


class CacheValidationProvider:
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


class AsyncCacheValidationProvider(CacheValidationProvider):
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
        run_1000,
        web3._utils.caching.request_caching_validation.validate_from_block_id_in_params,
        CacheValidationProvider(),
        params,
        {},
    )


@pytest.mark.benchmark(group="validate_from_block_id_in_params")
@pytest.mark.parametrize("params", block_id_cases, ids=block_id_ids)
def test_faster_validate_from_block_id_in_params(benchmark: BenchmarkFixture, params):
    benchmark(
        run_1000,
        faster_web3._utils.caching.request_caching_validation.validate_from_block_id_in_params,
        CacheValidationProvider(),
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
        run_1000,
        web3._utils.caching.request_caching_validation.validate_from_blocknum_in_result,
        CacheValidationProvider(),
        [],
        result,
    )


@pytest.mark.benchmark(group="validate_from_blocknum_in_result")
@pytest.mark.parametrize("result", blocknum_result_cases, ids=blocknum_result_ids)
def test_faster_validate_from_blocknum_in_result(benchmark: BenchmarkFixture, result):
    benchmark(
        run_1000,
        faster_web3._utils.caching.request_caching_validation.validate_from_blocknum_in_result,
        CacheValidationProvider(),
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
        run_1000,
        web3._utils.caching.request_caching_validation.validate_from_blockhash_in_params,
        CacheValidationProvider(),
        params,
        {},
    )


@pytest.mark.benchmark(group="validate_from_blockhash_in_params")
@pytest.mark.parametrize("params", blockhash_params_cases, ids=blockhash_params_ids)
def test_faster_validate_from_blockhash_in_params(benchmark: BenchmarkFixture, params):
    benchmark(
        run_1000,
        faster_web3._utils.caching.request_caching_validation.validate_from_blockhash_in_params,
        CacheValidationProvider(),
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
        AsyncCacheValidationProvider(),
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
        AsyncCacheValidationProvider(),
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
        AsyncCacheValidationProvider(),
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
        AsyncCacheValidationProvider(),
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
        AsyncCacheValidationProvider(),
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
        AsyncCacheValidationProvider(),
        params,
        {},
    )
