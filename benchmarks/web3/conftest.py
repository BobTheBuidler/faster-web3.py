import pytest
import web3

import faster_web3

from benchmarks.web3.fixtures.abis import (
    ERC20_ABI,
)
from benchmarks.web3.fixtures.contracts import (
    ADDRESS,
)
from benchmarks.web3.fixtures.core import (
    LOCALHOST_HTTP_ENDPOINT,
)


@pytest.fixture
def web3_w3():
    return web3.Web3(web3.HTTPProvider(LOCALHOST_HTTP_ENDPOINT))


@pytest.fixture
def faster_w3():
    return faster_web3.Web3(faster_web3.HTTPProvider(LOCALHOST_HTTP_ENDPOINT))


@pytest.fixture
def web3_async_w3():
    return web3.AsyncWeb3(web3.AsyncHTTPProvider(LOCALHOST_HTTP_ENDPOINT))


@pytest.fixture
def faster_async_w3():
    return faster_web3.AsyncWeb3(
        faster_web3.AsyncHTTPProvider(LOCALHOST_HTTP_ENDPOINT)
    )


@pytest.fixture
def web3_erc20_contract(web3_w3):
    return web3_w3.eth.contract(address=ADDRESS, abi=ERC20_ABI)


@pytest.fixture
def faster_erc20_contract(faster_w3):
    return faster_w3.eth.contract(address=ADDRESS, abi=ERC20_ABI)


@pytest.fixture
def web3_async_erc20_contract(web3_async_w3):
    return web3_async_w3.eth.contract(address=ADDRESS, abi=ERC20_ABI)


@pytest.fixture
def faster_async_erc20_contract(faster_async_w3):
    return faster_async_w3.eth.contract(address=ADDRESS, abi=ERC20_ABI)
