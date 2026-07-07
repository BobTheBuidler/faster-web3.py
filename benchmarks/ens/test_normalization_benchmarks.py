import pytest

import ens._normalization
import ens.exceptions
from pytest_codspeed import (
    BenchmarkFixture,
)

from benchmarks.batching import (
    run_1000_exc,
)
from benchmarks.ens.params import (
    parametrize_names_full_coverage,
)
import faster_ens._normalization
import faster_ens.exceptions


@pytest.mark.benchmark(group="normalize_name_ensip15")
@parametrize_names_full_coverage
def test_normalize_name_ensip15(benchmark: BenchmarkFixture, name):
    benchmark(
        run_1000_exc,
        ens.exceptions.InvalidName,
        ens._normalization.normalize_name_ensip15,
        name,
    )


@pytest.mark.benchmark(group="faster_normalize_name_ensip15")
@parametrize_names_full_coverage
def test_faster_normalize_name_ensip15(benchmark: BenchmarkFixture, name):
    benchmark(
        run_1000_exc,
        faster_ens.exceptions.InvalidName,
        faster_ens._normalization.normalize_name_ensip15,
        name,
    )
