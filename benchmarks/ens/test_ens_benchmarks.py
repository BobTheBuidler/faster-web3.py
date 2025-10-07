import pytest
from pytest_codspeed import BenchmarkFixture

import ens.ens
import ens.exceptions
import faster_ens.ens
import faster_ens.exceptions

import web3
import faster_web3

import json

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

@pytest.mark.benchmark(group="ENS.address")
@pytest.mark.parametrize("name", NAMES)
def test_ENS_address(benchmark: BenchmarkFixture, name, fake_ens_registry, patch_requests):
    provider = web3.HTTPProvider("http://localhost:8545")
    ns = ens.ens.ENS(provider=provider, addr=fake_ens_registry)
    benchmark(run_100, ens.exceptions.ENSException, ns.address, name)

@pytest.mark.benchmark(group="ENS.address")
@pytest.mark.parametrize("name", NAMES)
def test_faster_ENS_address(benchmark: BenchmarkFixture, name, fake_ens_registry, patch_requests):
    provider = faster_web3.HTTPProvider("http://localhost:8545")
    ns = faster_ens.ens.ENS(provider=provider, addr=fake_ens_registry)
    benchmark(run_100, faster_ens.exceptions.ENSException, ns.address, name)

@pytest.mark.benchmark(group="ENS.owner")
@pytest.mark.parametrize("name", NAMES)
def test_ENS_owner(benchmark: BenchmarkFixture, name, fake_ens_registry, patch_requests):
    provider = web3.HTTPProvider("http://localhost:8545")
    ns = ens.ens.ENS(provider=provider, addr=fake_ens_registry)
    benchmark(run_100, ens.exceptions.ENSException, ns.owner, name)

@pytest.mark.benchmark(group="ENS.owner")
@pytest.mark.parametrize("name", NAMES)
def test_faster_ENS_owner(benchmark: BenchmarkFixture, name, fake_ens_registry, patch_requests):
    provider = faster_web3.HTTPProvider("http://localhost:8545")
    ns = faster_ens.ens.ENS(provider=provider, addr=fake_ens_registry)
    benchmark(run_100, faster_ens.exceptions.ENSException, ns.owner, name)

@pytest.mark.benchmark(group="ENS.resolver")
@pytest.mark.parametrize("name", NAMES)
def test_ENS_resolver(benchmark: BenchmarkFixture, name, fake_ens_registry, patch_requests):
    provider = web3.HTTPProvider("http://localhost:8545")
    ns = ens.ens.ENS(provider=provider, addr=fake_ens_registry)
    benchmark(run_100, ens.exceptions.ENSException, ns.resolver, name)

@pytest.mark.benchmark(group="ENS.resolver")
@pytest.mark.parametrize("name", NAMES)
def test_faster_ENS_resolver(benchmark: BenchmarkFixture, name, fake_ens_registry, patch_requests):
    provider = faster_web3.HTTPProvider("http://localhost:8545")
    ns = faster_ens.ens.ENS(provider=provider, addr=fake_ens_registry)
    benchmark(run_100, faster_ens.exceptions.ENSException, ns.resolver, name)

@pytest.mark.benchmark(group="ENS.name")
def test_ENS_name(benchmark: BenchmarkFixture, fake_ens_registry, patch_requests):
    provider = web3.HTTPProvider("http://localhost:8545")
    ns = ens.ens.ENS(provider=provider, addr=fake_ens_registry)
    benchmark(run_100, ens.exceptions.ENSException, ns.name, "0x314159265dD8dbb310642f98f50C066173C1259b")

@pytest.mark.benchmark(group="ENS.name")
def test_faster_ENS_name(benchmark: BenchmarkFixture, fake_ens_registry, patch_requests):
    provider = faster_web3.HTTPProvider("http://localhost:8545")
    ns = faster_ens.ens.ENS(provider=provider, addr=fake_ens_registry)
    benchmark(run_100, faster_ens.exceptions.ENSException, ns.name, "0x314159265dD8dbb310642f98f50C066173C1259b")
