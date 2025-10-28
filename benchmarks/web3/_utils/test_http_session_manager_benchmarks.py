import pytest
import faster_web3._utils.http_session_manager
import web3._utils.http_session_manager
from unittest.mock import patch
import asyncio

from benchmarks.mocking import (
    fake_requests_get,
    fake_requests_post,
    fake_aiohttp_get,
    fake_aiohttp_post,
)

# Realistic, mainnet-style endpoint and payloads
ENDPOINT_URIS = [
    "https://mainnet.infura.io/v3/0123456789abcdef0123456789abcdef",
    "http://localhost:8545",
]
JSON_RPC_PAYLOAD = {
    "jsonrpc": "2.0",
    "method": "eth_blockNumber",
    "params": [],
    "id": 1,
}


def run_100(fn, *args, **kwargs):
    for _ in range(100):
        fn(*args, **kwargs)


async def _run_100_async(fn, *args, **kwargs):
    for _ in range(100):
        await fn(*args, **kwargs)


def run_100_async(fn, *args, **kwargs):
    loop = asyncio.new_event_loop()
    try:
        return loop.run_until_complete(_run_100_async(fn, *args, **kwargs))
    finally:
        loop.close()


parametrize_endpoints = pytest.mark.parametrize(
    "endpoint_uri",
    ENDPOINT_URIS,
    ids=["infura", "localhost"],
)

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
    benchmark(run_100, manager.cache_and_return_session, endpoint_uri)


@pytest.mark.benchmark(group="faster_cache_and_return_session")
@parametrize_endpoints
@pytest.mark.parametrize("cache_hit", [True, False], ids=["cache_hit", "cache_miss"])
def test_faster_HTTPSessionManager_cache_and_return_session(
    benchmark, endpoint_uri, cache_hit
):
    manager = faster_web3._utils.http_session_manager.HTTPSessionManager(cache_size=2)
    if cache_hit:
        manager.cache_and_return_session(endpoint_uri)
    benchmark(run_100, manager.cache_and_return_session, endpoint_uri)


@pytest.mark.benchmark(group="get_response_from_get_request")
@parametrize_endpoints
def test_HTTPSessionManager_get_response_from_get_request(benchmark, endpoint_uri):
    with patch("requests.Session.get", side_effect=fake_requests_get):
        manager = web3._utils.http_session_manager.HTTPSessionManager()
        benchmark(run_100, manager.get_response_from_get_request, endpoint_uri)


@pytest.mark.benchmark(group="faster_get_response_from_get_request")
@parametrize_endpoints
def test_faster_HTTPSessionManager_get_response_from_get_request(
    benchmark, endpoint_uri
):
    with patch("requests.Session.get", side_effect=fake_requests_get):
        manager = faster_web3._utils.http_session_manager.HTTPSessionManager()
        benchmark(run_100, manager.get_response_from_get_request, endpoint_uri)


@pytest.mark.benchmark(group="json_make_get_request")
@parametrize_endpoints
def test_HTTPSessionManager_json_make_get_request(benchmark, endpoint_uri):
    with patch("requests.Session.get", side_effect=fake_requests_get):
        manager = web3._utils.http_session_manager.HTTPSessionManager()
        benchmark(run_100, manager.json_make_get_request, endpoint_uri)


@pytest.mark.benchmark(group="faster_json_make_get_request")
@parametrize_endpoints
def test_faster_HTTPSessionManager_json_make_get_request(benchmark, endpoint_uri):
    with patch("requests.Session.get", side_effect=fake_requests_get):
        manager = faster_web3._utils.http_session_manager.HTTPSessionManager()
        benchmark(run_100, manager.json_make_get_request, endpoint_uri)


@pytest.mark.benchmark(group="get_response_from_post_request")
@parametrize_endpoints
def test_HTTPSessionManager_get_response_from_post_request(benchmark, endpoint_uri):
    with patch("requests.Session.post", side_effect=fake_requests_post):
        manager = web3._utils.http_session_manager.HTTPSessionManager()
        benchmark(
            run_100,
            manager.get_response_from_post_request,
            endpoint_uri,
            json=JSON_RPC_PAYLOAD,
        )


@pytest.mark.benchmark(group="faster_get_response_from_post_request")
@parametrize_endpoints
def test_faster_HTTPSessionManager_get_response_from_post_request(
    benchmark, endpoint_uri
):
    with patch("requests.Session.post", side_effect=fake_requests_post):
        manager = faster_web3._utils.http_session_manager.HTTPSessionManager()
        benchmark(
            run_100,
            manager.get_response_from_post_request,
            endpoint_uri,
            json=JSON_RPC_PAYLOAD,
        )


@pytest.mark.benchmark(group="json_make_post_request")
@parametrize_endpoints
def test_HTTPSessionManager_json_make_post_request(benchmark, endpoint_uri):
    with patch("requests.Session.post", side_effect=fake_requests_post):
        manager = web3._utils.http_session_manager.HTTPSessionManager()
        benchmark(
            run_100, manager.json_make_post_request, endpoint_uri, json=JSON_RPC_PAYLOAD
        )


@pytest.mark.benchmark(group="faster_json_make_post_request")
@parametrize_endpoints
def test_faster_HTTPSessionManager_json_make_post_request(benchmark, endpoint_uri):
    with patch("requests.Session.post", side_effect=fake_requests_post):
        manager = faster_web3._utils.http_session_manager.HTTPSessionManager()
        benchmark(
            run_100, manager.json_make_post_request, endpoint_uri, json=JSON_RPC_PAYLOAD
        )


@pytest.mark.benchmark(group="make_post_request")
@parametrize_endpoints
def test_HTTPSessionManager_make_post_request(benchmark, endpoint_uri):
    with patch("requests.Session.post", side_effect=fake_requests_post):
        manager = web3._utils.http_session_manager.HTTPSessionManager()
        benchmark(
            run_100,
            manager.make_post_request,
            endpoint_uri,
            b'{"jsonrpc":"2.0","method":"eth_blockNumber","params":[],"id":1}',
        )


@pytest.mark.benchmark(group="faster_make_post_request")
@parametrize_endpoints
def test_faster_HTTPSessionManager_make_post_request(benchmark, endpoint_uri):
    with patch("requests.Session.post", side_effect=fake_requests_post):
        manager = faster_web3._utils.http_session_manager.HTTPSessionManager()
        benchmark(
            run_100,
            manager.make_post_request,
            endpoint_uri,
            b'{"jsonrpc":"2.0","method":"eth_blockNumber","params":[],"id":1}',
        )


# --- ASYNC BENCHMARKS FOR HTTPSessionManager ---


@parametrize_endpoints
@pytest.mark.benchmark(group="async_cache_and_return_session")
def test_HTTPSessionManager_async_cache_and_return_session(benchmark, endpoint_uri):
    manager = web3._utils.http_session_manager.HTTPSessionManager(cache_size=2)
    benchmark(run_100_async, manager.async_cache_and_return_session, endpoint_uri)


@parametrize_endpoints
@pytest.mark.benchmark(group="faster_async_cache_and_return_session")
def test_faster_HTTPSessionManager_async_cache_and_return_session(
    benchmark, endpoint_uri
):
    manager = faster_web3._utils.http_session_manager.HTTPSessionManager(cache_size=2)
    benchmark(run_100_async, manager.async_cache_and_return_session, endpoint_uri)


@parametrize_endpoints
@pytest.mark.benchmark(group="async_get_response_from_get_request")
def test_HTTPSessionManager_async_get_response_from_get_request(
    benchmark, endpoint_uri
):
    with patch("aiohttp.ClientSession.get", side_effect=fake_aiohttp_get):
        manager = web3._utils.http_session_manager.HTTPSessionManager()
        benchmark(
            run_100_async, manager.async_get_response_from_get_request, endpoint_uri
        )


@parametrize_endpoints
@pytest.mark.benchmark(group="faster_async_get_response_from_get_request")
def test_faster_HTTPSessionManager_async_get_response_from_get_request(
    benchmark, endpoint_uri
):
    with patch("aiohttp.ClientSession.get", side_effect=fake_aiohttp_get):
        manager = faster_web3._utils.http_session_manager.HTTPSessionManager()
        benchmark(
            run_100_async, manager.async_get_response_from_get_request, endpoint_uri
        )


@parametrize_endpoints
@pytest.mark.benchmark(group="async_json_make_get_request")
def test_HTTPSessionManager_async_json_make_get_request(benchmark, endpoint_uri):
    with patch("aiohttp.ClientSession.get", side_effect=fake_aiohttp_get):
        manager = web3._utils.http_session_manager.HTTPSessionManager()
        benchmark(run_100_async, manager.async_json_make_get_request, endpoint_uri)


@parametrize_endpoints
@pytest.mark.benchmark(group="faster_async_json_make_get_request")
def test_faster_HTTPSessionManager_async_json_make_get_request(benchmark, endpoint_uri):
    with patch("aiohttp.ClientSession.get", side_effect=fake_aiohttp_get):
        manager = faster_web3._utils.http_session_manager.HTTPSessionManager()
        benchmark(run_100_async, manager.async_json_make_get_request, endpoint_uri)


@parametrize_endpoints
@pytest.mark.benchmark(group="async_get_response_from_post_request")
def test_HTTPSessionManager_async_get_response_from_post_request(
    benchmark, endpoint_uri
):
    with patch("aiohttp.ClientSession.post", side_effect=fake_aiohttp_post):
        manager = web3._utils.http_session_manager.HTTPSessionManager()
        benchmark(
            run_100_async,
            manager.async_get_response_from_post_request,
            endpoint_uri,
            json=JSON_RPC_PAYLOAD,
        )


@parametrize_endpoints
@pytest.mark.benchmark(group="faster_async_get_response_from_post_request")
def test_faster_HTTPSessionManager_async_get_response_from_post_request(
    benchmark, endpoint_uri
):
    with patch("aiohttp.ClientSession.post", side_effect=fake_aiohttp_post):
        manager = faster_web3._utils.http_session_manager.HTTPSessionManager()
        benchmark(
            run_100_async,
            manager.async_get_response_from_post_request,
            endpoint_uri,
            json=JSON_RPC_PAYLOAD,
        )


@parametrize_endpoints
@pytest.mark.benchmark(group="async_json_make_post_request")
def test_HTTPSessionManager_async_json_make_post_request(benchmark, endpoint_uri):
    with patch("aiohttp.ClientSession.post", side_effect=fake_aiohttp_post):
        manager = web3._utils.http_session_manager.HTTPSessionManager()
        benchmark(
            run_100_async,
            manager.async_json_make_post_request,
            endpoint_uri,
            json=JSON_RPC_PAYLOAD,
        )


@parametrize_endpoints
@pytest.mark.benchmark(group="faster_async_json_make_post_request")
def test_faster_HTTPSessionManager_async_json_make_post_request(
    benchmark, endpoint_uri
):
    with patch("aiohttp.ClientSession.post", side_effect=fake_aiohttp_post):
        manager = faster_web3._utils.http_session_manager.HTTPSessionManager()
        benchmark(
            run_100_async,
            manager.async_json_make_post_request,
            endpoint_uri,
            json=JSON_RPC_PAYLOAD,
        )
