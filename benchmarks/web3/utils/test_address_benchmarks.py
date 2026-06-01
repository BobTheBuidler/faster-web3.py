import pytest
from pytest_codspeed import BenchmarkFixture

import web3.utils.address

import faster_web3.utils.address

SENDER = "0x" + "00" * 20

NONCES = [0, 100, 10000]

SALT = "0x" + "ab" * 32

INIT_CODES = [
    "0x6000600055",
    "0x" + "ff" * 64,
    "0x" + "aa" * 256,
]
INIT_CODE_IDS = ["short", "med", "long"]

create = lambda fn: pytest.mark.benchmark(group="get_create_address")(
    pytest.mark.parametrize("nonce", NONCES)(fn)
)

create2 = lambda fn: pytest.mark.benchmark(group="get_create2_address")(
    pytest.mark.parametrize("init_code", INIT_CODES, ids=INIT_CODE_IDS)(fn)
)


@create
def test_get_create_address(benchmark: BenchmarkFixture, nonce):
    benchmark(web3.utils.address.get_create_address, SENDER, nonce)


@create
def test_faster_get_create_address(benchmark: BenchmarkFixture, nonce):
    benchmark(faster_web3.utils.address.get_create_address, SENDER, nonce)


@create2
def test_get_create2_address(benchmark: BenchmarkFixture, init_code):
    benchmark(web3.utils.address.get_create2_address, SENDER, SALT, init_code)


@create2
def test_faster_get_create2_address(benchmark: BenchmarkFixture, init_code):
    benchmark(faster_web3.utils.address.get_create2_address, SENDER, SALT, init_code)
