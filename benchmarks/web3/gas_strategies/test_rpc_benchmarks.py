from unittest.mock import (
    patch,
)

import pytest
from pytest_codspeed import (
    BenchmarkFixture,
)

import web3.gas_strategies.rpc

import faster_web3.gas_strategies.rpc

from benchmarks.batching import (
    run_10000,
)
from benchmarks.web3.fixtures.core import (
    EXAMPLE_ADDRESS,
)
from benchmarks.web3.fixtures.http import (
    REQUESTS_SESSION_POST,
    StaticResponse,
    make_static_requests_post,
)
from benchmarks.web3.fixtures.rpc import (
    GWEI_RESPONSE_BYTES,
)


TX_CASES = (
    None,
    {},
    {"from": EXAMPLE_ADDRESS, "value": 1},
)


requests_post = make_static_requests_post(StaticResponse(GWEI_RESPONSE_BYTES))


@pytest.mark.benchmark(group="rpc_gas_price_strategy")
@pytest.mark.parametrize("transaction_params", TX_CASES)
def test_rpc_gas_price_strategy(
    benchmark: BenchmarkFixture, web3_w3, transaction_params
):
    with patch(REQUESTS_SESSION_POST, new=requests_post):
        benchmark(
            run_10000,
            web3.gas_strategies.rpc.rpc_gas_price_strategy,
            web3_w3,
            transaction_params,
        )


@pytest.mark.benchmark(group="rpc_gas_price_strategy")
@pytest.mark.parametrize("transaction_params", TX_CASES)
def test_faster_rpc_gas_price_strategy(
    benchmark: BenchmarkFixture, faster_w3, transaction_params
):
    with patch(REQUESTS_SESSION_POST, new=requests_post):
        benchmark(
            run_10000,
            faster_web3.gas_strategies.rpc.rpc_gas_price_strategy,
            faster_w3,
            transaction_params,
        )
