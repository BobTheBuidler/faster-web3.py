import threading
from unittest.mock import (
    patch,
)

import pytest
from pytest_codspeed import (
    BenchmarkFixture,
)

import web3
import web3._utils.caching.caching_utils
import web3._utils.rpc_abi
from web3._utils.empty import (
    empty as web3_empty,
)

import faster_web3
import faster_web3._utils.caching.caching_utils
import faster_web3._utils.rpc_abi
from faster_web3._utils.empty import (
    empty as faster_empty,
)

from benchmarks.batching import (
    run_10_async,
    run_100,
    run_1000,
)
from benchmarks.web3.fixtures.blocks import (
    CACHE_BLOCK_RESPONSE_BYTES,
)
from benchmarks.web3.fixtures.core import (
    HASH32,
)
from benchmarks.web3.fixtures.formatters import (
    RAW_BLOCK_DICT,
    RAW_BLOCK_RPC_RESPONSE,
    RAW_TX_DICT,
    RAW_TX_RPC_RESPONSE,
)
from benchmarks.web3.fixtures.http import (
    AIOHTTP_CLIENT_SESSION_POST,
    REQUESTS_SESSION_POST,
    StaticAiohttpResponse,
    StaticResponse,
    make_static_aiohttp_post,
    make_static_requests_post,
)
from benchmarks.web3.fixtures.providers import (
    faster_async_http_provider,
    faster_http_provider,
    web3_async_http_provider,
    web3_http_provider,
)
from benchmarks.web3.fixtures.rpc import (
    RPC_ERROR_MINUS_32000,
    RPC_NULL_RESULT,
    RPC_SUCCESS_0X1,
    RPC_SUCCESS_0X1_BYTES,
)


BLOCK_RESPONSE = RAW_BLOCK_RPC_RESPONSE
TX_RESPONSE = RAW_TX_RPC_RESPONSE

CHAIN_HTTP_RESPONSE = StaticResponse(RPC_SUCCESS_0X1_BYTES, RPC_SUCCESS_0X1)
BLOCK_HTTP_RESPONSE = StaticResponse(
    CACHE_BLOCK_RESPONSE_BYTES,
    RAW_BLOCK_RPC_RESPONSE,
)
CHAIN_AIOHTTP_RESPONSE = StaticAiohttpResponse(RPC_SUCCESS_0X1_BYTES, RPC_SUCCESS_0X1)
BLOCK_AIOHTTP_RESPONSE = StaticAiohttpResponse(
    CACHE_BLOCK_RESPONSE_BYTES,
    RAW_BLOCK_RPC_RESPONSE,
)
requests_post = make_static_requests_post(CHAIN_HTTP_RESPONSE)
requests_block_post = make_static_requests_post(BLOCK_HTTP_RESPONSE)
aiohttp_post = make_static_aiohttp_post(CHAIN_AIOHTTP_RESPONSE)
aiohttp_block_post = make_static_aiohttp_post(BLOCK_AIOHTTP_RESPONSE)

web3_provider = web3_http_provider
faster_provider = faster_http_provider
web3_async_provider = web3_async_http_provider
faster_async_provider = faster_async_http_provider


def sync_request(_provider, method, _params):
    if method == web3._utils.rpc_abi.RPC.eth_getTransactionByHash:
        return TX_RESPONSE
    return RPC_SUCCESS_0X1


async def async_request(_provider, method, _params):
    if method == web3._utils.rpc_abi.RPC.eth_getTransactionByHash:
        return TX_RESPONSE
    return RPC_SUCCESS_0X1


class RequestSequence:
    def __init__(self, params):
        self._params = tuple(params)
        self._count = len(self._params)
        self._index = 0

    def next_params(self):
        params = self._params[self._index % self._count]
        self._index += 1
        return params


class ProviderSequence:
    def __init__(self, providers, empty_value):
        self._providers = providers
        self._empty_value = empty_value
        self._index = 0

    def reset(self, *_args, **_kwargs):
        self._index = 0
        for provider in self._providers:
            provider.request_cache_validation_threshold = self._empty_value

    def next_provider(self):
        provider = self._providers[self._index]
        self._index += 1
        return provider


def set_threshold_sequence_call(sequence, fn):
    return fn(sequence.next_provider())


async def async_set_threshold_sequence_call(sequence, fn):
    return await fn(sequence.next_provider())


def sync_cache_miss_call(wrapped, provider, method, sequence):
    return wrapped(provider, method, sequence.next_params())


async def async_cache_miss_call(wrapped, provider, method, sequence):
    return await wrapped(provider, method, sequence.next_params())


def seed_cache(cache_module, provider, method, params, response):
    cache_key = cache_module.generate_cache_key(
        f"{threading.get_ident()}:{(method, params)}"
    )
    provider._request_cache.cache(cache_key, response)


def make_web3_threshold_sequence():
    return ProviderSequence(
        tuple(web3_provider(threshold=web3_empty) for _ in range(100)),
        web3_empty,
    )


def make_faster_threshold_sequence():
    return ProviderSequence(
        tuple(faster_provider(threshold=faster_empty) for _ in range(100)),
        faster_empty,
    )


def make_web3_async_threshold_sequence():
    return ProviderSequence(
        tuple(web3_async_provider(threshold=web3_empty) for _ in range(10)),
        web3_empty,
    )


def make_faster_async_threshold_sequence():
    return ProviderSequence(
        tuple(faster_async_provider(threshold=faster_empty) for _ in range(10)),
        faster_empty,
    )


CACHE_KEY_CASES = (
    b"\x11" * 32,
    "eth_getBalance",
    True,
    None,
    123456,
    {"method": "eth_getBalance", "params": ["0x" + "1" * 40, "latest"]},
    ["0x" + "1" * 40, "latest"],
)
SHOULD_CACHE_CASES = (
    ("always-cache", web3._utils.rpc_abi.RPC.eth_chainId, [], RPC_SUCCESS_0X1),
    ("error", web3._utils.rpc_abi.RPC.eth_chainId, [], RPC_ERROR_MINUS_32000),
    ("null", web3._utils.rpc_abi.RPC.eth_chainId, [], RPC_NULL_RESULT),
    (
        "block-in-result",
        web3._utils.rpc_abi.RPC.eth_getBlockByHash,
        [HASH32, False],
        BLOCK_RESPONSE,
    ),
    (
        "tx-block-in-result",
        web3._utils.rpc_abi.RPC.eth_getTransactionByHash,
        [RAW_TX_DICT["hash"]],
        TX_RESPONSE,
    ),
    (
        "blockhash-in-params",
        web3._utils.rpc_abi.RPC.eth_getUncleCountByBlockHash,
        [HASH32],
        RPC_SUCCESS_0X1,
    ),
)
WRAPPER_METHOD = web3._utils.rpc_abi.RPC.eth_chainId
MISS_METHOD = web3._utils.rpc_abi.RPC.eth_getTransactionByHash
MISS_PARAMS = tuple((["0x" + f"{index:064x}"],) for index in range(100))


@pytest.mark.benchmark(group="generate_cache_key")
@pytest.mark.parametrize("value", CACHE_KEY_CASES)
def test_generate_cache_key(benchmark: BenchmarkFixture, value):
    benchmark(run_1000, web3._utils.caching.caching_utils.generate_cache_key, value)


@pytest.mark.benchmark(group="generate_cache_key")
@pytest.mark.parametrize("value", CACHE_KEY_CASES)
def test_faster_generate_cache_key(benchmark: BenchmarkFixture, value):
    benchmark(
        run_1000, faster_web3._utils.caching.caching_utils.generate_cache_key, value
    )


@pytest.mark.benchmark(group="set_threshold_if_empty")
def test_set_threshold_if_empty(benchmark: BenchmarkFixture):
    sequence = make_web3_threshold_sequence()
    with patch(REQUESTS_SESSION_POST, new=requests_post):
        benchmark.pedantic(
            run_100,
            args=(
                set_threshold_sequence_call,
                sequence,
                web3._utils.caching.caching_utils.set_threshold_if_empty,
            ),
            setup=sequence.reset,
            iterations=1,
        )


@pytest.mark.benchmark(group="set_threshold_if_empty")
def test_faster_set_threshold_if_empty(benchmark: BenchmarkFixture):
    sequence = make_faster_threshold_sequence()
    with patch(REQUESTS_SESSION_POST, new=requests_post):
        benchmark.pedantic(
            run_100,
            args=(
                set_threshold_sequence_call,
                sequence,
                faster_web3._utils.caching.caching_utils.set_threshold_if_empty,
            ),
            setup=sequence.reset,
            iterations=1,
        )


@pytest.mark.benchmark(group="async_set_threshold_if_empty")
def test_async_set_threshold_if_empty(benchmark: BenchmarkFixture):
    sequence = make_web3_async_threshold_sequence()
    with patch(AIOHTTP_CLIENT_SESSION_POST, new=aiohttp_post):
        benchmark.pedantic(
            run_10_async,
            args=(
                async_set_threshold_sequence_call,
                sequence,
                web3._utils.caching.caching_utils.async_set_threshold_if_empty,
            ),
            setup=sequence.reset,
            iterations=1,
        )


@pytest.mark.benchmark(group="async_set_threshold_if_empty")
def test_faster_async_set_threshold_if_empty(benchmark: BenchmarkFixture):
    sequence = make_faster_async_threshold_sequence()
    with patch(AIOHTTP_CLIENT_SESSION_POST, new=aiohttp_post):
        benchmark.pedantic(
            run_10_async,
            args=(
                async_set_threshold_sequence_call,
                sequence,
                faster_web3._utils.caching.caching_utils.async_set_threshold_if_empty,
            ),
            setup=sequence.reset,
            iterations=1,
        )


@pytest.mark.benchmark(group="_should_cache_response")
@pytest.mark.parametrize("case,method,params,response", SHOULD_CACHE_CASES)
def test_should_cache_response(
    benchmark: BenchmarkFixture, case, method, params, response
):
    provider = web3_provider()
    with patch(REQUESTS_SESSION_POST, new=requests_block_post):
        benchmark(
            run_100,
            web3._utils.caching.caching_utils._should_cache_response,
            provider,
            method,
            params,
            response,
        )


@pytest.mark.benchmark(group="_should_cache_response")
@pytest.mark.parametrize("case,method,params,response", SHOULD_CACHE_CASES)
def test_faster_should_cache_response(
    benchmark: BenchmarkFixture, case, method, params, response
):
    provider = faster_provider()
    with patch(REQUESTS_SESSION_POST, new=requests_block_post):
        benchmark(
            run_100,
            faster_web3._utils.caching.caching_utils._should_cache_response,
            provider,
            method,
            params,
            response,
        )


@pytest.mark.benchmark(group="_async_should_cache_response")
@pytest.mark.parametrize("case,method,params,response", SHOULD_CACHE_CASES)
def test_async_should_cache_response(
    benchmark: BenchmarkFixture, case, method, params, response
):
    provider = web3_async_provider()
    with patch(AIOHTTP_CLIENT_SESSION_POST, new=aiohttp_block_post):
        benchmark(
            run_10_async,
            web3._utils.caching.caching_utils._async_should_cache_response,
            provider,
            method,
            params,
            response,
        )


@pytest.mark.benchmark(group="_async_should_cache_response")
@pytest.mark.parametrize("case,method,params,response", SHOULD_CACHE_CASES)
def test_faster_async_should_cache_response(
    benchmark: BenchmarkFixture, case, method, params, response
):
    provider = faster_async_provider()
    with patch(AIOHTTP_CLIENT_SESSION_POST, new=aiohttp_block_post):
        benchmark(
            run_10_async,
            faster_web3._utils.caching.caching_utils._async_should_cache_response,
            provider,
            method,
            params,
            response,
        )


@pytest.mark.benchmark(group="handle_request_caching_disabled")
def test_handle_request_caching_disabled(benchmark: BenchmarkFixture):
    provider = web3_provider(cache_allowed=False)
    wrapped = web3._utils.caching.caching_utils.handle_request_caching(sync_request)
    benchmark(run_100, wrapped, provider, WRAPPER_METHOD, [])


@pytest.mark.benchmark(group="handle_request_caching_disabled")
def test_faster_handle_request_caching_disabled(benchmark: BenchmarkFixture):
    provider = faster_provider(cache_allowed=False)
    wrapped = faster_web3._utils.caching.caching_utils.handle_request_caching(
        sync_request
    )
    benchmark(run_100, wrapped, provider, WRAPPER_METHOD, [])


@pytest.mark.benchmark(group="handle_request_caching_miss")
def test_handle_request_caching_miss(benchmark: BenchmarkFixture):
    provider = web3_provider()
    wrapped = web3._utils.caching.caching_utils.handle_request_caching(sync_request)
    sequence = RequestSequence(MISS_PARAMS)
    with patch(REQUESTS_SESSION_POST, new=requests_block_post):
        benchmark(
            run_100,
            sync_cache_miss_call,
            wrapped,
            provider,
            MISS_METHOD,
            sequence,
        )


@pytest.mark.benchmark(group="handle_request_caching_miss")
def test_faster_handle_request_caching_miss(benchmark: BenchmarkFixture):
    provider = faster_provider()
    wrapped = faster_web3._utils.caching.caching_utils.handle_request_caching(
        sync_request
    )
    sequence = RequestSequence(MISS_PARAMS)
    with patch(REQUESTS_SESSION_POST, new=requests_block_post):
        benchmark(
            run_100,
            sync_cache_miss_call,
            wrapped,
            provider,
            MISS_METHOD,
            sequence,
        )


@pytest.mark.benchmark(group="handle_request_caching_hit")
def test_handle_request_caching_cache_hit(benchmark: BenchmarkFixture):
    provider = web3_provider()
    wrapped = web3._utils.caching.caching_utils.handle_request_caching(sync_request)
    seed_cache(
        web3._utils.caching.caching_utils,
        provider,
        WRAPPER_METHOD,
        [],
        RPC_SUCCESS_0X1,
    )
    benchmark(run_100, wrapped, provider, WRAPPER_METHOD, [])


@pytest.mark.benchmark(group="handle_request_caching_hit")
def test_faster_handle_request_caching_cache_hit(benchmark: BenchmarkFixture):
    provider = faster_provider()
    wrapped = faster_web3._utils.caching.caching_utils.handle_request_caching(
        sync_request
    )
    seed_cache(
        faster_web3._utils.caching.caching_utils,
        provider,
        WRAPPER_METHOD,
        [],
        RPC_SUCCESS_0X1,
    )
    benchmark(run_100, wrapped, provider, WRAPPER_METHOD, [])


@pytest.mark.benchmark(group="async_handle_request_caching_disabled")
def test_async_handle_request_caching_disabled(benchmark: BenchmarkFixture):
    provider = web3_async_provider(cache_allowed=False)
    wrapped = web3._utils.caching.caching_utils.async_handle_request_caching(
        async_request
    )
    benchmark(run_10_async, wrapped, provider, WRAPPER_METHOD, [])


@pytest.mark.benchmark(group="async_handle_request_caching_disabled")
def test_faster_async_handle_request_caching_disabled(benchmark: BenchmarkFixture):
    provider = faster_async_provider(cache_allowed=False)
    wrapped = faster_web3._utils.caching.caching_utils.async_handle_request_caching(
        async_request
    )
    benchmark(run_10_async, wrapped, provider, WRAPPER_METHOD, [])


@pytest.mark.benchmark(group="async_handle_request_caching_miss")
def test_async_handle_request_caching_miss(benchmark: BenchmarkFixture):
    provider = web3_async_provider()
    wrapped = web3._utils.caching.caching_utils.async_handle_request_caching(
        async_request
    )
    sequence = RequestSequence(MISS_PARAMS)
    with patch(AIOHTTP_CLIENT_SESSION_POST, new=aiohttp_block_post):
        benchmark(
            run_10_async,
            async_cache_miss_call,
            wrapped,
            provider,
            MISS_METHOD,
            sequence,
        )


@pytest.mark.benchmark(group="async_handle_request_caching_miss")
def test_faster_async_handle_request_caching_miss(benchmark: BenchmarkFixture):
    provider = faster_async_provider()
    wrapped = faster_web3._utils.caching.caching_utils.async_handle_request_caching(
        async_request
    )
    sequence = RequestSequence(MISS_PARAMS)
    with patch(AIOHTTP_CLIENT_SESSION_POST, new=aiohttp_block_post):
        benchmark(
            run_10_async,
            async_cache_miss_call,
            wrapped,
            provider,
            MISS_METHOD,
            sequence,
        )


@pytest.mark.benchmark(group="async_handle_request_caching_hit")
def test_async_handle_request_caching_cache_hit(benchmark: BenchmarkFixture):
    provider = web3_async_provider()
    wrapped = web3._utils.caching.caching_utils.async_handle_request_caching(
        async_request
    )
    seed_cache(
        web3._utils.caching.caching_utils,
        provider,
        WRAPPER_METHOD,
        [],
        RPC_SUCCESS_0X1,
    )
    benchmark(run_10_async, wrapped, provider, WRAPPER_METHOD, [])


@pytest.mark.benchmark(group="async_handle_request_caching_hit")
def test_faster_async_handle_request_caching_cache_hit(benchmark: BenchmarkFixture):
    provider = faster_async_provider()
    wrapped = faster_web3._utils.caching.caching_utils.async_handle_request_caching(
        async_request
    )
    seed_cache(
        faster_web3._utils.caching.caching_utils,
        provider,
        WRAPPER_METHOD,
        [],
        RPC_SUCCESS_0X1,
    )
    benchmark(run_10_async, wrapped, provider, WRAPPER_METHOD, [])
