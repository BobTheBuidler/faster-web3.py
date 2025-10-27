import pytest
from pytest_codspeed import BenchmarkFixture
from unittest.mock import patch

try:
    import web3.beacon
except ImportError:
    pass

import faster_web3.beacon

# --- Fake Response and Mocking Utilities ---

class FakeResponse:
    def __init__(self, result, status_code=200):
        self.status_code = status_code
        self._result = result
        self.headers = {}
        self.content = self.text = ""

    def json(self):
        return self._result

    def raise_for_status(self):
        # No-op for benchmarks; could simulate errors if needed
        pass

def make_fake_send(result=None):
    def fake_send(*args, **kwargs):
        return FakeResponse(result or {"data": "mocked"}, status_code=200)
    return fake_send

# --- Parameter Sets for Beacon Methods ---

state_ids = ["head", "finalized", "justified", "12345"]
block_ids = ["head", "genesis", "12345", "0xabc123"]
validator_ids = ["0", "123456", "0xdeadbeef"]
epochs = ["0", "123", "99999"]
validator_indices_cases = [[], ["0"], ["1", "2", "3", "4", "5"]]
indices_cases = [None, [0], [0, 1, 2, 3, 4]]
block_roots = ["0xabc123", "0x0"]
peer_ids = ["peer1", "peer2", "0xdeadbeef"]

# --- Benchmarks for All Beacon Methods ---

def run_1000(fn, *args, **kwargs):
    if kwargs and args:
        for _ in range(1000):
            fn(*args, **kwargs)
    elif args:
        for _ in range(1000):
            fn(*args)
    elif kwargs:
        for _ in range(1000):
            fn(**kwargs)
    else:
        for i in range(1000):
            fn()

@pytest.mark.benchmark(group="beacon-get_genesis")
def test_get_genesis(benchmark: BenchmarkFixture):
    beacon = web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"genesis": True})):
        benchmark(beacon.get_genesis)

@pytest.mark.benchmark(group="beacon-get_genesis")
def test_faster_get_genesis(benchmark: BenchmarkFixture):
    beacon = faster_web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"genesis": True})):
        benchmark(beacon.get_genesis)

@pytest.mark.benchmark(group="beacon-get_hash_root")
@pytest.mark.parametrize("state_id", state_ids)
def test_get_hash_root(benchmark: BenchmarkFixture, state_id):
    beacon = web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"hash_root": state_id})):
        benchmark(beacon.get_hash_root, state_id)

@pytest.mark.benchmark(group="beacon-get_hash_root")
@pytest.mark.parametrize("state_id", state_ids)
def test_faster_get_hash_root(benchmark: BenchmarkFixture, state_id):
    beacon = faster_web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"hash_root": state_id})):
        benchmark(beacon.get_hash_root, state_id)

@pytest.mark.benchmark(group="beacon-get_fork_data")
@pytest.mark.parametrize("state_id", state_ids)
def test_get_fork_data(benchmark: BenchmarkFixture, state_id):
    beacon = web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"fork_data": state_id})):
        benchmark(beacon.get_fork_data, state_id)

@pytest.mark.benchmark(group="beacon-get_fork_data")
@pytest.mark.parametrize("state_id", state_ids)
def test_faster_get_fork_data(benchmark: BenchmarkFixture, state_id):
    beacon = faster_web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"fork_data": state_id})):
        benchmark(beacon.get_fork_data, state_id)

@pytest.mark.benchmark(group="beacon-get_finality_checkpoint")
@pytest.mark.parametrize("state_id", state_ids)
def test_get_finality_checkpoint(benchmark: BenchmarkFixture, state_id):
    beacon = web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"finality_checkpoint": state_id})):
        benchmark(beacon.get_finality_checkpoint, state_id)

@pytest.mark.benchmark(group="beacon-get_finality_checkpoint")
@pytest.mark.parametrize("state_id", state_ids)
def test_faster_get_finality_checkpoint(benchmark: BenchmarkFixture, state_id):
    beacon = faster_web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"finality_checkpoint": state_id})):
        benchmark(beacon.get_finality_checkpoint, state_id)

@pytest.mark.benchmark(group="beacon-get_validators")
@pytest.mark.parametrize("state_id", state_ids)
def test_get_validators(benchmark: BenchmarkFixture, state_id):
    beacon = web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"validators": state_id})):
        benchmark(beacon.get_validators, state_id)

@pytest.mark.benchmark(group="beacon-get_validators")
@pytest.mark.parametrize("state_id", state_ids)
def test_faster_get_validators(benchmark: BenchmarkFixture, state_id):
    beacon = faster_web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"validators": state_id})):
        benchmark(beacon.get_validators, state_id)

@pytest.mark.benchmark(group="beacon-get_validator")
@pytest.mark.parametrize("validator_id", validator_ids)
@pytest.mark.parametrize("state_id", state_ids)
def test_get_validator(benchmark: BenchmarkFixture, validator_id, state_id):
    beacon = web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"validator": validator_id, "state": state_id})):
        benchmark(beacon.get_validator, validator_id, state_id)

@pytest.mark.benchmark(group="beacon-get_validator")
@pytest.mark.parametrize("validator_id", validator_ids)
@pytest.mark.parametrize("state_id", state_ids)
def test_faster_get_validator(benchmark: BenchmarkFixture, validator_id, state_id):
    beacon = faster_web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"validator": validator_id, "state": state_id})):
        benchmark(beacon.get_validator, validator_id, state_id)

@pytest.mark.benchmark(group="beacon-get_validator_balances")
@pytest.mark.parametrize("state_id", state_ids)
def test_get_validator_balances(benchmark: BenchmarkFixture, state_id):
    beacon = web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"validator_balances": state_id})):
        benchmark(beacon.get_validator_balances, state_id)

@pytest.mark.benchmark(group="beacon-get_validator_balances")
@pytest.mark.parametrize("state_id", state_ids)
def test_faster_get_validator_balances(benchmark: BenchmarkFixture, state_id):
    beacon = faster_web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"validator_balances": state_id})):
        benchmark(beacon.get_validator_balances, state_id)

@pytest.mark.benchmark(group="beacon-get_epoch_committees")
@pytest.mark.parametrize("state_id", state_ids)
def test_get_epoch_committees(benchmark: BenchmarkFixture, state_id):
    beacon = web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"epoch_committees": state_id})):
        benchmark(beacon.get_epoch_committees, state_id)

@pytest.mark.benchmark(group="beacon-get_epoch_committees")
@pytest.mark.parametrize("state_id", state_ids)
def test_faster_get_epoch_committees(benchmark: BenchmarkFixture, state_id):
    beacon = faster_web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"epoch_committees": state_id})):
        benchmark(beacon.get_epoch_committees, state_id)

@pytest.mark.benchmark(group="beacon-get_epoch_sync_committees")
@pytest.mark.parametrize("state_id", state_ids)
def test_get_epoch_sync_committees(benchmark: BenchmarkFixture, state_id):
    beacon = web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"epoch_sync_committees": state_id})):
        benchmark(beacon.get_epoch_sync_committees, state_id)

@pytest.mark.benchmark(group="beacon-get_epoch_sync_committees")
@pytest.mark.parametrize("state_id", state_ids)
def test_faster_get_epoch_sync_committees(benchmark: BenchmarkFixture, state_id):
    beacon = faster_web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"epoch_sync_committees": state_id})):
        benchmark(beacon.get_epoch_sync_committees, state_id)

@pytest.mark.benchmark(group="beacon-get_epoch_randao")
@pytest.mark.parametrize("state_id", state_ids)
def test_get_epoch_randao(benchmark: BenchmarkFixture, state_id):
    beacon = web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"epoch_randao": state_id})):
        benchmark(beacon.get_epoch_randao, state_id)

@pytest.mark.benchmark(group="beacon-get_epoch_randao")
@pytest.mark.parametrize("state_id", state_ids)
def test_faster_get_epoch_randao(benchmark: BenchmarkFixture, state_id):
    beacon = faster_web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"epoch_randao": state_id})):
        benchmark(beacon.get_epoch_randao, state_id)

@pytest.mark.benchmark(group="beacon-get_block_headers")
def test_get_block_headers(benchmark: BenchmarkFixture):
    beacon = web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"block_headers": True})):
        benchmark(beacon.get_block_headers)

@pytest.mark.benchmark(group="beacon-get_block_headers")
def test_faster_get_block_headers(benchmark: BenchmarkFixture):
    beacon = faster_web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"block_headers": True})):
        benchmark(beacon.get_block_headers)

@pytest.mark.benchmark(group="beacon-get_block_header")
@pytest.mark.parametrize("block_id", block_ids)
def test_get_block_header(benchmark: BenchmarkFixture, block_id):
    beacon = web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"block_header": block_id})):
        benchmark(beacon.get_block_header, block_id)

@pytest.mark.benchmark(group="beacon-get_block_header")
@pytest.mark.parametrize("block_id", block_ids)
def test_faster_get_block_header(benchmark: BenchmarkFixture, block_id):
    beacon = faster_web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"block_header": block_id})):
        benchmark(beacon.get_block_header, block_id)

@pytest.mark.benchmark(group="beacon-get_block")
@pytest.mark.parametrize("block_id", block_ids)
def test_get_block(benchmark: BenchmarkFixture, block_id):
    beacon = web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"block": block_id})):
        benchmark(beacon.get_block, block_id)

@pytest.mark.benchmark(group="beacon-get_block")
@pytest.mark.parametrize("block_id", block_ids)
def test_faster_get_block(benchmark: BenchmarkFixture, block_id):
    beacon = faster_web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"block": block_id})):
        benchmark(beacon.get_block, block_id)

@pytest.mark.benchmark(group="beacon-get_block_root")
@pytest.mark.parametrize("block_id", block_ids)
def test_get_block_root(benchmark: BenchmarkFixture, block_id):
    beacon = web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"block_root": block_id})):
        benchmark(beacon.get_block_root, block_id)

@pytest.mark.benchmark(group="beacon-get_block_root")
@pytest.mark.parametrize("block_id", block_ids)
def test_faster_get_block_root(benchmark: BenchmarkFixture, block_id):
    beacon = faster_web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"block_root": block_id})):
        benchmark(beacon.get_block_root, block_id)

@pytest.mark.benchmark(group="beacon-get_block_attestations")
@pytest.mark.parametrize("block_id", block_ids)
def test_get_block_attestations(benchmark: BenchmarkFixture, block_id):
    beacon = web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"block_attestations": block_id})):
        benchmark(beacon.get_block_attestations, block_id)

@pytest.mark.benchmark(group="beacon-get_block_attestations")
@pytest.mark.parametrize("block_id", block_ids)
def test_faster_get_block_attestations(benchmark: BenchmarkFixture, block_id):
    beacon = faster_web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"block_attestations": block_id})):
        benchmark(beacon.get_block_attestations, block_id)

@pytest.mark.benchmark(group="beacon-get_blinded_blocks")
@pytest.mark.parametrize("block_id", block_ids)
def test_get_blinded_blocks(benchmark: BenchmarkFixture, block_id):
    beacon = web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"blinded_blocks": block_id})):
        benchmark(beacon.get_blinded_blocks, block_id)

@pytest.mark.benchmark(group="beacon-get_blinded_blocks")
@pytest.mark.parametrize("block_id", block_ids)
def test_faster_get_blinded_blocks(benchmark: BenchmarkFixture, block_id):
    beacon = faster_web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"blinded_blocks": block_id})):
        benchmark(beacon.get_blinded_blocks, block_id)

@pytest.mark.benchmark(group="beacon-get_rewards")
@pytest.mark.parametrize("block_id", block_ids)
def test_get_rewards(benchmark: BenchmarkFixture, block_id):
    beacon = web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"rewards": block_id})):
        benchmark(beacon.get_rewards, block_id)

@pytest.mark.benchmark(group="beacon-get_rewards")
@pytest.mark.parametrize("block_id", block_ids)
def test_faster_get_rewards(benchmark: BenchmarkFixture, block_id):
    beacon = faster_web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"rewards": block_id})):
        benchmark(beacon.get_rewards, block_id)

@pytest.mark.benchmark(group="beacon-get_light_client_bootstrap_structure")
@pytest.mark.parametrize("block_root", block_roots)
def test_get_light_client_bootstrap_structure(benchmark: BenchmarkFixture, block_root):
    beacon = web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"light_client_bootstrap_structure": block_root})):
        benchmark(beacon.get_light_client_bootstrap_structure, block_root)

@pytest.mark.benchmark(group="beacon-get_light_client_bootstrap_structure")
@pytest.mark.parametrize("block_root", block_roots)
def test_faster_get_light_client_bootstrap_structure(benchmark: BenchmarkFixture, block_root):
    beacon = faster_web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"light_client_bootstrap_structure": block_root})):
        benchmark(beacon.get_light_client_bootstrap_structure, block_root)

@pytest.mark.benchmark(group="beacon-get_light_client_updates")
def test_get_light_client_updates(benchmark: BenchmarkFixture):
    beacon = web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"light_client_updates": True})):
        benchmark(beacon.get_light_client_updates)

@pytest.mark.benchmark(group="beacon-get_light_client_updates")
def test_faster_get_light_client_updates(benchmark: BenchmarkFixture):
    beacon = faster_web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"light_client_updates": True})):
        benchmark(beacon.get_light_client_updates)

@pytest.mark.benchmark(group="beacon-get_light_client_finality_update")
def test_get_light_client_finality_update(benchmark: BenchmarkFixture):
    beacon = web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"light_client_finality_update": True})):
        benchmark(beacon.get_light_client_finality_update)

@pytest.mark.benchmark(group="beacon-get_light_client_finality_update")
def test_faster_get_light_client_finality_update(benchmark: BenchmarkFixture):
    beacon = faster_web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"light_client_finality_update": True})):
        benchmark(beacon.get_light_client_finality_update)

@pytest.mark.benchmark(group="beacon-get_light_client_optimistic_update")
def test_get_light_client_optimistic_update(benchmark: BenchmarkFixture):
    beacon = web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"light_client_optimistic_update": True})):
        benchmark(beacon.get_light_client_optimistic_update)

@pytest.mark.benchmark(group="beacon-get_light_client_optimistic_update")
def test_faster_get_light_client_optimistic_update(benchmark: BenchmarkFixture):
    beacon = faster_web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"light_client_optimistic_update": True})):
        benchmark(beacon.get_light_client_optimistic_update)

@pytest.mark.benchmark(group="beacon-get_attestations")
def test_get_attestations(benchmark: BenchmarkFixture):
    beacon = web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"attestations": True})):
        benchmark(beacon.get_attestations)

@pytest.mark.benchmark(group="beacon-get_attestations")
def test_faster_get_attestations(benchmark: BenchmarkFixture):
    beacon = faster_web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"attestations": True})):
        benchmark(beacon.get_attestations)

@pytest.mark.benchmark(group="beacon-get_attester_slashings")
def test_get_attester_slashings(benchmark: BenchmarkFixture):
    beacon = web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"attester_slashings": True})):
        benchmark(beacon.get_attester_slashings)

@pytest.mark.benchmark(group="beacon-get_attester_slashings")
def test_faster_get_attester_slashings(benchmark: BenchmarkFixture):
    beacon = faster_web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"attester_slashings": True})):
        benchmark(beacon.get_attester_slashings)

@pytest.mark.benchmark(group="beacon-get_proposer_slashings")
def test_get_proposer_slashings(benchmark: BenchmarkFixture):
    beacon = web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"proposer_slashings": True})):
        benchmark(beacon.get_proposer_slashings)

@pytest.mark.benchmark(group="beacon-get_proposer_slashings")
def test_faster_get_proposer_slashings(benchmark: BenchmarkFixture):
    beacon = faster_web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"proposer_slashings": True})):
        benchmark(beacon.get_proposer_slashings)

@pytest.mark.benchmark(group="beacon-get_voluntary_exits")
def test_get_voluntary_exits(benchmark: BenchmarkFixture):
    beacon = web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"voluntary_exits": True})):
        benchmark(beacon.get_voluntary_exits)

@pytest.mark.benchmark(group="beacon-get_voluntary_exits")
def test_faster_get_voluntary_exits(benchmark: BenchmarkFixture):
    beacon = faster_web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"voluntary_exits": True})):
        benchmark(beacon.get_voluntary_exits)

@pytest.mark.benchmark(group="beacon-get_bls_to_execution_changes")
def test_get_bls_to_execution_changes(benchmark: BenchmarkFixture):
    beacon = web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"bls_to_execution_changes": True})):
        benchmark(beacon.get_bls_to_execution_changes)

@pytest.mark.benchmark(group="beacon-get_bls_to_execution_changes")
def test_faster_get_bls_to_execution_changes(benchmark: BenchmarkFixture):
    beacon = faster_web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"bls_to_execution_changes": True})):
        benchmark(beacon.get_bls_to_execution_changes)

@pytest.mark.benchmark(group="beacon-get_fork_schedule")
def test_get_fork_schedule(benchmark: BenchmarkFixture):
    beacon = web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"fork_schedule": True})):
        benchmark(beacon.get_fork_schedule)

@pytest.mark.benchmark(group="beacon-get_fork_schedule")
def test_faster_get_fork_schedule(benchmark: BenchmarkFixture):
    beacon = faster_web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"fork_schedule": True})):
        benchmark(beacon.get_fork_schedule)

@pytest.mark.benchmark(group="beacon-get_spec")
def test_get_spec(benchmark: BenchmarkFixture):
    beacon = web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"spec": True})):
        benchmark(beacon.get_spec)

@pytest.mark.benchmark(group="beacon-get_spec")
def test_faster_get_spec(benchmark: BenchmarkFixture):
    beacon = faster_web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"spec": True})):
        benchmark(beacon.get_spec)

@pytest.mark.benchmark(group="beacon-get_deposit_contract")
def test_get_deposit_contract(benchmark: BenchmarkFixture):
    beacon = web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"deposit_contract": True})):
        benchmark(beacon.get_deposit_contract)

@pytest.mark.benchmark(group="beacon-get_deposit_contract")
def test_faster_get_deposit_contract(benchmark: BenchmarkFixture):
    beacon = faster_web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"deposit_contract": True})):
        benchmark(beacon.get_deposit_contract)

@pytest.mark.benchmark(group="beacon-get_beacon_state")
@pytest.mark.parametrize("state_id", state_ids)
def test_get_beacon_state(benchmark: BenchmarkFixture, state_id):
    beacon = web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"beacon_state": state_id})):
        benchmark(beacon.get_beacon_state, state_id)

@pytest.mark.benchmark(group="beacon-get_beacon_state")
@pytest.mark.parametrize("state_id", state_ids)
def test_faster_get_beacon_state(benchmark: BenchmarkFixture, state_id):
    beacon = faster_web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"beacon_state": state_id})):
        benchmark(beacon.get_beacon_state, state_id)

@pytest.mark.benchmark(group="beacon-get_beacon_heads")
def test_get_beacon_heads(benchmark: BenchmarkFixture):
    beacon = web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"beacon_heads": True})):
        benchmark(beacon.get_beacon_heads)

@pytest.mark.benchmark(group="beacon-get_beacon_heads")
def test_faster_get_beacon_heads(benchmark: BenchmarkFixture):
    beacon = faster_web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"beacon_heads": True})):
        benchmark(beacon.get_beacon_heads)

@pytest.mark.benchmark(group="beacon-get_node_identity")
def test_get_node_identity(benchmark: BenchmarkFixture):
    beacon = web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"node_identity": True})):
        benchmark(beacon.get_node_identity)

@pytest.mark.benchmark(group="beacon-get_node_identity")
def test_faster_get_node_identity(benchmark: BenchmarkFixture):
    beacon = faster_web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"node_identity": True})):
        benchmark(beacon.get_node_identity)

@pytest.mark.benchmark(group="beacon-get_peers")
def test_get_peers(benchmark: BenchmarkFixture):
    beacon = web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"peers": True})):
        benchmark(beacon.get_peers)

@pytest.mark.benchmark(group="beacon-get_peers")
def test_faster_get_peers(benchmark: BenchmarkFixture):
    beacon = faster_web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"peers": True})):
        benchmark(beacon.get_peers)

@pytest.mark.benchmark(group="beacon-get_peer")
@pytest.mark.parametrize("peer_id", peer_ids)
def test_get_peer(benchmark: BenchmarkFixture, peer_id):
    beacon = web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"peer": peer_id})):
        benchmark(beacon.get_peer, peer_id)

@pytest.mark.benchmark(group="beacon-get_peer")
@pytest.mark.parametrize("peer_id", peer_ids)
def test_faster_get_peer(benchmark: BenchmarkFixture, peer_id):
    beacon = faster_web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"peer": peer_id})):
        benchmark(beacon.get_peer, peer_id)

@pytest.mark.benchmark(group="beacon-get_peer_count")
def test_get_peer_count(benchmark: BenchmarkFixture):
    beacon = web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"peer_count": True})):
        benchmark(beacon.get_peer_count)

@pytest.mark.benchmark(group="beacon-get_peer_count")
def test_faster_get_peer_count(benchmark: BenchmarkFixture):
    beacon = faster_web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"peer_count": True})):
        benchmark(beacon.get_peer_count)

@pytest.mark.benchmark(group="beacon-get_health")
def test_get_health(benchmark: BenchmarkFixture):
    beacon = web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"health": True})):
        benchmark(beacon.get_health)

@pytest.mark.benchmark(group="beacon-get_health")
def test_faster_get_health(benchmark: BenchmarkFixture):
    beacon = faster_web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"health": True})):
        benchmark(beacon.get_health)

@pytest.mark.benchmark(group="beacon-get_version")
def test_get_version(benchmark: BenchmarkFixture):
    beacon = web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"version": True})):
        benchmark(beacon.get_version)

@pytest.mark.benchmark(group="beacon-get_version")
def test_faster_get_version(benchmark: BenchmarkFixture):
    beacon = faster_web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"version": True})):
        benchmark(beacon.get_version)

@pytest.mark.benchmark(group="beacon-get_syncing")
def test_get_syncing(benchmark: BenchmarkFixture):
    beacon = web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"syncing": True})):
        benchmark(beacon.get_syncing)

@pytest.mark.benchmark(group="beacon-get_syncing")
def test_faster_get_syncing(benchmark: BenchmarkFixture):
    beacon = faster_web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"syncing": True})):
        benchmark(beacon.get_syncing)

@pytest.mark.benchmark(group="beacon-get_blob_sidecars")
@pytest.mark.parametrize("block_id", block_ids)
@pytest.mark.parametrize("indices", indices_cases)
def test_get_blob_sidecars(benchmark: BenchmarkFixture, block_id, indices):
    beacon = web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"block": block_id, "indices": indices})):
        benchmark(beacon.get_blob_sidecars, block_id, indices)

@pytest.mark.benchmark(group="beacon-get_blob_sidecars")
@pytest.mark.parametrize("block_id", block_ids)
@pytest.mark.parametrize("indices", indices_cases)
def test_faster_get_blob_sidecars(benchmark: BenchmarkFixture, block_id, indices):
    beacon = faster_web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"block": block_id, "indices": indices})):
        benchmark(beacon.get_blob_sidecars, block_id, indices)

@pytest.mark.benchmark(group="beacon-get_attester_duties")
@pytest.mark.parametrize("epoch", epochs)
@pytest.mark.parametrize("validator_indices", validator_indices_cases)
def test_get_attester_duties(benchmark: BenchmarkFixture, epoch, validator_indices):
    beacon = web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.post", side_effect=make_fake_send({"epoch": epoch, "validator_indices": validator_indices})):
        benchmark(beacon.get_attester_duties, epoch, validator_indices)

@pytest.mark.benchmark(group="beacon-get_attester_duties")
@pytest.mark.parametrize("epoch", epochs)
@pytest.mark.parametrize("validator_indices", validator_indices_cases)
def test_faster_get_attester_duties(benchmark: BenchmarkFixture, epoch, validator_indices):
    beacon = faster_web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.post", side_effect=make_fake_send({"epoch": epoch, "validator_indices": validator_indices})):
        benchmark(beacon.get_attester_duties, epoch, validator_indices)

@pytest.mark.benchmark(group="beacon-get_block_proposer_duties")
@pytest.mark.parametrize("epoch", epochs)
def test_get_block_proposer_duties(benchmark: BenchmarkFixture, epoch):
    beacon = web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"block_proposer_duties": epoch})):
        benchmark(beacon.get_block_proposer_duties, epoch)

@pytest.mark.benchmark(group="beacon-get_block_proposer_duties")
@pytest.mark.parametrize("epoch", epochs)
def test_faster_get_block_proposer_duties(benchmark: BenchmarkFixture, epoch):
    beacon = faster_web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.get", side_effect=make_fake_send({"block_proposer_duties": epoch})):
        benchmark(beacon.get_block_proposer_duties, epoch)

@pytest.mark.benchmark(group="beacon-get_sync_committee_duties")
@pytest.mark.parametrize("epoch", epochs)
@pytest.mark.parametrize("validator_indices", validator_indices_cases)
def test_get_sync_committee_duties(benchmark: BenchmarkFixture, epoch, validator_indices):
    beacon = web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.post", side_effect=make_fake_send({"epoch": epoch, "validator_indices": validator_indices})):
        benchmark(beacon.get_sync_committee_duties, epoch, validator_indices)

@pytest.mark.benchmark(group="beacon-get_sync_committee_duties")
@pytest.mark.parametrize("epoch", epochs)
@pytest.mark.parametrize("validator_indices", validator_indices_cases)
def test_faster_get_sync_committee_duties(benchmark: BenchmarkFixture, epoch, validator_indices):
    beacon = faster_web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.post", side_effect=make_fake_send({"epoch": epoch, "validator_indices": validator_indices})):
        benchmark(beacon.get_sync_committee_duties, epoch, validator_indices)

@pytest.mark.benchmark(group="beacon-get_attestations_rewards")
@pytest.mark.parametrize("epoch", epochs)
@pytest.mark.parametrize("validator_indices", validator_indices_cases)
def test_get_attestations_rewards(benchmark: BenchmarkFixture, epoch, validator_indices):
    beacon = web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.post", side_effect=make_fake_send({"epoch": epoch, "validator_indices": validator_indices})):
        benchmark(beacon.get_attestations_rewards, epoch, validator_indices)

@pytest.mark.benchmark(group="beacon-get_attestations_rewards")
@pytest.mark.parametrize("epoch", epochs)
@pytest.mark.parametrize("validator_indices", validator_indices_cases)
def test_faster_get_attestations_rewards(benchmark: BenchmarkFixture, epoch, validator_indices):
    beacon = faster_web3.beacon.Beacon(base_url="http://localhost:5052")
    with patch("requests.Session.post", side_effect=make_fake_send({"epoch": epoch, "validator_indices": validator_indices})):
        benchmark(beacon.get_attestations_rewards, epoch, validator_indices)
