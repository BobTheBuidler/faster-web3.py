FAKE_ENS_REGISTRY = "0x0000000000000000000000000000000000000002"
FAKE_RESOLVER = "0x0000000000000000000000000000000000000001"
FAKE_RESULT_ADDR = "0x314159265dD8dbb310642f98f50C066173C1259b"
FAKE_REVERSE_NAME = "alice.eth"
FAKE_TEXT_VALUE = "https://example.com"


ADDR_RESULT = (
    b'"0x000000000000000000000000314159265dd8dbb310642f98f50c066173c1259b"'
)
RESOLVER_RESULT = (
    b'"0x0000000000000000000000000000000000000000000000000000000000000001"'
)
BOOL_FALSE_RESULT = (
    b'"0x0000000000000000000000000000000000000000000000000000000000000000"'
)
BOOL_TRUE_RESULT = (
    b'"0x0000000000000000000000000000000000000000000000000000000000000001"'
)
CHAIN_ID_RESULT = b'"0x1"'
REVERSE_NAME_RESULT = (
    b'"0x0000000000000000000000000000000000000000000000000000000000000020'
    b"0000000000000000000000000000000000000000000000000000000000000009"
    b"616c6963652e6574680000000000000000000000000000000000000000000000"
    b'"'
)
TEXT_VALUE_RESULT = (
    b'"0x0000000000000000000000000000000000000000000000000000000000000020'
    b"0000000000000000000000000000000000000000000000000000000000000013"
    b"68747470733a2f2f6578616d706c652e636f6d00000000000000000000000000"
    b'"'
)
LATEST_BLOCK_RESULT = (
    b'{"number":"0x1","hash":"0x1111111111111111111111111111111111111111'
    b'111111111111111111111111","parentHash":"0x111111111111111111111111'
    b'1111111111111111111111111111111111111111","nonce":"0x0000000000000000",'
    b'"sha3Uncles":"0x111111111111111111111111111111111111111111111111111111'
    b'1111111111","logsBloom":"0x000000000000000000000000000000000000000000'
    b'000000000000000000000000000000000000000000000000000000000000000000000'
    b'000000000000000000000000000000000000000000000000000000000000000000000'
    b'000000000000000000000000000000000000000000000000000000000000000000000'
    b'000000000000000000000000000000000000000000000000000000000000000000000'
    b'000000000000000000000000000000000000000000000000000000000000000000000'
    b'000000000000000000000000000000000000000000000000000000000000000000000'
    b'000000000000000000000000000000000000000000000000000000000000000000000'
    b'000000000000000000000000000000000000000000000000000000000000000000000'
    b'00000000000000000000000000000000000000000000000000000000000000000000",'
    b'"transactionsRoot":"0x111111111111111111111111111111111111111111111111'
    b'1111111111111111","stateRoot":"0x1111111111111111111111111111111111111111'
    b'111111111111111111111111","receiptsRoot":"0x111111111111111111111111'
    b'1111111111111111111111111111111111111111","miner":"'
    b"0x314159265dD8dbb310642f98f50C066173C1259b"
    b'","difficulty":"0x0","totalDifficulty":"0x0","extraData":"0x",'
    b'"size":"0x1","gasLimit":"0xe4e1c0","gasUsed":"0x0",'
    b'"timestamp":"0x7fffffff","transactions":[],"uncles":[]}'
)


def _rpc_response(result):
    return b'{"jsonrpc":"2.0","id":1,"result":' + result + b"}"


BLOCK_RESPONSE = _rpc_response(LATEST_BLOCK_RESULT)
CHAIN_ID_RESPONSE = _rpc_response(CHAIN_ID_RESULT)
RESOLVER_RESPONSE = _rpc_response(RESOLVER_RESULT)
OWNER_RESPONSE = _rpc_response(ADDR_RESULT)
ADDR_RESPONSE = _rpc_response(ADDR_RESULT)
SUPPORTS_FALSE_RESPONSE = _rpc_response(BOOL_FALSE_RESULT)
SUPPORTS_TRUE_RESPONSE = _rpc_response(BOOL_TRUE_RESULT)
REVERSE_NAME_RESPONSE = _rpc_response(REVERSE_NAME_RESULT)
TEXT_VALUE_RESPONSE = _rpc_response(TEXT_VALUE_RESULT)


ENS_RESPONSE_SEQUENCES = {
    "address": (
        (
            BLOCK_RESPONSE,
            CHAIN_ID_RESPONSE,
            RESOLVER_RESPONSE,
            CHAIN_ID_RESPONSE,
            CHAIN_ID_RESPONSE,
            SUPPORTS_FALSE_RESPONSE,
            CHAIN_ID_RESPONSE,
            CHAIN_ID_RESPONSE,
            ADDR_RESPONSE,
            CHAIN_ID_RESPONSE,
        ),
        (
            CHAIN_ID_RESPONSE,
            RESOLVER_RESPONSE,
            CHAIN_ID_RESPONSE,
            CHAIN_ID_RESPONSE,
            SUPPORTS_FALSE_RESPONSE,
            CHAIN_ID_RESPONSE,
            CHAIN_ID_RESPONSE,
            ADDR_RESPONSE,
            CHAIN_ID_RESPONSE,
        ),
    ),
    "owner": (
        (
            BLOCK_RESPONSE,
            CHAIN_ID_RESPONSE,
            OWNER_RESPONSE,
            CHAIN_ID_RESPONSE,
        ),
        (
            CHAIN_ID_RESPONSE,
            OWNER_RESPONSE,
            CHAIN_ID_RESPONSE,
        ),
    ),
    "resolver": (
        (
            BLOCK_RESPONSE,
            CHAIN_ID_RESPONSE,
            RESOLVER_RESPONSE,
            CHAIN_ID_RESPONSE,
        ),
        (
            CHAIN_ID_RESPONSE,
            RESOLVER_RESPONSE,
            CHAIN_ID_RESPONSE,
        ),
    ),
    "name": (
        (
            BLOCK_RESPONSE,
            CHAIN_ID_RESPONSE,
            RESOLVER_RESPONSE,
            CHAIN_ID_RESPONSE,
            CHAIN_ID_RESPONSE,
            REVERSE_NAME_RESPONSE,
            CHAIN_ID_RESPONSE,
            CHAIN_ID_RESPONSE,
            RESOLVER_RESPONSE,
            CHAIN_ID_RESPONSE,
            CHAIN_ID_RESPONSE,
            SUPPORTS_FALSE_RESPONSE,
            CHAIN_ID_RESPONSE,
            CHAIN_ID_RESPONSE,
            ADDR_RESPONSE,
            CHAIN_ID_RESPONSE,
        ),
        (
            CHAIN_ID_RESPONSE,
            RESOLVER_RESPONSE,
            CHAIN_ID_RESPONSE,
            CHAIN_ID_RESPONSE,
            REVERSE_NAME_RESPONSE,
            CHAIN_ID_RESPONSE,
            CHAIN_ID_RESPONSE,
            RESOLVER_RESPONSE,
            CHAIN_ID_RESPONSE,
            CHAIN_ID_RESPONSE,
            SUPPORTS_FALSE_RESPONSE,
            CHAIN_ID_RESPONSE,
            CHAIN_ID_RESPONSE,
            ADDR_RESPONSE,
            CHAIN_ID_RESPONSE,
        ),
    ),
    "get_text": (
        (
            BLOCK_RESPONSE,
            CHAIN_ID_RESPONSE,
            RESOLVER_RESPONSE,
            CHAIN_ID_RESPONSE,
            CHAIN_ID_RESPONSE,
            SUPPORTS_TRUE_RESPONSE,
            CHAIN_ID_RESPONSE,
            CHAIN_ID_RESPONSE,
            TEXT_VALUE_RESPONSE,
            CHAIN_ID_RESPONSE,
        ),
        (
            CHAIN_ID_RESPONSE,
            RESOLVER_RESPONSE,
            CHAIN_ID_RESPONSE,
            CHAIN_ID_RESPONSE,
            SUPPORTS_TRUE_RESPONSE,
            CHAIN_ID_RESPONSE,
            CHAIN_ID_RESPONSE,
            TEXT_VALUE_RESPONSE,
            CHAIN_ID_RESPONSE,
        ),
    ),
}


ENS_ASYNC_RESPONSE_SEQUENCES = {
    "address": (
        (
            BLOCK_RESPONSE,
            RESOLVER_RESPONSE,
            SUPPORTS_FALSE_RESPONSE,
            ADDR_RESPONSE,
        ),
        (
            RESOLVER_RESPONSE,
            SUPPORTS_FALSE_RESPONSE,
            ADDR_RESPONSE,
        ),
    ),
    "owner": (
        (
            BLOCK_RESPONSE,
            OWNER_RESPONSE,
        ),
        (OWNER_RESPONSE,),
    ),
    "resolver": (
        (
            BLOCK_RESPONSE,
            RESOLVER_RESPONSE,
        ),
        (RESOLVER_RESPONSE,),
    ),
    "name": (
        (
            BLOCK_RESPONSE,
            RESOLVER_RESPONSE,
            REVERSE_NAME_RESPONSE,
            RESOLVER_RESPONSE,
            SUPPORTS_FALSE_RESPONSE,
            ADDR_RESPONSE,
        ),
        (
            RESOLVER_RESPONSE,
            REVERSE_NAME_RESPONSE,
            RESOLVER_RESPONSE,
            SUPPORTS_FALSE_RESPONSE,
            ADDR_RESPONSE,
        ),
    ),
    "get_text": (
        (
            BLOCK_RESPONSE,
            RESOLVER_RESPONSE,
            SUPPORTS_TRUE_RESPONSE,
            TEXT_VALUE_RESPONSE,
        ),
        (
            RESOLVER_RESPONSE,
            SUPPORTS_TRUE_RESPONSE,
            TEXT_VALUE_RESPONSE,
        ),
    ),
}


class StaticRPCSequence:
    def __init__(self, operation, sequences):
        first, repeat = sequences[operation]
        self._first = first
        self._repeat = repeat
        self._index = 0

    def response_bytes(self):
        first_len = len(self._first)
        if self._index < first_len:
            response = self._first[self._index]
        else:
            response = self._repeat[(self._index - first_len) % len(self._repeat)]
        self._index += 1
        return response


class StaticRequestsResponse:
    def __init__(self, content):
        self.content = content
        self.text = content.decode("utf-8")
        self.headers = {}
        self.status_code = 200

    def raise_for_status(self):
        return None

    def __enter__(self):
        return self

    def __exit__(self, _exc_type, _exc, _traceback):
        return None


class StaticAiohttpResponse:
    def __init__(self, content):
        self._content = content
        self.headers = {}
        self.status = 200

    def raise_for_status(self):
        return None

    async def read(self):
        return self._content


def make_requests_post(operation):
    sequence = StaticRPCSequence(operation, ENS_RESPONSE_SEQUENCES)

    def post(_self, _url, *args, **kwargs):
        return StaticRequestsResponse(sequence.response_bytes())

    return post


def make_aiohttp_post(operation):
    sequence = StaticRPCSequence(operation, ENS_ASYNC_RESPONSE_SEQUENCES)

    async def post(_self, _url, *args, **kwargs):
        return StaticAiohttpResponse(sequence.response_bytes())

    return post
