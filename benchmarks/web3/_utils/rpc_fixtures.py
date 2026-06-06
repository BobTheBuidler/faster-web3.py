from benchmarks.web3._utils.params import (
    HEX_1,
    HEX_2,
)


JSONRPC_VERSION = "2.0"
DEFAULT_RPC_ID = 1

RPC_SUCCESS_0X1 = {"jsonrpc": JSONRPC_VERSION, "id": DEFAULT_RPC_ID, "result": HEX_1}
RPC_NULL_RESULT = {"jsonrpc": JSONRPC_VERSION, "id": DEFAULT_RPC_ID, "result": None}
RPC_ERROR_MINUS_32000 = {
    "jsonrpc": JSONRPC_VERSION,
    "id": DEFAULT_RPC_ID,
    "error": {"code": -32000},
}
RPC_ERROR_REVERTED_MINUS_32000 = {
    "jsonrpc": JSONRPC_VERSION,
    "id": DEFAULT_RPC_ID,
    "error": {"code": -32000, "message": "execution reverted"},
}

RPC_SUCCESS_0X1_TEXT = '{"jsonrpc":"2.0","id":1,"result":"0x1"}'
RPC_SUCCESS_0X1_BYTES = b'{"jsonrpc":"2.0","id":1,"result":"0x1"}'
RPC_NULL_RESULT_BYTES = b'{"jsonrpc":"2.0","id":1,"result":null}'
RPC_ERROR_MINUS_32000_BYTES = b'{"jsonrpc":"2.0","id":1,"error":{"code":-32000}}'

BATCH_RESPONSES_ORDERED = [
    {"id": 1, "result": HEX_1},
    {"id": 2, "result": HEX_2},
]
BATCH_RESPONSES_UNORDERED = [
    {"id": 2, "result": HEX_2},
    {"id": 1, "result": HEX_1},
]
BATCH_RESPONSES_MISSING_ID = [
    {"result": HEX_1},
    {"id": 2, "result": HEX_2},
]
BATCH_JSONRPC_RESPONSES_ORDERED = [
    {"jsonrpc": JSONRPC_VERSION, "id": 1, "result": HEX_1},
    {"jsonrpc": JSONRPC_VERSION, "id": 2, "result": HEX_2},
]

SUBSCRIPTION_ID_1 = HEX_1
SUBSCRIPTION_NOTIFICATION = {
    "jsonrpc": JSONRPC_VERSION,
    "method": "eth_subscription",
    "params": {"subscription": SUBSCRIPTION_ID_1, "result": {"number": HEX_1}},
}
SUBSCRIPTION_NOTIFICATION_TEXT = (
    '{"jsonrpc":"2.0","method":"eth_subscription","params":'
    '{"subscription":"0x1","result":{"number":"0x1"}}}'
)


def rpc_success(result, rpc_id=DEFAULT_RPC_ID):
    return {"jsonrpc": JSONRPC_VERSION, "id": rpc_id, "result": result}
