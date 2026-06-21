# Shared parameterizations and real-world data for microbenchmarks
# All data below is based on real mainnet-style values or representative realistic examples.

from benchmarks.web3.fixtures.core import (
    EXAMPLE_ADDRESS as _EXAMPLE_ADDRESS,
    HASH32 as _HASH32,
)
from benchmarks.web3.fixtures.rpc import (
    rpc_success,
)

# Transaction dict (mainnet-style)
TX_DICT = {
    "from": "0xFEB4acf3df3cDEA7399794D0869ef76A6EfAff52",
    "to": "0xdeadbeef0000000000000000000000000000000000",
    "value": 1000000000000000000,
    "gas": 21000,
    "data": "0x",
    "nonce": 12,
    "gasPrice": 50000000000,
}

RAW_TX_DICT = {
    "blockHash": _HASH32,
    "blockNumber": "0xbc614e",
    "transactionIndex": "0x0",
    "hash": _HASH32,
    "from": TX_DICT["from"],
    "to": TX_DICT["to"],
    "value": "0xde0b6b3a7640000",
    "gas": "0x5208",
    "input": "0x",
    "nonce": "0xc",
    "gasPrice": "0xba43b7400",
    "type": "0x2",
    "chainId": "0x1",
    "accessList": [],
    "maxFeePerGas": "0x12a05f200",
    "maxPriorityFeePerGas": "0x77359400",
}

RAW_SIGNED_TX_DICT = {
    "raw": (
        "0xf86c808504a817c80082520894bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb"
        "880de0b6b3a76400008025a0b1e1b1e1b1e1b1e1b1e1b1e1b1e1b1e1b1e1b1e1b1e1b1e1"
        "a06e1a06e1a06e1a06e1a06e1a06e1a06e1a06e1a06e1a06e1a06e1"
    ),
    "tx": RAW_TX_DICT,
}

# Log entry (mainnet-style)
LOG_ENTRY = {
    "address": _EXAMPLE_ADDRESS,
    "topics": [
        "0xddf252ad1be2c89b69c2b068fc378daa952ba7f163c4a11628f55a4df523b3ef",
        "0x00000000000000000000000053d284357ec70ce289d6d64134dfac8e511c8a3d",
        "0x000000000000000000000000742d35cc6634c0532925a3b844bc454e4438f44e",
    ],
    "data": "0x00000000000000000000000000000000000000000000000000000000000003e8",
    "blockNumber": 12345678,
    "transactionHash": _HASH32,
    "logIndex": 0,
}

RAW_LOG_ENTRY = {
    **LOG_ENTRY,
    "blockHash": _HASH32,
    "blockNumber": "0xbc614e",
    "transactionIndex": "0x0",
    "logIndex": "0x0",
}

# Block dict (mainnet-style, minimal for formatter)
BLOCK_DICT = {
    "number": 12345678,
    "hash": _HASH32,
    "transactions": [TX_DICT, TX_DICT],
    "logs": [LOG_ENTRY, LOG_ENTRY],
    "miner": "0x829BD824B016326A401d083B33D092293333A830",
    "gasLimit": 15000000,
    "gasUsed": 12000000,
}

RAW_BLOCK_DICT = {
    **BLOCK_DICT,
    "number": "0xbc614e",
    "transactions": [RAW_TX_DICT, RAW_TX_DICT],
    "logs": [RAW_LOG_ENTRY, RAW_LOG_ENTRY],
    "gasLimit": "0xe4e1c0",
    "gasUsed": "0xb71b00",
    "baseFeePerGas": "0x77359400",
    "timestamp": "0x65000000",
    "parentHash": _HASH32,
    "sha3Uncles": _HASH32,
    "uncles": [],
    "difficulty": "0x0",
    "totalDifficulty": "0x0",
}

# Receipt dict (minimal)
RECEIPT_DICT = {
    "blockHash": BLOCK_DICT["hash"],
    "blockNumber": BLOCK_DICT["number"],
    "transactionIndex": 0,
    "transactionHash": _HASH32,
    "cumulativeGasUsed": 21000,
    "status": 1,
    "gasUsed": 21000,
    "contractAddress": None,
    "logs": [LOG_ENTRY],
    "logsBloom": "0x" + "0" * 512,
    "from": TX_DICT["from"],
    "to": TX_DICT["to"],
    "effectiveGasPrice": 50000000000,
    "type": 2,
}

RAW_RECEIPT_DICT = {
    **RECEIPT_DICT,
    "blockNumber": RAW_BLOCK_DICT["number"],
    "transactionIndex": "0x0",
    "cumulativeGasUsed": "0x5208",
    "status": "0x1",
    "gasUsed": "0x5208",
    "logs": [RAW_LOG_ENTRY],
    "effectiveGasPrice": "0xba43b7400",
    "type": "0x2",
}

# Fee history dict (minimal)
FEE_HISTORY_DICT = {
    "baseFeePerGas": ["0x1", "0x2"],
    "gasUsedRatio": [0.5, 0.7],
    "oldestBlock": "0x5e1d3a76",
    "reward": [[1, 2], [3, 4]],
}

RAW_FEE_HISTORY_DICT = {
    "baseFeePerGas": ["0x1", "0x2"],
    "gasUsedRatio": [0.5, 0.7],
    "oldestBlock": "0x5e1d3",
    "reward": [["0x1", "0x2"], ["0x3", "0x4"]],
}

# Storage key cases for storage_key_to_hexstr
STORAGE_KEY_CASES = [
    b"\x00" * 32,
    0,
    "0x" + "0" * 64,
    "0" * 64,
]
STORAGE_KEY_IDS = [
    "bytes_32",
    "int_zero",
    "hexstr_prefixed",
    "hexstr_unprefixed",
]

RAW_TX_RPC_RESPONSE = rpc_success(RAW_TX_DICT)
RAW_BLOCK_RPC_RESPONSE = rpc_success(RAW_BLOCK_DICT)
