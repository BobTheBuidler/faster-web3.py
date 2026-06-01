import asyncio

import pytest
from pytest_codspeed import BenchmarkFixture

import web3._utils.async_transactions

import faster_web3._utils.async_transactions
import faster_hexbytes
from benchmarks.batching import run_1000, run_1000_async


# --- Realistic transactions and blocks ---

ADDRESS = "0x742d35Cc6634C0532925a3b844Bc454e4438f44e"

LEGACY_TX = {
    "from": ADDRESS,
    "to": ADDRESS,
    "value": 1,
    "gasPrice": 50_000_000_000,
}

DYNAMIC_TX = {
    "from": ADDRESS,
    "to": ADDRESS,
    "value": 1,
    "maxFeePerGas": 60_000_000_000,
    "maxPriorityFeePerGas": 2_000_000_000,
}

BLOCK_DATA = {"baseFeePerGas": 30_000_000_000, "gasLimit": 30_000_000}

CURRENT_TX = {
    "blockHash": None,
    "hash": b"\x11" * 32,
    "nonce": 7,
    "gasPrice": 40_000_000_000,
}


class FakeAsyncEth:
    def __init__(self, gas_price=None, max_priority_fee=2_000_000_000, chain_id=1):
        self._gas_price = gas_price
        self._max_priority_fee = max_priority_fee
        self._chain_id = chain_id

    def generate_gas_price(self, _transaction):
        return self._gas_price

    async def estimate_gas(self, _tx):
        return 21_000

    async def get_block(self, _block_identifier):
        return BLOCK_DATA

    @property
    def max_priority_fee(self):
        return asyncio.sleep(0, result=self._max_priority_fee)

    @property
    def chain_id(self):
        return asyncio.sleep(0, result=self._chain_id)

    async def get_transaction_count(self, _address, block_identifier=None):
        return 10

    async def get_transaction(self, _tx_hash):
        return CURRENT_TX

    async def send_transaction(self, _tx):
        return faster_hexbytes.HexBytes(b"\x22" * 32)


class FakeAsyncWeb3:
    def __init__(self, gas_price=None):
        self.eth = FakeAsyncEth(gas_price=gas_price)


# --- internal helpers ---

@pytest.mark.benchmark(group="async_transactions-_estimate_gas")
def test_estimate_gas_helper(benchmark: BenchmarkFixture):
    tx = {"from": ADDRESS, "to": ADDRESS, "value": 1}
    benchmark(
        run_1000_async,
        web3._utils.async_transactions._estimate_gas,
        FakeAsyncWeb3(),
        tx,
        {},
    )


@pytest.mark.benchmark(group="async_transactions-_estimate_gas")
def test_faster_estimate_gas_helper(benchmark: BenchmarkFixture):
    tx = {"from": ADDRESS, "to": ADDRESS, "value": 1}
    benchmark(
        run_1000_async,
        faster_web3._utils.async_transactions._estimate_gas,
        FakeAsyncWeb3(),
        tx,
        {},
    )


@pytest.mark.benchmark(group="async_transactions-_max_fee_per_gas")
def test_max_fee_per_gas_helper(benchmark: BenchmarkFixture):
    tx = {"maxPriorityFeePerGas": 2_000_000_000}
    benchmark(
        run_1000_async,
        web3._utils.async_transactions._max_fee_per_gas,
        FakeAsyncWeb3(),
        tx,
        {},
    )


@pytest.mark.benchmark(group="async_transactions-_max_fee_per_gas")
def test_faster_max_fee_per_gas_helper(benchmark: BenchmarkFixture):
    tx = {"maxPriorityFeePerGas": 2_000_000_000}
    benchmark(
        run_1000_async,
        faster_web3._utils.async_transactions._max_fee_per_gas,
        FakeAsyncWeb3(),
        tx,
        {},
    )


@pytest.mark.benchmark(group="async_transactions-_max_priority_fee_gas")
def test_max_priority_fee_gas_helper(benchmark: BenchmarkFixture):
    benchmark(
        run_1000_async,
        web3._utils.async_transactions._max_priority_fee_gas,
        FakeAsyncWeb3(),
        {},
        {},
    )


@pytest.mark.benchmark(group="async_transactions-_max_priority_fee_gas")
def test_faster_max_priority_fee_gas_helper(benchmark: BenchmarkFixture):
    benchmark(
        run_1000_async,
        faster_web3._utils.async_transactions._max_priority_fee_gas,
        FakeAsyncWeb3(),
        {},
        {},
    )


@pytest.mark.benchmark(group="async_transactions-_chain_id")
def test_chain_id_helper(benchmark: BenchmarkFixture):
    benchmark(
        run_1000_async,
        web3._utils.async_transactions._chain_id,
        FakeAsyncWeb3(),
        {},
        {},
    )


@pytest.mark.benchmark(group="async_transactions-_chain_id")
def test_faster_chain_id_helper(benchmark: BenchmarkFixture):
    benchmark(
        run_1000_async,
        faster_web3._utils.async_transactions._chain_id,
        FakeAsyncWeb3(),
        {},
        {},
    )


# --- get_block_gas_limit ---

@pytest.mark.benchmark(group="get_block_gas_limit")
def test_get_block_gas_limit(benchmark: BenchmarkFixture):
    benchmark(
        run_1000_async,
        web3._utils.async_transactions.get_block_gas_limit,
        FakeAsyncWeb3().eth,
        None,
    )


@pytest.mark.benchmark(group="get_block_gas_limit")
def test_faster_get_block_gas_limit(benchmark: BenchmarkFixture):
    benchmark(
        run_1000_async,
        faster_web3._utils.async_transactions.get_block_gas_limit,
        FakeAsyncWeb3().eth,
        None,
    )


# --- async_fill_nonce ---

@pytest.mark.benchmark(group="async_fill_nonce")
def test_async_fill_nonce(benchmark: BenchmarkFixture):
    tx = {"from": ADDRESS}
    benchmark(
        run_1000_async, web3._utils.async_transactions.async_fill_nonce, FakeAsyncWeb3(), tx
    )


@pytest.mark.benchmark(group="async_fill_nonce")
def test_faster_async_fill_nonce(benchmark: BenchmarkFixture):
    tx = {"from": ADDRESS}
    benchmark(
        run_1000_async,
        faster_web3._utils.async_transactions.async_fill_nonce,
        FakeAsyncWeb3(),
        tx,
    )


# --- async_fill_transaction_defaults ---

# Cover legacy gas price and dynamic fee paths.
fill_defaults_cases = [
    (FakeAsyncWeb3(gas_price=50_000_000_000), LEGACY_TX),
    (FakeAsyncWeb3(gas_price=None), DYNAMIC_TX),
]
fill_defaults_ids = ["legacy", "dynamic"]


@pytest.mark.benchmark(group="async_fill_transaction_defaults")
@pytest.mark.parametrize("async_w3,tx", fill_defaults_cases, ids=fill_defaults_ids)
def test_async_fill_transaction_defaults(benchmark: BenchmarkFixture, async_w3, tx):
    benchmark(
        run_1000_async,
        web3._utils.async_transactions.async_fill_transaction_defaults,
        async_w3,
        tx,
    )


@pytest.mark.benchmark(group="async_fill_transaction_defaults")
@pytest.mark.parametrize("async_w3,tx", fill_defaults_cases, ids=fill_defaults_ids)
def test_faster_async_fill_transaction_defaults(
    benchmark: BenchmarkFixture, async_w3, tx
):
    benchmark(
        run_1000_async,
        faster_web3._utils.async_transactions.async_fill_transaction_defaults,
        async_w3,
        tx,
    )


# --- get_buffered_gas_estimate ---

@pytest.mark.benchmark(group="get_buffered_gas_estimate")
def test_get_buffered_gas_estimate(benchmark: BenchmarkFixture):
    tx = {"from": ADDRESS, "to": ADDRESS, "value": 1}
    benchmark(
        run_1000_async,
        web3._utils.async_transactions.get_buffered_gas_estimate,
        FakeAsyncWeb3(),
        tx,
    )


@pytest.mark.benchmark(group="get_buffered_gas_estimate")
def test_faster_get_buffered_gas_estimate(benchmark: BenchmarkFixture):
    tx = {"from": ADDRESS, "to": ADDRESS, "value": 1}
    benchmark(
        run_1000_async,
        faster_web3._utils.async_transactions.get_buffered_gas_estimate,
        FakeAsyncWeb3(),
        tx,
    )


# --- async_get_required_transaction ---

@pytest.mark.benchmark(group="async_get_required_transaction")
def test_async_get_required_transaction(benchmark: BenchmarkFixture):
    benchmark(
        run_1000_async,
        web3._utils.async_transactions.async_get_required_transaction,
        FakeAsyncWeb3(),
        b"\x11" * 32,
    )


@pytest.mark.benchmark(group="async_get_required_transaction")
def test_faster_async_get_required_transaction(benchmark: BenchmarkFixture):
    benchmark(
        run_1000_async,
        faster_web3._utils.async_transactions.async_get_required_transaction,
        FakeAsyncWeb3(),
        b"\x11" * 32,
    )


# --- async_replace_transaction ---

@pytest.mark.benchmark(group="async_replace_transaction")
def test_async_replace_transaction(benchmark: BenchmarkFixture):
    new_tx = {"gasPrice": 50_000_000_001}
    benchmark(
        run_1000_async,
        web3._utils.async_transactions.async_replace_transaction,
        FakeAsyncWeb3(),
        CURRENT_TX,
        new_tx,
    )


@pytest.mark.benchmark(group="async_replace_transaction")
def test_faster_async_replace_transaction(benchmark: BenchmarkFixture):
    new_tx = {"gasPrice": 50_000_000_001}
    benchmark(
        run_1000_async,
        faster_web3._utils.async_transactions.async_replace_transaction,
        FakeAsyncWeb3(),
        CURRENT_TX,
        new_tx,
    )
