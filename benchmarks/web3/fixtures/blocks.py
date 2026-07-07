from benchmarks.web3.fixtures.core import (
    EXAMPLE_ADDRESS,
    GWEI_HEX,
    HASH32,
    ZERO_HASH32,
)
from benchmarks.web3.fixtures.formatters import (
    RAW_BLOCK_DICT,
)
from benchmarks.web3.fixtures.rpc import (
    GWEI_RESPONSE_BYTES,
)

_CACHE_BLOCK_NUMBER_BYTES = RAW_BLOCK_DICT["number"].encode("ascii")
_CACHE_BLOCK_HASH_BYTES = RAW_BLOCK_DICT["hash"].encode("ascii")
_CACHE_BLOCK_TIMESTAMP_BYTES = RAW_BLOCK_DICT["timestamp"].encode("ascii")
CACHE_BLOCK_RESPONSE_BYTES = (
    b'{"jsonrpc":"2.0","id":1,"result":{"number":"'
    + _CACHE_BLOCK_NUMBER_BYTES
    + b'","hash":"'
    + _CACHE_BLOCK_HASH_BYTES
    + b'","timestamp":"'
    + _CACHE_BLOCK_TIMESTAMP_BYTES
    + b'"}}'
)

_BLOCK_HASH_BYTES = HASH32.encode("ascii")
_ZERO_HASH_BYTES = ZERO_HASH32.encode("ascii")
FULL_LATEST_BLOCK_RESPONSE_BYTES = (
    b'{"jsonrpc":"2.0","id":1,"result":{"number":"0xbc614e","hash":"'
    + _BLOCK_HASH_BYTES
    + b'","parentHash":"'
    + _ZERO_HASH_BYTES
    + b'","nonce":"0x0000000000000000","sha3Uncles":"'
    + _ZERO_HASH_BYTES
    + b'","logsBloom":"0x'
    + (b"0" * 512)
    + b'","transactionsRoot":"'
    + _ZERO_HASH_BYTES
    + b'","stateRoot":"'
    + _ZERO_HASH_BYTES
    + b'","receiptsRoot":"'
    + _ZERO_HASH_BYTES
    + b'","miner":"'
    + EXAMPLE_ADDRESS.encode("ascii")
    + b'","difficulty":"0x0","totalDifficulty":"0x0","extraData":"0x",'
    b'"size":"0x1","gasLimit":"0xe4e1c0","gasUsed":"0x5208",'
    b'"timestamp":"0x65a0bc00","transactions":[],"uncles":[]}}'
)
CONTRACT_BUILD_LATEST_BLOCK_RESPONSE_BYTES = (
    b'{"jsonrpc":"2.0","id":1,"result":{"number":"0x1",'
    b'"baseFeePerGas":"0x1","gasLimit":"0x1c9c380"}}'
)


def hash_for_number(number):
    return "0x" + f"{number:064x}"


def time_based_block_response_bytes(number, parent_hash, gas_price=GWEI_HEX):
    block_hash = hash_for_number(number)
    timestamp = hex(1_700_000_000 + number * 12)
    return (
        b'{"jsonrpc":"2.0","id":1,"result":{"number":"'
        + hex(number).encode("ascii")
        + b'","hash":"'
        + block_hash.encode("ascii")
        + b'","parentHash":"'
        + parent_hash.encode("ascii")
        + b'","miner":"'
        + EXAMPLE_ADDRESS.encode("ascii")
        + b'","timestamp":"'
        + timestamp.encode("ascii")
        + b'","transactions":[{"hash":"0x'
        + (b"1" * 64)
        + b'","gasPrice":"'
        + gas_price.encode("ascii")
        + b'"}]}}'
    )


BLOCK_100 = time_based_block_response_bytes(100, hash_for_number(99))
BLOCK_99 = time_based_block_response_bytes(99, hash_for_number(98))
BLOCK_98 = time_based_block_response_bytes(98, hash_for_number(97))
BLOCK_97 = time_based_block_response_bytes(97, hash_for_number(96))
BLOCK_96 = time_based_block_response_bytes(96, hash_for_number(95))
BLOCK_95 = time_based_block_response_bytes(95, hash_for_number(94))
GENESIS_BLOCK_RESPONSE_BYTES = time_based_block_response_bytes(0, ZERO_HASH32)
UNWEIGHTED_RESPONSES = (
    BLOCK_100,
    BLOCK_100,
    BLOCK_95,
    BLOCK_100,
    BLOCK_99,
    BLOCK_98,
    BLOCK_97,
    BLOCK_96,
)
WEIGHTED_RESPONSES = (
    BLOCK_100,
    BLOCK_100,
    BLOCK_95,
    BLOCK_96,
    BLOCK_97,
    BLOCK_98,
    BLOCK_99,
    BLOCK_100,
    BLOCK_100,
    BLOCK_99,
    BLOCK_98,
    BLOCK_97,
    BLOCK_96,
)
FALLBACK_RESPONSES = (
    GENESIS_BLOCK_RESPONSE_BYTES,
    GWEI_RESPONSE_BYTES,
)
