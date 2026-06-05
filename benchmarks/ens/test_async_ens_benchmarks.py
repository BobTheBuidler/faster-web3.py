from unittest.mock import (
    patch,
)

import pytest
from pytest_codspeed import (
    BenchmarkFixture,
)

import ens.async_ens
import web3

import faster_ens.async_ens
import faster_web3

from benchmarks.batching import (
    run_1_async,
)
from benchmarks.ens.fake_rpc import (
    FAKE_ENS_REGISTRY,
    FAKE_RESULT_ADDR,
    make_aiohttp_post,
)


NAMES = (
    "alice.eth",
)


def web3_async_ens():
    provider = web3.AsyncHTTPProvider("http://localhost:8545")
    return ens.async_ens.AsyncENS(
        provider=provider,
        addr=FAKE_ENS_REGISTRY,
        middleware=[],
    )


def faster_async_ens():
    provider = faster_web3.AsyncHTTPProvider("http://localhost:8545")
    return faster_ens.async_ens.AsyncENS(
        provider=provider,
        addr=FAKE_ENS_REGISTRY,
        middleware=[],
    )


def close_async_provider(ns):
    run_1_async(ns.w3.provider.disconnect)


@pytest.mark.benchmark(group="AsyncENS.address")
@pytest.mark.parametrize("name", NAMES)
def test_AsyncENS_address(benchmark: BenchmarkFixture, name):
    with patch("aiohttp.ClientSession.post", new=make_aiohttp_post("address")):
        ns = web3_async_ens()
        address = ns.address
        benchmark(run_1_async, address, name)
        close_async_provider(ns)


@pytest.mark.benchmark(group="AsyncENS.address")
@pytest.mark.parametrize("name", NAMES)
def test_faster_AsyncENS_address(benchmark: BenchmarkFixture, name):
    with patch("aiohttp.ClientSession.post", new=make_aiohttp_post("address")):
        ns = faster_async_ens()
        address = ns.address
        benchmark(run_1_async, address, name)
        close_async_provider(ns)


@pytest.mark.benchmark(group="AsyncENS.owner")
@pytest.mark.parametrize("name", NAMES)
def test_AsyncENS_owner(benchmark: BenchmarkFixture, name):
    with patch("aiohttp.ClientSession.post", new=make_aiohttp_post("owner")):
        ns = web3_async_ens()
        owner = ns.owner
        benchmark(run_1_async, owner, name)
        close_async_provider(ns)


@pytest.mark.benchmark(group="AsyncENS.owner")
@pytest.mark.parametrize("name", NAMES)
def test_faster_AsyncENS_owner(benchmark: BenchmarkFixture, name):
    with patch("aiohttp.ClientSession.post", new=make_aiohttp_post("owner")):
        ns = faster_async_ens()
        owner = ns.owner
        benchmark(run_1_async, owner, name)
        close_async_provider(ns)


@pytest.mark.benchmark(group="AsyncENS.resolver")
@pytest.mark.parametrize("name", NAMES)
def test_AsyncENS_resolver(benchmark: BenchmarkFixture, name):
    with patch("aiohttp.ClientSession.post", new=make_aiohttp_post("resolver")):
        ns = web3_async_ens()
        resolver = ns.resolver
        benchmark(run_1_async, resolver, name)
        close_async_provider(ns)


@pytest.mark.benchmark(group="AsyncENS.resolver")
@pytest.mark.parametrize("name", NAMES)
def test_faster_AsyncENS_resolver(benchmark: BenchmarkFixture, name):
    with patch("aiohttp.ClientSession.post", new=make_aiohttp_post("resolver")):
        ns = faster_async_ens()
        resolver = ns.resolver
        benchmark(run_1_async, resolver, name)
        close_async_provider(ns)


@pytest.mark.benchmark(group="AsyncENS.name")
def test_AsyncENS_name(benchmark: BenchmarkFixture):
    with patch("aiohttp.ClientSession.post", new=make_aiohttp_post("name")):
        ns = web3_async_ens()
        name = ns.name
        benchmark(run_1_async, name, FAKE_RESULT_ADDR)
        close_async_provider(ns)


@pytest.mark.benchmark(group="AsyncENS.name")
def test_faster_AsyncENS_name(benchmark: BenchmarkFixture):
    with patch("aiohttp.ClientSession.post", new=make_aiohttp_post("name")):
        ns = faster_async_ens()
        name = ns.name
        benchmark(run_1_async, name, FAKE_RESULT_ADDR)
        close_async_provider(ns)


@pytest.mark.benchmark(group="AsyncENS.get_text")
@pytest.mark.parametrize("name", NAMES)
def test_AsyncENS_get_text(benchmark: BenchmarkFixture, name):
    with patch("aiohttp.ClientSession.post", new=make_aiohttp_post("get_text")):
        ns = web3_async_ens()
        get_text = ns.get_text
        benchmark(run_1_async, get_text, name, "url")
        close_async_provider(ns)


@pytest.mark.benchmark(group="AsyncENS.get_text")
@pytest.mark.parametrize("name", NAMES)
def test_faster_AsyncENS_get_text(benchmark: BenchmarkFixture, name):
    with patch("aiohttp.ClientSession.post", new=make_aiohttp_post("get_text")):
        ns = faster_async_ens()
        get_text = ns.get_text
        benchmark(run_1_async, get_text, name, "url")
        close_async_provider(ns)
