import pytest
from pytest_codspeed import BenchmarkFixture
from unittest.mock import patch

import web3.utils.exception_handling
import faster_web3.utils.exception_handling

from benchmarks.web3.utils.offchain_lookup import (
    TX_PARAMS,
    parametrize_offchain_lookup,
)

class FakeResponse:
    def __init__(self, result, status_code=200):
        self.status_code = status_code
        self._result = result
        self.headers = {}
        self.content = self.text = ""

    def json(self):
        return self._result

def make_fake_send(urls, fail_indices):
    call_count = {"i": 0}
    def fake_send(*args, **kwargs):
        idx = call_count["i"]
        call_count["i"] += 1
        if idx in fail_indices:
            # Simulate a failure: raise an exception (could also return a non-2xx response)
            raise Exception("Simulated request failure")
        return FakeResponse({"data": "0xdeadbeef"}, status_code=200)
    return fake_send

@pytest.mark.benchmark(group="handle_offchain_lookup")
@parametrize_offchain_lookup
def test_handle_offchain_lookup_reference(benchmark: BenchmarkFixture, payload, urls, patch_method, fail_indices):
    payload = payload.copy()
    payload["urls"] = urls

    fake_send = make_fake_send(urls, fail_indices)
    with patch(f"requests.Session.{patch_method}", side_effect=fake_send):
        benchmark(web3.utils.exception_handling.handle_offchain_lookup, payload, TX_PARAMS)

@pytest.mark.benchmark(group="handle_offchain_lookup")
@parametrize_offchain_lookup
def test_faster_handle_offchain_lookup(benchmark: BenchmarkFixture, payload, urls, patch_method, fail_indices):
    payload = payload.copy()
    payload["urls"] = urls

    fake_send = make_fake_send(urls, fail_indices)
    with patch(f"requests.Session.{patch_method}", side_effect=fake_send):
        benchmark(faster_web3.utils.exception_handling.handle_offchain_lookup, payload, TX_PARAMS)
