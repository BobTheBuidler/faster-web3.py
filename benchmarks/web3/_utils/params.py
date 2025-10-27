# Shared parameterizations and real-world data for microbenchmarks

# Transaction dict (mainnet-style)
TX_DICT = {
    "from": "0x742d35Cc6634C0532925a3b844Bc454e4438f44e",
    "to": "0x53d284357ec70cE289D6D64134DfAc8E511c8a3D",
    "value": 1000000000000000000,
    "gas": 21000,
    "data": "0x",
    "nonce": 12,
    "gasPrice": 50000000000,
}

# Log entry (mainnet-style)
LOG_ENTRY = {
    "address": "0x742d35Cc6634C0532925a3b844Bc454e4438f44e",
    "topics": [
        "0xddf252ad1be2c89b69c2b068fc378daa952ba7f163c4a11628f55a4df523b3ef",
        "0x00000000000000000000000053d284357ec70ce289d6d64134dfac8e511c8a3d",
        "0x000000000000000000000000742d35cc6634c0532925a3b844bc454e4438f44e",
    ],
    "data": "0x00000000000000000000000000000000000000000000000000000000000003e8",
    "blockNumber": 12345678,
    "transactionHash": "0x5e1d3a76fbf824220e1c5e0c2e5e7e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1",
    "logIndex": 0,
}

# Block dict (mainnet-style, minimal for formatter)
BLOCK_DICT = {
    "number": 12345678,
    "hash": "0x5e1d3a76fbf824220e1c5e0c2e5e7e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1e1",
    "transactions": [TX_DICT, TX_DICT],
    "logs": [LOG_ENTRY, LOG_ENTRY],
    "miner": "0x829BD824B016326A401d083B33D092293333A830",
    "gasLimit": 15000000,
    "gasUsed": 12000000,
}

# Receipt dict (minimal)
RECEIPT_DICT = {
    "blockHash": BLOCK_DICT["hash"],
    "blockNumber": BLOCK_DICT["number"],
    "transactionIndex": 0,
    "transactionHash": TX_DICT["from"],
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

# Fee history dict (minimal)
FEE_HISTORY_DICT = {
    "baseFeePerGas": ["0x1", "0x2"],
    "gasUsedRatio": [0.5, 0.7],
    "oldestBlock": "0x5e1d3a76",
    "reward": [[1, 2], [3, 4]],
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
