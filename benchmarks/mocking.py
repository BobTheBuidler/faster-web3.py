"""
Shared HTTP and aiohttp mocking utilities for benchmarks.

Provides:
- FakeResponse: for patching requests.Session.get/post
- FakeAiohttpResponse: for patching aiohttp.ClientSession.get/post
- fake_requests_get, fake_requests_post: return FakeResponse with realistic data
- fake_aiohttp_get, fake_aiohttp_post: return FakeAiohttpResponse with realistic data
"""

import asyncio

# --- requests (sync) ---


class FakeResponse:
    def __init__(self, json_data=None, content=None, status_code=200):
        self._json = json_data or {"result": "0x1046b90"}
        self.content = content or b'{"result": "0x1046b90"}'
        self.status_code = status_code

    def json(self):
        return self._json

    def raise_for_status(self):
        if self.status_code >= 400:
            raise Exception("HTTP error")

    def __enter__(self):
        return self

    def __exit__(self, exc_type, exc_val, exc_tb):
        pass


# --- aiohttp (async) ---


class FakeAiohttpResponse:
    def __init__(self, json_data=None, status=200):
        self._json = json_data or {"result": "0x1046b90"}
        self.status = status

    async def json(self):
        return self._json

    async def read(self):
        return b'{"result": "0x1046b90"}'

    async def raise_for_status(self):
        if self.status >= 400:
            raise Exception("HTTP error")

    async def close(self):
        pass


# --- Patch helpers ---


def fake_requests_get(*args, **kwargs):
    return FakeResponse()


def fake_requests_post(*args, **kwargs):
    return FakeResponse()


async def fake_aiohttp_get(*args, **kwargs):
    return FakeAiohttpResponse()


async def fake_aiohttp_post(*args, **kwargs):
    return FakeAiohttpResponse()
