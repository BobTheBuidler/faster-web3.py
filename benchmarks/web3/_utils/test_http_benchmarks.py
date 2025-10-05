import pytest
from pytest_codspeed import BenchmarkFixture

import web3._utils.http
import faster_web3._utils.http

def run_1000(func, *args, **kwargs):
    for _ in range(1000):
        func(*args, **kwargs)

cases = {
    "web3": "web3",
    "faster_web3": "faster_web3",
    "custom": "custom_module",
    "empty": "",
}

@pytest.mark.benchmark(group="construct_user_agent")
@pytest.mark.parametrize("module", list(cases.values()), ids=list(cases))
def test_web3_construct_user_agent(benchmark: BenchmarkFixture, module):
    benchmark(run_1000, web3._utils.http.construct_user_agent, module)

@pytest.mark.benchmark(group="construct_user_agent")
@pytest.mark.parametrize("module", list(cases.values()), ids=list(cases))
def test_faster_web3_construct_user_agent(benchmark: BenchmarkFixture, module):
    benchmark(run_1000, faster_web3._utils.http.construct_user_agent, module)
