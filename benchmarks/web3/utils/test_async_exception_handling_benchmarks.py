import pytest
from unittest.mock import (
    patch,
)

from pytest_codspeed import (
    BenchmarkFixture,
)
import web3.utils.async_exception_handling

from benchmarks.batching import (
    run_100_async,
)
from benchmarks.web3.fixtures.http import (
    make_indexed_failure_aiohttp_request,
)
from benchmarks.web3.fixtures.offchain import (
    OFFCHAIN_LOOKUP_AIOHTTP_RESPONSE_OBJECT,
    OFFCHAIN_LOOKUP_TX_PARAMS,
    parametrize_offchain_lookup,
)
import faster_web3.utils.async_exception_handling


@pytest.mark.benchmark(group="async_handle_offchain_lookup")
@parametrize_offchain_lookup
def test_async_handle_offchain_lookup(
    benchmark: BenchmarkFixture,
    payload,
    urls,
    requests_patch_target,
    aiohttp_patch_target,
    fail_indices,
):
    payload = payload.copy()
    payload["urls"] = urls

    fake_aiohttp_request = make_indexed_failure_aiohttp_request(
        OFFCHAIN_LOOKUP_AIOHTTP_RESPONSE_OBJECT,
        fail_indices,
    )
    with patch(aiohttp_patch_target, new=fake_aiohttp_request):
        benchmark(
            run_100_async,
            web3.utils.async_exception_handling.async_handle_offchain_lookup,
            payload,
            OFFCHAIN_LOOKUP_TX_PARAMS,
        )


@pytest.mark.benchmark(group="async_handle_offchain_lookup")
@parametrize_offchain_lookup
def test_faster_async_handle_offchain_lookup(
    benchmark: BenchmarkFixture,
    payload,
    urls,
    requests_patch_target,
    aiohttp_patch_target,
    fail_indices,
):
    payload = payload.copy()
    payload["urls"] = urls

    fake_aiohttp_request = make_indexed_failure_aiohttp_request(
        OFFCHAIN_LOOKUP_AIOHTTP_RESPONSE_OBJECT,
        fail_indices,
    )
    with patch(aiohttp_patch_target, new=fake_aiohttp_request):
        benchmark(
            run_100_async,
            faster_web3.utils.async_exception_handling.async_handle_offchain_lookup,
            payload,
            OFFCHAIN_LOOKUP_TX_PARAMS,
        )
