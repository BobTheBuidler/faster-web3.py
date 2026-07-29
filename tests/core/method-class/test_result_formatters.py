import pytest

from faster_eth_utils.toolz import (
    compose,
)

from faster_web3 import (
    AsyncWeb3,
    Web3,
)
from faster_web3.method import (
    Method,
)
from faster_web3.module import (
    Module,
)
from faster_web3.providers import (
    AsyncBaseProvider,
    BaseProvider,
)


def result_formatter(method, module):
    def formatter(self):
        return "OKAY"

    return compose(formatter)


def empty_result_formatters(method, module):
    return []


class DummyProvider(BaseProvider):
    def make_request(method, params):
        raise NotImplementedError


class StaticResultProvider(BaseProvider):
    def make_request(self, method, params):
        return {"jsonrpc": "2.0", "id": 1, "result": result_for_test[method]}

    def is_connected(self, show_traceback=False):
        return True


class AsyncStaticResultProvider(AsyncBaseProvider):
    async def make_request(self, method, params):
        return {"jsonrpc": "2.0", "id": 1, "result": result_for_test[method]}

    async def is_connected(self, show_traceback=False):
        return True


result_for_test = {"method_for_test": "ok"}


class ModuleForTest(Module):
    method = Method("method_for_test", result_formatters=result_formatter)


class EmptyResultFormatterModule(Module):
    method = Method("method_for_test", result_formatters=empty_result_formatters)


class AsyncEmptyResultFormatterModule(Module):
    is_async = True

    method = Method("method_for_test", result_formatters=empty_result_formatters)


@pytest.fixture
def dummy_w3():
    w3 = Web3(
        DummyProvider(),
        modules={"module": ModuleForTest},
    )
    return w3


def test_result_formatter(dummy_w3, request_mocker):
    with request_mocker(dummy_w3, mock_results=result_for_test):
        assert dummy_w3.module.method() == "OKAY"


def test_empty_result_formatter_sequence_is_identity_for_sync_method_call():
    w3 = Web3(
        StaticResultProvider(),
        modules={"module": EmptyResultFormatterModule},
        middleware=[],
    )

    assert w3.module.method() == "ok"


@pytest.mark.asyncio
async def test_empty_result_formatter_sequence_is_identity_for_async_method_call():
    async_w3 = AsyncWeb3(
        AsyncStaticResultProvider(),
        modules={"module": AsyncEmptyResultFormatterModule},
        middleware=[],
    )

    assert await async_w3.module.method() == "ok"
