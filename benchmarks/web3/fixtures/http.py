from benchmarks.web3.fixtures.core import (
    CyclicSequence,
)


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


def make_static_requests_post(response):
    def post(_self, _url, *args, **kwargs):
        return response

    return post


def make_static_aiohttp_post(response):
    async def post(_self, _url, *args, **kwargs):
        return response

    return post


def make_sequence_requests_post(responses):
    sequence = CyclicSequence(responses)

    def post(_self, _url, *args, **kwargs):
        return sequence.next()

    return post


def make_sequence_aiohttp_post(responses):
    sequence = CyclicSequence(responses)

    async def post(_self, _url, *args, **kwargs):
        return sequence.next()

    return post
