from benchmarks.web3.fixtures.core import (
    GWEI_HEX,
    PRIORITY_FEE_HEX,
)

PYTHONIC_FEE_HISTORY = {
    "oldestBlock": 1,
    "baseFeePerGas": [1_000_000_000, 1_000_000_000],
    "gasUsedRatio": [0.5],
    "reward": [[1_000_000_000, 2_000_000_000, 3_000_000_000]],
}
PYTHONIC_ZERO_REWARD_FEE_HISTORY = {
    "oldestBlock": 1,
    "baseFeePerGas": [0, 0],
    "gasUsedRatio": [0.0],
    "reward": [[0, 0, 0]],
}
PYTHONIC_HIGH_REWARD_FEE_HISTORY = {
    "oldestBlock": 1,
    "baseFeePerGas": [0, 0],
    "gasUsedRatio": [0.0],
    "reward": [[2**80, 2**80]],
}
PYTHONIC_LOW_REWARD_FEE_HISTORY = {
    "oldestBlock": 1,
    "baseFeePerGas": [0, 0],
    "gasUsedRatio": [0.0],
    "reward": [[1, 2, 3]],
}
PYTHONIC_FEE_HISTORY_CASES = (
    PYTHONIC_FEE_HISTORY,
    PYTHONIC_ZERO_REWARD_FEE_HISTORY,
    PYTHONIC_HIGH_REWARD_FEE_HISTORY,
    PYTHONIC_LOW_REWARD_FEE_HISTORY,
)

_GWEI_HEX_BYTES = GWEI_HEX.encode("ascii")
_PRIORITY_FEE_HEX_BYTES = PRIORITY_FEE_HEX.encode("ascii")
FEE_HISTORY_RESPONSE_BYTES = (
    b'{"jsonrpc":"2.0","id":1,"result":{"oldestBlock":"0x1",'
    b'"baseFeePerGas":["' + _GWEI_HEX_BYTES + b'","' + _GWEI_HEX_BYTES + b'"],'
    b'"gasUsedRatio":[0.5],'
    b'"reward":[["'
    + _GWEI_HEX_BYTES
    + b'","'
    + _PRIORITY_FEE_HEX_BYTES
    + b'","0xb2d05e00"]]}}'
)
