import web3
import web3._utils.caching
import web3.providers.persistent.request_processor
from web3.providers.persistent import (
    PersistentConnectionProvider,
)

import faster_web3
import faster_web3._utils.caching
import faster_web3.providers.persistent.request_processor
from faster_web3.providers.persistent import (
    PersistentConnectionProvider as FasterPersistentConnectionProvider,
)

from benchmarks.web3.fixtures.core import (
    CyclicSequence,
    LOCALHOST_WS_ENDPOINT,
)
from benchmarks.web3.fixtures.rpc import (
    SUBSCRIPTION_ID_1,
)


RESPONSE_FORMATTERS = (
    lambda response: response,
    lambda response: response,
    lambda *_args: None,
)


class SocketAdapter:
    def __init__(self, responses):
        self._responses = CyclicSequence(responses)
        self.sent = []

    async def send(self, payload):
        self.sent.append(payload)

    async def recv(self):
        return self._responses.next()


class Web3SocketProvider(PersistentConnectionProvider):
    is_async = True
    endpoint_uri = LOCALHOST_WS_ENDPOINT

    def __init__(self, responses):
        super().__init__()
        self.socket = SocketAdapter(responses)

    async def socket_send(self, request_data):
        await self.socket.send(request_data)

    async def socket_recv(self):
        return await self.socket.recv()


class FasterSocketProvider(FasterPersistentConnectionProvider):
    is_async = True
    endpoint_uri = LOCALHOST_WS_ENDPOINT

    def __init__(self, responses):
        super().__init__()
        self.socket = SocketAdapter(responses)

    async def socket_send(self, request_data):
        await self.socket.send(request_data)

    async def socket_recv(self):
        return await self.socket.recv()


class Web3CachingSendProvider(PersistentConnectionProvider):
    is_async = True
    endpoint_uri = LOCALHOST_WS_ENDPOINT

    def __init__(self, responses):
        super().__init__()
        self.responses = CyclicSequence(responses)
        self.sent = []

    async def socket_send(self, request_data):
        self.sent.append(request_data)
        await self._request_processor.cache_raw_response(self.responses.next())

    async def socket_recv(self):
        return self.responses.next()


class FasterCachingSendProvider(FasterPersistentConnectionProvider):
    is_async = True
    endpoint_uri = LOCALHOST_WS_ENDPOINT

    def __init__(self, responses):
        super().__init__()
        self.responses = CyclicSequence(responses)
        self.sent = []

    async def socket_send(self, request_data):
        self.sent.append(request_data)
        await self._request_processor.cache_raw_response(self.responses.next())

    async def socket_recv(self):
        return self.responses.next()


def web3_socket_provider(*responses):
    return Web3SocketProvider(responses)


def faster_socket_provider(*responses):
    return FasterSocketProvider(responses)


def web3_caching_send_provider(responses):
    return Web3CachingSendProvider(responses)


def faster_caching_send_provider(responses):
    return FasterCachingSendProvider(responses)


def web3_persistent_w3(provider):
    return web3.AsyncWeb3(provider)


def faster_persistent_w3(provider):
    return faster_web3.AsyncWeb3(provider)


def web3_request_processor():
    provider = web3.WebSocketProvider(LOCALHOST_WS_ENDPOINT)
    return web3.providers.persistent.request_processor.RequestProcessor(provider)


def faster_request_processor():
    provider = faster_web3.WebSocketProvider(LOCALHOST_WS_ENDPOINT)
    return faster_web3.providers.persistent.request_processor.RequestProcessor(
        provider
    )


def cache_request_info(processor):
    return processor.cache_request_information(
        1,
        "eth_chainId",
        [],
        RESPONSE_FORMATTERS,
    )


def seed_active_subscription(processor, cache_module):
    request_info = cache_module.RequestInformation(
        "eth_subscribe",
        ["newHeads"],
        RESPONSE_FORMATTERS,
        subscription_id=SUBSCRIPTION_ID_1,
    )
    processor._request_information_cache.cache(
        cache_module.generate_cache_key(SUBSCRIPTION_ID_1),
        request_info,
    )


def seed_subscription(provider, subscription, cache_module):
    subscription._id = SUBSCRIPTION_ID_1
    request_info = cache_module.RequestInformation(
        "eth_subscribe",
        ["newHeads"],
        RESPONSE_FORMATTERS,
        subscription_id=SUBSCRIPTION_ID_1,
    )
    provider._request_processor._request_information_cache.cache(
        cache_module.generate_cache_key(SUBSCRIPTION_ID_1),
        request_info,
    )
