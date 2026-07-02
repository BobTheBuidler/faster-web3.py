import pytest

eth_tester = pytest.importorskip("eth_tester")
from eth_tester.exceptions import (  # noqa: E402
    TransactionFailed,
)
import web3  # noqa: E402
import web3.providers.eth_tester.defaults  # noqa: E402

from benchmarks.web3.fixtures.core import (  # noqa: E402
    EXAMPLE_ADDRESS,
    GAS_21000_HEX,
    GWEI_HEX,
    HASH32,
    HEX_0,
    HEX_1,
    HEX_2,
    PRIORITY_FEE_HEX,
    ZERO_HASH32,
)
from benchmarks.web3.fixtures.errors import (  # noqa: E402
    OFFCHAIN_LOOKUP_BYTES,
    PANIC_BYTES,
    REVERT_REASON_BYTES,
)
import faster_web3  # noqa: E402
import faster_web3.providers.eth_tester.defaults  # noqa: E402

ETH_TESTER = eth_tester.EthereumTester()
ETH_TESTER_UNKNOWN_ENDPOINT = "eth_notReal"
ETH_TESTER_NOT_IMPLEMENTED_ENDPOINT = "eth_getWork"
ETH_TESTER_REQUEST_CASES = (
    ("eth_accounts", []),
    (ETH_TESTER_UNKNOWN_ENDPOINT, []),
    (ETH_TESTER_NOT_IMPLEMENTED_ENDPOINT, []),
)
ETH_TESTER_DEFAULT_ENDPOINT_CASES = (
    ("web3", "sha3", ("0x68656c6c6f",)),
    ("eth", "getBlockByNumber", ("latest", False)),
    ("eth", "getTransactionReceipt", (HASH32,)),
    ("eth", "newFilter", ({},)),
)

ETH_TESTER_BLOCK_HASH = "0x" + "11" * 32
ETH_TESTER_TX_HASH = "0x" + "22" * 32
ETH_TESTER_TX_REQUEST = {
    "from": EXAMPLE_ADDRESS,
    "to": EXAMPLE_ADDRESS,
    "gas": GAS_21000_HEX,
    "gasPrice": GWEI_HEX,
    "maxFeePerGas": PRIORITY_FEE_HEX,
    "maxPriorityFeePerGas": HEX_1,
    "nonce": HEX_1,
    "value": HEX_0,
    "accessList": [
        {
            "address": EXAMPLE_ADDRESS,
            "storageKeys": [ZERO_HASH32],
        }
    ],
}
ETH_TESTER_FILTER_REQUEST = {"fromBlock": HEX_1, "toBlock": HEX_2}
ETH_TESTER_TX_RESULT = {
    "block_hash": ETH_TESTER_BLOCK_HASH,
    "block_number": HEX_1,
    "transaction_hash": ETH_TESTER_TX_HASH,
    "transaction_index": HEX_0,
    "access_list": [],
}
ETH_TESTER_RECEIPT_RESULT = {
    "block_hash": ETH_TESTER_BLOCK_HASH,
    "block_number": HEX_1,
    "transaction_hash": ETH_TESTER_TX_HASH,
    "transaction_index": HEX_0,
    "logs": [
        {
            "log_index": HEX_0,
            "transaction_hash": ETH_TESTER_TX_HASH,
            "transaction_index": HEX_0,
            "block_hash": ETH_TESTER_BLOCK_HASH,
            "block_number": HEX_1,
        }
    ],
}
ETH_TESTER_BLOCK_RESULT = {
    "gas_limit": "0x1c9c380",
    "gas_used": GAS_21000_HEX,
    "sha3_uncles": ZERO_HASH32,
    "parent_hash": ZERO_HASH32,
    "transactions_root": ZERO_HASH32,
    "receipts_root": ZERO_HASH32,
    "state_root": ZERO_HASH32,
    "logs_bloom": "0x" + "00" * 256,
    "coinbase": EXAMPLE_ADDRESS,
}
ETH_TESTER_BLOCK_ARG_CASES = [HEX_1, "latest"]
ETH_TESTER_BLOCK_ARG_IDS = ["hex", "named"]


def transaction_failed_offchain_lookup(*_args, **_kwargs):
    raise TransactionFailed(repr(OFFCHAIN_LOOKUP_BYTES))


def transaction_failed_panic(*_args, **_kwargs):
    raise TransactionFailed(repr(PANIC_BYTES))


def transaction_failed_bytes(_eth_tester, _params):
    raise TransactionFailed(REVERT_REASON_BYTES)


def transaction_failed_string(_eth_tester, _params):
    raise TransactionFailed("plain failure")


def raises_value_error():
    raise ValueError("empty")


def web3_provider():
    return web3.providers.eth_tester.EthereumTesterProvider()


def faster_provider():
    return faster_web3.providers.eth_tester.EthereumTesterProvider()


def web3_async_provider():
    return web3.providers.eth_tester.AsyncEthereumTesterProvider()


def faster_async_provider():
    return faster_web3.providers.eth_tester.AsyncEthereumTesterProvider()


def web3_error_provider(delegator):
    api_endpoints = web3.providers.eth_tester.defaults.API_ENDPOINTS.copy()
    api_endpoints["eth"] = api_endpoints["eth"].copy()
    api_endpoints["eth"]["call"] = delegator
    return web3.providers.eth_tester.EthereumTesterProvider(api_endpoints=api_endpoints)


def faster_error_provider(delegator):
    api_endpoints = faster_web3.providers.eth_tester.defaults.API_ENDPOINTS.copy()
    api_endpoints["eth"] = api_endpoints["eth"].copy()
    api_endpoints["eth"]["call"] = delegator
    return faster_web3.providers.eth_tester.EthereumTesterProvider(
        api_endpoints=api_endpoints
    )


def web3_w3():
    return web3.Web3(web3_provider())


def faster_w3():
    return faster_web3.Web3(faster_provider())


def web3_async_w3():
    return web3.AsyncWeb3(web3_async_provider())


def faster_async_w3():
    return faster_web3.AsyncWeb3(faster_async_provider())
