import pytest
import web3._utils.method_formatters
import faster_web3._utils.method_formatters
from faster_web3.types import RPCEndpoint
from pytest_codspeed import BenchmarkFixture


def run_1000(fn, *args):
    for _ in range(1000):
        fn(*args)


# --- SYSTEMATIC BENCHMARKS FOR PYTHONIC_RESULT_FORMATTERS ---

# NOTE: These are explicit, non-parameterized, one-per-key test stubs for both web3 and faster_web3.
# All data below is based on real mainnet-style values or representative realistic examples.

TX_DATA = {
    "hash": "0xfaceb00c1234567890b00b7be2feedbeefcafe1234567890deadbeefcafebaba",
    "nonce": "0x42",
    "blockHash": "0x5e1d3a76fbf824220e3d1e4b8b1c1b6b1c1b6b1c1b6b1c1b6b1c1b6b1c1b6b1c",
    "blockNumber": "0x1337",
    "transactionIndex": "0x0",
    "from": "0xFEB4acf3df3cDEA7399794D0869ef76A6EfAff52",
    "to": "0xdeadbeef0000000000000000000000000000000000",
    "value": "0x1234",
    "gas": "0x5208",
    "gasPrice": "0x3b9aca00",
    "input": "0x",
}


# PYTHONIC_REQUEST_FORMATTERS

REQUEST_DATA = {
    "eth_feeHistory": ("0x10", "latest", [10, 20]),
    "eth_getBalance": ("0x742d35Cc6634C0532925a3b844Bc454e4438f44e", "latest"),
    "eth_getBlockReceipts": ("latest",),
    "eth_getBlockTransactionCountByNumber": ("latest",),
    "eth_getUncleCountByBlockNumber": ("latest",),
    "eth_getTransactionByBlockNumberAndIndex": ("latest", "0x0"),
    "eth_getRawTransactionByBlockNumberAndIndex": ("latest", "0x0"),
    "eth_getUncleByBlockNumberAndIndex": ("latest", "0x0"),
    "eth_getRawTransactionByBlockHashAndIndex": ("0xabc", "0x0"),
    "eth_getUncleByBlockHashAndIndex": ("0xabc", "0x0"),
    "eth_getBlockByNumber": ("latest", True),
    "eth_getCode": ("0x742d35Cc6634C0532925a3b844Bc454e4438f44e", "latest"),
    "eth_getTransactionCount": ("0x742d35Cc6634C0532925a3b844Bc454e4438f44e", "latest"),
    "eth_getStorageAt": ("0x742d35Cc6634C0532925a3b844Bc454e4438f44e", "0x0", "latest"),
    "eth_getLogs": ({"address": "0x742d35Cc6634C0532925a3b844Bc454e4438f44e"},),
    "eth_newFilter": ({"address": "0x742d35Cc6634C0532925a3b844Bc454e4438f44e"},),
}

@pytest.mark.parametrize("endpoint", list(REQUEST_DATA))
def test_PYTHONIC_REQUEST_FORMATTERS(benchmark: BenchmarkFixture, endpoint: RPCEndpoint) -> None:
    f = web3._utils.method_formatters.PYTHONIC_REQUEST_FORMATTERS[endpoint]
    benchmark(run_1000, f, REQUEST_DATA[endpoint])

@pytest.mark.parametrize("endpoint", list(REQUEST_DATA))
def test_faster_PYTHONIC_REQUEST_FORMATTERS(benchmark: BenchmarkFixture, endpoint: RPCEndpoint) -> None:
    f = faster_web3._utils.method_formatters.PYTHONIC_REQUEST_FORMATTERS[endpoint]
    benchmark(run_1000, f, REQUEST_DATA[endpoint])


# Realistic RLP-encoded proof nodes (hex, plausible structure)
PROOF_NODE_1 = (
    "0xf90211a0b3c4d5e6f7a8b9c0d1e2f3a4b5c6d7e8f9a0b1c2d3e4f5a6b7c8d9e0f1a2"
    "b3c4d5e6f7a8b9c0d1e2f3a4b5c6d7e8f9a0b1c2d3e4f5a6b7c8d9e0f1a2b3c4d5e6f7"
    "a8b9c0d1e2f3a4b5c6d7e8f9a0b1c2d3e4f5a6b7c8d9e0f1a2b3c4d5e6f7a8b9c0d1e2"
    "f3a4b5c6d7e8f9a0b1c2d3e4f5a6b7c8d9e0f1a2b3c4d5e6f7a8b9c0d1e2f3a4b5c6d7"
)
PROOF_NODE_2 = (
    "0xf90212a1b2c3d4e5f6a7b8c9d0e1f2a3b4c5d6e7f8a9b0c1d2e3f4a5b6c7d8e9f0a1"
    "b2c3d4e5f6a7b8c9d0e1f2a3b4c5d6e7f8a9b0c1d2e3f4a5b6c7d8e9f0a1b2c3d4e5f6"
    "a7b8c9d0e1f2a3b4c5d6e7f8a9b0c1d2e3f4a5b6c7d8e9f0a1b2c3d4e5f6a7b8c9d0e1"
    "f2a3b4c5d6e7f8a9b0c1d2e3f4a5b6c7d8e9f0a1b2c3d4e5f6a7b8c9d0e1f2a3b4c5d6"
)

RESULT_DATA = {
    "eth_accounts": [
        "0x742d35Cc6634C0532925a3b844Bc454e4438f44e",
        "0x53d284357ec70cE289D6D64134DfAc8E511c8a3D",
        "0xFE9e8709d3215310075d67E3ed32A380CCf451C8",
    ],
    "eth_blobBaseFee": "0x2e90edd000",
    "eth_blockNumber": "0x1046b90",
    "eth_chainId": "0x1",
    "eth_call": "0x00000000000000000000000000000000000000000000000000000000098a7d9b",
    "eth_createAccessList": {
        "accessList": [
            {
                "address": "0x742d35Cc6634C0532925a3b844Bc454e4438f44e",
                "storageKeys": [
                    "0x0000000000000000000000000000000000000000000000000000000000000000"
                ],
            }
        ],
        "gasUsed": "0x5208",
    },
    "eth_estimateGas": "0x5208",
    "eth_maxPriorityFeePerGas": "0x77359400",
    "eth_gasPrice": "0x2e90edd000",
    "eth_getBalance": "0x8ac7230489e80000",
    "eth_getBlockTransactionCountByHash": "0x2a",
    "eth_getBlockTransactionCountByNumber": "0x2a",
    "eth_getCode": "0x608060405234801561001057600080fd5b5060405160208061012383398101806040528101908080518201929190505050806000819055505060c18061003f6000396000f3fe",
    "eth_protocolVersion": "0x41",
    "evm_snapshot": "0x5",
    "net_peerCount": "0x8",
    "eth_getRawTransactionByBlockHashAndIndex": "0xf86c808504a817c80082520894bBbBBBBbbBBBbbbBbbBbbbbBBbBbbbbBbBbbBBbB880de0b6b3a76400008025a0b1e1b1e1b1e1b1e1b1e1b1e1b1e1b1e1b1e1b1e1b1e1b1e1a06e1a06e1a06e1a06e1a06e1a06e1a06e1a06e1a06e1a06e1a06e1a06e1",
    "eth_getRawTransactionByBlockNumberAndIndex": "0xf86c808504a817c80082520894bBbBBBBbbBBBbbbBbbBbbbbBBbBbbbbBbBbbBBbB880de0b6b3a76400008025a0b1e1b1e1b1e1b1e1b1e1b1e1b1e1b1e1b1e1b1e1b1e1b1e1a06e1a06e1a06e1a06e1a06e1a06e1a06e1a06e1a06e1a06e1a06e1a06e1",
    "eth_sendRawTransaction": "0xdeadbeefcafebabe1234567890b0b7b1d1e2facefeedbeefcafe1234567890aa",
    "eth_sign": "0x2c6401ff0c2b6a1c1b6b1c1b6b1c1b6b1c1b6b1c1b6b1c1b6b1c1b6b1c1b6b1c1",
    "eth_sendTransaction": "0xfeedbabe1234567890cafebabe1234567890feedbabe1234567890cafebabe12",
    "eth_signTypedData": "0x1c6401ff0c2b6a1c1b6b1c1b6b1c1b6b1c1b6b1c1b6b1c1b6b1c1b6b1c1b6b1c1",
    "eth_getRawTransactionByHash": "0x5e1d3a76fbf824220e3d1e4b8b1c1b6b1c1b6b1c1b6b1c1b6b1c1b6b1c1b6b1c1",
    "eth_getTransactionByHash": TX_DATA,
    "eth_getUncleCountByBlockHash": "0x2",
    "eth_getUncleCountByBlockNumber": "0x2",
    "eth_getStorageAt": "0x0000000000000000000000000000000000000000000000000000000000000000",
    "eth_getTransactionCount": "0x10",
    "eth_getProof": {
        "address": "0x6B175474E89094C44Da98b954EedeAC495271d0F",
        "accountProof": [PROOF_NODE_1, PROOF_NODE_2],
        "balance": "0x0",
        "codeHash": "0x8b5e8b5e8b5e8b5e8b5e8b5e8b5e8b5e8b5e8b5e8b5e8b5e8b5e8b5e8b5e8b5e",
        "nonce": "0x1",
        "storageHash": "0x5e1d3a76fbf824220e3d1e4b8b1c1b6b1c1b6b1c1b6b1c1b6b1c1b6b1c1b6b1",
        "storageProof": [],
    },
    "eth_getTransactionByBlockHashAndIndex": TX_DATA,
    "eth_getTransactionByBlockNumberAndIndex": TX_DATA,
    "eth_subscribe": {
        "result": "0x5e1d3a76fbf824220e3d1e4b8b1c1b6b1c1b6b1c1b6b1c1b6b1c1b6b1c1b6b1c1"
    },
    "eth_simulateV1": [
        {
            "blockStateCalls": [
                {
                    "to": "0x6B175474E89094C44Da98b954EedeAC495271d0F",
                    "data": "0x70a08231000000000000000000000000bBbBBBBbbBBBbbbBbbBbbbbBBbBbbbbBbBbbBBbB",
                }
            ]
        }
    ],
    "eth_syncing": {
        "startingBlock": "0x1046b80",
        "currentBlock": "0x1046b90",
        "highestBlock": "0x1046ba0",
    },
    "txpool_content": {
        "pending": {
            "0x742d35Cc6634C0532925a3b844Bc454e4438f44e": {
                "0": {
                    "nonce": "0x10",
                    "to": "0x53d284357ec70cE289D6D64134DfAc8E511c8a3D",
                    "value": "0x8ac7230489e80000",
                }
            }
        },
        "queued": {},
    },
    "txpool_inspect": {
        "pending": {"0x742d35Cc6634C0532925a3b844Bc454e4438f44e": ["0x10"]},
        "queued": {},
    },
    "debug_traceTransaction": {
        "from": "0x742d35Cc6634C0532925a3b844Bc454e4438f44e",
        "to": "0x53d284357ec70cE289D6D64134DfAc8E511c8a3D",
        "value": "0x8ac7230489e80000",
    },
}


@pytest.mark.parametrize("endpoint", list(RESULT_DATA))
def test_PYTHONIC_RESULT_FORMATTERS(
    benchmark: BenchmarkFixture, endpoint: RPCEndpoint
) -> None:
    f = web3._utils.method_formatters.PYTHONIC_RESULT_FORMATTERS[endpoint]
    benchmark(run_1000, f, RESULT_DATA[endpoint])


@pytest.mark.parametrize("endpoint", list(RESULT_DATA))
def test_faster_PYTHONIC_RESULT_FORMATTERS(
    benchmark: BenchmarkFixture, endpoint: RPCEndpoint
) -> None:
    f = faster_web3._utils.method_formatters.PYTHONIC_RESULT_FORMATTERS[endpoint]
    benchmark(run_1000, f, RESULT_DATA[endpoint])
