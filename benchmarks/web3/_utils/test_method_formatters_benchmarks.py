import pytest
import web3._utils.method_formatters
import faster_web3._utils.method_formatters
from faster_web3.types import RPCEndpoint
from pytest_benchmark import BenchmarkFixture

def run_100(fn, *args):
    for _ in range(100):
        fn(*args)

# --- SYSTEMATIC BENCHMARKS FOR PYTHONIC_RESULT_FORMATTERS ---

# NOTE: These are explicit, non-parameterized, one-per-key test stubs for both web3 and faster_web3.
# All data below is based on real mainnet-style values or representative realistic examples.

DATA = {
    "eth_accounts": [
        "0x742d35Cc6634C0532925a3b844Bc454e4438f44e",
        "0x53d284357ec70cE289D6D64134DfAc8E511c8a3D",
        "0xFE9e8709d3215310075d67E3ed32A380CCf451C8"
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
                ]
            }
        ],
        "gasUsed": "0x5208"
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
    "eth_getRawTransactionByBlockHashAndIndex": "0xf86c808504a817c80082520894bBbBBBBbbBBBbbbBbbBbbbbBBbBbbbbBbBbbBBbB880de0b6b3a76400008025a0b1e1b1e1b1e1b1e1b1e1b1e1b1e1b1e1b1e1b1e1b1e1b1e1b1e1b1e1b1e1a06e1a06e1a06e1a06e1a06e1a06e1a06e1a06e1a06e1a06e1a06e1a06e1",
    "eth_getRawTransactionByBlockNumberAndIndex": "0xf86c808504a817c80082520894bBbBBBBbbBBBbbbBbbBbbbbBBbBbbbbBbBbbBBbB880de0b6b3a76400008025a0b1e1b1e1b1e1b1e1b1e1b1e1b1e1b1e1b1e1b1e1b1e1b1e1b1e1b1e1a06e1a06e1a06e1a06e1a06e1a06e1a06e1a06e1a06e1a06e1a06e1a06e1",
    "eth_sendRawTransaction": "0xf8aa82053985012a05f200830186a094dAC17F958D2ee523a2206206994597C13D831ec785b864a9059cbb000000000000000000000000bBbBBBBbbBBBbbbBbbBbbbbBBbBbbbbBbBbbBBbB0000000000000000000000000000000000000000000000000000000000002710",
    "eth_sign": "0x2c6401ff0c2b6a1c1b6b1c1b6b1c1b6b1c1b6b1c1b6b1c1b6b1c1b6b1c1b6b1c1",
    "eth_sendTransaction": "0xf86b808504a817c80082520894bBbBBBBbbBBBbbbBbbBbbbbBBbBbbbbBbBbbBBbB880de0b6b3a76400008025a0b1e1b1e1b1e1b1e1b1e1b1e1b1e1b1e1b1e1b1e1b1e1b1e1b1e1b1e1a06e1a06e1a06e1a06e1a06e1a06e1a06e1a06e1a06e1a06e1a06e1a06e1",
    "eth_signTypedData": "0x1c6401ff0c2b6a1c1b6b1c1b6b1c1b6b1c1b6b1c1b6b1c1b6b1c1b6b1c1b6b1c1",
    "eth_getRawTransactionByHash": "0x5e1d3a76fbf824220e3d1e4b8b1c1b6b1c1b6b1c1b6b1c1b6b1c1b6b1c1b6b1c1",
    "eth_getTransactionByHash": "0x5e1d3a76fbf824220e3d1e4b8b1c1b6b1c1b6b1c1b6b1c1b6b1c1b6b1c1b6b1c1",
    "eth_getUncleCountByBlockHash": "0x2",
    "eth_getUncleCountByBlockNumber": "latest",
    "eth_getStorageAt": "0x0000000000000000000000000000000000000000000000000000000000000000",
    "eth_getTransactionCount": "0x10",
    "eth_getProof": {
        "address": "0x6B175474E89094C44Da98b954EedeAC495271d0F",
        "accountProof": [
            "0xf90211a0...",
            "0xf90212b0..."
        ],
        "balance": "0x0",
        "codeHash": "0x8b5e8b5e8b5e8b5e8b5e8b5e8b5e8b5e8b5e8b5e8b5e8b5e8b5e8b5e8b5e8b5e",
        "nonce": "0x1",
        "storageHash": "0x5e1d3a76fbf824220e3d1e4b8b1c1b6b1c1b6b1c1b6b1c1b6b1c1b6b1c1b6b1c1",
        "storageProof": []
    },
    "eth_getTransactionByBlockHashAndIndex": {
        "blockHash": "0x5e1d3a76fbf824220e3d1e4b8b1c1b6b1c1b6b1c1b6b1c1b6b1c1b6b1c1b6b1c1",
        "index": 0
    },
    "eth_getTransactionByBlockNumberAndIndex": {
        "blockNumber": "latest",
        "index": 0
    },
    "eth_subscribe": {"result": "0x5e1d3a76fbf824220e3d1e4b8b1c1b6b1c1b6b1c1b6b1c1b6b1c1b6b1c1b6b1c1"},
    "eth_simulateV1": [{
        "blockStateCalls": [
            {
                "to": "0x6B175474E89094C44Da98b954EedeAC495271d0F",
                "data": "0x70a08231000000000000000000000000bBbBBBBbbBBBbbbBbbBbbbbBBbBbbbbBbBbbBBbB"
            }
        ]
    }],
    "eth_syncing": {
        "startingBlock": "0x1046b80",
        "currentBlock": "0x1046b90",
        "highestBlock": "0x1046ba0"
    },
    "txpool_content": {
        "pending": {
            "0x742d35Cc6634C0532925a3b844Bc454e4438f44e": {
                "0": {
                    "nonce": "0x10",
                    "to": "0x53d284357ec70cE289D6D64134DfAc8E511c8a3D",
                    "value": "0x8ac7230489e80000"
                }
            }
        },
        "queued": {}
    },
    "txpool_inspect": {
        "pending": {
            "0x742d35Cc6634C0532925a3b844Bc454e4438f44e": ["0x10"]
        },
        "queued": {}
    },
    "debug_traceTransaction": {
        "from": "0x742d35Cc6634C0532925a3b844Bc454e4438f44e",
        "to": "0x53d284357ec70cE289D6D64134DfAc8E511c8a3D",
        "value": "0x8ac7230489e80000"
    }
}

@pytest.mark.parametrize("endpoint", list(DATA))
def test_PYTHONIC_RESULT_FORMATTERS(benchmark: BenchmarkFixture, endpoint: RPCEndpoint) -> None:
    f = web3._utils.method_formatters.PYTHONIC_RESULT_FORMATTERS[endpoint]
    benchmark(run_100, f, DATA[endpoint])

@pytest.mark.parametrize("endpoint", list(DATA))
def test_faster_PYTHONIC_RESULT_FORMATTERS(benchmark: BenchmarkFixture, endpoint: RPCEndpoint) -> None:
    f = faster_web3._utils.method_formatters.PYTHONIC_RESULT_FORMATTERS[endpoint]
    benchmark(run_100, f, DATA[endpoint])
