import asyncio
import pytest
from pytest_codspeed import BenchmarkFixture
from unittest.mock import patch, AsyncMock

import web3.utils.async_exception_handling
import faster_web3.utils.async_exception_handling

from benchmarks.web3.utils.offchain_lookup import (
    TX_PARAMS,
    parametrize_offchain_lookup,
)

class FakeAsyncResponse:
    def __init__(self, result, status=200):
        self.status = status
        self._result = result
        self.headers = {}
        self.content = self.text = ""

    async def json(self):
        return self._result

    async def raise_for_status(self):
        if 400 <= self.status <= 499:
            raise Exception("Client error")
        if self.status >= 500:
            raise Exception("Server error")

    async def close(self):
        pass

def make_fake_aiohttp_request(urls, fail_indices):
    call_count = {"i": 0}
    async def fake_aiohttp_request(*args, **kwargs):
        idx = call_count["i"]
        call_count["i"] += 1
        if idx in fail_indices:
            raise Exception("Simulated request failure")
        return FakeAsyncResponse({"data": "0xdeadbeef"}, status=200)
    return fake_aiohttp_request

def run_async_in_loop(fn, *args):
    loop = asyncio.new_event_loop()
    return loop.run_until_complete(_run_100(fn, *args))

async def _run_100(fn, *args):
    for i in range(100):
        await fn(*args)

@pytest.mark.benchmark(group="async_handle_offchain_lookup")
@parametrize_offchain_lookup
def test_async_handle_offchain_lookup_reference(benchmark: BenchmarkFixture, payload, urls, patch_method, fail_indices):
    payload = payload.copy()
    payload["urls"] = urls

    fake_aiohttp_request = make_fake_aiohttp_request(urls, fail_indices)
    patch_target = f"aiohttp.ClientSession.{patch_method}"
    with patch(patch_target, new=AsyncMock(side_effect=fake_aiohttp_request)):
        benchmark(
            run_async_in_loop,
            web3.utils.async_exception_handling.async_handle_offchain_lookup,
            payload,
            TX_PARAMS,
        )

@pytest.mark.benchmark(group="async_handle_offchain_lookup")
@parametrize_offchain_lookup
def test_faster_async_handle_offchain_lookup(benchmark: BenchmarkFixture, payload, urls, patch_method, fail_indices):
    payload = payload.copy()
    payload["urls"] = urls

    fake_aiohttp_request = make_fake_aiohttp_request(urls, fail_indices)
    patch_target = f"aiohttp.ClientSession.{patch_method}"
    with patch(patch_target, new=AsyncMock(side_effect=fake_aiohttp_request)):
        benchmark(
            run_async_in_loop,
            faster_web3.utils.async_exception_handling.async_handle_offchain_lookup,
            payload,
            TX_PARAMS,
        )
