import asyncio
import pytest
from pytest_codspeed import BenchmarkFixture
from unittest.mock import patch, AsyncMock

import web3.beacon
import faster_web3.beacon

# --- Fake Async Response and Mocking Utilities ---

class FakeAsyncResponse:
    def __init__(self, result, status=200):
        self.status = status
        self._result = result
        self.headers = {}
        self.content = self.text = ""

    async def json(self):
        return self._result

    async def raise_for_status(self):
        if 400 <= self.status <= 499:
            raise Exception("Client error")
        if self.status >= 500:
            raise Exception("Server error")

    async def close(self):
        pass

def make_fake_aiohttp_request(result=None):
    async def fake_aiohttp_request(*args, **kwargs):
        return FakeAsyncResponse(result or {"data": "mocked"}, status=200)
    return fake_aiohttp_request

def run_async_in_loop(loop, fn, *args):
    return loop.run_until_complete(_run_100(fn, *args))

async def _run_100(fn, *args):
    for _ in range(100):
        await fn(*args)

# --- Parameter Sets for AsyncBeacon Methods ---

state_ids = ["head", "finalized", "justified", "12345"]
block_ids = ["head", "genesis", "12345", "0xabc123"]
validator_ids = ["0", "123456", "0xdeadbeef"]
epochs = ["0", "123", "99999"]
validator_indices_cases = [[], ["0"], ["1", "2", "3", "4", "5"]]
indices_cases = [None, [0], [0, 1, 2, 3, 4]]
block_roots = ["0xabc123", "0x0"]
peer_ids = ["peer1", "peer2", "0xdeadbeef"]

# --- Benchmarks for All AsyncBeacon Methods ---

@pytest.mark.benchmark(group="async_beacon-get_genesis")
def test_get_genesis(benchmark: BenchmarkFixture):
    loop = asyncio.new_event_loop()
    beacon = web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"genesis": True}))):
        benchmark(run_async_in_loop, loop, beacon.get_genesis)

@pytest.mark.benchmark(group="async_beacon-get_genesis")
def test_faster_get_genesis(benchmark: BenchmarkFixture):
    loop = asyncio.new_event_loop()
    beacon = faster_web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"genesis": True}))):
        benchmark(run_async_in_loop, loop, beacon.get_genesis)

@pytest.mark.benchmark(group="async_beacon-get_hash_root")
@pytest.mark.parametrize("state_id", state_ids)
def test_get_hash_root(benchmark: BenchmarkFixture, state_id):
    loop = asyncio.new_event_loop()
    beacon = web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"hash_root": state_id}))):
        benchmark(run_async_in_loop, loop, beacon.get_hash_root, state_id)

@pytest.mark.benchmark(group="async_beacon-get_hash_root")
@pytest.mark.parametrize("state_id", state_ids)
def test_faster_get_hash_root(benchmark: BenchmarkFixture, state_id):
    loop = asyncio.new_event_loop()
    beacon = faster_web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"hash_root": state_id}))):
        benchmark(run_async_in_loop, loop, beacon.get_hash_root, state_id)

@pytest.mark.benchmark(group="async_beacon-get_fork_data")
@pytest.mark.parametrize("state_id", state_ids)
def test_get_fork_data(benchmark: BenchmarkFixture, state_id):
    loop = asyncio.new_event_loop()
    beacon = web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"fork_data": state_id}))):
        benchmark(run_async_in_loop, loop, beacon.get_fork_data, state_id)

@pytest.mark.benchmark(group="async_beacon-get_fork_data")
@pytest.mark.parametrize("state_id", state_ids)
def test_faster_get_fork_data(benchmark: BenchmarkFixture, state_id):
    loop = asyncio.new_event_loop()
    beacon = faster_web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"fork_data": state_id}))):
        benchmark(run_async_in_loop, loop, beacon.get_fork_data, state_id)

@pytest.mark.benchmark(group="async_beacon-get_finality_checkpoint")
@pytest.mark.parametrize("state_id", state_ids)
def test_get_finality_checkpoint(benchmark: BenchmarkFixture, state_id):
    loop = asyncio.new_event_loop()
    beacon = web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"finality_checkpoint": state_id}))):
        benchmark(run_async_in_loop, loop, beacon.get_finality_checkpoint, state_id)

@pytest.mark.benchmark(group="async_beacon-get_finality_checkpoint")
@pytest.mark.parametrize("state_id", state_ids)
def test_faster_get_finality_checkpoint(benchmark: BenchmarkFixture, state_id):
    loop = asyncio.new_event_loop()
    beacon = faster_web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"finality_checkpoint": state_id}))):
        benchmark(run_async_in_loop, loop, beacon.get_finality_checkpoint, state_id)

@pytest.mark.benchmark(group="async_beacon-get_validators")
@pytest.mark.parametrize("state_id", state_ids)
def test_get_validators(benchmark: BenchmarkFixture, state_id):
    loop = asyncio.new_event_loop()
    beacon = web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"validators": state_id}))):
        benchmark(run_async_in_loop, loop, beacon.get_validators, state_id)

@pytest.mark.benchmark(group="async_beacon-get_validators")
@pytest.mark.parametrize("state_id", state_ids)
def test_faster_get_validators(benchmark: BenchmarkFixture, state_id):
    loop = asyncio.new_event_loop()
    beacon = faster_web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"validators": state_id}))):
        benchmark(run_async_in_loop, loop, beacon.get_validators, state_id)

@pytest.mark.benchmark(group="async_beacon-get_validator")
@pytest.mark.parametrize("validator_id", validator_ids)
@pytest.mark.parametrize("state_id", state_ids)
def test_get_validator(benchmark: BenchmarkFixture, validator_id, state_id):
    loop = asyncio.new_event_loop()
    beacon = web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"validator": validator_id, "state": state_id}))):
        benchmark(run_async_in_loop, loop, beacon.get_validator, validator_id, state_id)

@pytest.mark.benchmark(group="async_beacon-get_validator")
@pytest.mark.parametrize("validator_id", validator_ids)
@pytest.mark.parametrize("state_id", state_ids)
def test_faster_get_validator(benchmark: BenchmarkFixture, validator_id, state_id):
    loop = asyncio.new_event_loop()
    beacon = faster_web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"validator": validator_id, "state": state_id}))):
        benchmark(run_async_in_loop, loop, beacon.get_validator, validator_id, state_id)

@pytest.mark.benchmark(group="async_beacon-get_validator_balances")
@pytest.mark.parametrize("state_id", state_ids)
def test_get_validator_balances(benchmark: BenchmarkFixture, state_id):
    loop = asyncio.new_event_loop()
    beacon = web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"validator_balances": state_id}))):
        benchmark(run_async_in_loop, loop, beacon.get_validator_balances, state_id)

@pytest.mark.benchmark(group="async_beacon-get_validator_balances")
@pytest.mark.parametrize("state_id", state_ids)
def test_faster_get_validator_balances(benchmark: BenchmarkFixture, state_id):
    loop = asyncio.new_event_loop()
    beacon = faster_web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"validator_balances": state_id}))):
        benchmark(run_async_in_loop, loop, beacon.get_validator_balances, state_id)

@pytest.mark.benchmark(group="async_beacon-get_epoch_committees")
@pytest.mark.parametrize("state_id", state_ids)
def test_get_epoch_committees(benchmark: BenchmarkFixture, state_id):
    loop = asyncio.new_event_loop()
    beacon = web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"epoch_committees": state_id}))):
        benchmark(run_async_in_loop, loop, beacon.get_epoch_committees, state_id)

@pytest.mark.benchmark(group="async_beacon-get_epoch_committees")
@pytest.mark.parametrize("state_id", state_ids)
def test_faster_get_epoch_committees(benchmark: BenchmarkFixture, state_id):
    loop = asyncio.new_event_loop()
    beacon = faster_web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"epoch_committees": state_id}))):
        benchmark(run_async_in_loop, loop, beacon.get_epoch_committees, state_id)

@pytest.mark.benchmark(group="async_beacon-get_epoch_sync_committees")
@pytest.mark.parametrize("state_id", state_ids)
def test_get_epoch_sync_committees(benchmark: BenchmarkFixture, state_id):
    loop = asyncio.new_event_loop()
    beacon = web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"epoch_sync_committees": state_id}))):
        benchmark(run_async_in_loop, loop, beacon.get_epoch_sync_committees, state_id)

@pytest.mark.benchmark(group="async_beacon-get_epoch_sync_committees")
@pytest.mark.parametrize("state_id", state_ids)
def test_faster_get_epoch_sync_committees(benchmark: BenchmarkFixture, state_id):
    loop = asyncio.new_event_loop()
    beacon = faster_web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"epoch_sync_committees": state_id}))):
        benchmark(run_async_in_loop, loop, beacon.get_epoch_sync_committees, state_id)

@pytest.mark.benchmark(group="async_beacon-get_epoch_randao")
@pytest.mark.parametrize("state_id", state_ids)
def test_get_epoch_randao(benchmark: BenchmarkFixture, state_id):
    loop = asyncio.new_event_loop()
    beacon = web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"epoch_randao": state_id}))):
        benchmark(run_async_in_loop, loop, beacon.get_epoch_randao, state_id)

@pytest.mark.benchmark(group="async_beacon-get_epoch_randao")
@pytest.mark.parametrize("state_id", state_ids)
def test_faster_get_epoch_randao(benchmark: BenchmarkFixture, state_id):
    loop = asyncio.new_event_loop()
    beacon = faster_web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"epoch_randao": state_id}))):
        benchmark(run_async_in_loop, loop, beacon.get_epoch_randao, state_id)

@pytest.mark.benchmark(group="async_beacon-get_block_headers")
def test_get_block_headers(benchmark: BenchmarkFixture):
    loop = asyncio.new_event_loop()
    beacon = web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"block_headers": True}))):
        benchmark(run_async_in_loop, loop, beacon.get_block_headers)

@pytest.mark.benchmark(group="async_beacon-get_block_headers")
def test_faster_get_block_headers(benchmark: BenchmarkFixture):
    loop = asyncio.new_event_loop()
    beacon = faster_web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"block_headers": True}))):
        benchmark(run_async_in_loop, loop, beacon.get_block_headers)

@pytest.mark.benchmark(group="async_beacon-get_block_header")
@pytest.mark.parametrize("block_id", block_ids)
def test_get_block_header(benchmark: BenchmarkFixture, block_id):
    loop = asyncio.new_event_loop()
    beacon = web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"block_header": block_id}))):
        benchmark(run_async_in_loop, loop, beacon.get_block_header, block_id)

@pytest.mark.benchmark(group="async_beacon-get_block_header")
@pytest.mark.parametrize("block_id", block_ids)
def test_faster_get_block_header(benchmark: BenchmarkFixture, block_id):
    loop = asyncio.new_event_loop()
    beacon = faster_web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"block_header": block_id}))):
        benchmark(run_async_in_loop, loop, beacon.get_block_header, block_id)

@pytest.mark.benchmark(group="async_beacon-get_block")
@pytest.mark.parametrize("block_id", block_ids)
def test_get_block(benchmark: BenchmarkFixture, block_id):
    loop = asyncio.new_event_loop()
    beacon = web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"block": block_id}))):
        benchmark(run_async_in_loop, loop, beacon.get_block, block_id)

@pytest.mark.benchmark(group="async_beacon-get_block")
@pytest.mark.parametrize("block_id", block_ids)
def test_faster_get_block(benchmark: BenchmarkFixture, block_id):
    loop = asyncio.new_event_loop()
    beacon = faster_web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"block": block_id}))):
        benchmark(run_async_in_loop, loop, beacon.get_block, block_id)

@pytest.mark.benchmark(group="async_beacon-get_block_root")
@pytest.mark.parametrize("block_id", block_ids)
def test_get_block_root(benchmark: BenchmarkFixture, block_id):
    loop = asyncio.new_event_loop()
    beacon = web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"block_root": block_id}))):
        benchmark(run_async_in_loop, loop, beacon.get_block_root, block_id)

@pytest.mark.benchmark(group="async_beacon-get_block_root")
@pytest.mark.parametrize("block_id", block_ids)
def test_faster_get_block_root(benchmark: BenchmarkFixture, block_id):
    loop = asyncio.new_event_loop()
    beacon = faster_web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"block_root": block_id}))):
        benchmark(run_async_in_loop, loop, beacon.get_block_root, block_id)

@pytest.mark.benchmark(group="async_beacon-get_block_attestations")
@pytest.mark.parametrize("block_id", block_ids)
def test_get_block_attestations(benchmark: BenchmarkFixture, block_id):
    loop = asyncio.new_event_loop()
    beacon = web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"block_attestations": block_id}))):
        benchmark(run_async_in_loop, loop, beacon.get_block_attestations, block_id)

@pytest.mark.benchmark(group="async_beacon-get_block_attestations")
@pytest.mark.parametrize("block_id", block_ids)
def test_faster_get_block_attestations(benchmark: BenchmarkFixture, block_id):
    loop = asyncio.new_event_loop()
    beacon = faster_web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"block_attestations": block_id}))):
        benchmark(run_async_in_loop, loop, beacon.get_block_attestations, block_id)

@pytest.mark.benchmark(group="async_beacon-get_blinded_blocks")
@pytest.mark.parametrize("block_id", block_ids)
def test_get_blinded_blocks(benchmark: BenchmarkFixture, block_id):
    loop = asyncio.new_event_loop()
    beacon = web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"blinded_blocks": block_id}))):
        benchmark(run_async_in_loop, loop, beacon.get_blinded_blocks, block_id)

@pytest.mark.benchmark(group="async_beacon-get_blinded_blocks")
@pytest.mark.parametrize("block_id", block_ids)
def test_faster_get_blinded_blocks(benchmark: BenchmarkFixture, block_id):
    loop = asyncio.new_event_loop()
    beacon = faster_web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"blinded_blocks": block_id}))):
        benchmark(run_async_in_loop, loop, beacon.get_blinded_blocks, block_id)

@pytest.mark.benchmark(group="async_beacon-get_rewards")
@pytest.mark.parametrize("block_id", block_ids)
def test_get_rewards(benchmark: BenchmarkFixture, block_id):
    loop = asyncio.new_event_loop()
    beacon = web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"rewards": block_id}))):
        benchmark(run_async_in_loop, loop, beacon.get_rewards, block_id)

@pytest.mark.benchmark(group="async_beacon-get_rewards")
@pytest.mark.parametrize("block_id", block_ids)
def test_faster_get_rewards(benchmark: BenchmarkFixture, block_id):
    loop = asyncio.new_event_loop()
    beacon = faster_web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"rewards": block_id}))):
        benchmark(run_async_in_loop, loop, beacon.get_rewards, block_id)

@pytest.mark.benchmark(group="async_beacon-get_light_client_bootstrap_structure")
@pytest.mark.parametrize("block_root", block_roots)
def test_get_light_client_bootstrap_structure(benchmark: BenchmarkFixture, block_root):
    loop = asyncio.new_event_loop()
    beacon = web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"light_client_bootstrap_structure": block_root}))):
        benchmark(run_async_in_loop, loop, beacon.get_light_client_bootstrap_structure, block_root)

@pytest.mark.benchmark(group="async_beacon-get_light_client_bootstrap_structure")
@pytest.mark.parametrize("block_root", block_roots)
def test_faster_get_light_client_bootstrap_structure(benchmark: BenchmarkFixture, block_root):
    loop = asyncio.new_event_loop()
    beacon = faster_web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"light_client_bootstrap_structure": block_root}))):
        benchmark(run_async_in_loop, loop, beacon.get_light_client_bootstrap_structure, block_root)

@pytest.mark.benchmark(group="async_beacon-get_light_client_updates")
def test_get_light_client_updates(benchmark: BenchmarkFixture):
    loop = asyncio.new_event_loop()
    beacon = web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"light_client_updates": True}))):
        benchmark(run_async_in_loop, loop, beacon.get_light_client_updates)

@pytest.mark.benchmark(group="async_beacon-get_light_client_updates")
def test_faster_get_light_client_updates(benchmark: BenchmarkFixture):
    loop = asyncio.new_event_loop()
    beacon = faster_web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"light_client_updates": True}))):
        benchmark(run_async_in_loop, loop, beacon.get_light_client_updates)

@pytest.mark.benchmark(group="async_beacon-get_light_client_finality_update")
def test_get_light_client_finality_update(benchmark: BenchmarkFixture):
    loop = asyncio.new_event_loop()
    beacon = web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"light_client_finality_update": True}))):
        benchmark(run_async_in_loop, loop, beacon.get_light_client_finality_update)

@pytest.mark.benchmark(group="async_beacon-get_light_client_finality_update")
def test_faster_get_light_client_finality_update(benchmark: BenchmarkFixture):
    loop = asyncio.new_event_loop()
    beacon = faster_web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"light_client_finality_update": True}))):
        benchmark(run_async_in_loop, loop, beacon.get_light_client_finality_update)

@pytest.mark.benchmark(group="async_beacon-get_light_client_optimistic_update")
def test_get_light_client_optimistic_update(benchmark: BenchmarkFixture):
    loop = asyncio.new_event_loop()
    beacon = web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"light_client_optimistic_update": True}))):
        benchmark(run_async_in_loop, loop, beacon.get_light_client_optimistic_update)

@pytest.mark.benchmark(group="async_beacon-get_light_client_optimistic_update")
def test_faster_get_light_client_optimistic_update(benchmark: BenchmarkFixture):
    loop = asyncio.new_event_loop()
    beacon = faster_web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"light_client_optimistic_update": True}))):
        benchmark(run_async_in_loop, loop, beacon.get_light_client_optimistic_update)

@pytest.mark.benchmark(group="async_beacon-get_attestations")
def test_get_attestations(benchmark: BenchmarkFixture):
    loop = asyncio.new_event_loop()
    beacon = web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"attestations": True}))):
        benchmark(run_async_in_loop, loop, beacon.get_attestations)

@pytest.mark.benchmark(group="async_beacon-get_attestations")
def test_faster_get_attestations(benchmark: BenchmarkFixture):
    loop = asyncio.new_event_loop()
    beacon = faster_web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"attestations": True}))):
        benchmark(run_async_in_loop, loop, beacon.get_attestations)

@pytest.mark.benchmark(group="async_beacon-get_attester_slashings")
def test_get_attester_slashings(benchmark: BenchmarkFixture):
    loop = asyncio.new_event_loop()
    beacon = web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"attester_slashings": True}))):
        benchmark(run_async_in_loop, loop, beacon.get_attester_slashings)

@pytest.mark.benchmark(group="async_beacon-get_attester_slashings")
def test_faster_get_attester_slashings(benchmark: BenchmarkFixture):
    loop = asyncio.new_event_loop()
    beacon = faster_web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"attester_slashings": True}))):
        benchmark(run_async_in_loop, loop, beacon.get_attester_slashings)

@pytest.mark.benchmark(group="async_beacon-get_proposer_slashings")
def test_get_proposer_slashings(benchmark: BenchmarkFixture):
    loop = asyncio.new_event_loop()
    beacon = web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"proposer_slashings": True}))):
        benchmark(run_async_in_loop, loop, beacon.get_proposer_slashings)

@pytest.mark.benchmark(group="async_beacon-get_proposer_slashings")
def test_faster_get_proposer_slashings(benchmark: BenchmarkFixture):
    loop = asyncio.new_event_loop()
    beacon = faster_web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"proposer_slashings": True}))):
        benchmark(run_async_in_loop, loop, beacon.get_proposer_slashings)

@pytest.mark.benchmark(group="async_beacon-get_voluntary_exits")
def test_get_voluntary_exits(benchmark: BenchmarkFixture):
    loop = asyncio.new_event_loop()
    beacon = web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"voluntary_exits": True}))):
        benchmark(run_async_in_loop, loop, beacon.get_voluntary_exits)

@pytest.mark.benchmark(group="async_beacon-get_voluntary_exits")
def test_faster_get_voluntary_exits(benchmark: BenchmarkFixture):
    loop = asyncio.new_event_loop()
    beacon = faster_web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"voluntary_exits": True}))):
        benchmark(run_async_in_loop, loop, beacon.get_voluntary_exits)

@pytest.mark.benchmark(group="async_beacon-get_bls_to_execution_changes")
def test_get_bls_to_execution_changes(benchmark: BenchmarkFixture):
    loop = asyncio.new_event_loop()
    beacon = web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"bls_to_execution_changes": True}))):
        benchmark(run_async_in_loop, loop, beacon.get_bls_to_execution_changes)

@pytest.mark.benchmark(group="async_beacon-get_bls_to_execution_changes")
def test_faster_get_bls_to_execution_changes(benchmark: BenchmarkFixture):
    loop = asyncio.new_event_loop()
    beacon = faster_web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"bls_to_execution_changes": True}))):
        benchmark(run_async_in_loop, loop, beacon.get_bls_to_execution_changes)

@pytest.mark.benchmark(group="async_beacon-get_fork_schedule")
def test_get_fork_schedule(benchmark: BenchmarkFixture):
    loop = asyncio.new_event_loop()
    beacon = web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"fork_schedule": True}))):
        benchmark(run_async_in_loop, loop, beacon.get_fork_schedule)

@pytest.mark.benchmark(group="async_beacon-get_fork_schedule")
def test_faster_get_fork_schedule(benchmark: BenchmarkFixture):
    loop = asyncio.new_event_loop()
    beacon = faster_web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"fork_schedule": True}))):
        benchmark(run_async_in_loop, loop, beacon.get_fork_schedule)

@pytest.mark.benchmark(group="async_beacon-get_spec")
def test_get_spec(benchmark: BenchmarkFixture):
    loop = asyncio.new_event_loop()
    beacon = web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"spec": True}))):
        benchmark(run_async_in_loop, loop, beacon.get_spec)

@pytest.mark.benchmark(group="async_beacon-get_spec")
def test_faster_get_spec(benchmark: BenchmarkFixture):
    loop = asyncio.new_event_loop()
    beacon = faster_web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"spec": True}))):
        benchmark(run_async_in_loop, loop, beacon.get_spec)

@pytest.mark.benchmark(group="async_beacon-get_deposit_contract")
def test_get_deposit_contract(benchmark: BenchmarkFixture):
    loop = asyncio.new_event_loop()
    beacon = web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"deposit_contract": True}))):
        benchmark(run_async_in_loop, loop, beacon.get_deposit_contract)

@pytest.mark.benchmark(group="async_beacon-get_deposit_contract")
def test_faster_get_deposit_contract(benchmark: BenchmarkFixture):
    loop = asyncio.new_event_loop()
    beacon = faster_web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"deposit_contract": True}))):
        benchmark(run_async_in_loop, loop, beacon.get_deposit_contract)

@pytest.mark.benchmark(group="async_beacon-get_beacon_state")
@pytest.mark.parametrize("state_id", state_ids)
def test_get_beacon_state(benchmark: BenchmarkFixture, state_id):
    loop = asyncio.new_event_loop()
    beacon = web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"beacon_state": state_id}))):
        benchmark(run_async_in_loop, loop, beacon.get_beacon_state, state_id)

@pytest.mark.benchmark(group="async_beacon-get_beacon_state")
@pytest.mark.parametrize("state_id", state_ids)
def test_faster_get_beacon_state(benchmark: BenchmarkFixture, state_id):
    loop = asyncio.new_event_loop()
    beacon = faster_web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"beacon_state": state_id}))):
        benchmark(run_async_in_loop, loop, beacon.get_beacon_state, state_id)

@pytest.mark.benchmark(group="async_beacon-get_beacon_heads")
def test_get_beacon_heads(benchmark: BenchmarkFixture):
    loop = asyncio.new_event_loop()
    beacon = web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"beacon_heads": True}))):
        benchmark(run_async_in_loop, loop, beacon.get_beacon_heads)

@pytest.mark.benchmark(group="async_beacon-get_beacon_heads")
def test_faster_get_beacon_heads(benchmark: BenchmarkFixture):
    loop = asyncio.new_event_loop()
    beacon = faster_web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"beacon_heads": True}))):
        benchmark(run_async_in_loop, loop, beacon.get_beacon_heads)

@pytest.mark.benchmark(group="async_beacon-get_node_identity")
def test_get_node_identity(benchmark: BenchmarkFixture):
    loop = asyncio.new_event_loop()
    beacon = web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"node_identity": True}))):
        benchmark(run_async_in_loop, loop, beacon.get_node_identity)

@pytest.mark.benchmark(group="async_beacon-get_node_identity")
def test_faster_get_node_identity(benchmark: BenchmarkFixture):
    loop = asyncio.new_event_loop()
    beacon = faster_web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"node_identity": True}))):
        benchmark(run_async_in_loop, loop, beacon.get_node_identity)

@pytest.mark.benchmark(group="async_beacon-get_peers")
def test_get_peers(benchmark: BenchmarkFixture):
    loop = asyncio.new_event_loop()
    beacon = web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"peers": True}))):
        benchmark(run_async_in_loop, loop, beacon.get_peers)

@pytest.mark.benchmark(group="async_beacon-get_peers")
def test_faster_get_peers(benchmark: BenchmarkFixture):
    loop = asyncio.new_event_loop()
    beacon = faster_web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"peers": True}))):
        benchmark(run_async_in_loop, loop, beacon.get_peers)

@pytest.mark.benchmark(group="async_beacon-get_peer")
@pytest.mark.parametrize("peer_id", peer_ids)
def test_get_peer(benchmark: BenchmarkFixture, peer_id):
    loop = asyncio.new_event_loop()
    beacon = web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"peer": peer_id}))):
        benchmark(run_async_in_loop, loop, beacon.get_peer, peer_id)

@pytest.mark.benchmark(group="async_beacon-get_peer")
@pytest.mark.parametrize("peer_id", peer_ids)
def test_faster_get_peer(benchmark: BenchmarkFixture, peer_id):
    loop = asyncio.new_event_loop()
    beacon = faster_web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"peer": peer_id}))):
        benchmark(run_async_in_loop, loop, beacon.get_peer, peer_id)

@pytest.mark.benchmark(group="async_beacon-get_peer_count")
def test_get_peer_count(benchmark: BenchmarkFixture):
    loop = asyncio.new_event_loop()
    beacon = web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"peer_count": True}))):
        benchmark(run_async_in_loop, loop, beacon.get_peer_count)

@pytest.mark.benchmark(group="async_beacon-get_peer_count")
def test_faster_get_peer_count(benchmark: BenchmarkFixture):
    loop = asyncio.new_event_loop()
    beacon = faster_web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"peer_count": True}))):
        benchmark(run_async_in_loop, loop, beacon.get_peer_count)

@pytest.mark.benchmark(group="async_beacon-get_health")
def test_get_health(benchmark: BenchmarkFixture):
    loop = asyncio.new_event_loop()
    beacon = web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"health": True}))):
        benchmark(run_async_in_loop, loop, beacon.get_health)

@pytest.mark.benchmark(group="async_beacon-get_health")
def test_faster_get_health(benchmark: BenchmarkFixture):
    loop = asyncio.new_event_loop()
    beacon = faster_web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"health": True}))):
        benchmark(run_async_in_loop, loop, beacon.get_health)

@pytest.mark.benchmark(group="async_beacon-get_version")
def test_get_version(benchmark: BenchmarkFixture):
    loop = asyncio.new_event_loop()
    beacon = web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"version": True}))):
        benchmark(run_async_in_loop, loop, beacon.get_version)

@pytest.mark.benchmark(group="async_beacon-get_version")
def test_faster_get_version(benchmark: BenchmarkFixture):
    loop = asyncio.new_event_loop()
    beacon = faster_web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"version": True}))):
        benchmark(run_async_in_loop, loop, beacon.get_version)

@pytest.mark.benchmark(group="async_beacon-get_syncing")
def test_get_syncing(benchmark: BenchmarkFixture):
    loop = asyncio.new_event_loop()
    beacon = web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"syncing": True}))):
        benchmark(run_async_in_loop, loop, beacon.get_syncing)

@pytest.mark.benchmark(group="async_beacon-get_syncing")
def test_faster_get_syncing(benchmark: BenchmarkFixture):
    loop = asyncio.new_event_loop()
    beacon = faster_web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"syncing": True}))):
        benchmark(run_async_in_loop, loop, beacon.get_syncing)

@pytest.mark.benchmark(group="async_beacon-get_blob_sidecars")
@pytest.mark.parametrize("block_id", block_ids)
@pytest.mark.parametrize("indices", indices_cases)
def test_get_blob_sidecars(benchmark: BenchmarkFixture, block_id, indices):
    loop = asyncio.new_event_loop()
    beacon = web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"block": block_id, "indices": indices}))):
        benchmark(run_async_in_loop, loop, beacon.get_blob_sidecars, block_id, indices)

@pytest.mark.benchmark(group="async_beacon-get_blob_sidecars")
@pytest.mark.parametrize("block_id", block_ids)
@pytest.mark.parametrize("indices", indices_cases)
def test_faster_get_blob_sidecars(benchmark: BenchmarkFixture, block_id, indices):
    loop = asyncio.new_event_loop()
    beacon = faster_web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"block": block_id, "indices": indices}))):
        benchmark(run_async_in_loop, loop, beacon.get_blob_sidecars, block_id, indices)

@pytest.mark.benchmark(group="async_beacon-get_attester_duties")
@pytest.mark.parametrize("epoch", epochs)
@pytest.mark.parametrize("validator_indices", validator_indices_cases)
def test_get_attester_duties(benchmark: BenchmarkFixture, epoch, validator_indices):
    loop = asyncio.new_event_loop()
    beacon = web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.post", new=AsyncMock(side_effect=make_fake_aiohttp_request({"epoch": epoch, "validator_indices": validator_indices}))):
        benchmark(run_async_in_loop, loop, beacon.get_attester_duties, epoch, validator_indices)

@pytest.mark.benchmark(group="async_beacon-get_attester_duties")
@pytest.mark.parametrize("epoch", epochs)
@pytest.mark.parametrize("validator_indices", validator_indices_cases)
def test_faster_get_attester_duties(benchmark: BenchmarkFixture, epoch, validator_indices):
    loop = asyncio.new_event_loop()
    beacon = faster_web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.post", new=AsyncMock(side_effect=make_fake_aiohttp_request({"epoch": epoch, "validator_indices": validator_indices}))):
        benchmark(run_async_in_loop, loop, beacon.get_attester_duties, epoch, validator_indices)

@pytest.mark.benchmark(group="async_beacon-get_block_proposer_duties")
@pytest.mark.parametrize("epoch", epochs)
def test_get_block_proposer_duties(benchmark: BenchmarkFixture, epoch):
    loop = asyncio.new_event_loop()
    beacon = web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"block_proposer_duties": epoch}))):
        benchmark(run_async_in_loop, loop, beacon.get_block_proposer_duties, epoch)

@pytest.mark.benchmark(group="async_beacon-get_block_proposer_duties")
@pytest.mark.parametrize("epoch", epochs)
def test_faster_get_block_proposer_duties(benchmark: BenchmarkFixture, epoch):
    loop = asyncio.new_event_loop()
    beacon = faster_web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.get", new=AsyncMock(side_effect=make_fake_aiohttp_request({"block_proposer_duties": epoch}))):
        benchmark(run_async_in_loop, loop, beacon.get_block_proposer_duties, epoch)

@pytest.mark.benchmark(group="async_beacon-get_sync_committee_duties")
@pytest.mark.parametrize("epoch", epochs)
@pytest.mark.parametrize("validator_indices", validator_indices_cases)
def test_get_sync_committee_duties(benchmark: BenchmarkFixture, epoch, validator_indices):
    loop = asyncio.new_event_loop()
    beacon = web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.post", new=AsyncMock(side_effect=make_fake_aiohttp_request({"epoch": epoch, "validator_indices": validator_indices}))):
        benchmark(run_async_in_loop, loop, beacon.get_sync_committee_duties, epoch, validator_indices)

@pytest.mark.benchmark(group="async_beacon-get_sync_committee_duties")
@pytest.mark.parametrize("epoch", epochs)
@pytest.mark.parametrize("validator_indices", validator_indices_cases)
def test_faster_get_sync_committee_duties(benchmark: BenchmarkFixture, epoch, validator_indices):
    loop = asyncio.new_event_loop()
    beacon = faster_web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.post", new=AsyncMock(side_effect=make_fake_aiohttp_request({"epoch": epoch, "validator_indices": validator_indices}))):
        benchmark(run_async_in_loop, loop, beacon.get_sync_committee_duties, epoch, validator_indices)

@pytest.mark.benchmark(group="async_beacon-get_attestations_rewards")
@pytest.mark.parametrize("epoch", epochs)
@pytest.mark.parametrize("validator_indices", validator_indices_cases)
def test_get_attestations_rewards(benchmark: BenchmarkFixture, epoch, validator_indices):
    loop = asyncio.new_event_loop()
    beacon = web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.post", new=AsyncMock(side_effect=make_fake_aiohttp_request({"epoch": epoch, "validator_indices": validator_indices}))):
        benchmark(run_async_in_loop, loop, beacon.get_attestations_rewards, epoch, validator_indices)

@pytest.mark.benchmark(group="async_beacon-get_attestations_rewards")
@pytest.mark.parametrize("epoch", epochs)
@pytest.mark.parametrize("validator_indices", validator_indices_cases)
def test_faster_get_attestations_rewards(benchmark: BenchmarkFixture, epoch, validator_indices):
    loop = asyncio.new_event_loop()
    beacon = faster_web3.beacon.AsyncBeacon(base_url="http://localhost:5052")
    with patch("aiohttp.ClientSession.post", new=AsyncMock(side_effect=make_fake_aiohttp_request({"epoch": epoch, "validator_indices": validator_indices}))):
        benchmark(run_async_in_loop, loop, beacon.get_attestations_rewards, epoch, validator_indices)
