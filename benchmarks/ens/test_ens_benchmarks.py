import pytest
from unittest.mock import (
    patch,
)

import ens.ens
import ens.exceptions
from pytest_codspeed import (
    BenchmarkFixture,
)
import web3

from benchmarks.batching import (
    run_100_exc,
)
from benchmarks.ens.fake_rpc import (
    FAKE_ENS_REGISTRY,
    make_requests_post,
)
from benchmarks.ens.params import (
    parametrize_names_full_coverage,
)
import faster_ens.ens
import faster_ens.exceptions
import faster_web3


@pytest.mark.benchmark(group="ENS.address")
@parametrize_names_full_coverage
def test_address(benchmark: BenchmarkFixture, name):
    with patch("requests.Session.post", new=make_requests_post("address")):
        provider = web3.HTTPProvider("http://localhost:8545")
        ns = ens.ens.ENS(provider=provider, addr=FAKE_ENS_REGISTRY)
        address = ns.address
        benchmark(run_100_exc, ens.exceptions.ENSException, address, name)


@pytest.mark.benchmark(group="ENS.address")
@parametrize_names_full_coverage
def test_faster_address(benchmark: BenchmarkFixture, name):
    with patch("requests.Session.post", new=make_requests_post("address")):
        provider = faster_web3.HTTPProvider("http://localhost:8545")
        ns = faster_ens.ens.ENS(provider=provider, addr=FAKE_ENS_REGISTRY)
        address = ns.address
        benchmark(run_100_exc, faster_ens.exceptions.ENSException, address, name)
