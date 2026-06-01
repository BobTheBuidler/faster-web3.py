import pytest
from pytest_codspeed import BenchmarkFixture

import web3.datastructures

import faster_web3.datastructures
from benchmarks.batching import run_100, run_500

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


# Use unique callables for onion_elements to avoid duplicate un-named instances
def make_callable(val):
    return lambda: val


onion_elements = [
    [],
    [make_callable(1), make_callable(2)],
    [make_callable(3), make_callable(4), make_callable(5)],
]
onion_ids = ["empty", "callables2", "callables3"]


# --- Helpers ---


# --- Benchmarks for ReadableAttributeDict ---


@pytest.mark.benchmark(group="ReadableAttributeDict-init")
@pytest.mark.parametrize("d", init_dicts, ids=init_dict_ids)
def test_ReadableAttributeDict_init(benchmark: BenchmarkFixture, d):
    benchmark(run_100, web3.datastructures.ReadableAttributeDict, d)


@pytest.mark.benchmark(group="ReadableAttributeDict-init")
@pytest.mark.parametrize("d", init_dicts, ids=init_dict_ids)
def test_faster_ReadableAttributeDict_init(benchmark: BenchmarkFixture, d):
    benchmark(run_100, faster_web3.datastructures.ReadableAttributeDict, d)


@pytest.mark.benchmark(group="ReadableAttributeDict-getitem")
@pytest.mark.parametrize("d,key", getitem_cases, ids=getitem_ids)
def test_ReadableAttributeDict_getitem(benchmark: BenchmarkFixture, d, key):
    rad = web3.datastructures.ReadableAttributeDict(d)
    benchmark(run_100, lambda: rad[key])


@pytest.mark.benchmark(group="ReadableAttributeDict-getitem")
@pytest.mark.parametrize("d,key", getitem_cases, ids=getitem_ids)
def test_faster_ReadableAttributeDict_getitem(benchmark: BenchmarkFixture, d, key):
    rad = faster_web3.datastructures.ReadableAttributeDict(d)
    benchmark(run_100, lambda: rad[key])


@pytest.mark.benchmark(group="ReadableAttributeDict-recursive")
@pytest.mark.parametrize("val", recursive_vals, ids=recursive_ids)
def test_ReadableAttributeDict_recursive(benchmark: BenchmarkFixture, val):
    benchmark(run_100, web3.datastructures.ReadableAttributeDict.recursive, val)


@pytest.mark.benchmark(group="ReadableAttributeDict-recursive")
@pytest.mark.parametrize("val", recursive_vals, ids=recursive_ids)
def test_faster_ReadableAttributeDict_recursive(benchmark: BenchmarkFixture, val):
    benchmark(run_100, faster_web3.datastructures.ReadableAttributeDict.recursive, val)


# --- Benchmarks for MutableAttributeDict ---


@pytest.mark.benchmark(group="MutableAttributeDict-setitem")
def test_MutableAttributeDict_setitem(benchmark: BenchmarkFixture):
    def setitem():
        mad = web3.datastructures.MutableAttributeDict({})
        for i in range(20):
            mad[i] = i

    benchmark(run_100, setitem)


@pytest.mark.benchmark(group="MutableAttributeDict-setitem")
def test_faster_MutableAttributeDict_setitem(benchmark: BenchmarkFixture):
    def setitem():
        mad = faster_web3.datastructures.MutableAttributeDict({})
        for i in range(20):
            mad[i] = i

    benchmark(run_100, setitem)


@pytest.mark.benchmark(group="MutableAttributeDict-delitem")
def test_MutableAttributeDict_delitem(benchmark: BenchmarkFixture):
    def delitem():
        mad = web3.datastructures.MutableAttributeDict({i: i for i in range(20)})
        for i in range(20):
            del mad[i]

    benchmark(run_100, delitem)


@pytest.mark.benchmark(group="MutableAttributeDict-delitem")
def test_faster_MutableAttributeDict_delitem(benchmark: BenchmarkFixture):
    def delitem():
        mad = faster_web3.datastructures.MutableAttributeDict({i: i for i in range(20)})
        for i in range(20):
            del mad[i]

    benchmark(run_100, delitem)


# --- Benchmarks for AttributeDict ---


@pytest.mark.benchmark(group="AttributeDict-init")
@pytest.mark.parametrize("d", init_dicts, ids=init_dict_ids)
def test_AttributeDict_init(benchmark: BenchmarkFixture, d):
    benchmark(run_100, web3.datastructures.AttributeDict, d)


@pytest.mark.benchmark(group="AttributeDict-init")
@pytest.mark.parametrize("d", init_dicts, ids=init_dict_ids)
def test_faster_AttributeDict_init(benchmark: BenchmarkFixture, d):
    benchmark(run_100, faster_web3.datastructures.AttributeDict, d)


@pytest.mark.benchmark(group="AttributeDict-hash")
@pytest.mark.parametrize("d", hash_dicts, ids=hash_ids)
def test_AttributeDict_hash(benchmark: BenchmarkFixture, d):
    ad = web3.datastructures.AttributeDict(d)
    benchmark(run_100, hash, ad)


@pytest.mark.benchmark(group="AttributeDict-hash")
@pytest.mark.parametrize("d", hash_dicts, ids=hash_ids)
def test_faster_AttributeDict_hash(benchmark: BenchmarkFixture, d):
    ad = faster_web3.datastructures.AttributeDict(d)
    benchmark(run_100, hash, ad)


@pytest.mark.benchmark(group="AttributeDict-eq")
def test_AttributeDict_eq(benchmark: BenchmarkFixture):
    d1 = {"a": 1, "b": 2}
    d2 = {"b": 2, "a": 1}
    ad1 = web3.datastructures.AttributeDict(d1)
    ad2 = web3.datastructures.AttributeDict(d2)
    benchmark(run_100, lambda: ad1 == ad2)


@pytest.mark.benchmark(group="AttributeDict-eq")
def test_faster_AttributeDict_eq(benchmark: BenchmarkFixture):
    d1 = {"a": 1, "b": 2}
    d2 = {"b": 2, "a": 1}
    ad1 = faster_web3.datastructures.AttributeDict(d1)
    ad2 = faster_web3.datastructures.AttributeDict(d2)
    benchmark(run_100, lambda: ad1 == ad2)


# --- Benchmarks for tupleize_lists_nested ---


@pytest.mark.benchmark(group="tupleize_lists_nested")
@pytest.mark.parametrize("d", tupleize_dicts, ids=tupleize_ids)
def test_tupleize_lists_nested(benchmark: BenchmarkFixture, d):
    benchmark(run_100, web3.datastructures.tupleize_lists_nested, d)


@pytest.mark.benchmark(group="tupleize_lists_nested")
@pytest.mark.parametrize("d", tupleize_dicts, ids=tupleize_ids)
def test_faster_tupleize_lists_nested(benchmark: BenchmarkFixture, d):
    benchmark(run_100, faster_web3.datastructures.tupleize_lists_nested, d)


# --- Benchmarks for NamedElementOnion ---


@pytest.mark.benchmark(group="NamedElementOnion-init")
@pytest.mark.parametrize("elements", onion_elements, ids=onion_ids)
def test_NamedElementOnion_init(benchmark: BenchmarkFixture, elements):
    benchmark(run_100, web3.datastructures.NamedElementOnion, elements)


@pytest.mark.benchmark(group="NamedElementOnion-init")
@pytest.mark.parametrize("elements", onion_elements, ids=onion_ids)
def test_faster_NamedElementOnion_init(benchmark: BenchmarkFixture, elements):
    benchmark(run_100, faster_web3.datastructures.NamedElementOnion, elements)


@pytest.mark.benchmark(group="NamedElementOnion-add")
def test_NamedElementOnion_add(benchmark: BenchmarkFixture):
    onion = web3.datastructures.NamedElementOnion([make_callable(i) for i in range(10)])

    def add():
        for i in range(100, 200):
            onion.add(make_callable(i))

    benchmark(run_100, add)


@pytest.mark.benchmark(group="NamedElementOnion-add")
def test_faster_NamedElementOnion_add(benchmark: BenchmarkFixture):
    onion = faster_web3.datastructures.NamedElementOnion(
        [make_callable(i) for i in range(10)]
    )

    def add():
        for i in range(100, 200):
            onion.add(make_callable(i))

    benchmark(run_100, add)


@pytest.mark.benchmark(group="NamedElementOnion-inject")
def test_NamedElementOnion_inject(benchmark: BenchmarkFixture):
    onion = web3.datastructures.NamedElementOnion([make_callable(i) for i in range(10)])

    def inject():
        for i in range(100, 200):
            onion.inject(make_callable(i), layer=0)

    benchmark(run_100, inject)


@pytest.mark.benchmark(group="NamedElementOnion-inject")
def test_faster_NamedElementOnion_inject(benchmark: BenchmarkFixture):
    onion = faster_web3.datastructures.NamedElementOnion(
        [make_callable(i) for i in range(10)]
    )

    def inject():
        for i in range(100, 200):
            onion.inject(make_callable(i), layer=0)

    benchmark(run_100, inject)


@pytest.mark.benchmark(group="NamedElementOnion-replace")
def test_NamedElementOnion_replace(benchmark: BenchmarkFixture):
    middlewares = [make_callable(i) for i in range(10)]

    def replace():
        onion = web3.datastructures.NamedElementOnion(middlewares)
        for i in range(10):
            onion.replace(middlewares[i], make_callable(i + 10))

    benchmark(run_100, replace)


@pytest.mark.benchmark(group="NamedElementOnion-replace")
def test_faster_NamedElementOnion_replace(benchmark: BenchmarkFixture):
    middlewares = [make_callable(i) for i in range(10)]

    def replace():
        onion = faster_web3.datastructures.NamedElementOnion(middlewares)
        for i in range(10):
            onion.replace(middlewares[i], make_callable(i + 10))

    benchmark(run_100, replace)


@pytest.mark.benchmark(group="NamedElementOnion-remove")
def test_NamedElementOnion_remove(benchmark: BenchmarkFixture):
    middlewares = [make_callable(i) for i in range(10)]

    def remove():
        onion = web3.datastructures.NamedElementOnion(middlewares)
        for mw in middlewares:
            onion.remove(mw)

    benchmark(run_100, remove)


@pytest.mark.benchmark(group="NamedElementOnion-remove")
def test_faster_NamedElementOnion_remove(benchmark: BenchmarkFixture):
    middlewares = [make_callable(i) for i in range(10)]

    def remove():
        onion = faster_web3.datastructures.NamedElementOnion(middlewares)
        for mw in middlewares:
            onion.remove(mw)

    benchmark(run_100, remove)


@pytest.mark.benchmark(group="NamedElementOnion-contains")
def test_NamedElementOnion_contains(benchmark: BenchmarkFixture):
    middlewares = [make_callable(i) for i in range(10)]
    onion = web3.datastructures.NamedElementOnion(middlewares)
    middleware = middlewares[4]
    benchmark(run_100, lambda: middleware in onion)


@pytest.mark.benchmark(group="NamedElementOnion-contains")
def test_faster_NamedElementOnion_contains(benchmark: BenchmarkFixture):
    middlewares = [make_callable(i) for i in range(10)]
    onion = faster_web3.datastructures.NamedElementOnion(middlewares)
    middleware = middlewares[4]
    benchmark(run_100, lambda: middleware in onion)


@pytest.mark.benchmark(group="NamedElementOnion-getitem")
def test_NamedElementOnion_getitem(benchmark: BenchmarkFixture):
    middlewares = [make_callable(i) for i in range(10)]
    onion = web3.datastructures.NamedElementOnion(middlewares)
    middleware = middlewares[4]
    benchmark(run_100, lambda: onion[middleware])


@pytest.mark.benchmark(group="NamedElementOnion-getitem")
def test_faster_NamedElementOnion_getitem(benchmark: BenchmarkFixture):
    middlewares = [make_callable(i) for i in range(10)]
    onion = faster_web3.datastructures.NamedElementOnion(middlewares)
    middleware = middlewares[4]
    benchmark(run_100, lambda: onion[middleware])


@pytest.mark.benchmark(group="NamedElementOnion-iter")
def test_NamedElementOnion_iter(benchmark: BenchmarkFixture):
    onion = web3.datastructures.NamedElementOnion([make_callable(i) for i in range(10)])
    benchmark(run_100, list, onion)


@pytest.mark.benchmark(group="NamedElementOnion-iter")
def test_faster_NamedElementOnion_iter(benchmark: BenchmarkFixture):
    onion = faster_web3.datastructures.NamedElementOnion(
        [make_callable(i) for i in range(10)]
    )
    benchmark(run_100, list, onion)


@pytest.mark.benchmark(group="NamedElementOnion-as_tuple_of_middleware")
def test_NamedElementOnion_as_tuple_of_middleware(benchmark: BenchmarkFixture):
    onion = web3.datastructures.NamedElementOnion([make_callable(i) for i in range(10)])
    benchmark(run_100, onion.as_tuple_of_middleware)


@pytest.mark.benchmark(group="NamedElementOnion-as_tuple_of_middleware")
def test_faster_NamedElementOnion_as_tuple_of_middleware(benchmark: BenchmarkFixture):
    onion = faster_web3.datastructures.NamedElementOnion(
        [make_callable(i) for i in range(10)]
    )
    benchmark(run_100, onion.as_tuple_of_middleware)
