import pytest
from unittest.mock import (
    patch,
)

from pytest_codspeed import (
    BenchmarkFixture,
)
import web3.beacon

from benchmarks.web3.fixtures.beacon import (
    BEACON_BASE_URL,
    BEACON_BLOCK_IDS,
    BEACON_BLOCK_ROOTS,
    BEACON_EPOCHS,
    BEACON_INDICES_CASES,
    BEACON_PEER_IDS,
    BEACON_STATE_IDS,
    BEACON_VALIDATOR_IDS,
    BEACON_VALIDATOR_INDICES_CASES,
    make_beacon_requests_get,
    make_beacon_requests_post,
)
from benchmarks.web3.fixtures.http import (
    REQUESTS_SESSION_GET,
    REQUESTS_SESSION_POST,
)
import faster_web3.beacon


@pytest.mark.benchmark(group="beacon-get_genesis")
def test_get_genesis(benchmark: BenchmarkFixture):
    beacon = web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET, side_effect=make_beacon_requests_get({"genesis": True})
    ):
        benchmark(beacon.get_genesis)


@pytest.mark.benchmark(group="beacon-get_genesis")
def test_faster_get_genesis(benchmark: BenchmarkFixture):
    beacon = faster_web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET, side_effect=make_beacon_requests_get({"genesis": True})
    ):
        benchmark(beacon.get_genesis)


@pytest.mark.benchmark(group="beacon-get_hash_root")
@pytest.mark.parametrize("state_id", BEACON_STATE_IDS)
def test_get_hash_root(benchmark: BenchmarkFixture, state_id):
    beacon = web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"hash_root": state_id}),
    ):
        benchmark(beacon.get_hash_root, state_id)


@pytest.mark.benchmark(group="beacon-get_hash_root")
@pytest.mark.parametrize("state_id", BEACON_STATE_IDS)
def test_faster_get_hash_root(benchmark: BenchmarkFixture, state_id):
    beacon = faster_web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"hash_root": state_id}),
    ):
        benchmark(beacon.get_hash_root, state_id)


@pytest.mark.benchmark(group="beacon-get_fork_data")
@pytest.mark.parametrize("state_id", BEACON_STATE_IDS)
def test_get_fork_data(benchmark: BenchmarkFixture, state_id):
    beacon = web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"fork_data": state_id}),
    ):
        benchmark(beacon.get_fork_data, state_id)


@pytest.mark.benchmark(group="beacon-get_fork_data")
@pytest.mark.parametrize("state_id", BEACON_STATE_IDS)
def test_faster_get_fork_data(benchmark: BenchmarkFixture, state_id):
    beacon = faster_web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"fork_data": state_id}),
    ):
        benchmark(beacon.get_fork_data, state_id)


@pytest.mark.benchmark(group="beacon-get_finality_checkpoint")
@pytest.mark.parametrize("state_id", BEACON_STATE_IDS)
def test_get_finality_checkpoint(benchmark: BenchmarkFixture, state_id):
    beacon = web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"finality_checkpoint": state_id}),
    ):
        benchmark(beacon.get_finality_checkpoint, state_id)


@pytest.mark.benchmark(group="beacon-get_finality_checkpoint")
@pytest.mark.parametrize("state_id", BEACON_STATE_IDS)
def test_faster_get_finality_checkpoint(benchmark: BenchmarkFixture, state_id):
    beacon = faster_web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"finality_checkpoint": state_id}),
    ):
        benchmark(beacon.get_finality_checkpoint, state_id)


@pytest.mark.benchmark(group="beacon-get_validators")
@pytest.mark.parametrize("state_id", BEACON_STATE_IDS)
def test_get_validators(benchmark: BenchmarkFixture, state_id):
    beacon = web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"validators": state_id}),
    ):
        benchmark(beacon.get_validators, state_id)


@pytest.mark.benchmark(group="beacon-get_validators")
@pytest.mark.parametrize("state_id", BEACON_STATE_IDS)
def test_faster_get_validators(benchmark: BenchmarkFixture, state_id):
    beacon = faster_web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"validators": state_id}),
    ):
        benchmark(beacon.get_validators, state_id)


@pytest.mark.benchmark(group="beacon-get_validator")
@pytest.mark.parametrize("validator_id", BEACON_VALIDATOR_IDS)
@pytest.mark.parametrize("state_id", BEACON_STATE_IDS)
def test_get_validator(benchmark: BenchmarkFixture, validator_id, state_id):
    beacon = web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get(
            {"validator": validator_id, "state": state_id}
        ),
    ):
        benchmark(beacon.get_validator, validator_id, state_id)


@pytest.mark.benchmark(group="beacon-get_validator")
@pytest.mark.parametrize("validator_id", BEACON_VALIDATOR_IDS)
@pytest.mark.parametrize("state_id", BEACON_STATE_IDS)
def test_faster_get_validator(benchmark: BenchmarkFixture, validator_id, state_id):
    beacon = faster_web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get(
            {"validator": validator_id, "state": state_id}
        ),
    ):
        benchmark(beacon.get_validator, validator_id, state_id)


@pytest.mark.benchmark(group="beacon-get_validator_balances")
@pytest.mark.parametrize("state_id", BEACON_STATE_IDS)
def test_get_validator_balances(benchmark: BenchmarkFixture, state_id):
    beacon = web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"validator_balances": state_id}),
    ):
        benchmark(beacon.get_validator_balances, state_id)


@pytest.mark.benchmark(group="beacon-get_validator_balances")
@pytest.mark.parametrize("state_id", BEACON_STATE_IDS)
def test_faster_get_validator_balances(benchmark: BenchmarkFixture, state_id):
    beacon = faster_web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"validator_balances": state_id}),
    ):
        benchmark(beacon.get_validator_balances, state_id)


@pytest.mark.benchmark(group="beacon-get_epoch_committees")
@pytest.mark.parametrize("state_id", BEACON_STATE_IDS)
def test_get_epoch_committees(benchmark: BenchmarkFixture, state_id):
    beacon = web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"epoch_committees": state_id}),
    ):
        benchmark(beacon.get_epoch_committees, state_id)


@pytest.mark.benchmark(group="beacon-get_epoch_committees")
@pytest.mark.parametrize("state_id", BEACON_STATE_IDS)
def test_faster_get_epoch_committees(benchmark: BenchmarkFixture, state_id):
    beacon = faster_web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"epoch_committees": state_id}),
    ):
        benchmark(beacon.get_epoch_committees, state_id)


@pytest.mark.benchmark(group="beacon-get_epoch_sync_committees")
@pytest.mark.parametrize("state_id", BEACON_STATE_IDS)
def test_get_epoch_sync_committees(benchmark: BenchmarkFixture, state_id):
    beacon = web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"epoch_sync_committees": state_id}),
    ):
        benchmark(beacon.get_epoch_sync_committees, state_id)


@pytest.mark.benchmark(group="beacon-get_epoch_sync_committees")
@pytest.mark.parametrize("state_id", BEACON_STATE_IDS)
def test_faster_get_epoch_sync_committees(benchmark: BenchmarkFixture, state_id):
    beacon = faster_web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"epoch_sync_committees": state_id}),
    ):
        benchmark(beacon.get_epoch_sync_committees, state_id)


@pytest.mark.benchmark(group="beacon-get_epoch_randao")
@pytest.mark.parametrize("state_id", BEACON_STATE_IDS)
def test_get_epoch_randao(benchmark: BenchmarkFixture, state_id):
    beacon = web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"epoch_randao": state_id}),
    ):
        benchmark(beacon.get_epoch_randao, state_id)


@pytest.mark.benchmark(group="beacon-get_epoch_randao")
@pytest.mark.parametrize("state_id", BEACON_STATE_IDS)
def test_faster_get_epoch_randao(benchmark: BenchmarkFixture, state_id):
    beacon = faster_web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"epoch_randao": state_id}),
    ):
        benchmark(beacon.get_epoch_randao, state_id)


@pytest.mark.benchmark(group="beacon-get_block_headers")
def test_get_block_headers(benchmark: BenchmarkFixture):
    beacon = web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"block_headers": True}),
    ):
        benchmark(beacon.get_block_headers)


@pytest.mark.benchmark(group="beacon-get_block_headers")
def test_faster_get_block_headers(benchmark: BenchmarkFixture):
    beacon = faster_web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"block_headers": True}),
    ):
        benchmark(beacon.get_block_headers)


@pytest.mark.benchmark(group="beacon-get_block_header")
@pytest.mark.parametrize("block_id", BEACON_BLOCK_IDS)
def test_get_block_header(benchmark: BenchmarkFixture, block_id):
    beacon = web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"block_header": block_id}),
    ):
        benchmark(beacon.get_block_header, block_id)


@pytest.mark.benchmark(group="beacon-get_block_header")
@pytest.mark.parametrize("block_id", BEACON_BLOCK_IDS)
def test_faster_get_block_header(benchmark: BenchmarkFixture, block_id):
    beacon = faster_web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"block_header": block_id}),
    ):
        benchmark(beacon.get_block_header, block_id)


@pytest.mark.benchmark(group="beacon-get_block")
@pytest.mark.parametrize("block_id", BEACON_BLOCK_IDS)
def test_get_block(benchmark: BenchmarkFixture, block_id):
    beacon = web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET, side_effect=make_beacon_requests_get({"block": block_id})
    ):
        benchmark(beacon.get_block, block_id)


@pytest.mark.benchmark(group="beacon-get_block")
@pytest.mark.parametrize("block_id", BEACON_BLOCK_IDS)
def test_faster_get_block(benchmark: BenchmarkFixture, block_id):
    beacon = faster_web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET, side_effect=make_beacon_requests_get({"block": block_id})
    ):
        benchmark(beacon.get_block, block_id)


@pytest.mark.benchmark(group="beacon-get_block_root")
@pytest.mark.parametrize("block_id", BEACON_BLOCK_IDS)
def test_get_block_root(benchmark: BenchmarkFixture, block_id):
    beacon = web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"block_root": block_id}),
    ):
        benchmark(beacon.get_block_root, block_id)


@pytest.mark.benchmark(group="beacon-get_block_root")
@pytest.mark.parametrize("block_id", BEACON_BLOCK_IDS)
def test_faster_get_block_root(benchmark: BenchmarkFixture, block_id):
    beacon = faster_web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"block_root": block_id}),
    ):
        benchmark(beacon.get_block_root, block_id)


@pytest.mark.benchmark(group="beacon-get_block_attestations")
@pytest.mark.parametrize("block_id", BEACON_BLOCK_IDS)
def test_get_block_attestations(benchmark: BenchmarkFixture, block_id):
    beacon = web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"block_attestations": block_id}),
    ):
        benchmark(beacon.get_block_attestations, block_id)


@pytest.mark.benchmark(group="beacon-get_block_attestations")
@pytest.mark.parametrize("block_id", BEACON_BLOCK_IDS)
def test_faster_get_block_attestations(benchmark: BenchmarkFixture, block_id):
    beacon = faster_web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"block_attestations": block_id}),
    ):
        benchmark(beacon.get_block_attestations, block_id)


@pytest.mark.benchmark(group="beacon-get_blinded_blocks")
@pytest.mark.parametrize("block_id", BEACON_BLOCK_IDS)
def test_get_blinded_blocks(benchmark: BenchmarkFixture, block_id):
    beacon = web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"blinded_blocks": block_id}),
    ):
        benchmark(beacon.get_blinded_blocks, block_id)


@pytest.mark.benchmark(group="beacon-get_blinded_blocks")
@pytest.mark.parametrize("block_id", BEACON_BLOCK_IDS)
def test_faster_get_blinded_blocks(benchmark: BenchmarkFixture, block_id):
    beacon = faster_web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"blinded_blocks": block_id}),
    ):
        benchmark(beacon.get_blinded_blocks, block_id)


@pytest.mark.benchmark(group="beacon-get_rewards")
@pytest.mark.parametrize("block_id", BEACON_BLOCK_IDS)
def test_get_rewards(benchmark: BenchmarkFixture, block_id):
    beacon = web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"rewards": block_id}),
    ):
        benchmark(beacon.get_rewards, block_id)


@pytest.mark.benchmark(group="beacon-get_rewards")
@pytest.mark.parametrize("block_id", BEACON_BLOCK_IDS)
def test_faster_get_rewards(benchmark: BenchmarkFixture, block_id):
    beacon = faster_web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"rewards": block_id}),
    ):
        benchmark(beacon.get_rewards, block_id)


@pytest.mark.benchmark(group="beacon-get_light_client_bootstrap_structure")
@pytest.mark.parametrize("block_root", BEACON_BLOCK_ROOTS)
def test_get_light_client_bootstrap_structure(benchmark: BenchmarkFixture, block_root):
    beacon = web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get(
            {"light_client_bootstrap_structure": block_root}
        ),
    ):
        benchmark(beacon.get_light_client_bootstrap_structure, block_root)


@pytest.mark.benchmark(group="beacon-get_light_client_bootstrap_structure")
@pytest.mark.parametrize("block_root", BEACON_BLOCK_ROOTS)
def test_faster_get_light_client_bootstrap_structure(
    benchmark: BenchmarkFixture, block_root
):
    beacon = faster_web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get(
            {"light_client_bootstrap_structure": block_root}
        ),
    ):
        benchmark(beacon.get_light_client_bootstrap_structure, block_root)


@pytest.mark.benchmark(group="beacon-get_light_client_updates")
def test_get_light_client_updates(benchmark: BenchmarkFixture):
    beacon = web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"light_client_updates": True}),
    ):
        benchmark(beacon.get_light_client_updates)


@pytest.mark.benchmark(group="beacon-get_light_client_updates")
def test_faster_get_light_client_updates(benchmark: BenchmarkFixture):
    beacon = faster_web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"light_client_updates": True}),
    ):
        benchmark(beacon.get_light_client_updates)


@pytest.mark.benchmark(group="beacon-get_light_client_finality_update")
def test_get_light_client_finality_update(benchmark: BenchmarkFixture):
    beacon = web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"light_client_finality_update": True}),
    ):
        benchmark(beacon.get_light_client_finality_update)


@pytest.mark.benchmark(group="beacon-get_light_client_finality_update")
def test_faster_get_light_client_finality_update(benchmark: BenchmarkFixture):
    beacon = faster_web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"light_client_finality_update": True}),
    ):
        benchmark(beacon.get_light_client_finality_update)


@pytest.mark.benchmark(group="beacon-get_light_client_optimistic_update")
def test_get_light_client_optimistic_update(benchmark: BenchmarkFixture):
    beacon = web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"light_client_optimistic_update": True}),
    ):
        benchmark(beacon.get_light_client_optimistic_update)


@pytest.mark.benchmark(group="beacon-get_light_client_optimistic_update")
def test_faster_get_light_client_optimistic_update(benchmark: BenchmarkFixture):
    beacon = faster_web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"light_client_optimistic_update": True}),
    ):
        benchmark(beacon.get_light_client_optimistic_update)


@pytest.mark.benchmark(group="beacon-get_attestations")
def test_get_attestations(benchmark: BenchmarkFixture):
    beacon = web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"attestations": True}),
    ):
        benchmark(beacon.get_attestations)


@pytest.mark.benchmark(group="beacon-get_attestations")
def test_faster_get_attestations(benchmark: BenchmarkFixture):
    beacon = faster_web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"attestations": True}),
    ):
        benchmark(beacon.get_attestations)


@pytest.mark.benchmark(group="beacon-get_attester_slashings")
def test_get_attester_slashings(benchmark: BenchmarkFixture):
    beacon = web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"attester_slashings": True}),
    ):
        benchmark(beacon.get_attester_slashings)


@pytest.mark.benchmark(group="beacon-get_attester_slashings")
def test_faster_get_attester_slashings(benchmark: BenchmarkFixture):
    beacon = faster_web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"attester_slashings": True}),
    ):
        benchmark(beacon.get_attester_slashings)


@pytest.mark.benchmark(group="beacon-get_proposer_slashings")
def test_get_proposer_slashings(benchmark: BenchmarkFixture):
    beacon = web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"proposer_slashings": True}),
    ):
        benchmark(beacon.get_proposer_slashings)


@pytest.mark.benchmark(group="beacon-get_proposer_slashings")
def test_faster_get_proposer_slashings(benchmark: BenchmarkFixture):
    beacon = faster_web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"proposer_slashings": True}),
    ):
        benchmark(beacon.get_proposer_slashings)


@pytest.mark.benchmark(group="beacon-get_voluntary_exits")
def test_get_voluntary_exits(benchmark: BenchmarkFixture):
    beacon = web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"voluntary_exits": True}),
    ):
        benchmark(beacon.get_voluntary_exits)


@pytest.mark.benchmark(group="beacon-get_voluntary_exits")
def test_faster_get_voluntary_exits(benchmark: BenchmarkFixture):
    beacon = faster_web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"voluntary_exits": True}),
    ):
        benchmark(beacon.get_voluntary_exits)


@pytest.mark.benchmark(group="beacon-get_bls_to_execution_changes")
def test_get_bls_to_execution_changes(benchmark: BenchmarkFixture):
    beacon = web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"bls_to_execution_changes": True}),
    ):
        benchmark(beacon.get_bls_to_execution_changes)


@pytest.mark.benchmark(group="beacon-get_bls_to_execution_changes")
def test_faster_get_bls_to_execution_changes(benchmark: BenchmarkFixture):
    beacon = faster_web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"bls_to_execution_changes": True}),
    ):
        benchmark(beacon.get_bls_to_execution_changes)


@pytest.mark.benchmark(group="beacon-get_fork_schedule")
def test_get_fork_schedule(benchmark: BenchmarkFixture):
    beacon = web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"fork_schedule": True}),
    ):
        benchmark(beacon.get_fork_schedule)


@pytest.mark.benchmark(group="beacon-get_fork_schedule")
def test_faster_get_fork_schedule(benchmark: BenchmarkFixture):
    beacon = faster_web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"fork_schedule": True}),
    ):
        benchmark(beacon.get_fork_schedule)


@pytest.mark.benchmark(group="beacon-get_spec")
def test_get_spec(benchmark: BenchmarkFixture):
    beacon = web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET, side_effect=make_beacon_requests_get({"spec": True})
    ):
        benchmark(beacon.get_spec)


@pytest.mark.benchmark(group="beacon-get_spec")
def test_faster_get_spec(benchmark: BenchmarkFixture):
    beacon = faster_web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET, side_effect=make_beacon_requests_get({"spec": True})
    ):
        benchmark(beacon.get_spec)


@pytest.mark.benchmark(group="beacon-get_deposit_contract")
def test_get_deposit_contract(benchmark: BenchmarkFixture):
    beacon = web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"deposit_contract": True}),
    ):
        benchmark(beacon.get_deposit_contract)


@pytest.mark.benchmark(group="beacon-get_deposit_contract")
def test_faster_get_deposit_contract(benchmark: BenchmarkFixture):
    beacon = faster_web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"deposit_contract": True}),
    ):
        benchmark(beacon.get_deposit_contract)


@pytest.mark.benchmark(group="beacon-get_beacon_state")
@pytest.mark.parametrize("state_id", BEACON_STATE_IDS)
def test_get_beacon_state(benchmark: BenchmarkFixture, state_id):
    beacon = web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"beacon_state": state_id}),
    ):
        benchmark(beacon.get_beacon_state, state_id)


@pytest.mark.benchmark(group="beacon-get_beacon_state")
@pytest.mark.parametrize("state_id", BEACON_STATE_IDS)
def test_faster_get_beacon_state(benchmark: BenchmarkFixture, state_id):
    beacon = faster_web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"beacon_state": state_id}),
    ):
        benchmark(beacon.get_beacon_state, state_id)


@pytest.mark.benchmark(group="beacon-get_beacon_heads")
def test_get_beacon_heads(benchmark: BenchmarkFixture):
    beacon = web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"beacon_heads": True}),
    ):
        benchmark(beacon.get_beacon_heads)


@pytest.mark.benchmark(group="beacon-get_beacon_heads")
def test_faster_get_beacon_heads(benchmark: BenchmarkFixture):
    beacon = faster_web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"beacon_heads": True}),
    ):
        benchmark(beacon.get_beacon_heads)


@pytest.mark.benchmark(group="beacon-get_node_identity")
def test_get_node_identity(benchmark: BenchmarkFixture):
    beacon = web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"node_identity": True}),
    ):
        benchmark(beacon.get_node_identity)


@pytest.mark.benchmark(group="beacon-get_node_identity")
def test_faster_get_node_identity(benchmark: BenchmarkFixture):
    beacon = faster_web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"node_identity": True}),
    ):
        benchmark(beacon.get_node_identity)


@pytest.mark.benchmark(group="beacon-get_peers")
def test_get_peers(benchmark: BenchmarkFixture):
    beacon = web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET, side_effect=make_beacon_requests_get({"peers": True})
    ):
        benchmark(beacon.get_peers)


@pytest.mark.benchmark(group="beacon-get_peers")
def test_faster_get_peers(benchmark: BenchmarkFixture):
    beacon = faster_web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET, side_effect=make_beacon_requests_get({"peers": True})
    ):
        benchmark(beacon.get_peers)


@pytest.mark.benchmark(group="beacon-get_peer")
@pytest.mark.parametrize("peer_id", BEACON_PEER_IDS)
def test_get_peer(benchmark: BenchmarkFixture, peer_id):
    beacon = web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET, side_effect=make_beacon_requests_get({"peer": peer_id})
    ):
        benchmark(beacon.get_peer, peer_id)


@pytest.mark.benchmark(group="beacon-get_peer")
@pytest.mark.parametrize("peer_id", BEACON_PEER_IDS)
def test_faster_get_peer(benchmark: BenchmarkFixture, peer_id):
    beacon = faster_web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET, side_effect=make_beacon_requests_get({"peer": peer_id})
    ):
        benchmark(beacon.get_peer, peer_id)


@pytest.mark.benchmark(group="beacon-get_peer_count")
def test_get_peer_count(benchmark: BenchmarkFixture):
    beacon = web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET, side_effect=make_beacon_requests_get({"peer_count": True})
    ):
        benchmark(beacon.get_peer_count)


@pytest.mark.benchmark(group="beacon-get_peer_count")
def test_faster_get_peer_count(benchmark: BenchmarkFixture):
    beacon = faster_web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET, side_effect=make_beacon_requests_get({"peer_count": True})
    ):
        benchmark(beacon.get_peer_count)


@pytest.mark.benchmark(group="beacon-get_health")
def test_get_health(benchmark: BenchmarkFixture):
    beacon = web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET, side_effect=make_beacon_requests_get({"health": True})
    ):
        benchmark(beacon.get_health)


@pytest.mark.benchmark(group="beacon-get_health")
def test_faster_get_health(benchmark: BenchmarkFixture):
    beacon = faster_web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET, side_effect=make_beacon_requests_get({"health": True})
    ):
        benchmark(beacon.get_health)


@pytest.mark.benchmark(group="beacon-get_version")
def test_get_version(benchmark: BenchmarkFixture):
    beacon = web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET, side_effect=make_beacon_requests_get({"version": True})
    ):
        benchmark(beacon.get_version)


@pytest.mark.benchmark(group="beacon-get_version")
def test_faster_get_version(benchmark: BenchmarkFixture):
    beacon = faster_web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET, side_effect=make_beacon_requests_get({"version": True})
    ):
        benchmark(beacon.get_version)


@pytest.mark.benchmark(group="beacon-get_syncing")
def test_get_syncing(benchmark: BenchmarkFixture):
    beacon = web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET, side_effect=make_beacon_requests_get({"syncing": True})
    ):
        benchmark(beacon.get_syncing)


@pytest.mark.benchmark(group="beacon-get_syncing")
def test_faster_get_syncing(benchmark: BenchmarkFixture):
    beacon = faster_web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET, side_effect=make_beacon_requests_get({"syncing": True})
    ):
        benchmark(beacon.get_syncing)


@pytest.mark.benchmark(group="beacon-get_blob_sidecars")
@pytest.mark.parametrize("block_id", BEACON_BLOCK_IDS)
@pytest.mark.parametrize("indices", BEACON_INDICES_CASES)
def test_get_blob_sidecars(benchmark: BenchmarkFixture, block_id, indices):
    beacon = web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"block": block_id, "indices": indices}),
    ):
        benchmark(beacon.get_blob_sidecars, block_id, indices)


@pytest.mark.benchmark(group="beacon-get_blob_sidecars")
@pytest.mark.parametrize("block_id", BEACON_BLOCK_IDS)
@pytest.mark.parametrize("indices", BEACON_INDICES_CASES)
def test_faster_get_blob_sidecars(benchmark: BenchmarkFixture, block_id, indices):
    beacon = faster_web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"block": block_id, "indices": indices}),
    ):
        benchmark(beacon.get_blob_sidecars, block_id, indices)


@pytest.mark.benchmark(group="beacon-get_attester_duties")
@pytest.mark.parametrize("epoch", BEACON_EPOCHS)
@pytest.mark.parametrize("validator_indices", BEACON_VALIDATOR_INDICES_CASES)
def test_get_attester_duties(benchmark: BenchmarkFixture, epoch, validator_indices):
    beacon = web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_POST,
        side_effect=make_beacon_requests_post(
            {"epoch": epoch, "validator_indices": validator_indices}
        ),
    ):
        benchmark(beacon.get_attester_duties, epoch, validator_indices)


@pytest.mark.benchmark(group="beacon-get_attester_duties")
@pytest.mark.parametrize("epoch", BEACON_EPOCHS)
@pytest.mark.parametrize("validator_indices", BEACON_VALIDATOR_INDICES_CASES)
def test_faster_get_attester_duties(
    benchmark: BenchmarkFixture, epoch, validator_indices
):
    beacon = faster_web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_POST,
        side_effect=make_beacon_requests_post(
            {"epoch": epoch, "validator_indices": validator_indices}
        ),
    ):
        benchmark(beacon.get_attester_duties, epoch, validator_indices)


@pytest.mark.benchmark(group="beacon-get_block_proposer_duties")
@pytest.mark.parametrize("epoch", BEACON_EPOCHS)
def test_get_block_proposer_duties(benchmark: BenchmarkFixture, epoch):
    beacon = web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"block_proposer_duties": epoch}),
    ):
        benchmark(beacon.get_block_proposer_duties, epoch)


@pytest.mark.benchmark(group="beacon-get_block_proposer_duties")
@pytest.mark.parametrize("epoch", BEACON_EPOCHS)
def test_faster_get_block_proposer_duties(benchmark: BenchmarkFixture, epoch):
    beacon = faster_web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_GET,
        side_effect=make_beacon_requests_get({"block_proposer_duties": epoch}),
    ):
        benchmark(beacon.get_block_proposer_duties, epoch)


@pytest.mark.benchmark(group="beacon-get_sync_committee_duties")
@pytest.mark.parametrize("epoch", BEACON_EPOCHS)
@pytest.mark.parametrize("validator_indices", BEACON_VALIDATOR_INDICES_CASES)
def test_get_sync_committee_duties(
    benchmark: BenchmarkFixture, epoch, validator_indices
):
    beacon = web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_POST,
        side_effect=make_beacon_requests_post(
            {"epoch": epoch, "validator_indices": validator_indices}
        ),
    ):
        benchmark(beacon.get_sync_committee_duties, epoch, validator_indices)


@pytest.mark.benchmark(group="beacon-get_sync_committee_duties")
@pytest.mark.parametrize("epoch", BEACON_EPOCHS)
@pytest.mark.parametrize("validator_indices", BEACON_VALIDATOR_INDICES_CASES)
def test_faster_get_sync_committee_duties(
    benchmark: BenchmarkFixture, epoch, validator_indices
):
    beacon = faster_web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_POST,
        side_effect=make_beacon_requests_post(
            {"epoch": epoch, "validator_indices": validator_indices}
        ),
    ):
        benchmark(beacon.get_sync_committee_duties, epoch, validator_indices)


@pytest.mark.benchmark(group="beacon-get_attestations_rewards")
@pytest.mark.parametrize("epoch", BEACON_EPOCHS)
@pytest.mark.parametrize("validator_indices", BEACON_VALIDATOR_INDICES_CASES)
def test_get_attestations_rewards(
    benchmark: BenchmarkFixture, epoch, validator_indices
):
    beacon = web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_POST,
        side_effect=make_beacon_requests_post(
            {"epoch": epoch, "validator_indices": validator_indices}
        ),
    ):
        benchmark(beacon.get_attestations_rewards, epoch, validator_indices)


@pytest.mark.benchmark(group="beacon-get_attestations_rewards")
@pytest.mark.parametrize("epoch", BEACON_EPOCHS)
@pytest.mark.parametrize("validator_indices", BEACON_VALIDATOR_INDICES_CASES)
def test_faster_get_attestations_rewards(
    benchmark: BenchmarkFixture, epoch, validator_indices
):
    beacon = faster_web3.beacon.Beacon(base_url=BEACON_BASE_URL)
    with patch(
        REQUESTS_SESSION_POST,
        side_effect=make_beacon_requests_post(
            {"epoch": epoch, "validator_indices": validator_indices}
        ),
    ):
        benchmark(beacon.get_attestations_rewards, epoch, validator_indices)
