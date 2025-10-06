import pytest
import asyncio
from pytest_codspeed import BenchmarkFixture

import ens.async_ens
import ens.exceptions
import web3
import faster_ens.async_ens
import faster_ens.exceptions
import faster_web3
from unittest.mock import patch

import json
from benchmarks.ens.fake_rpc import fake_json_rpc_response, FAKE_ENS_REGISTRY

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

class FakeAiohttpResponse:
    def __init__(self, result):
        self._result = result
        self.status = 200
        self.headers = {}
        self.content_type = "application/json"
    async def text(self):
        return json.dumps(self._result)
    async def json(self):
        return self._result
    async def read(self):
        return json.dumps(self._result).encode("utf-8")
    async def __aenter__(self):
        return self
    async def __aexit__(self, exc_type, exc, tb):
        pass

async def fake_aiohttp_request(self, method, url, *args, **kwargs):
    data = kwargs.get("data")
    if data is None and "json" in kwargs:
        data = json.dumps(kwargs["json"])
    request_data = json.loads(data)
    result = fake_json_rpc_response(request_data)
    return FakeAiohttpResponse(result)

@pytest.mark.benchmark(group="AsyncENS.address")
@pytest.mark.parametrize("name", NAMES)
def test_AsyncENS_address(benchmark: BenchmarkFixture, name):
    with patch("aiohttp.ClientSession._request", new=fake_aiohttp_request):
        provider = web3.HTTPProvider("http://localhost:8545")
        ns = ens.async_ens.AsyncENS(provider=provider, addr=FAKE_ENS_REGISTRY, middleware=[])
        benchmark(run_100_async, ens.exceptions.ENSException, ns.address, name)

@pytest.mark.benchmark(group="AsyncENS.address")
@pytest.mark.parametrize("name", NAMES)
def test_faster_AsyncENS_address(benchmark: BenchmarkFixture, name):
    with patch("aiohttp.ClientSession._request", new=fake_aiohttp_request):
        provider = faster_web3.HTTPProvider("http://localhost:8545")
        ns = faster_ens.async_ens.AsyncENS(provider=provider, addr=FAKE_ENS_REGISTRY, middleware=[])
        benchmark(run_100_async, faster_ens.exceptions.ENSException, ns.address, name)

@pytest.mark.benchmark(group="AsyncENS.owner")
@pytest.mark.parametrize("name", NAMES)
def test_AsyncENS_owner(benchmark: BenchmarkFixture, name):
    with patch("aiohttp.ClientSession._request", new=fake_aiohttp_request):
        provider = web3.HTTPProvider("http://localhost:8545")
        ns = ens.async_ens.AsyncENS(provider=provider, addr=FAKE_ENS_REGISTRY, middleware=[])
        benchmark(run_100_async, ens.exceptions.ENSException, ns.owner, name)

@pytest.mark.benchmark(group="AsyncENS.owner")
@pytest.mark.parametrize("name", NAMES)
def test_faster_AsyncENS_owner(benchmark: BenchmarkFixture, name):
    with patch("aiohttp.ClientSession._request", new=fake_aiohttp_request):
        provider = faster_web3.HTTPProvider("http://localhost:8545")
        ns = faster_ens.async_ens.AsyncENS(provider=provider, addr=FAKE_ENS_REGISTRY, middleware=[])
        benchmark(run_100_async, faster_ens.exceptions.ENSException, ns.owner, name)

@pytest.mark.benchmark(group="AsyncENS.resolver")
@pytest.mark.parametrize("name", NAMES)
def test_AsyncENS_resolver(benchmark: BenchmarkFixture, name):
    with patch("aiohttp.ClientSession._request", new=fake_aiohttp_request):
        provider = web3.HTTPProvider("http://localhost:8545")
        ns = ens.async_ens.AsyncENS(provider=provider, addr=FAKE_ENS_REGISTRY, middleware=[])
        benchmark(run_100_async, ens.exceptions.ENSException, ns.resolver, name)

@pytest.mark.benchmark(group="AsyncENS.resolver")
@pytest.mark.parametrize("name", NAMES)
def test_faster_AsyncENS_resolver(benchmark: BenchmarkFixture, name):
    with patch("aiohttp.ClientSession._request", new=fake_aiohttp_request):
        provider = faster_web3.HTTPProvider("http://localhost:8545")
        ns = faster_ens.async_ens.AsyncENS(provider=provider, addr=FAKE_ENS_REGISTRY, middleware=[])
        benchmark(run_100_async, faster_ens.exceptions.ENSException, ns.resolver, name)

@pytest.mark.benchmark(group="AsyncENS.name")
def test_AsyncENS_name(benchmark: BenchmarkFixture):
    with patch("aiohttp.ClientSession._request", new=fake_aiohttp_request):
        provider = web3.HTTPProvider("http://localhost:8545")
        ns = ens.async_ens.AsyncENS(provider=provider, addr=FAKE_ENS_REGISTRY, middleware=[])
        benchmark(run_100_async, ens.exceptions.ENSException, ns.name, "0x314159265dD8dbb310642f98f50C066173C1259b")

@pytest.mark.benchmark(group="AsyncENS.name")
def test_faster_AsyncENS_name(benchmark: BenchmarkFixture):
    with patch("aiohttp.ClientSession._request", new=fake_aiohttp_request):
        provider = faster_web3.HTTPProvider("http://localhost:8545")
        ns = faster_ens.async_ens.AsyncENS(provider=provider, addr=FAKE_ENS_REGISTRY, middleware=[])
        benchmark(run_100_async, faster_ens.exceptions.ENSException, ns.name, "0x314159265dD8dbb310642f98f50C066173C1259b")
