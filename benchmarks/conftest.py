import pytest
import json
from unittest.mock import patch

class FakeResponse:
    """
    Synchronous fake HTTP response for requests-based tests.
    Used to simulate the response object returned by requests.Session.send,
    allowing deterministic testing of contract calls.
    """
    def __init__(self, result):
        self.status_code = 200
        self._result = result
        self.headers = {}
        self.content = self.text = ""
    def json(self):
        return self._result

@pytest.fixture
def fake_send(fake_json_rpc_response_factory):
    """
    Returns a function to be used as the side_effect for patching requests.Session.send.
    This function simulates synchronous HTTP responses for contract calls,
    using the fake_json_rpc_response_factory to generate deterministic results.
    """
    def _fake_send(*args, **kwargs):
        request_data = json.loads(args[1].body)
        return FakeResponse(fake_json_rpc_response_factory(request_data))
    return _fake_send

class FakeAiohttpResponse:
    """
    Asynchronous fake HTTP response for aiohttp-based tests.
    Used to simulate the response object returned by aiohttp.ClientSession._request,
    allowing deterministic testing of contract calls in async benchmarks.
    """
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

@pytest.fixture
def fake_aiohttp_request(fake_json_rpc_response_factory):
    """
    Returns an async function to be used as the new value for patching aiohttp.ClientSession._request.
    This function simulates asynchronous HTTP responses for contract calls,
    using the fake_json_rpc_response_factory to generate deterministic results.
    """
    async def _fake_aiohttp_request(self, method, url, *args, **kwargs):
        data = kwargs.get("data")
        if data is None and "json" in kwargs:
            data = json.dumps(kwargs["json"])
        request_data = json.loads(data)
        result = fake_json_rpc_response_factory(request_data)
        return FakeAiohttpResponse(result)
    return _fake_aiohttp_request

@pytest.fixture
def patch_requests(fake_send):
    """
    Fixture that patches requests.Session.send with the fake_send helper for the duration of a test.
    Use this fixture in any test that needs to intercept HTTP requests made via requests.
    """
    with patch("requests.Session.send", side_effect=fake_send):
        yield

@pytest.fixture
def patch_aiohttp(fake_aiohttp_request):
    """
    Fixture that patches aiohttp.ClientSession._request with the fake_aiohttp_request helper for the duration of a test.
    Use this fixture in any test that needs to intercept HTTP requests made via aiohttp (async).
    """
    with patch("aiohttp.ClientSession._request", new=fake_aiohttp_request):
        yield

@pytest.fixture
def fake_json_rpc_response_factory():
    """
    Returns a function that simulates JSON-RPC responses for contract calls.
    This handler should be parametrized or monkeypatched in ENS-specific conftest.py
    to provide the correct registry/resolver/result addresses for each test suite.
    """
    # Placeholder: ENS-specific conftest.py should override this fixture.
    def _response(request_data: dict):
        raise NotImplementedError("fake_json_rpc_response_factory must be provided by a more specific fixture.")
    return _response
