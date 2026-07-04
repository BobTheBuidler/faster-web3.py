from benchmarks.web3.fixtures.http import (
    StaticAiohttpResponse,
    StaticResponse,
)


BEACON_BASE_URL = "http://localhost:5052"
BEACON_DEFAULT_RESPONSE = {"data": "mocked"}
BEACON_STATE_IDS = ["head", "finalized", "justified", "12345"]
BEACON_BLOCK_IDS = ["head", "genesis", "12345", "0xabc123"]
BEACON_VALIDATOR_IDS = ["0", "123456", "0xdeadbeef"]
BEACON_EPOCHS = ["0", "123", "99999"]
BEACON_VALIDATOR_INDICES_CASES = [[], ["0"], ["1", "2", "3", "4", "5"]]
BEACON_INDICES_CASES = [None, [0], [0, 1, 2, 3, 4]]
BEACON_BLOCK_ROOTS = ["0xabc123", "0x0"]
BEACON_PEER_IDS = ["peer1", "peer2", "0xdeadbeef"]


def beacon_response(result=None):
    return StaticResponse(b"", result or BEACON_DEFAULT_RESPONSE)


def beacon_aiohttp_response(result=None):
    return StaticAiohttpResponse(b"", result or BEACON_DEFAULT_RESPONSE)


def make_beacon_requests_get(result=None):
    response = beacon_response(result)

    def get(*args, **kwargs):
        return response

    return get


def make_beacon_requests_post(result=None):
    response = beacon_response(result)

    def post(*args, **kwargs):
        return response

    return post


def make_beacon_aiohttp_get(result=None):
    response = beacon_aiohttp_response(result)

    async def get(*args, **kwargs):
        return response

    return get


def make_beacon_aiohttp_post(result=None):
    response = beacon_aiohttp_response(result)

    async def post(*args, **kwargs):
        return response

    return post
