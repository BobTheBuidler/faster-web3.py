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

parametrize_create = lambda fn: pytest.mark.benchmark(group="get_create_address")(
    pytest.mark.parametrize("nonce", NONCES)(fn)
)

parametrize_create2 = lambda fn: pytest.mark.benchmark(group="get_create2_address")(
    pytest.mark.parametrize("init_code", INIT_CODES, ids=INIT_CODE_IDS)(fn)
)

@parametrize_create
def test_get_create_address_reference(benchmark: BenchmarkFixture, nonce):
    benchmark(web3.utils.address.get_create_address, SENDER, nonce)

@parametrize_create
def test_get_create_address_faster(benchmark: BenchmarkFixture, nonce):
    benchmark(faster_web3.utils.address.get_create_address, SENDER, nonce)

@parametrize_create2
def test_get_create2_address_reference(benchmark: BenchmarkFixture, salt, init_code):
    benchmark(web3.utils.address.get_create2_address, SENDER, salt, init_code)

@parametrize_create2
def test_get_create2_address_faster(benchmark: BenchmarkFixture, salt, init_code):
    benchmark(faster_web3.utils.address.get_create2_address, SENDER, salt, init_code)
