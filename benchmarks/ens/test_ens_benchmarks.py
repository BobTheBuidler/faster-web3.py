import json
import time

import pytest
from pytest_codspeed import BenchmarkFixture
from unittest.mock import patch

import ens.ens
import ens.exceptions
import web3

import faster_ens.ens
import faster_ens.exceptions
import faster_web3

from benchmarks.ens.params import parametrize_names_full_coverage
from benchmarks.ens.fake_rpc import (
    fake_json_rpc_response,
    FAKE_ENS_REGISTRY,
    FAKE_RESOLVER,
)
from benchmarks.batching import run_100_exc


FAKE_BLOCK_HASH = "0x" + "0" * 64
ABI_FALSE = "0x" + "0" * 64
SUPPORTS_INTERFACE_SELECTOR = "0x01ffc9a7"


class FakeResponse:
    def __init__(self, result):
        self.status_code = 200
        self._result = result
        self.headers = {}
        self.text = json.dumps(result)
        self.content = self.text.encode("utf-8")

    def json(self):
        return self._result

    def raise_for_status(self):
        return None

    def __enter__(self):
        return self

    def __exit__(self, _exc_type, _exc, _traceback):
        return None


def fake_post(_self, _url, *args, **kwargs):
    data = kwargs["data"]
    if isinstance(data, bytes):
        data = data.decode("utf-8")
    request_data = json.loads(data)
    response = fake_json_rpc_response(request_data)
    params = request_data.get("params", [])
    if request_data["method"] == "eth_call" and params:
        call_data = params[0]
        to_addr = call_data.get("to", "").lower()
        input_data = call_data.get("data", "")
        if (
            to_addr == FAKE_RESOLVER.lower()
            and input_data.startswith(SUPPORTS_INTERFACE_SELECTOR)
        ):
            response = {
                "jsonrpc": "2.0",
                "id": request_data["id"],
                "result": ABI_FALSE,
            }
    if request_data["method"] == "eth_getBlockByNumber" and response["result"] is None:
        response = {
            "jsonrpc": "2.0",
            "id": request_data["id"],
            "result": {
                "number": "0x1",
                "hash": FAKE_BLOCK_HASH,
                "parentHash": FAKE_BLOCK_HASH,
                "nonce": "0x0000000000000000",
                "sha3Uncles": FAKE_BLOCK_HASH,
                "logsBloom": "0x" + "0" * 512,
                "transactionsRoot": FAKE_BLOCK_HASH,
                "stateRoot": FAKE_BLOCK_HASH,
                "receiptsRoot": FAKE_BLOCK_HASH,
                "miner": FAKE_ENS_REGISTRY,
                "difficulty": "0x0",
                "totalDifficulty": "0x0",
                "extraData": "0x",
                "size": "0x1",
                "gasLimit": "0xe4e1c0",
                "gasUsed": "0x0",
                "timestamp": hex(int(time.time())),
                "transactions": [],
                "uncles": [],
            },
        }
    return FakeResponse(response)


@pytest.mark.benchmark(group="ENS.address")
@parametrize_names_full_coverage
def test_address(benchmark: BenchmarkFixture, name):
    with patch("requests.Session.post", new=fake_post):
        provider = web3.HTTPProvider("http://localhost:8545")
        # Patch the ENS registry address to our fake one
        ns = ens.ens.ENS(provider=provider, addr=FAKE_ENS_REGISTRY)
        benchmark(run_100_exc, ens.exceptions.ENSException, ns.address, name)


@pytest.mark.benchmark(group="ENS.address")
@parametrize_names_full_coverage
def test_faster_address(benchmark: BenchmarkFixture, name):
    with patch("requests.Session.post", new=fake_post):
        provider = faster_web3.HTTPProvider("http://localhost:8545")
        ns = faster_ens.ens.ENS(provider=provider, addr=FAKE_ENS_REGISTRY)
        benchmark(run_100_exc, faster_ens.exceptions.ENSException, ns.address, name)
