from unittest.mock import (
    patch,
)
from typing import (
    Final,
)

import pytest
from pytest_codspeed import (
    BenchmarkFixture,
)

import web3.contract.utils

import faster_web3.contract.utils

from benchmarks.batching import (
    run_10_async,
    run_100,
)
from benchmarks.web3.fixtures.abis import (
    ERC20_ABI,
)
from benchmarks.web3.fixtures.contracts import (
    ADDRESS,
    BUILD_TRANSACTION_RESPONSES,
    CALL_RESPONSE_BYTES,
    GAS_21000_RESPONSE_BYTES,
    MULTI_OUTPUT_ABI,
    MULTI_RESULT,
    SEND_TRANSACTION_RESPONSES,
    TOKEN_ADDRESS,
    TUPLE_OUTPUT_ABI,
    TUPLE_RESULT,
)
from benchmarks.web3.fixtures.http import (
    AIOHTTP_CLIENT_SESSION_POST,
    REQUESTS_SESSION_POST,
    StaticAiohttpResponse,
    StaticResponse,
    make_sequence_aiohttp_post,
    make_sequence_requests_post,
    make_static_aiohttp_post,
    make_static_requests_post,
)

CALL_HTTP_RESPONSE = StaticResponse(CALL_RESPONSE_BYTES)
CALL_AIOHTTP_RESPONSE = StaticAiohttpResponse(CALL_RESPONSE_BYTES)
GAS_HTTP_RESPONSE = StaticResponse(GAS_21000_RESPONSE_BYTES)
GAS_AIOHTTP_RESPONSE = StaticAiohttpResponse(GAS_21000_RESPONSE_BYTES)
BUILD_TRANSACTION_HTTP_RESPONSES: Final = tuple(
    map(StaticResponse, BUILD_TRANSACTION_RESPONSES)
)
BUILD_TRANSACTION_AIOHTTP_RESPONSES: Final = tuple(
    map(StaticAiohttpResponse, BUILD_TRANSACTION_RESPONSES)
)
SEND_TRANSACTION_HTTP_RESPONSES: Final = tuple(
    map(StaticResponse, SEND_TRANSACTION_RESPONSES)
)
SEND_TRANSACTION_AIOHTTP_RESPONSES: Final = tuple(
    map(StaticAiohttpResponse, SEND_TRANSACTION_RESPONSES)
)


def normalizer(_abi_type, value):
    return _abi_type, value


class AsyncContractFunctionState:
    def __init__(self, function_factory):
        self.function_factory = function_factory
        self.functions = ()
        self.index = 0

    def reset(self, *_args, **_kwargs):
        self.index = 0
        self.functions = tuple(self.function_factory() for _ in range(10))

    def next_function(self):
        fn = self.functions[self.index]
        self.index += 1
        return fn


async def async_call_next(state):
    return await state.next_function().call()


async def async_transact_next(state):
    return await state.next_function().transact({"from": ADDRESS, "gas": 21000})


async def async_estimate_gas_next(state):
    return await state.next_function().estimate_gas({"from": ADDRESS})


async def async_build_transaction_next(state):
    return await state.next_function().build_transaction({"from": ADDRESS})


@pytest.mark.benchmark(group="ContractFunction.call")
def test_call_contract_function(benchmark: BenchmarkFixture, web3_erc20_contract):
    fn = web3_erc20_contract.functions.balanceOf(TOKEN_ADDRESS)
    with patch(REQUESTS_SESSION_POST, new=make_static_requests_post(CALL_HTTP_RESPONSE)):
        benchmark(run_100, fn.call)


@pytest.mark.benchmark(group="ContractFunction.call")
def test_faster_call_contract_function(
    benchmark: BenchmarkFixture, faster_erc20_contract
):
    fn = faster_erc20_contract.functions.balanceOf(TOKEN_ADDRESS)
    with patch(REQUESTS_SESSION_POST, new=make_static_requests_post(CALL_HTTP_RESPONSE)):
        benchmark(run_100, fn.call)


@pytest.mark.benchmark(group="ContractFunction.call_batching")
def test_call_contract_function_batching(benchmark: BenchmarkFixture, web3_w3):
    fn = web3_w3.eth.contract(address=ADDRESS, abi=ERC20_ABI).functions.balanceOf(
        TOKEN_ADDRESS
    )
    with web3_w3.batch_requests():
        benchmark(run_100, fn.call)


@pytest.mark.benchmark(group="ContractFunction.call_batching")
def test_faster_call_contract_function_batching(
    benchmark: BenchmarkFixture, faster_w3
):
    fn = faster_w3.eth.contract(address=ADDRESS, abi=ERC20_ABI).functions.balanceOf(
        TOKEN_ADDRESS
    )
    with faster_w3.batch_requests():
        benchmark(run_100, fn.call)


@pytest.mark.benchmark(group="ContractFunction.transact")
def test_transact_with_contract_function(
    benchmark: BenchmarkFixture, web3_erc20_contract
):
    fn = web3_erc20_contract.functions.transfer(TOKEN_ADDRESS, 1)
    with patch(
        REQUESTS_SESSION_POST,
        new=make_sequence_requests_post(SEND_TRANSACTION_HTTP_RESPONSES),
    ):
        benchmark(run_100, fn.transact, {"from": ADDRESS, "gas": 21000})


@pytest.mark.benchmark(group="ContractFunction.transact")
def test_faster_transact_with_contract_function(
    benchmark: BenchmarkFixture, faster_erc20_contract
):
    fn = faster_erc20_contract.functions.transfer(TOKEN_ADDRESS, 1)
    with patch(
        REQUESTS_SESSION_POST,
        new=make_sequence_requests_post(SEND_TRANSACTION_HTTP_RESPONSES),
    ):
        benchmark(run_100, fn.transact, {"from": ADDRESS, "gas": 21000})


@pytest.mark.benchmark(group="ContractFunction.estimate_gas")
def test_estimate_gas_for_function(
    benchmark: BenchmarkFixture, web3_erc20_contract
):
    fn = web3_erc20_contract.functions.transfer(TOKEN_ADDRESS, 1)
    with patch(REQUESTS_SESSION_POST, new=make_static_requests_post(GAS_HTTP_RESPONSE)):
        benchmark(run_100, fn.estimate_gas, {"from": ADDRESS})


@pytest.mark.benchmark(group="ContractFunction.estimate_gas")
def test_faster_estimate_gas_for_function(
    benchmark: BenchmarkFixture, faster_erc20_contract
):
    fn = faster_erc20_contract.functions.transfer(TOKEN_ADDRESS, 1)
    with patch(REQUESTS_SESSION_POST, new=make_static_requests_post(GAS_HTTP_RESPONSE)):
        benchmark(run_100, fn.estimate_gas, {"from": ADDRESS})


@pytest.mark.benchmark(group="ContractFunction.build_transaction")
def test_build_transaction_for_function(
    benchmark: BenchmarkFixture, web3_erc20_contract
):
    fn = web3_erc20_contract.functions.transfer(TOKEN_ADDRESS, 1)
    post = make_sequence_requests_post(BUILD_TRANSACTION_HTTP_RESPONSES)
    with patch(REQUESTS_SESSION_POST, new=post):
        benchmark(run_100, fn.build_transaction, {"from": ADDRESS})


@pytest.mark.benchmark(group="ContractFunction.build_transaction")
def test_faster_build_transaction_for_function(
    benchmark: BenchmarkFixture, faster_erc20_contract
):
    fn = faster_erc20_contract.functions.transfer(TOKEN_ADDRESS, 1)
    post = make_sequence_requests_post(BUILD_TRANSACTION_HTTP_RESPONSES)
    with patch(REQUESTS_SESSION_POST, new=post):
        benchmark(run_100, fn.build_transaction, {"from": ADDRESS})


@pytest.mark.benchmark(group="AsyncContractFunction.call")
def test_async_call_contract_function(
    benchmark: BenchmarkFixture, web3_async_erc20_contract
):
    state = AsyncContractFunctionState(
        lambda: web3_async_erc20_contract.functions.balanceOf(TOKEN_ADDRESS)
    )
    with patch(
        AIOHTTP_CLIENT_SESSION_POST,
        new=make_static_aiohttp_post(CALL_AIOHTTP_RESPONSE),
    ):
        benchmark.pedantic(
            run_10_async,
            args=(async_call_next, state),
            setup=state.reset,
            iterations=1,
        )


@pytest.mark.benchmark(group="AsyncContractFunction.call")
def test_faster_async_call_contract_function(
    benchmark: BenchmarkFixture, faster_async_erc20_contract
):
    state = AsyncContractFunctionState(
        lambda: faster_async_erc20_contract.functions.balanceOf(TOKEN_ADDRESS)
    )
    with patch(
        AIOHTTP_CLIENT_SESSION_POST,
        new=make_static_aiohttp_post(CALL_AIOHTTP_RESPONSE),
    ):
        benchmark.pedantic(
            run_10_async,
            args=(async_call_next, state),
            setup=state.reset,
            iterations=1,
        )


@pytest.mark.benchmark(group="AsyncContractFunction.transact")
def test_async_transact_with_contract_function(
    benchmark: BenchmarkFixture, web3_async_erc20_contract
):
    state = AsyncContractFunctionState(
        lambda: web3_async_erc20_contract.functions.transfer(TOKEN_ADDRESS, 1)
    )
    post = make_sequence_aiohttp_post(SEND_TRANSACTION_AIOHTTP_RESPONSES)
    with patch(AIOHTTP_CLIENT_SESSION_POST, new=post):
        benchmark.pedantic(
            run_10_async,
            args=(async_transact_next, state),
            setup=state.reset,
            iterations=1,
        )


@pytest.mark.benchmark(group="AsyncContractFunction.transact")
def test_faster_async_transact_with_contract_function(
    benchmark: BenchmarkFixture, faster_async_erc20_contract
):
    state = AsyncContractFunctionState(
        lambda: faster_async_erc20_contract.functions.transfer(TOKEN_ADDRESS, 1)
    )
    post = make_sequence_aiohttp_post(SEND_TRANSACTION_AIOHTTP_RESPONSES)
    with patch(AIOHTTP_CLIENT_SESSION_POST, new=post):
        benchmark.pedantic(
            run_10_async,
            args=(async_transact_next, state),
            setup=state.reset,
            iterations=1,
        )


@pytest.mark.benchmark(group="AsyncContractFunction.estimate_gas")
def test_async_estimate_gas_for_function(
    benchmark: BenchmarkFixture, web3_async_erc20_contract
):
    state = AsyncContractFunctionState(
        lambda: web3_async_erc20_contract.functions.transfer(TOKEN_ADDRESS, 1)
    )
    with patch(
        AIOHTTP_CLIENT_SESSION_POST,
        new=make_static_aiohttp_post(GAS_AIOHTTP_RESPONSE),
    ):
        benchmark.pedantic(
            run_10_async,
            args=(async_estimate_gas_next, state),
            setup=state.reset,
            iterations=1,
        )


@pytest.mark.benchmark(group="AsyncContractFunction.estimate_gas")
def test_faster_async_estimate_gas_for_function(
    benchmark: BenchmarkFixture, faster_async_erc20_contract
):
    state = AsyncContractFunctionState(
        lambda: faster_async_erc20_contract.functions.transfer(TOKEN_ADDRESS, 1)
    )
    with patch(
        AIOHTTP_CLIENT_SESSION_POST,
        new=make_static_aiohttp_post(GAS_AIOHTTP_RESPONSE),
    ):
        benchmark.pedantic(
            run_10_async,
            args=(async_estimate_gas_next, state),
            setup=state.reset,
            iterations=1,
        )


@pytest.mark.benchmark(group="AsyncContractFunction.build_transaction")
def test_async_build_transaction_for_function(
    benchmark: BenchmarkFixture, web3_async_erc20_contract
):
    state = AsyncContractFunctionState(
        lambda: web3_async_erc20_contract.functions.transfer(TOKEN_ADDRESS, 1)
    )
    post = make_sequence_aiohttp_post(BUILD_TRANSACTION_AIOHTTP_RESPONSES)
    with patch(AIOHTTP_CLIENT_SESSION_POST, new=post):
        benchmark.pedantic(
            run_10_async,
            args=(async_build_transaction_next, state),
            setup=state.reset,
            iterations=1,
        )


@pytest.mark.benchmark(group="AsyncContractFunction.build_transaction")
def test_faster_async_build_transaction_for_function(
    benchmark: BenchmarkFixture, faster_async_erc20_contract
):
    state = AsyncContractFunctionState(
        lambda: faster_async_erc20_contract.functions.transfer(TOKEN_ADDRESS, 1)
    )
    post = make_sequence_aiohttp_post(BUILD_TRANSACTION_AIOHTTP_RESPONSES)
    with patch(AIOHTTP_CLIENT_SESSION_POST, new=post):
        benchmark.pedantic(
            run_10_async,
            args=(async_build_transaction_next, state),
            setup=state.reset,
            iterations=1,
        )


@pytest.mark.benchmark(group="format_contract_call_return_data")
def test_format_contract_call_return_data_multi_output(
    benchmark: BenchmarkFixture, web3_w3
):
    formatter = web3.contract.utils.format_contract_call_return_data_curried(
        web3_w3,
        False,
        MULTI_OUTPUT_ABI,
        "multi",
        (normalizer,),
        ("uint256", "bool"),
    )
    benchmark(run_100, formatter, MULTI_RESULT)


@pytest.mark.benchmark(group="format_contract_call_return_data")
def test_faster_format_contract_call_return_data_multi_output(
    benchmark: BenchmarkFixture, faster_w3
):
    formatter = faster_web3.contract.utils.format_contract_call_return_data_curried(
        faster_w3,
        False,
        MULTI_OUTPUT_ABI,
        "multi",
        (normalizer,),
        ("uint256", "bool"),
    )
    benchmark(run_100, formatter, MULTI_RESULT)


@pytest.mark.benchmark(group="format_contract_call_return_data_decode_tuples")
def test_format_contract_call_return_data_decode_tuples(
    benchmark: BenchmarkFixture, web3_w3
):
    formatter = web3.contract.utils.format_contract_call_return_data_curried(
        web3_w3,
        True,
        TUPLE_OUTPUT_ABI,
        "tupled",
        (normalizer,),
        ("(uint256,bool)",),
    )
    benchmark(run_100, formatter, TUPLE_RESULT)


@pytest.mark.benchmark(group="format_contract_call_return_data_decode_tuples")
def test_faster_format_contract_call_return_data_decode_tuples(
    benchmark: BenchmarkFixture, faster_w3
):
    formatter = faster_web3.contract.utils.format_contract_call_return_data_curried(
        faster_w3,
        True,
        TUPLE_OUTPUT_ABI,
        "tupled",
        (normalizer,),
        ("(uint256,bool)",),
    )
    benchmark(run_100, formatter, TUPLE_RESULT)


@pytest.mark.benchmark(group="ContractEvent.factory")
def test_contract_event_factory(benchmark: BenchmarkFixture, web3_erc20_contract):
    event_cls = web3_erc20_contract.events.Transfer
    benchmark(run_100, event_cls, "from", "to")


@pytest.mark.benchmark(group="ContractEvent.factory")
def test_faster_contract_event_factory(
    benchmark: BenchmarkFixture, faster_erc20_contract
):
    event_cls = faster_erc20_contract.events.Transfer
    benchmark(run_100, event_cls, "from", "to")
