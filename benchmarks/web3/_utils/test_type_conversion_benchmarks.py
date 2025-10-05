import pytest
from pytest_codspeed import BenchmarkFixture

import web3._utils.type_conversion
import faster_web3._utils.type_conversion

def run_100(func, *args, **kwargs):
    for _ in range(100):
        func(*args, **kwargs)

to_hex_if_bytes_cases = {
    "bytes": b"\x00\x01\x02",
    "hexstr": "0xdeadbeef",
    "int": 123456789,
    "empty-bytes": b"",
    "large-bytes": b"\xff" * 32,
    "non-prefixed-hex": "deadbeef",
    "zero-int": 0,
    "negative-int": -1,
    "empty-str": "",
    "not-hex": "nothex",
    "unicode": "你好",
}

@pytest.mark.benchmark(group="to_hex_if_bytes")
@pytest.mark.parametrize("val", list(to_hex_if_bytes_cases.values()), ids=list(to_hex_if_bytes_cases.keys()))
def test_web3_to_hex_if_bytes(benchmark: BenchmarkFixture, val):
    benchmark(run_100, web3._utils.type_conversion.to_hex_if_bytes, val)

@pytest.mark.benchmark(group="to_hex_if_bytes")
@pytest.mark.parametrize("val", list(to_hex_if_bytes_cases.values()), ids=list(to_hex_if_bytes_cases.keys()))
def test_faster_web3_to_hex_if_bytes(benchmark: BenchmarkFixture, val):
    benchmark(run_100, faster_web3._utils.type_conversion.to_hex_if_bytes, val)

to_bytes_if_hex_cases = {
    "hexstr": "0xdeadbeef",
    "zero": "0x00",
    "nothex": "nothex",
    "bytes": b"\x00\x01",
    "non-prefixed-hex": "deadbeef",
    "empty-str": "",
    "large-hex": "0x" + "ff" * 64,
    "unicode": "你好",
    "int": 123456,
    "none": None,
}

@pytest.mark.benchmark(group="to_bytes_if_hex")
@pytest.mark.parametrize("val", list(to_bytes_if_hex_cases.values()), ids=list(to_bytes_if_hex_cases.keys()))
def test_web3_to_bytes_if_hex(benchmark: BenchmarkFixture, val):
    benchmark(run_100, web3._utils.type_conversion.to_bytes_if_hex, val)

@pytest.mark.benchmark(group="to_bytes_if_hex")
@pytest.mark.parametrize("val", list(to_bytes_if_hex_cases.values()), ids=list(to_bytes_if_hex_cases.keys()))
def test_faster_web3_to_bytes_if_hex(benchmark: BenchmarkFixture, val):
    benchmark(run_100, faster_web3._utils.type_conversion.to_bytes_if_hex, val)
