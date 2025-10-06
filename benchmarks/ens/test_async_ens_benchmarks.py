import pytest
import asyncio
from pytest_codspeed import BenchmarkFixture

import ens.async_ens
import ens.exceptions
import web3
import faster_ens.async_ens
import faster_ens.exceptions
import faster_web3

import json

NAMES = [
    "alice.eth",
    "foo.alice.eth",
    "bar.foo.alice.eth",
]

def run_100_async(corofunc, exc, *args, **kwargs):
    loop = asyncio.get_event_loop()
    for _ in range(100):
        try:
            loop.run_until_complete(corofunc(*args, **kwargs))
        except exc:
            pass

@pytest.mark.benchmark(group="AsyncENS.address")
@pytest.mark.parametrize("name", NAMES)
def test_AsyncENS_address(benchmark: BenchmarkFixture, name, fake_ens_registry, patch_aiohttp):
    provider = web3.AsyncHTTPProvider("http://localhost:8545")
    ns = ens.async_ens.AsyncENS(provider=provider, addr=fake_ens_registry, middleware=[])
    benchmark(run_100_async, ens.exceptions.ENSException, ns.address, name)

@pytest.mark.benchmark(group="AsyncENS.address")
@pytest.mark.parametrize("name", NAMES)
def test_faster_AsyncENS_address(benchmark: BenchmarkFixture, name, fake_ens_registry, patch_aiohttp):
    provider = faster_web3.AsyncHTTPProvider("http://localhost:8545")
    ns = faster_ens.async_ens.AsyncENS(provider=provider, addr=fake_ens_registry, middleware=[])
    benchmark(run_100_async, faster_ens.exceptions.ENSException, ns.address, name)

@pytest.mark.benchmark(group="AsyncENS.owner")
@pytest.mark.parametrize("name", NAMES)
def test_AsyncENS_owner(benchmark: BenchmarkFixture, name, fake_ens_registry, patch_aiohttp):
    provider = web3.AsyncHTTPProvider("http://localhost:8545")
    ns = ens.async_ens.AsyncENS(provider=provider, addr=fake_ens_registry, middleware=[])
    benchmark(run_100_async, ens.exceptions.ENSException, ns.owner, name)

@pytest.mark.benchmark(group="AsyncENS.owner")
@pytest.mark.parametrize("name", NAMES)
def test_faster_AsyncENS_owner(benchmark: BenchmarkFixture, name, fake_ens_registry, patch_aiohttp):
    provider = faster_web3.AsyncHTTPProvider("http://localhost:8545")
    ns = faster_ens.async_ens.AsyncENS(provider=provider, addr=fake_ens_registry, middleware=[])
    benchmark(run_100_async, faster_ens.exceptions.ENSException, ns.owner, name)

@pytest.mark.benchmark(group="AsyncENS.resolver")
@pytest.mark.parametrize("name", NAMES)
def test_AsyncENS_resolver(benchmark: BenchmarkFixture, name, fake_ens_registry, patch_aiohttp):
    provider = web3.AsyncHTTPProvider("http://localhost:8545")
    ns = ens.async_ens.AsyncENS(provider=provider, addr=fake_ens_registry, middleware=[])
    benchmark(run_100_async, ens.exceptions.ENSException, ns.resolver, name)

@pytest.mark.benchmark(group="AsyncENS.resolver")
@pytest.mark.parametrize("name", NAMES)
def test_faster_AsyncENS_resolver(benchmark: BenchmarkFixture, name, fake_ens_registry, patch_aiohttp):
    provider = faster_web3.AsyncHTTPProvider("http://localhost:8545")
    ns = faster_ens.async_ens.AsyncENS(provider=provider, addr=fake_ens_registry, middleware=[])
    benchmark(run_100_async, faster_ens.exceptions.ENSException, ns.resolver, name)

@pytest.mark.benchmark(group="AsyncENS.name")
def test_AsyncENS_name(benchmark: BenchmarkFixture, fake_ens_registry, patch_aiohttp):
    provider = web3.AsyncHTTPProvider("http://localhost:8545")
    ns = ens.async_ens.AsyncENS(provider=provider, addr=fake_ens_registry, middleware=[])
    benchmark(run_100_async, ens.exceptions.ENSException, ns.name, "0x314159265dD8dbb310642f98f50C066173C1259b")

@pytest.mark.benchmark(group="AsyncENS.name")
def test_faster_AsyncENS_name(benchmark: BenchmarkFixture, fake_ens_registry, patch_aiohttp):
    provider = faster_web3.AsyncHTTPProvider("http://localhost:8545")
    ns = faster_ens.async_ens.AsyncENS(provider=provider, addr=fake_ens_registry, middleware=[])
    benchmark(run_100_async, faster_ens.exceptions.ENSException, ns.name, "0x314159265dD8dbb310642f98f50C066173C1259b")
