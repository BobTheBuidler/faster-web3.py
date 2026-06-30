import pytest
import hashlib
import json
import os

from faster_ens import (
    InvalidName,
)
from faster_ens._normalization import (
    normalize_name_ensip15,
)

NORMALIZATION_TESTS_PATH = os.path.join(
    os.path.dirname(__file__), "normalization_tests.json"
)
# ENSIP-15 fixture is UTF-8; Windows may otherwise default to cp1252.
with open(NORMALIZATION_TESTS_PATH, encoding="utf-8") as f:
    normalization_tests = json.load(f)

POSITIVE_TEST_CASES = [test for test in normalization_tests if "error" not in test]
NEGATIVE_TEST_CASES = [test for test in normalization_tests if "error" in test]

# gut check that we have all the tests
if not len(POSITIVE_TEST_CASES) + len(NEGATIVE_TEST_CASES) == len(normalization_tests):
    raise AssertionError("Not all normalization tests are accounted for.")


def _case_ids(prefix, test_cases):
    # Keep pytest node IDs compact: some ENSIP-15 names are longer than Windows'
    # environment variable limit once pytest/flaky mirrors node IDs during setup.
    return [
        (
            f"{prefix}-{index:05d}-"
            f"{hashlib.sha1(test_case['name'].encode('utf-8')).hexdigest()[:8]}"
        )
        for index, test_case in enumerate(test_cases)
    ]


@pytest.mark.parametrize(
    "positive_test_case",
    POSITIVE_TEST_CASES,
    ids=_case_ids("positive", POSITIVE_TEST_CASES),
)
def test_normalize_name_ensip15_positive_test_cases(positive_test_case):
    name = positive_test_case["name"]

    expected = positive_test_case.get("norm", positive_test_case.get("name"))
    assert normalize_name_ensip15(name).as_text == expected


@pytest.mark.parametrize(
    "negative_test_case",
    NEGATIVE_TEST_CASES,
    ids=_case_ids("negative", NEGATIVE_TEST_CASES),
)
def test_normalize_name_ensip15_negative_test_cases(negative_test_case):
    name = negative_test_case["name"]

    with pytest.raises(InvalidName):
        normalize_name_ensip15(name)
