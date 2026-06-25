import eth_abi
from eth_utils import (
    to_checksum_address,
)

from benchmarks.web3.fixtures.abis import (
    ERC20_ABI,
)
from benchmarks.web3.fixtures.core import (
    DAI_ADDRESS,
    EXAMPLE_ADDRESS,
    GAS_21000_HEX,
    HASH32,
    HEX_1,
)
from benchmarks.web3.fixtures.blocks import (
    CONTRACT_BUILD_LATEST_BLOCK_RESPONSE_BYTES,
)
from benchmarks.web3.fixtures.rpc import (
    GAS_21000_RESPONSE_BYTES,
    HASH32_RESPONSE_BYTES,
    HEX_1_RESPONSE_BYTES,
    rpc_result_response_bytes,
)


ADDRESS = to_checksum_address(EXAMPLE_ADDRESS)
TOKEN_ADDRESS = to_checksum_address(DAI_ADDRESS)
TRANSFER_ARGS = (TOKEN_ADDRESS, 1000)
TRANSFER_ABI = next(entry for entry in ERC20_ABI if entry.get("name") == "transfer")
BALANCE_ABI = next(entry for entry in ERC20_ABI if entry.get("name") == "balanceOf")
FALLBACK_ABI = [{"type": "fallback", "stateMutability": "payable"}]
RECEIVE_ABI = [{"type": "receive", "stateMutability": "payable"}]

BALANCE_RESULT = "0x" + eth_abi.encode(["uint256"], [123]).hex()
TRANSFER_RESULT = "0x" + eth_abi.encode(["bool"], [True]).hex()
MULTI_RESULT = eth_abi.encode(["uint256", "bool"], [123, True])
TUPLE_RESULT = eth_abi.encode(["(uint256,bool)"], [(123, True)])
MULTI_OUTPUT_ABI = {
    "type": "function",
    "name": "multi",
    "inputs": [],
    "outputs": [
        {"name": "amount", "type": "uint256"},
        {"name": "ok", "type": "bool"},
    ],
}
TUPLE_OUTPUT_ABI = {
    "type": "function",
    "name": "tupled",
    "inputs": [],
    "outputs": [
        {
            "name": "values",
            "type": "tuple",
            "components": [
                {"name": "amount", "type": "uint256"},
                {"name": "ok", "type": "bool"},
            ],
        }
    ],
}

CALL_RESPONSE_BYTES = rpc_result_response_bytes(BALANCE_RESULT)
TRANSFER_RESPONSE_BYTES = rpc_result_response_bytes(TRANSFER_RESULT)
TX_HASH_RESPONSE_BYTES = HASH32_RESPONSE_BYTES
BUILD_TRANSACTION_RESPONSES = (
    HEX_1_RESPONSE_BYTES,
    GAS_21000_RESPONSE_BYTES,
    HEX_1_RESPONSE_BYTES,
    HEX_1_RESPONSE_BYTES,
    CONTRACT_BUILD_LATEST_BLOCK_RESPONSE_BYTES,
    HEX_1_RESPONSE_BYTES,
)
SEND_TRANSACTION_RESPONSES = (
    CONTRACT_BUILD_LATEST_BLOCK_RESPONSE_BYTES,
    HEX_1_RESPONSE_BYTES,
    TX_HASH_RESPONSE_BYTES,
    HEX_1_RESPONSE_BYTES,
)
