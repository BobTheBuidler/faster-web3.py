import pytest
from pytest_codspeed import BenchmarkFixture

import ens.ens
import ens.exceptions
import faster_ens.ens
import faster_ens.exceptions

import web3
from unittest.mock import patch
import faster_web3

import json
from benchmarks.ens.fake_rpc import fake_json_rpc_response, FAKE_ENS_REGISTRY

NAMES = [
    "alice.eth",
    "foo.alice.eth",
    "bar.foo.alice.eth",
]

def run_100(func, exc, *args, **kwargs):
    for _ in range(100):
        try:
            func(*args, **kwargs)
        except exc:
            pass

class FakeResponse:
    def __init__(self, result):
        self.status_code = 200
        self._result = result
        self.headers = {}
        self.content = self.text = ""
    def json(self):
        return self._result

def fake_send(*args, **kwargs):
    request_data = json.loads(args[1].body)
    return FakeResponse(fake_json_rpc_response(request_data))

@pytest.mark.benchmark(group="ENS.address")
@pytest.mark.parametrize("name", NAMES)
def test_ENS_address(benchmark: BenchmarkFixture, name):
    with patch("requests.Session.send", side_effect=fake_send):
        provider = web3.HTTPProvider("http://localhost:8545")
        ns = ens.ens.ENS(provider=provider, addr=FAKE_ENS_REGISTRY)
        benchmark(run_100, ens.exceptions.ENSException, ns.address, name)

@pytest.mark.benchmark(group="ENS.address")
@pytest.mark.parametrize("name", NAMES)
def test_faster_ENS_address(benchmark: BenchmarkFixture, name):
    with patch("requests.Session.send", side_effect=fake_send):
        provider = faster_web3.HTTPProvider("http://localhost:8545")
        ns = faster_ens.ens.ENS(provider=provider, addr=FAKE_ENS_REGISTRY)
        benchmark(run_100, faster_ens.exceptions.ENSException, ns.address, name)

@pytest.mark.benchmark(group="ENS.owner")
@pytest.mark.parametrize("name", NAMES)
def test_ENS_owner(benchmark: BenchmarkFixture, name):
    with patch("requests.Session.send", side_effect=fake_send):
        provider = web3.HTTPProvider("http://localhost:8545")
        ns = ens.ens.ENS(provider=provider, addr=FAKE_ENS_REGISTRY)
        benchmark(run_100, ens.exceptions.ENSException, ns.owner, name)

@pytest.mark.benchmark(group="ENS.owner")
@pytest.mark.parametrize("name", NAMES)
def test_faster_ENS_owner(benchmark: BenchmarkFixture, name):
    with patch("requests.Session.send", side_effect=fake_send):
        provider = faster_web3.HTTPProvider("http://localhost:8545")
        ns = faster_ens.ens.ENS(provider=provider, addr=FAKE_ENS_REGISTRY)
        benchmark(run_100, faster_ens.exceptions.ENSException, ns.owner, name)

@pytest.mark.benchmark(group="ENS.resolver")
@pytest.mark.parametrize("name", NAMES)
def test_ENS_resolver(benchmark: BenchmarkFixture, name):
    with patch("requests.Session.send", side_effect=fake_send):
        provider = web3.HTTPProvider("http://localhost:8545")
        ns = ens.ens.ENS(provider=provider, addr=FAKE_ENS_REGISTRY)
        benchmark(run_100, ens.exceptions.ENSException, ns.resolver, name)

@pytest.mark.benchmark(group="ENS.resolver")
@pytest.mark.parametrize("name", NAMES)
def test_faster_ENS_resolver(benchmark: BenchmarkFixture, name):
    with patch("requests.Session.send", side_effect=fake_send):
        provider = faster_web3.HTTPProvider("http://localhost:8545")
        ns = faster_ens.ens.ENS(provider=provider, addr=FAKE_ENS_REGISTRY)
        benchmark(run_100, faster_ens.exceptions.ENSException, ns.resolver, name)

@pytest.mark.benchmark(group="ENS.name")
def test_ENS_name(benchmark: BenchmarkFixture):
    with patch("requests.Session.send", side_effect=fake_send):
        provider = web3.HTTPProvider("http://localhost:8545")
        ns = ens.ens.ENS(provider=provider, addr=FAKE_ENS_REGISTRY)
        benchmark(run_100, ens.exceptions.ENSException, ns.name, "0x314159265dD8dbb310642f98f50C066173C1259b")

@pytest.mark.benchmark(group="ENS.name")
def test_faster_ENS_name(benchmark: BenchmarkFixture):
    with patch("requests.Session.send", side_effect=fake_send):
        provider = faster_web3.HTTPProvider("http://localhost:8545")
        ns = faster_ens.ens.ENS(provider=provider, addr=FAKE_ENS_REGISTRY)
        benchmark(run_100, faster_ens.exceptions.ENSException, ns.name, "0x314159265dD8dbb310642f98f50C066173C1259b")
