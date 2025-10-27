
import json

from pytest_codspeed import BenchmarkFixture
from unittest.mock import patch

try:
    import ens.ens
    import ens.exceptions
    import web3
except ImportError:
    pass

import faster_ens.ens
import faster_ens.exceptions
import faster_web3

from benchmarks.ens.params import parametrize_names_full_coverage
from benchmarks.ens.fake_rpc import fake_json_rpc_response, FAKE_ENS_REGISTRY


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
@parametrize_names_full_coverage
def test_address(benchmark: BenchmarkFixture, name):
    with patch("requests.Session.send", side_effect=fake_send):
        provider = web3.HTTPProvider("http://localhost:8545")
        # Patch the ENS registry address to our fake one
        ns = ens.ens.ENS(provider=provider, addr=FAKE_ENS_REGISTRY)
        benchmark(run_100, ens.exceptions.ENSException, ns.address, name)


@pytest.mark.benchmark(group="ENS.address")
@parametrize_names_full_coverage
def test_faster_address(benchmark: BenchmarkFixture, name):
    with patch("requests.Session.send", side_effect=fake_send):
        provider = faster_web3.HTTPProvider("http://localhost:8545")
        ns = faster_ens.ens.ENS(provider=provider, addr=FAKE_ENS_REGISTRY)
        benchmark(run_100, faster_ens.exceptions.ENSException, ns.address, name)
