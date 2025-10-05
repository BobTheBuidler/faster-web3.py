import pytest
from pytest_codspeed import BenchmarkFixture

from web3.datastructures import (
    ReadableAttributeDict,
    MutableAttributeDict,
    AttributeDict,
    tupleize_lists_nested,
    NamedElementOnion,
)
from faster_web3.datastructures import (
    ReadableAttributeDict as FasterReadableAttributeDict,
    MutableAttributeDict as FasterMutableAttributeDict,
    AttributeDict as FasterAttributeDict,
    tupleize_lists_nested as faster_tupleize_lists_nested,
    NamedElementOnion as FasterNamedElementOnion,
)

# --- Shared parameter sets ---
init_dicts = [
    {},
    {"a": 1, "b": 2, "c": 3, "d": 4, "e": 5},
    {str(i): i for i in range(100)},
]
init_dict_ids = ["empty", "small", "large"]

getitem_cases = [
    ({"a": 1, "b": 2, "c": 3, "d": 4, "e": 5}, "a"),
    ({str(i): i for i in range(100)}, "50"),
]
getitem_ids = ["small", "large"]

recursive_vals = [
    {"a": {"b": [1, 2, {"c": 3}]}},
    [1, 2, {"a": [3, 4]}],
    set([1, 2, 3]),
]
recursive_ids = ["nested-dict", "list-in-dict", "set"]

hash_dicts = [
    {"a": 1, "b": 2, "c": 3, "d": 4, "e": 5},
    {"a": [1, 2], "b": {"c": 3}},
]
hash_ids = ["flat", "nested"]

tupleize_dicts = [
    {"a": [1, 2, 3], "b": {"c": [4, 5]}},
    {"x": (1, 2, [3, 4]), "y": {"z": [5, 6]}},
]
tupleize_ids = ["list-in-dict", "tuple-in-dict"]

onion_elements = [
    [],
    [lambda x: x, lambda y: y],
    [1, 2, 3],
]
onion_ids = ["empty", "callables", "ints"]

# --- Helpers ---
def run_100(func, *args, **kwargs):
    for _ in range(100):
        func(*args, **kwargs)

def run_500(func, *args, **kwargs):
    for _ in range(500):
        func(*args, **kwargs)

# --- Benchmarks for ReadableAttributeDict ---

@pytest.mark.benchmark(group="ReadableAttributeDict-init")
@pytest.mark.parametrize("d", init_dicts, ids=init_dict_ids)
def test_web3_readableattributedict_init(benchmark: BenchmarkFixture, d):
    benchmark(run_100, ReadableAttributeDict, d)

@pytest.mark.benchmark(group="ReadableAttributeDict-init")
@pytest.mark.parametrize("d", init_dicts, ids=init_dict_ids)
def test_faster_readableattributedict_init(benchmark: BenchmarkFixture, d):
    benchmark(run_100, FasterReadableAttributeDict, d)

@pytest.mark.benchmark(group="ReadableAttributeDict-getitem")
@pytest.mark.parametrize("d,key", getitem_cases, ids=getitem_ids)
def test_web3_readableattributedict_getitem(benchmark: BenchmarkFixture, d, key):
    rad = ReadableAttributeDict(d)
    benchmark(run_100, lambda: rad[key])

@pytest.mark.benchmark(group="ReadableAttributeDict-getitem")
@pytest.mark.parametrize("d,key", getitem_cases, ids=getitem_ids)
def test_faster_readableattributedict_getitem(benchmark: BenchmarkFixture, d, key):
    rad = FasterReadableAttributeDict(d)
    benchmark(run_100, lambda: rad[key])

@pytest.mark.benchmark(group="ReadableAttributeDict-recursive")
@pytest.mark.parametrize("val", recursive_vals, ids=recursive_ids)
def test_web3_readableattributedict_recursive(benchmark: BenchmarkFixture, val):
    benchmark(run_100, ReadableAttributeDict.recursive, val)

@pytest.mark.benchmark(group="ReadableAttributeDict-recursive")
@pytest.mark.parametrize("val", recursive_vals, ids=recursive_ids)
def test_faster_readableattributedict_recursive(benchmark: BenchmarkFixture, val):
    benchmark(run_100, FasterReadableAttributeDict.recursive, val)

# --- Benchmarks for MutableAttributeDict ---

@pytest.mark.benchmark(group="MutableAttributeDict-setitem")
def test_web3_mutableattributedict_setitem(benchmark: BenchmarkFixture):
    mad = MutableAttributeDict({})
    def setitem():
        for i in range(100):
            mad[i] = i
    benchmark(run_100, setitem)

@pytest.mark.benchmark(group="MutableAttributeDict-setitem")
def test_faster_mutableattributedict_setitem(benchmark: BenchmarkFixture):
    mad = FasterMutableAttributeDict({})
    def setitem():
        for i in range(100):
            mad[i] = i
    benchmark(run_100, setitem)

@pytest.mark.benchmark(group="MutableAttributeDict-delitem")
def test_web3_mutableattributedict_delitem(benchmark: BenchmarkFixture):
    mad = MutableAttributeDict({i: i for i in range(100)})
    def delitem():
        for i in range(100):
            del mad[i]
    benchmark(run_100, delitem)

@pytest.mark.benchmark(group="MutableAttributeDict-delitem")
def test_faster_mutableattributedict_delitem(benchmark: BenchmarkFixture):
    mad = FasterMutableAttributeDict({i: i for i in range(100)})
    def delitem():
        for i in range(100):
            del mad[i]
    benchmark(run_100, delitem)

# --- Benchmarks for AttributeDict ---

@pytest.mark.benchmark(group="AttributeDict-init")
@pytest.mark.parametrize("d", init_dicts, ids=init_dict_ids)
def test_web3_attributedict_init(benchmark: BenchmarkFixture, d):
    benchmark(run_100, AttributeDict, d)

@pytest.mark.benchmark(group="AttributeDict-init")
@pytest.mark.parametrize("d", init_dicts, ids=init_dict_ids)
def test_faster_attributedict_init(benchmark: BenchmarkFixture, d):
    benchmark(run_100, FasterAttributeDict, d)

@pytest.mark.benchmark(group="AttributeDict-hash")
@pytest.mark.parametrize("d", hash_dicts, ids=hash_ids)
def test_web3_attributedict_hash(benchmark: BenchmarkFixture, d):
    ad = AttributeDict(d)
    benchmark(run_100, hash, ad)

@pytest.mark.benchmark(group="AttributeDict-hash")
@pytest.mark.parametrize("d", hash_dicts, ids=hash_ids)
def test_faster_attributedict_hash(benchmark: BenchmarkFixture, d):
    ad = FasterAttributeDict(d)
    benchmark(run_100, hash, ad)

@pytest.mark.benchmark(group="AttributeDict-eq")
def test_web3_attributedict_eq(benchmark: BenchmarkFixture):
    d1 = {"a": 1, "b": 2}
    d2 = {"b": 2, "a": 1}
    ad1 = AttributeDict(d1)
    ad2 = AttributeDict(d2)
    benchmark(run_100, lambda: ad1 == ad2)

@pytest.mark.benchmark(group="AttributeDict-eq")
def test_faster_attributedict_eq(benchmark: BenchmarkFixture):
    d1 = {"a": 1, "b": 2}
    d2 = {"b": 2, "a": 1}
    ad1 = FasterAttributeDict(d1)
    ad2 = FasterAttributeDict(d2)
    benchmark(run_100, lambda: ad1 == ad2)

# --- Benchmarks for tupleize_lists_nested ---

@pytest.mark.benchmark(group="tupleize_lists_nested")
@pytest.mark.parametrize("d", tupleize_dicts, ids=tupleize_ids)
def test_web3_tupleize_lists_nested(benchmark: BenchmarkFixture, d):
    benchmark(run_100, tupleize_lists_nested, d)

@pytest.mark.benchmark(group="tupleize_lists_nested")
@pytest.mark.parametrize("d", tupleize_dicts, ids=tupleize_ids)
def test_faster_tupleize_lists_nested(benchmark: BenchmarkFixture, d):
    benchmark(run_100, faster_tupleize_lists_nested, d)

# --- Benchmarks for NamedElementOnion ---

@pytest.mark.benchmark(group="NamedElementOnion-init")
@pytest.mark.parametrize("elements", onion_elements, ids=onion_ids)
def test_web3_namedelementonion_init(benchmark: BenchmarkFixture, elements):
    benchmark(run_100, NamedElementOnion, elements)

@pytest.mark.benchmark(group="NamedElementOnion-init")
@pytest.mark.parametrize("elements", onion_elements, ids=onion_ids)
def test_faster_namedelementonion_init(benchmark: BenchmarkFixture, elements):
    benchmark(run_100, FasterNamedElementOnion, elements)

@pytest.mark.benchmark(group="NamedElementOnion-add")
def test_web3_namedelementonion_add(benchmark: BenchmarkFixture):
    onion = NamedElementOnion([])
    def add():
        for i in range(100):
            onion.add(i)
    benchmark(run_100, add)

@pytest.mark.benchmark(group="NamedElementOnion-add")
def test_faster_namedelementonion_add(benchmark: BenchmarkFixture):
    onion = FasterNamedElementOnion([])
    def add():
        for i in range(100):
            onion.add(i)
    benchmark(run_100, add)

@pytest.mark.benchmark(group="NamedElementOnion-inject")
def test_web3_namedelementonion_inject(benchmark: BenchmarkFixture):
    onion = NamedElementOnion([])
    def inject():
        for i in range(100):
            onion.inject(i, layer=0)
    benchmark(run_100, inject)

@pytest.mark.benchmark(group="NamedElementOnion-inject")
def test_faster_namedelementonion_inject(benchmark: BenchmarkFixture):
    onion = FasterNamedElementOnion([])
    def inject():
        for i in range(100):
            onion.inject(i, layer=0)
    benchmark(run_100, inject)

@pytest.mark.benchmark(group="NamedElementOnion-replace")
def test_web3_namedelementonion_replace(benchmark: BenchmarkFixture):
    onion = NamedElementOnion([1, 2, 3])
    def replace():
        onion.replace(1, 4)
    benchmark(run_100, replace)

@pytest.mark.benchmark(group="NamedElementOnion-replace")
def test_faster_namedelementonion_replace(benchmark: BenchmarkFixture):
    onion = FasterNamedElementOnion([1, 2, 3])
    def replace():
        onion.replace(1, 4)
    benchmark(run_100, replace)

@pytest.mark.benchmark(group="NamedElementOnion-remove")
def test_web3_namedelementonion_remove(benchmark: BenchmarkFixture):
    onion = NamedElementOnion([1, 2, 3])
    def remove():
        onion.remove(2)
    benchmark(run_100, remove)

@pytest.mark.benchmark(group="NamedElementOnion-remove")
def test_faster_namedelementonion_remove(benchmark: BenchmarkFixture):
    onion = FasterNamedElementOnion([1, 2, 3])
    def remove():
        onion.remove(2)
    benchmark(run_100, remove)

@pytest.mark.benchmark(group="NamedElementOnion-contains")
def test_web3_namedelementonion_contains(benchmark: BenchmarkFixture):
    onion = NamedElementOnion([1, 2, 3])
    benchmark(run_100, lambda: 2 in onion)

@pytest.mark.benchmark(group="NamedElementOnion-contains")
def test_faster_namedelementonion_contains(benchmark: BenchmarkFixture):
    onion = FasterNamedElementOnion([1, 2, 3])
    benchmark(run_100, lambda: 2 in onion)

@pytest.mark.benchmark(group="NamedElementOnion-getitem")
def test_web3_namedelementonion_getitem(benchmark: BenchmarkFixture):
    onion = NamedElementOnion([1, 2, 3])
    benchmark(run_100, lambda: onion[2])

@pytest.mark.benchmark(group="NamedElementOnion-getitem")
def test_faster_namedelementonion_getitem(benchmark: BenchmarkFixture):
    onion = FasterNamedElementOnion([1, 2, 3])
    benchmark(run_100, lambda: onion[2])

@pytest.mark.benchmark(group="NamedElementOnion-iter")
def test_web3_namedelementonion_iter(benchmark: BenchmarkFixture):
    onion = NamedElementOnion([1, 2, 3])
    benchmark(run_100, lambda: list(onion))

@pytest.mark.benchmark(group="NamedElementOnion-iter")
def test_faster_namedelementonion_iter(benchmark: BenchmarkFixture):
    onion = FasterNamedElementOnion([1, 2, 3])
    benchmark(run_100, lambda: list(onion))

@pytest.mark.benchmark(group="NamedElementOnion-as_tuple_of_middleware")
def test_web3_namedelementonion_as_tuple_of_middleware(benchmark: BenchmarkFixture):
    onion = NamedElementOnion([1, 2, 3])
    benchmark(run_100, onion.as_tuple_of_middleware)

@pytest.mark.benchmark(group="NamedElementOnion-as_tuple_of_middleware")
def test_faster_namedelementonion_as_tuple_of_middleware(benchmark: BenchmarkFixture):
    onion = FasterNamedElementOnion([1, 2, 3])
    benchmark(run_100, onion.as_tuple_of_middleware)
