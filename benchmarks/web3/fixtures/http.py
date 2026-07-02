from benchmarks.web3.fixtures.core import (
    CyclicSequence,
)

REQUESTS_SESSION_GET = "requests.Session.get"
REQUESTS_SESSION_POST = "requests.Session.post"
AIOHTTP_CLIENT_SESSION_GET = "aiohttp.ClientSession.get"
AIOHTTP_CLIENT_SESSION_POST = "aiohttp.ClientSession.post"
SIMULATED_REQUEST_FAILURE_MESSAGE = "Simulated request failure"
HTTP_SESSION_MANAGER_RESULT = {"result": "0x1046b90"}
HTTP_SESSION_MANAGER_RESPONSE_BYTES = b'{"result": "0x1046b90"}'


class StaticResponse:
    status_code = 200
    headers = {}

    def __init__(self, content, json_value=None):
        self.content = content
        self.text = content.decode("utf-8")
        self._json_value = json_value

    def json(self):
        return self._json_value

    def raise_for_status(self):
        return None

    def __enter__(self):
        return self

    def __exit__(self, *_args):
        return None


class StaticAiohttpResponse:
    status = 200
    headers = {}
    content_type = "application/json"

    def __init__(self, content, json_value=None):
        self._content = content
        self._json_value = json_value

    def raise_for_status(self):
        return None

    async def read(self):
        return self._content

    async def json(self, *args, **kwargs):
        return self._json_value


HTTP_SESSION_MANAGER_RESPONSE = StaticResponse(
    HTTP_SESSION_MANAGER_RESPONSE_BYTES,
    HTTP_SESSION_MANAGER_RESULT,
)
HTTP_SESSION_MANAGER_AIOHTTP_RESPONSE = StaticAiohttpResponse(
    HTTP_SESSION_MANAGER_RESPONSE_BYTES,
    HTTP_SESSION_MANAGER_RESULT,
)


def make_static_requests_post(response):
    def post(*args, **kwargs):
        return response

    return post


def make_static_requests_get(response):
    def get(*args, **kwargs):
        return response

    return get


def make_static_aiohttp_post(response):
    async def post(*args, **kwargs):
        return response

    return post


def make_static_aiohttp_get(response):
    async def get(*args, **kwargs):
        return response

    return get


def make_sequence_requests_post(responses):
    sequence = CyclicSequence(responses)

    def post(*args, **kwargs):
        return sequence.next()

    return post


def make_sequence_requests_get(responses):
    sequence = CyclicSequence(responses)

    def get(*args, **kwargs):
        return sequence.next()

    return get


def make_sequence_aiohttp_post(responses):
    sequence = CyclicSequence(responses)

    async def post(*args, **kwargs):
        return sequence.next()

    return post


def make_sequence_aiohttp_get(responses):
    sequence = CyclicSequence(responses)

    async def get(*args, **kwargs):
        return sequence.next()

    return get


def make_indexed_failure_requests_request(response, fail_indices):
    failure_indices = set(fail_indices)
    index = 0

    def request(*args, **kwargs):
        nonlocal index
        current_index = index
        index += 1
        if current_index in failure_indices:
            raise Exception(SIMULATED_REQUEST_FAILURE_MESSAGE)
        return response

    return request


def make_indexed_failure_aiohttp_request(response, fail_indices):
    failure_indices = set(fail_indices)
    index = 0

    async def request(*args, **kwargs):
        nonlocal index
        current_index = index
        index += 1
        if current_index in failure_indices:
            raise Exception(SIMULATED_REQUEST_FAILURE_MESSAGE)
        return response

    return request
