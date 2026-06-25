from unittest.mock import (
    patch,
)

import pytest
from pytest_codspeed import (
    BenchmarkFixture,
)

import web3
import web3._utils.contracts

import faster_web3._utils.contracts

from benchmarks.batching import (
    run_10_async,
    run_100,
)
from benchmarks.web3.fixtures.abis import (
    ERC20_ABI,
    UNISWAP_V2_PAIR_ABI,
)
from benchmarks.web3.fixtures.blocks import (
    FULL_LATEST_BLOCK_RESPONSE_BYTES,
)
from benchmarks.web3.fixtures.contracts import (
    ADDRESS,
    FALLBACK_ABI,
    RECEIVE_ABI,
    TOKEN_ADDRESS,
    TRANSFER_ABI,
    TRANSFER_ARGS,
)
from benchmarks.web3.fixtures.core import (
    HASH32,
)
from benchmarks.web3.fixtures.http import (
    AIOHTTP_CLIENT_SESSION_POST,
    REQUESTS_SESSION_POST,
    StaticAiohttpResponse,
    StaticResponse,
    make_static_aiohttp_post,
    make_static_requests_post,
)

BLOCK_HASH = HASH32
BLOCK_HTTP_RESPONSE = StaticResponse(FULL_LATEST_BLOCK_RESPONSE_BYTES)
BLOCK_AIOHTTP_RESPONSE = StaticAiohttpResponse(FULL_LATEST_BLOCK_RESPONSE_BYTES)
requests_post = make_static_requests_post(BLOCK_HTTP_RESPONSE)
aiohttp_post = make_static_aiohttp_post(BLOCK_AIOHTTP_RESPONSE)


def normalize_address(_type, value):
    if isinstance(value, str) and value.startswith("0x") and len(value) == 42:
        return _type, value.lower()
    return _type, value


EVENT_CASES = (
    (ERC20_ABI, "Transfer", ("from", "to")),
    (ERC20_ABI, "Approval", ("owner", "spender")),
    (UNISWAP_V2_PAIR_ABI, "Burn", ("sender", "to")),
)
PREPARE_CASES = (
    ("transfer", ERC20_ABI, None, {"from": ADDRESS}, TRANSFER_ARGS, {}),
    (
        "transfer(address,uint256)",
        ERC20_ABI,
        None,
        {"from": ADDRESS, "gas": 21000},
        TRANSFER_ARGS,
        {},
    ),
    ("fallback", FALLBACK_ABI, None, {"from": ADDRESS, "value": 1}, (), {}),
    ("receive", RECEIVE_ABI, None, {"from": ADDRESS, "value": 1}, (), {}),
)
BLOCK_CASES = (
    None,
    "latest",
    123,
    -1,
    bytes.fromhex(HASH32[2:]),
    BLOCK_HASH,
)


@pytest.fixture
def web3_transfer_data(web3_w3):
    return web3._utils.contracts.encode_transaction_data(
        web3_w3, "transfer", ERC20_ABI, None, TRANSFER_ARGS, {}
    )


@pytest.fixture
def faster_transfer_data(faster_w3):
    return faster_web3._utils.contracts.encode_transaction_data(
        faster_w3, "transfer", ERC20_ABI, None, TRANSFER_ARGS, {}
    )


@pytest.mark.benchmark(group="find_matching_event_abi")
@pytest.mark.parametrize("contract_abi,event_name,argument_names", EVENT_CASES)
def test_find_matching_event_abi(
    benchmark: BenchmarkFixture, contract_abi, event_name, argument_names
):
    benchmark(
        run_100,
        web3._utils.contracts.find_matching_event_abi,
        contract_abi,
        event_name,
        argument_names,
    )


@pytest.mark.benchmark(group="find_matching_event_abi")
@pytest.mark.parametrize("contract_abi,event_name,argument_names", EVENT_CASES)
def test_faster_find_matching_event_abi(
    benchmark: BenchmarkFixture, contract_abi, event_name, argument_names
):
    benchmark(
        run_100,
        faster_web3._utils.contracts.find_matching_event_abi,
        contract_abi,
        event_name,
        argument_names,
    )


@pytest.mark.benchmark(group="encode_abi")
def test_encode_abi_selector_data(benchmark: BenchmarkFixture, web3_w3):
    benchmark(
        run_100,
        web3._utils.contracts.encode_abi,
        web3_w3,
        TRANSFER_ABI,
        TRANSFER_ARGS,
        "0xa9059cbb",
    )


@pytest.mark.benchmark(group="encode_abi")
def test_faster_encode_abi_selector_data(benchmark: BenchmarkFixture, faster_w3):
    benchmark(
        run_100,
        faster_web3._utils.contracts.encode_abi,
        faster_w3,
        TRANSFER_ABI,
        TRANSFER_ARGS,
        "0xa9059cbb",
    )


@pytest.mark.benchmark(group="encode_transaction_data")
def test_encode_transaction_data(benchmark: BenchmarkFixture, web3_w3):
    benchmark(
        run_100,
        web3._utils.contracts.encode_transaction_data,
        web3_w3,
        "transfer",
        ERC20_ABI,
        None,
        TRANSFER_ARGS,
        {},
    )


@pytest.mark.benchmark(group="encode_transaction_data")
def test_faster_encode_transaction_data(benchmark: BenchmarkFixture, faster_w3):
    benchmark(
        run_100,
        faster_web3._utils.contracts.encode_transaction_data,
        faster_w3,
        "transfer",
        ERC20_ABI,
        None,
        TRANSFER_ARGS,
        {},
    )


@pytest.mark.benchmark(group="decode_transaction_data")
def test_decode_transaction_data_with_normalizers(
    benchmark: BenchmarkFixture, web3_transfer_data
):
    benchmark(
        run_100,
        web3._utils.contracts.decode_transaction_data,
        TRANSFER_ABI,
        web3_transfer_data,
        (normalize_address,),
    )


@pytest.mark.benchmark(group="decode_transaction_data")
def test_faster_decode_transaction_data_with_normalizers(
    benchmark: BenchmarkFixture, faster_transfer_data
):
    benchmark(
        run_100,
        faster_web3._utils.contracts.decode_transaction_data,
        TRANSFER_ABI,
        faster_transfer_data,
        (normalize_address,),
    )


@pytest.mark.benchmark(group="prepare_transaction")
@pytest.mark.parametrize(
    "identifier,contract_abi,abi_callable,transaction,args,kwargs", PREPARE_CASES
)
def test_prepare_transaction(
    benchmark: BenchmarkFixture,
    web3_w3,
    identifier,
    contract_abi,
    abi_callable,
    transaction,
    args,
    kwargs,
):
    benchmark(
        run_100,
        web3._utils.contracts.prepare_transaction,
        ADDRESS,
        web3_w3,
        identifier,
        contract_abi,
        abi_callable,
        transaction,
        args,
        kwargs,
    )


@pytest.mark.benchmark(group="prepare_transaction")
@pytest.mark.parametrize(
    "identifier,contract_abi,abi_callable,transaction,args,kwargs", PREPARE_CASES
)
def test_faster_prepare_transaction(
    benchmark: BenchmarkFixture,
    faster_w3,
    identifier,
    contract_abi,
    abi_callable,
    transaction,
    args,
    kwargs,
):
    benchmark(
        run_100,
        faster_web3._utils.contracts.prepare_transaction,
        ADDRESS,
        faster_w3,
        identifier,
        contract_abi,
        abi_callable,
        transaction,
        args,
        kwargs,
    )


@pytest.mark.benchmark(group="parse_block_identifier")
@pytest.mark.parametrize("block_identifier", BLOCK_CASES)
def test_parse_block_identifier(
    benchmark: BenchmarkFixture, web3_w3, block_identifier
):
    with patch(REQUESTS_SESSION_POST, new=requests_post):
        benchmark(
            run_100,
            web3._utils.contracts.parse_block_identifier,
            web3_w3,
            block_identifier,
        )


@pytest.mark.benchmark(group="parse_block_identifier")
@pytest.mark.parametrize("block_identifier", BLOCK_CASES)
def test_faster_parse_block_identifier(
    benchmark: BenchmarkFixture, faster_w3, block_identifier
):
    with patch(REQUESTS_SESSION_POST, new=requests_post):
        benchmark(
            run_100,
            faster_web3._utils.contracts.parse_block_identifier,
            faster_w3,
            block_identifier,
        )


@pytest.mark.benchmark(group="async_parse_block_identifier")
@pytest.mark.parametrize("block_identifier", BLOCK_CASES)
def test_async_parse_block_identifier(
    benchmark: BenchmarkFixture, web3_async_w3, block_identifier
):
    with patch(AIOHTTP_CLIENT_SESSION_POST, new=aiohttp_post):
        benchmark(
            run_10_async,
            web3._utils.contracts.async_parse_block_identifier,
            web3_async_w3,
            block_identifier,
        )


@pytest.mark.benchmark(group="async_parse_block_identifier")
@pytest.mark.parametrize("block_identifier", BLOCK_CASES)
def test_faster_async_parse_block_identifier(
    benchmark: BenchmarkFixture, faster_async_w3, block_identifier
):
    with patch(AIOHTTP_CLIENT_SESSION_POST, new=aiohttp_post):
        benchmark(
            run_10_async,
            faster_web3._utils.contracts.async_parse_block_identifier,
            faster_async_w3,
            block_identifier,
        )


@pytest.mark.benchmark(group="copy_contract_function")
def test_copy_contract_function(
    benchmark: BenchmarkFixture, web3_erc20_contract
):
    fn = web3_erc20_contract.functions.transfer(TOKEN_ADDRESS, 1000)
    benchmark(
        run_100,
        web3._utils.contracts.copy_contract_function,
        fn,
        TOKEN_ADDRESS,
        1000,
    )


@pytest.mark.benchmark(group="copy_contract_function")
def test_faster_copy_contract_function(
    benchmark: BenchmarkFixture, faster_erc20_contract
):
    fn = faster_erc20_contract.functions.transfer(TOKEN_ADDRESS, 1000)
    benchmark(
        run_100,
        faster_web3._utils.contracts.copy_contract_function,
        fn,
        TOKEN_ADDRESS,
        1000,
    )


@pytest.mark.benchmark(group="copy_contract_event")
def test_copy_contract_event(benchmark: BenchmarkFixture, web3_erc20_contract):
    event = web3_erc20_contract.events.Transfer("from", "to")
    benchmark(run_100, web3._utils.contracts.copy_contract_event, event, "from")


@pytest.mark.benchmark(group="copy_contract_event")
def test_faster_copy_contract_event(
    benchmark: BenchmarkFixture, faster_erc20_contract
):
    event = faster_erc20_contract.events.Transfer("from", "to")
    benchmark(run_100, faster_web3._utils.contracts.copy_contract_event, event, "from")
