# Shared parameter sets for ENS/faster_ens benchmarks
import pytest

# NAMES_FULL_COVERAGE is a mapping of descriptive test ids to ENS names
# chosen to exercise all meaningful code paths and Unicode edge cases
# in normalization, validation, and hashing logic. Use the shared
# parametrize_names_full_coverage decorator for any test that
# parametrizes over ENS names and benefits from full Unicode coverage.
NAMES = [
    "alice.eth",
    "emoji👨🏻.eth",
    "subdomain.alice.eth",
    "a" * 63 + ".eth",
    "",
]

# Expanded set for full Unicode normalization branch coverage (as a mapping for test ids, using hyphens)
NAMES_FULL_COVERAGE = {
    "ascii": "alice.eth",  # ASCII
    "emoji": "emoji👨🏻.eth",  # Emoji
    "hangul-lv": "한.eth",  # Hangul LV syllable
    "hangul-lvt": "값.eth",  # Hangul LVT syllable
    "hangul-jamo": "\u1112\u1161\u11ab.eth",  # Hangul Jamo sequence (한)
    "combining-nfd": "cafe\u0301.eth",  # café.eth (NFD: cafe + combining acute)
    "precomposed-e-acute": "caf\u00e9.eth",  # café.eth (precomposed)
    "ligature-ffl": "wa\ufb04e.eth",  # ligature waﬄe.eth (with 'ﬄ' ligature)
    "multi-combining": "andr\u00e9e\u0308.eth",  # combining andréë.eth (e + acute, e + diaeresis)
    "combining-reorder": "zoe\u0308\u0301.eth",  # reorder zoë́.eth (e + diaeresis + acute)
    "blocked-last-cc": "andr\u00e9e.eth",  # blocked/last_cc andrée.eth (e + acute after d)
    "compose-pair": "zo\u00eb.eth",  # zoë.eth (precomposed ë)
    "only-combining": "m\u00e1.eth",  # only combining mark má.eth (precomposed á)
    "empty": "",  # empty string
}


# DRY: shared parameterization for ENS names
parametrize_names_full_coverage = pytest.mark.parametrize(
    "name",
    list(NAMES_FULL_COVERAGE.values()),
    ids=list(NAMES_FULL_COVERAGE.keys()),
)


LABELS = [
    "alice",
    "bob",
    "emoji\U0001F468\U0001F3FB",  # emoji👨🏻
    "xn--fiqs8s",
    "a" * 63,
    "",
]

ADDRESSES = [
    "0x0000000000000000000000000000000000000000",
    "0x314159265dD8dbb310642f98f50C066173C1259b",
    "0x1111111111111111111111111111111111111111",
]

LABEL_LISTS = [
    ["alice", "bob", "carol"],
    ["a", "b", "c", "d", "e"],
    [],
]

NAMES_VALIDITY = [
    "alice.eth",
    "bob.eth",
    "emoji\U0001F468\U0001F3FB.eth",  # emoji👨🏻.eth
    "subdomain.alice.eth",
    "a" * 63 + ".eth",
    "",
    "a..eth",
    "a.eth.",
    "a.eth..",
]

PARENT_NAMES = [
    "foo.bar.eth",
    "bar.eth",
    "eth",
    "",
    "sub.sub2.foo.bar.eth",
]
