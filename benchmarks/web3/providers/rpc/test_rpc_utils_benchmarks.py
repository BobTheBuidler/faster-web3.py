import pytest
from pytest_codspeed import BenchmarkFixture

try:
    import web3.providers.rpc.utils
except ImportError:
    pass

import faster_web3.providers.rpc.utils


def run_5000(func, *args, **kwargs):
    for _ in range(5000):
        func(*args, **kwargs)


# --- check_if_retry_on_failure ---

# Common RPC methods that should and should not be retried.
retry_cases = [
    "eth_blockNumber",
    "eth_getBalance",
    "net_version",
    "admin_peers",
    "personal_sign",
]
retry_ids = ["blockNumber", "getBalance", "net_version", "admin_peers", "personal_sign"]


@pytest.mark.benchmark(group="check_if_retry_on_failure")
@pytest.mark.parametrize("method", retry_cases, ids=retry_ids)
def test_check_if_retry_on_failure(benchmark: BenchmarkFixture, method):
    benchmark(run_5000, web3.providers.rpc.utils.check_if_retry_on_failure, method)


@pytest.mark.benchmark(group="check_if_retry_on_failure")
@pytest.mark.parametrize("method", retry_cases, ids=retry_ids)
def test_faster_check_if_retry_on_failure(benchmark: BenchmarkFixture, method):
    benchmark(run_5000, faster_web3.providers.rpc.utils.check_if_retry_on_failure, method)


# --- ExceptionRetryConfiguration ---

# Default configuration and custom allowlist are typical usage patterns.
retry_config_cases = [
    {"errors": []},
    {
        "errors": [ConnectionError],
        "retries": 3,
        "backoff_factor": 0.25,
        "method_allowlist": ["eth_blockNumber"],
    },
]
retry_config_ids = ["defaults", "custom-allowlist"]


@pytest.mark.benchmark(group="ExceptionRetryConfiguration")
@pytest.mark.parametrize("kwargs", retry_config_cases, ids=retry_config_ids)
def test_exception_retry_configuration(benchmark: BenchmarkFixture, kwargs):
    benchmark(run_5000, web3.providers.rpc.utils.ExceptionRetryConfiguration, **kwargs)


@pytest.mark.benchmark(group="ExceptionRetryConfiguration")
@pytest.mark.parametrize("kwargs", retry_config_cases, ids=retry_config_ids)
def test_faster_exception_retry_configuration(benchmark: BenchmarkFixture, kwargs):
    benchmark(
        run_5000, faster_web3.providers.rpc.utils.ExceptionRetryConfiguration, **kwargs
    )
