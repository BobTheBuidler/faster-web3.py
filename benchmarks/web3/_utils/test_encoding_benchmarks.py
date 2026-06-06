import pytest
from eth_utils import (
    to_bytes,
)
from hexbytes import (
    HexBytes,
)
from pydantic import (
    BaseModel,
)
from pytest_codspeed import (
    BenchmarkFixture,
)

import web3._utils.encoding
import web3.exceptions
from web3.datastructures import (
    AttributeDict,
)

import faster_web3._utils.encoding
import faster_web3.exceptions
from faster_web3.datastructures import (
    AttributeDict as FasterAttributeDict,
)

from benchmarks.batching import (
    run_100,
    run_100_exc,
    run_1000,
)
from benchmarks.web3.params import (
    EXAMPLE_ADDRESS,
)


class Payload(BaseModel):
    name: str
    count: int


class Unencodable:
    pass


BYTES_VALUE = b"\x12\x34\x56"
HEXBYTES_VALUE = HexBytes("0x123456")
ATTR_DICT = AttributeDict({"nested": AttributeDict({"value": 1})})
FASTER_ATTR_DICT = FasterAttributeDict({"nested": FasterAttributeDict({"value": 1})})
MODEL = Payload(name="alice", count=3)
ARRAY_CASES = (
    ("uint256[]", [1, 2, 3]),
    ("bytes32[]", [b"\x11" * 32, b"\x22" * 32]),
    ("address[]", [EXAMPLE_ADDRESS]),
)
JSON_DECODE_CASES = (
    '{"result": ["0x1", "0x2"]}',
    '{"result": {"nested": ["0x1", "0x2"]}}',
)
JSON_ENCODE_ERROR_CASES = (
    {"ok": 1, "bad": Unencodable()},
    [1, Unencodable()],
)


@pytest.mark.benchmark(group="to_hex_with_size")
@pytest.mark.parametrize("value,bits", ((1, 8), (255, 8), (2**128 - 1, 128)))
def test_to_hex_with_size(benchmark: BenchmarkFixture, value, bits):
    benchmark(run_1000, web3._utils.encoding.to_hex_with_size, value, bits)


@pytest.mark.benchmark(group="to_hex_with_size")
@pytest.mark.parametrize("value,bits", ((1, 8), (255, 8), (2**128 - 1, 128)))
def test_faster_to_hex_with_size(benchmark: BenchmarkFixture, value, bits):
    benchmark(run_1000, faster_web3._utils.encoding.to_hex_with_size, value, bits)


@pytest.mark.benchmark(group="zpad_bytes")
@pytest.mark.parametrize("value,size", ((b"\x01", 32), (BYTES_VALUE, 32)))
def test_zpad_bytes(benchmark: BenchmarkFixture, value, size):
    benchmark(run_1000, web3._utils.encoding.zpad_bytes, size, value)


@pytest.mark.benchmark(group="zpad_bytes")
@pytest.mark.parametrize("value,size", ((b"\x01", 32), (BYTES_VALUE, 32)))
def test_faster_zpad_bytes(benchmark: BenchmarkFixture, value, size):
    benchmark(run_1000, faster_web3._utils.encoding.zpad_bytes, size, value)


@pytest.mark.benchmark(group="Web3JsonEncoder.default")
@pytest.mark.parametrize("value", (BYTES_VALUE, HEXBYTES_VALUE, ATTR_DICT, MODEL))
def test_Web3JsonEncoder_default(benchmark: BenchmarkFixture, value):
    encoder = web3._utils.encoding.Web3JsonEncoder()
    benchmark(run_1000, encoder.default, value)


@pytest.mark.benchmark(group="Web3JsonEncoder.default")
@pytest.mark.parametrize(
    "value",
    (BYTES_VALUE, HEXBYTES_VALUE, FASTER_ATTR_DICT, MODEL),
)
def test_faster_Web3JsonEncoder_default(benchmark: BenchmarkFixture, value):
    encoder = faster_web3._utils.encoding.Web3JsonEncoder()
    benchmark(run_1000, encoder.default, value)


@pytest.mark.benchmark(group="FriendlyJsonSerde.json_decode")
@pytest.mark.parametrize("payload", JSON_DECODE_CASES)
def test_FriendlyJsonSerde_json_decode(benchmark: BenchmarkFixture, payload):
    serde = web3._utils.encoding.FriendlyJsonSerde()
    benchmark(run_1000, serde.json_decode, payload)


@pytest.mark.benchmark(group="FriendlyJsonSerde.json_decode")
@pytest.mark.parametrize("payload", JSON_DECODE_CASES)
def test_faster_FriendlyJsonSerde_json_decode(benchmark: BenchmarkFixture, payload):
    serde = faster_web3._utils.encoding.FriendlyJsonSerde()
    benchmark(run_1000, serde.json_decode, payload)


@pytest.mark.benchmark(group="FriendlyJsonSerde.json_encode_errors")
@pytest.mark.parametrize("payload", JSON_ENCODE_ERROR_CASES)
def test_FriendlyJsonSerde_json_encode_errors(benchmark: BenchmarkFixture, payload):
    serde = web3._utils.encoding.FriendlyJsonSerde()
    benchmark(run_100_exc, web3.exceptions.Web3TypeError, serde.json_encode, payload)


@pytest.mark.benchmark(group="FriendlyJsonSerde.json_encode_errors")
@pytest.mark.parametrize("payload", JSON_ENCODE_ERROR_CASES)
def test_faster_FriendlyJsonSerde_json_encode_errors(
    benchmark: BenchmarkFixture, payload
):
    serde = faster_web3._utils.encoding.FriendlyJsonSerde()
    benchmark(
        run_100_exc,
        faster_web3.exceptions.Web3TypeError,
        serde.json_encode,
        payload,
    )


@pytest.mark.benchmark(group="hexstr_if_str")
@pytest.mark.parametrize("value", ("0x1234", 255))
def test_hexstr_if_str(benchmark: BenchmarkFixture, value):
    benchmark(run_1000, web3._utils.encoding.hexstr_if_str, to_bytes, value)


@pytest.mark.benchmark(group="hexstr_if_str")
@pytest.mark.parametrize("value", ("0x1234", 255))
def test_faster_hexstr_if_str(benchmark: BenchmarkFixture, value):
    benchmark(run_1000, faster_web3._utils.encoding.hexstr_if_str, to_bytes, value)


@pytest.mark.benchmark(group="hex_encode_abi_type")
@pytest.mark.parametrize("abi_type,value", ARRAY_CASES)
def test_hex_encode_abi_type_arrays(benchmark: BenchmarkFixture, abi_type, value):
    benchmark(run_100, web3._utils.encoding.hex_encode_abi_type, abi_type, value)


@pytest.mark.benchmark(group="hex_encode_abi_type")
@pytest.mark.parametrize("abi_type,value", ARRAY_CASES)
def test_faster_hex_encode_abi_type_arrays(
    benchmark: BenchmarkFixture, abi_type, value
):
    benchmark(run_100, faster_web3._utils.encoding.hex_encode_abi_type, abi_type, value)
