import warnings

import pytest
from pytest_codspeed import BenchmarkFixture

try:
    import web3._utils.decorators
except ImportError:
    pass

import faster_web3._utils.decorators


def run_10000(fn, *args, **kwargs):
    for _ in range(10000):
        fn(*args, **kwargs)


def _noop(value):
    return value


# --- reject_recursive_repeats ---


@pytest.mark.benchmark(group="reject_recursive_repeats")
def test_reject_recursive_repeats(benchmark: BenchmarkFixture):
    @web3._utils.decorators.reject_recursive_repeats
    def wrapped(value):
        return value

    benchmark(run_10000, wrapped, 1)


@pytest.mark.benchmark(group="reject_recursive_repeats")
def test_faster_reject_recursive_repeats(benchmark: BenchmarkFixture):
    @faster_web3._utils.decorators.reject_recursive_repeats
    def wrapped(value):
        return value

    benchmark(run_10000, wrapped, 1)


# --- deprecated_for ---


@pytest.mark.benchmark(group="deprecated_for")
def test_deprecated_for(benchmark: BenchmarkFixture):
    warnings.filterwarnings("ignore", category=DeprecationWarning)

    @web3._utils.decorators.deprecated_for("use new_func instead")
    def wrapped(value):
        return value

    benchmark(run_10000, wrapped, 1)


@pytest.mark.benchmark(group="deprecated_for")
def test_faster_deprecated_for(benchmark: BenchmarkFixture):
    warnings.filterwarnings("ignore", category=DeprecationWarning)

    @faster_web3._utils.decorators.deprecated_for("use new_func instead")
    def wrapped(value):
        return value

    benchmark(run_10000, wrapped, 1)
