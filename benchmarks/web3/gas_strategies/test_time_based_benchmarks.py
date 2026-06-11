from unittest.mock import (
    patch,
)

import pytest
from pytest_codspeed import (
    BenchmarkFixture,
)

import web3.gas_strategies.time_based

import faster_web3.gas_strategies.time_based

from benchmarks.batching import (
    run_100,
    run_1000,
)
from benchmarks.web3.fixtures.blocks import (
    FALLBACK_RESPONSES,
    UNWEIGHTED_RESPONSES,
    WEIGHTED_RESPONSES,
)
from benchmarks.web3.fixtures.http import (
    StaticResponse,
    make_sequence_requests_post,
)
from benchmarks.web3.fixtures.providers import (
    faster_http_w3,
    web3_http_w3,
)


UNWEIGHTED_HTTP_RESPONSES = tuple(
    StaticResponse(response) for response in UNWEIGHTED_RESPONSES
)
WEIGHTED_HTTP_RESPONSES = tuple(
    StaticResponse(response) for response in WEIGHTED_RESPONSES
)
FALLBACK_HTTP_RESPONSES = tuple(
    StaticResponse(response) for response in FALLBACK_RESPONSES
)


WAIT_DATA = (
    (
        0.0,
        (
            web3.gas_strategies.time_based.Probability(gas_price=10, prob=1.0),
            web3.gas_strategies.time_based.Probability(gas_price=20, prob=0.5),
            web3.gas_strategies.time_based.Probability(gas_price=30, prob=0.0),
        ),
    ),
    (
        0.5,
        (
            web3.gas_strategies.time_based.Probability(gas_price=10, prob=1.0),
            web3.gas_strategies.time_based.Probability(gas_price=20, prob=0.5),
            web3.gas_strategies.time_based.Probability(gas_price=30, prob=0.0),
        ),
    ),
    (
        1.0,
        (
            web3.gas_strategies.time_based.Probability(gas_price=10, prob=1.0),
            web3.gas_strategies.time_based.Probability(gas_price=20, prob=0.5),
            web3.gas_strategies.time_based.Probability(gas_price=30, prob=0.0),
        ),
    ),
)
STRATEGY_CASES = (
    (False, UNWEIGHTED_HTTP_RESPONSES),
    (True, WEIGHTED_HTTP_RESPONSES),
)


@pytest.mark.benchmark(group="time_based_compute_gas_price")
@pytest.mark.parametrize("probability,gas_price_waits", WAIT_DATA)
def test_compute_gas_price(benchmark: BenchmarkFixture, probability, gas_price_waits):
    benchmark(
        run_1000,
        web3.gas_strategies.time_based._compute_gas_price,
        gas_price_waits,
        probability,
    )


@pytest.mark.benchmark(group="time_based_compute_gas_price")
@pytest.mark.parametrize("probability,gas_price_waits", WAIT_DATA)
def test_faster_compute_gas_price(
    benchmark: BenchmarkFixture, probability, gas_price_waits
):
    benchmark(
        run_1000,
        faster_web3.gas_strategies.time_based._compute_gas_price,
        gas_price_waits,
        probability,
    )


@pytest.mark.benchmark(group="construct_time_based_gas_price_strategy")
@pytest.mark.parametrize("weighted,responses", STRATEGY_CASES)
def test_time_based_strategy(benchmark: BenchmarkFixture, weighted, responses):
    strategy = web3.gas_strategies.time_based.construct_time_based_gas_price_strategy(
        60,
        sample_size=5,
        probability=98,
        weighted=weighted,
    )
    w3 = web3_http_w3()
    with patch("requests.Session.post", new=make_sequence_requests_post(responses)):
        benchmark(run_100, strategy, w3, {})


@pytest.mark.benchmark(group="construct_time_based_gas_price_strategy")
@pytest.mark.parametrize("weighted,responses", STRATEGY_CASES)
def test_faster_time_based_strategy(
    benchmark: BenchmarkFixture, weighted, responses
):
    strategy = (
        faster_web3.gas_strategies.time_based.construct_time_based_gas_price_strategy(
            60,
            sample_size=5,
            probability=98,
            weighted=weighted,
        )
    )
    w3 = faster_http_w3()
    with patch("requests.Session.post", new=make_sequence_requests_post(responses)):
        benchmark(run_100, strategy, w3, {})


@pytest.mark.benchmark(group="construct_time_based_gas_price_strategy_fallback")
def test_time_based_strategy_genesis_fallback(benchmark: BenchmarkFixture):
    strategy = web3.gas_strategies.time_based.construct_time_based_gas_price_strategy(
        60,
        sample_size=5,
        probability=98,
    )
    w3 = web3_http_w3()
    with patch(
        "requests.Session.post",
        new=make_sequence_requests_post(FALLBACK_HTTP_RESPONSES),
    ):
        benchmark(run_100, strategy, w3, {})


@pytest.mark.benchmark(group="construct_time_based_gas_price_strategy_fallback")
def test_faster_time_based_strategy_genesis_fallback(benchmark: BenchmarkFixture):
    strategy = (
        faster_web3.gas_strategies.time_based.construct_time_based_gas_price_strategy(
            60,
            sample_size=5,
            probability=98,
        )
    )
    w3 = faster_http_w3()
    with patch(
        "requests.Session.post",
        new=make_sequence_requests_post(FALLBACK_HTTP_RESPONSES),
    ):
        benchmark(run_100, strategy, w3, {})
