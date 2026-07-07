import pytest

from pytest_codspeed import (
    BenchmarkFixture,
)
import web3._utils.http

from benchmarks.batching import (
    run_1000,
)
import faster_web3._utils.http

MODULE = "some_module"
CLASS_NAME = "SomeClass"


@pytest.mark.benchmark(group="construct_user_agent")
def test_construct_user_agent(benchmark: BenchmarkFixture):
    benchmark(run_1000, web3._utils.http.construct_user_agent, MODULE, CLASS_NAME)


@pytest.mark.benchmark(group="construct_user_agent")
def test_faster_construct_user_agent(benchmark: BenchmarkFixture):
    benchmark(
        run_1000, faster_web3._utils.http.construct_user_agent, MODULE, CLASS_NAME
    )
