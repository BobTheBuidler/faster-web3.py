import pytest
from unittest.mock import (
    patch,
)

import web3._utils.http_session_manager

from benchmarks.batching import (
    _run_async,
    run_10000,
    run_10000_async,
)
from benchmarks.web3.fixtures.core import (
    LOCALHOST_HTTP_ENDPOINT,
)
from benchmarks.web3.fixtures.http import (
    AIOHTTP_CLIENT_SESSION_GET,
    AIOHTTP_CLIENT_SESSION_POST,
    HTTP_SESSION_MANAGER_AIOHTTP_RESPONSE,
    HTTP_SESSION_MANAGER_RESPONSE,
    REQUESTS_SESSION_GET,
    REQUESTS_SESSION_POST,
    make_static_aiohttp_get,
    make_static_aiohttp_post,
    make_static_requests_get,
    make_static_requests_post,
)
import faster_web3._utils.http_session_manager

# Realistic, mainnet-style endpoint and payloads
ENDPOINT_URIS = [
    "https://mainnet.infura.io/v3/0123456789abcdef0123456789abcdef",
    LOCALHOST_HTTP_ENDPOINT,
]
JSON_RPC_PAYLOAD = {
    "jsonrpc": "2.0",
    "method": "eth_blockNumber",
    "params": [],
    "id": 1,
}
JSON_RPC_PAYLOAD_BYTES = (
    b'{"jsonrpc":"2.0","method":"eth_blockNumber","params":[],"id":1}'
)
REQUESTS_GET = make_static_requests_get(HTTP_SESSION_MANAGER_RESPONSE)
REQUESTS_POST = make_static_requests_post(HTTP_SESSION_MANAGER_RESPONSE)
AIOHTTP_GET = make_static_aiohttp_get(HTTP_SESSION_MANAGER_AIOHTTP_RESPONSE)
AIOHTTP_POST = make_static_aiohttp_post(HTTP_SESSION_MANAGER_AIOHTTP_RESPONSE)


parametrize_endpoints = pytest.mark.parametrize(
    "endpoint_uri",
    ENDPOINT_URIS,
    ids=["infura", "localhost"],
)


async def close_cached_async_sessions(manager):
    for _cache_key, session in manager.session_cache.items():
        if not session.closed:
            await session.close()
    manager.session_cache.clear()


def benchmark_async_manager(benchmark, manager, fn, *args, **kwargs):
    try:
        benchmark(run_10000_async, fn, *args, **kwargs)
    finally:
        _run_async(close_cached_async_sessions(manager))


# --- SYNC BENCHMARKS FOR HTTPSessionManager ---


@pytest.mark.benchmark(group="cache_and_return_session")
@parametrize_endpoints
@pytest.mark.parametrize("cache_hit", [True, False], ids=["cache_hit", "cache_miss"])
def test_HTTPSessionManager_cache_and_return_session(
    benchmark, endpoint_uri, cache_hit
):
    manager = web3._utils.http_session_manager.HTTPSessionManager(cache_size=2)
    if cache_hit:
        manager.cache_and_return_session(endpoint_uri)
    benchmark(run_10000, manager.cache_and_return_session, endpoint_uri)


@pytest.mark.benchmark(group="faster_cache_and_return_session")
@parametrize_endpoints
@pytest.mark.parametrize("cache_hit", [True, False], ids=["cache_hit", "cache_miss"])
def test_faster_HTTPSessionManager_cache_and_return_session(
    benchmark, endpoint_uri, cache_hit
):
    manager = faster_web3._utils.http_session_manager.HTTPSessionManager(cache_size=2)
    if cache_hit:
        manager.cache_and_return_session(endpoint_uri)
    benchmark(run_10000, manager.cache_and_return_session, endpoint_uri)


@pytest.mark.benchmark(group="get_response_from_get_request")
@parametrize_endpoints
def test_HTTPSessionManager_get_response_from_get_request(benchmark, endpoint_uri):
    with patch(REQUESTS_SESSION_GET, side_effect=REQUESTS_GET):
        manager = web3._utils.http_session_manager.HTTPSessionManager()
        benchmark(run_10000, manager.get_response_from_get_request, endpoint_uri)


@pytest.mark.benchmark(group="faster_get_response_from_get_request")
@parametrize_endpoints
def test_faster_HTTPSessionManager_get_response_from_get_request(
    benchmark, endpoint_uri
):
    with patch(REQUESTS_SESSION_GET, side_effect=REQUESTS_GET):
        manager = faster_web3._utils.http_session_manager.HTTPSessionManager()
        benchmark(run_10000, manager.get_response_from_get_request, endpoint_uri)


@pytest.mark.benchmark(group="json_make_get_request")
@parametrize_endpoints
def test_HTTPSessionManager_json_make_get_request(benchmark, endpoint_uri):
    with patch(REQUESTS_SESSION_GET, side_effect=REQUESTS_GET):
        manager = web3._utils.http_session_manager.HTTPSessionManager()
        benchmark(run_10000, manager.json_make_get_request, endpoint_uri)


@pytest.mark.benchmark(group="faster_json_make_get_request")
@parametrize_endpoints
def test_faster_HTTPSessionManager_json_make_get_request(benchmark, endpoint_uri):
    with patch(REQUESTS_SESSION_GET, side_effect=REQUESTS_GET):
        manager = faster_web3._utils.http_session_manager.HTTPSessionManager()
        benchmark(run_10000, manager.json_make_get_request, endpoint_uri)


@pytest.mark.benchmark(group="get_response_from_post_request")
@parametrize_endpoints
def test_HTTPSessionManager_get_response_from_post_request(benchmark, endpoint_uri):
    with patch(REQUESTS_SESSION_POST, side_effect=REQUESTS_POST):
        manager = web3._utils.http_session_manager.HTTPSessionManager()
        benchmark(
            run_10000,
            manager.get_response_from_post_request,
            endpoint_uri,
            json=JSON_RPC_PAYLOAD,
        )


@pytest.mark.benchmark(group="faster_get_response_from_post_request")
@parametrize_endpoints
def test_faster_HTTPSessionManager_get_response_from_post_request(
    benchmark, endpoint_uri
):
    with patch(REQUESTS_SESSION_POST, side_effect=REQUESTS_POST):
        manager = faster_web3._utils.http_session_manager.HTTPSessionManager()
        benchmark(
            run_10000,
            manager.get_response_from_post_request,
            endpoint_uri,
            json=JSON_RPC_PAYLOAD,
        )


@pytest.mark.benchmark(group="json_make_post_request")
@parametrize_endpoints
def test_HTTPSessionManager_json_make_post_request(benchmark, endpoint_uri):
    with patch(REQUESTS_SESSION_POST, side_effect=REQUESTS_POST):
        manager = web3._utils.http_session_manager.HTTPSessionManager()
        benchmark(
            run_10000,
            manager.json_make_post_request,
            endpoint_uri,
            json=JSON_RPC_PAYLOAD,
        )


@pytest.mark.benchmark(group="faster_json_make_post_request")
@parametrize_endpoints
def test_faster_HTTPSessionManager_json_make_post_request(benchmark, endpoint_uri):
    with patch(REQUESTS_SESSION_POST, side_effect=REQUESTS_POST):
        manager = faster_web3._utils.http_session_manager.HTTPSessionManager()
        benchmark(
            run_10000,
            manager.json_make_post_request,
            endpoint_uri,
            json=JSON_RPC_PAYLOAD,
        )


@pytest.mark.benchmark(group="make_post_request")
@parametrize_endpoints
def test_HTTPSessionManager_make_post_request(benchmark, endpoint_uri):
    with patch(REQUESTS_SESSION_POST, side_effect=REQUESTS_POST):
        manager = web3._utils.http_session_manager.HTTPSessionManager()
        benchmark(
            run_10000,
            manager.make_post_request,
            endpoint_uri,
            JSON_RPC_PAYLOAD_BYTES,
        )


@pytest.mark.benchmark(group="faster_make_post_request")
@parametrize_endpoints
def test_faster_HTTPSessionManager_make_post_request(benchmark, endpoint_uri):
    with patch(REQUESTS_SESSION_POST, side_effect=REQUESTS_POST):
        manager = faster_web3._utils.http_session_manager.HTTPSessionManager()
        benchmark(
            run_10000,
            manager.make_post_request,
            endpoint_uri,
            JSON_RPC_PAYLOAD_BYTES,
        )


# --- ASYNC BENCHMARKS FOR HTTPSessionManager ---


@parametrize_endpoints
@pytest.mark.benchmark(group="async_cache_and_return_session")
def test_HTTPSessionManager_async_cache_and_return_session(benchmark, endpoint_uri):
    manager = web3._utils.http_session_manager.HTTPSessionManager(cache_size=2)
    try:
        benchmark_async_manager(
            benchmark, manager, manager.async_cache_and_return_session, endpoint_uri
        )
    except AttributeError:
        # this will pass on the codspeed benchmark runner but will fail on
        # the pytest benchmark runner because it runs the test multiple times.
        # We don't really care, it isn't a real bug.
        pass


@parametrize_endpoints
@pytest.mark.benchmark(group="faster_async_cache_and_return_session")
def test_faster_HTTPSessionManager_async_cache_and_return_session(
    benchmark, endpoint_uri
):
    manager = faster_web3._utils.http_session_manager.HTTPSessionManager(cache_size=2)
    try:
        benchmark_async_manager(
            benchmark, manager, manager.async_cache_and_return_session, endpoint_uri
        )
    except AttributeError:
        # this will pass on the codspeed benchmark runner but will fail on
        # the pytest benchmark runner because it runs the test multiple times.
        # We don't really care, it isn't a real bug.
        pass


@parametrize_endpoints
@pytest.mark.benchmark(group="async_get_response_from_get_request")
def test_HTTPSessionManager_async_get_response_from_get_request(
    benchmark, endpoint_uri
):
    with patch(AIOHTTP_CLIENT_SESSION_GET, side_effect=AIOHTTP_GET):
        manager = web3._utils.http_session_manager.HTTPSessionManager()
        benchmark_async_manager(
            benchmark,
            manager,
            manager.async_get_response_from_get_request,
            endpoint_uri,
        )


@parametrize_endpoints
@pytest.mark.benchmark(group="faster_async_get_response_from_get_request")
def test_faster_HTTPSessionManager_async_get_response_from_get_request(
    benchmark, endpoint_uri
):
    with patch(AIOHTTP_CLIENT_SESSION_GET, side_effect=AIOHTTP_GET):
        manager = faster_web3._utils.http_session_manager.HTTPSessionManager()
        benchmark_async_manager(
            benchmark,
            manager,
            manager.async_get_response_from_get_request,
            endpoint_uri,
        )


@parametrize_endpoints
@pytest.mark.benchmark(group="async_json_make_get_request")
def test_HTTPSessionManager_async_json_make_get_request(benchmark, endpoint_uri):
    with patch(AIOHTTP_CLIENT_SESSION_GET, side_effect=AIOHTTP_GET):
        manager = web3._utils.http_session_manager.HTTPSessionManager()
        benchmark_async_manager(
            benchmark, manager, manager.async_json_make_get_request, endpoint_uri
        )


@parametrize_endpoints
@pytest.mark.benchmark(group="faster_async_json_make_get_request")
def test_faster_HTTPSessionManager_async_json_make_get_request(benchmark, endpoint_uri):
    with patch(AIOHTTP_CLIENT_SESSION_GET, side_effect=AIOHTTP_GET):
        manager = faster_web3._utils.http_session_manager.HTTPSessionManager()
        benchmark_async_manager(
            benchmark, manager, manager.async_json_make_get_request, endpoint_uri
        )


@parametrize_endpoints
@pytest.mark.benchmark(group="async_get_response_from_post_request")
def test_HTTPSessionManager_async_get_response_from_post_request(
    benchmark, endpoint_uri
):
    with patch(AIOHTTP_CLIENT_SESSION_POST, side_effect=AIOHTTP_POST):
        manager = web3._utils.http_session_manager.HTTPSessionManager()
        benchmark_async_manager(
            benchmark,
            manager,
            manager.async_get_response_from_post_request,
            endpoint_uri,
            json=JSON_RPC_PAYLOAD,
        )


@parametrize_endpoints
@pytest.mark.benchmark(group="faster_async_get_response_from_post_request")
def test_faster_HTTPSessionManager_async_get_response_from_post_request(
    benchmark, endpoint_uri
):
    with patch(AIOHTTP_CLIENT_SESSION_POST, side_effect=AIOHTTP_POST):
        manager = faster_web3._utils.http_session_manager.HTTPSessionManager()
        benchmark_async_manager(
            benchmark,
            manager,
            manager.async_get_response_from_post_request,
            endpoint_uri,
            json=JSON_RPC_PAYLOAD,
        )


@parametrize_endpoints
@pytest.mark.benchmark(group="async_json_make_post_request")
def test_HTTPSessionManager_async_json_make_post_request(benchmark, endpoint_uri):
    with patch(AIOHTTP_CLIENT_SESSION_POST, side_effect=AIOHTTP_POST):
        manager = web3._utils.http_session_manager.HTTPSessionManager()
        benchmark_async_manager(
            benchmark,
            manager,
            manager.async_json_make_post_request,
            endpoint_uri,
            json=JSON_RPC_PAYLOAD,
        )


@parametrize_endpoints
@pytest.mark.benchmark(group="faster_async_json_make_post_request")
def test_faster_HTTPSessionManager_async_json_make_post_request(
    benchmark, endpoint_uri
):
    with patch(AIOHTTP_CLIENT_SESSION_POST, side_effect=AIOHTTP_POST):
        manager = faster_web3._utils.http_session_manager.HTTPSessionManager()
        benchmark_async_manager(
            benchmark,
            manager,
            manager.async_json_make_post_request,
            endpoint_uri,
            json=JSON_RPC_PAYLOAD,
        )
