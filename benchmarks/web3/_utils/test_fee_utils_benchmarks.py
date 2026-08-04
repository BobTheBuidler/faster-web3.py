from unittest.mock import (
    patch,
)

import pytest
from pytest_codspeed import (
    BenchmarkFixture,
)

import web3._utils.fee_utils
from web3.datastructures import (
    AttributeDict,
)

import faster_web3._utils.fee_utils
from faster_web3.datastructures import (
    AttributeDict as FasterAttributeDict,
)

from benchmarks.batching import (
    run_10_async,
    run_100,
    run_1000,
)
from benchmarks.web3.fixtures.fees import (
    FEE_HISTORY_RESPONSE_BYTES,
    PYTHONIC_FEE_HISTORY,
    PYTHONIC_FEE_HISTORY_CASES,
)
from benchmarks.web3.fixtures.http import (
    AIOHTTP_CLIENT_SESSION_POST,
    REQUESTS_SESSION_POST,
    StaticAiohttpResponse,
    StaticResponse,
    make_static_aiohttp_post,
    make_static_requests_post,
)

FEE_HISTORY_HTTP_RESPONSE = StaticResponse(FEE_HISTORY_RESPONSE_BYTES)
FEE_HISTORY_AIOHTTP_RESPONSE = StaticAiohttpResponse(FEE_HISTORY_RESPONSE_BYTES)
requests_post = make_static_requests_post(FEE_HISTORY_HTTP_RESPONSE)
aiohttp_post = make_static_aiohttp_post(FEE_HISTORY_AIOHTTP_RESPONSE)


FEE_HISTORY_CASES = (
    *PYTHONIC_FEE_HISTORY_CASES,
    AttributeDict.recursive(PYTHONIC_FEE_HISTORY),
)
FASTER_FEE_HISTORY_CASES = (
    *PYTHONIC_FEE_HISTORY_CASES,
    FasterAttributeDict.recursive(PYTHONIC_FEE_HISTORY),
)


@pytest.mark.benchmark(group="_fee_history_priority_fee_estimate")
@pytest.mark.parametrize("fee_history", FEE_HISTORY_CASES)
def test_fee_history_priority_fee_estimate(benchmark: BenchmarkFixture, fee_history):
    benchmark(
        run_1000,
        web3._utils.fee_utils._fee_history_priority_fee_estimate,
        fee_history,
    )


@pytest.mark.benchmark(group="_fee_history_priority_fee_estimate")
@pytest.mark.parametrize("fee_history", FASTER_FEE_HISTORY_CASES)
def test_faster_fee_history_priority_fee_estimate(
    benchmark: BenchmarkFixture, fee_history
):
    benchmark(
        run_1000,
        faster_web3._utils.fee_utils._fee_history_priority_fee_estimate,
        fee_history,
    )


@pytest.mark.benchmark(group="fee_history_priority_fee")
def test_fee_history_priority_fee(benchmark: BenchmarkFixture, web3_w3):
    with patch(REQUESTS_SESSION_POST, new=requests_post):
        benchmark(
            run_100,
            web3._utils.fee_utils.fee_history_priority_fee,
            web3_w3.eth,
        )


@pytest.mark.benchmark(group="fee_history_priority_fee")
def test_faster_fee_history_priority_fee(benchmark: BenchmarkFixture, faster_w3):
    with patch(REQUESTS_SESSION_POST, new=requests_post):
        benchmark(
            run_100,
            faster_web3._utils.fee_utils.fee_history_priority_fee,
            faster_w3.eth,
        )


@pytest.mark.benchmark(group="async_fee_history_priority_fee")
def test_async_fee_history_priority_fee(
    benchmark: BenchmarkFixture, web3_async_w3
):
    with patch(AIOHTTP_CLIENT_SESSION_POST, new=aiohttp_post):
        benchmark(
            run_10_async,
            web3._utils.fee_utils.async_fee_history_priority_fee,
            web3_async_w3.eth,
        )


@pytest.mark.benchmark(group="async_fee_history_priority_fee")
def test_faster_async_fee_history_priority_fee(
    benchmark: BenchmarkFixture, faster_async_w3
):
    with patch(AIOHTTP_CLIENT_SESSION_POST, new=aiohttp_post):
        benchmark(
            run_10_async,
            faster_web3._utils.fee_utils.async_fee_history_priority_fee,
            faster_async_w3.eth,
        )
