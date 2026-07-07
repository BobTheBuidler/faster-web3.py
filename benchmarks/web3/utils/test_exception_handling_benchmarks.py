import pytest
from unittest.mock import (
    patch,
)

from pytest_codspeed import (
    BenchmarkFixture,
)
import web3.utils.exception_handling

from benchmarks.web3.fixtures.http import (
    make_indexed_failure_requests_request,
)
from benchmarks.web3.fixtures.offchain import (
    OFFCHAIN_LOOKUP_RESPONSE_OBJECT,
    OFFCHAIN_LOOKUP_TX_PARAMS,
    parametrize_offchain_lookup,
)
import faster_web3.utils.exception_handling


@pytest.mark.benchmark(group="handle_offchain_lookup")
@parametrize_offchain_lookup
def test_handle_offchain_lookup(
    benchmark: BenchmarkFixture,
    payload,
    urls,
    requests_patch_target,
    aiohttp_patch_target,
    fail_indices,
):
    payload = payload.copy()
    payload["urls"] = urls

    fake_send = make_indexed_failure_requests_request(
        OFFCHAIN_LOOKUP_RESPONSE_OBJECT,
        fail_indices,
    )
    with patch(requests_patch_target, side_effect=fake_send):
        benchmark(
            web3.utils.exception_handling.handle_offchain_lookup,
            payload,
            OFFCHAIN_LOOKUP_TX_PARAMS,
        )


@pytest.mark.benchmark(group="handle_offchain_lookup")
@parametrize_offchain_lookup
def test_faster_handle_offchain_lookup(
    benchmark: BenchmarkFixture,
    payload,
    urls,
    requests_patch_target,
    aiohttp_patch_target,
    fail_indices,
):
    payload = payload.copy()
    payload["urls"] = urls

    fake_send = make_indexed_failure_requests_request(
        OFFCHAIN_LOOKUP_RESPONSE_OBJECT,
        fail_indices,
    )
    with patch(requests_patch_target, side_effect=fake_send):
        benchmark(
            faster_web3.utils.exception_handling.handle_offchain_lookup,
            payload,
            OFFCHAIN_LOOKUP_TX_PARAMS,
        )
