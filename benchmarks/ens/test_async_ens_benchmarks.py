import pytest
from unittest.mock import (
    patch,
)

import ens.async_ens
import ens.exceptions
from pytest_codspeed import (
    BenchmarkFixture,
)
import web3

from benchmarks.batching import (
    _run_async,
    run_10_async,
    run_10_async_exc,
)
from benchmarks.ens.fake_rpc import (
    FAKE_ENS_REGISTRY,
    make_aiohttp_post,
)
from benchmarks.ens.params import (
    ADDRESSES,
    parametrize_names_full_coverage,
)
import faster_ens.async_ens
import faster_ens.exceptions
import faster_web3


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
    _run_async(ns.w3.provider.disconnect())


@pytest.mark.benchmark(group="AsyncENS.address")
@parametrize_names_full_coverage
def test_AsyncENS_address(benchmark: BenchmarkFixture, name):
    with patch("aiohttp.ClientSession.post", new=make_aiohttp_post("address")):
        ns = web3_async_ens()
        address = ns.address
        benchmark(run_10_async_exc, ens.exceptions.ENSException, address, name)
        close_async_provider(ns)


@pytest.mark.benchmark(group="AsyncENS.address")
@parametrize_names_full_coverage
def test_faster_AsyncENS_address(benchmark: BenchmarkFixture, name):
    with patch("aiohttp.ClientSession.post", new=make_aiohttp_post("address")):
        ns = faster_async_ens()
        address = ns.address
        benchmark(
            run_10_async_exc,
            faster_ens.exceptions.ENSException,
            address,
            name,
        )
        close_async_provider(ns)


@pytest.mark.benchmark(group="AsyncENS.owner")
@parametrize_names_full_coverage
def test_AsyncENS_owner(benchmark: BenchmarkFixture, name):
    with patch("aiohttp.ClientSession.post", new=make_aiohttp_post("owner")):
        ns = web3_async_ens()
        owner = ns.owner
        benchmark(run_10_async_exc, ens.exceptions.ENSException, owner, name)
        close_async_provider(ns)


@pytest.mark.benchmark(group="AsyncENS.owner")
@parametrize_names_full_coverage
def test_faster_AsyncENS_owner(benchmark: BenchmarkFixture, name):
    with patch("aiohttp.ClientSession.post", new=make_aiohttp_post("owner")):
        ns = faster_async_ens()
        owner = ns.owner
        benchmark(
            run_10_async_exc,
            faster_ens.exceptions.ENSException,
            owner,
            name,
        )
        close_async_provider(ns)


@pytest.mark.benchmark(group="AsyncENS.resolver")
@parametrize_names_full_coverage
def test_AsyncENS_resolver(benchmark: BenchmarkFixture, name):
    with patch("aiohttp.ClientSession.post", new=make_aiohttp_post("resolver")):
        ns = web3_async_ens()
        resolver = ns.resolver
        benchmark(run_10_async_exc, ens.exceptions.ENSException, resolver, name)
        close_async_provider(ns)


@pytest.mark.benchmark(group="AsyncENS.resolver")
@parametrize_names_full_coverage
def test_faster_AsyncENS_resolver(benchmark: BenchmarkFixture, name):
    with patch("aiohttp.ClientSession.post", new=make_aiohttp_post("resolver")):
        ns = faster_async_ens()
        resolver = ns.resolver
        benchmark(
            run_10_async_exc,
            faster_ens.exceptions.ENSException,
            resolver,
            name,
        )
        close_async_provider(ns)


@pytest.mark.benchmark(group="AsyncENS.name")
@pytest.mark.parametrize("address", ADDRESSES)
def test_AsyncENS_name(benchmark: BenchmarkFixture, address):
    with patch(
        "aiohttp.ClientSession.post",
        new=make_aiohttp_post("name", result_address=address),
    ):
        ns = web3_async_ens()
        name = ns.name
        benchmark(run_10_async, name, address)
        close_async_provider(ns)


@pytest.mark.benchmark(group="AsyncENS.name")
@pytest.mark.parametrize("address", ADDRESSES)
def test_faster_AsyncENS_name(benchmark: BenchmarkFixture, address):
    with patch(
        "aiohttp.ClientSession.post",
        new=make_aiohttp_post("name", result_address=address),
    ):
        ns = faster_async_ens()
        name = ns.name
        benchmark(run_10_async, name, address)
        close_async_provider(ns)


@pytest.mark.benchmark(group="AsyncENS.get_text")
@parametrize_names_full_coverage
def test_AsyncENS_get_text(benchmark: BenchmarkFixture, name):
    with patch("aiohttp.ClientSession.post", new=make_aiohttp_post("get_text")):
        ns = web3_async_ens()
        get_text = ns.get_text
        benchmark(run_10_async_exc, ens.exceptions.ENSException, get_text, name, "url")
        close_async_provider(ns)


@pytest.mark.benchmark(group="AsyncENS.get_text")
@parametrize_names_full_coverage
def test_faster_AsyncENS_get_text(benchmark: BenchmarkFixture, name):
    with patch("aiohttp.ClientSession.post", new=make_aiohttp_post("get_text")):
        ns = faster_async_ens()
        get_text = ns.get_text
        benchmark(
            run_10_async_exc,
            faster_ens.exceptions.ENSException,
            get_text,
            name,
            "url",
        )
        close_async_provider(ns)
