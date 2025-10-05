import asyncio

import pytest
from pytest_codspeed import BenchmarkFixture

import web3.utils.caching
import faster_web3.utils.caching

def run_100(func, *args, **kwargs):
    for _ in range(100):
        func(*args, **kwargs)

@pytest.mark.benchmark(group="SimpleCache-cache")
@pytest.mark.parametrize("size", [10, 100, 1000])
def test_web3_simplecache_cache(benchmark: BenchmarkFixture, size):
    keys = list(map(str, range(size)))
    values = list(range(size))
    def insert_items():
        cache = web3.utils.caching.SimpleCache(size=size)
        for k, v in zip(keys, values):
            cache.cache(k, v)
    benchmark(run_100, insert_items)

@pytest.mark.benchmark(group="SimpleCache-cache")
@pytest.mark.parametrize("size", [10, 100, 1000])
def test_faster_simplecache_cache(benchmark: BenchmarkFixture, size):
    keys = list(map(str, range(size)))
    values = list(range(size))
    def insert_items():
        cache = faster_web3.utils.caching.SimpleCache(size=size)
        for k, v in zip(keys, values):
            cache.cache(k, v)
    benchmark(run_100, insert_items)

@pytest.mark.benchmark(group="SimpleCache-eviction")
@pytest.mark.parametrize("size", [10, 100])
def test_web3_simplecache_eviction(benchmark: BenchmarkFixture, size):
    keys = list(map(str, range(size * 2)))
    values = list(range(size * 2))
    def insert_and_evict():
        cache = web3.utils.caching.SimpleCache(size=size)
        for k, v in zip(keys, values):
            cache.cache(k, v)
    benchmark(run_100, insert_and_evict)

@pytest.mark.benchmark(group="SimpleCache-eviction")
@pytest.mark.parametrize("size", [10, 100])
def test_faster_simplecache_eviction(benchmark: BenchmarkFixture, size):
    keys = list(map(str, range(size * 2)))
    values = list(range(size * 2))
    def insert_and_evict():
        cache = faster_web3.utils.caching.SimpleCache(size=size)
        for k, v in zip(keys, values):
            cache.cache(k, v)
    benchmark(run_100, insert_and_evict)

@pytest.mark.benchmark(group="SimpleCache-retrieval")
@pytest.mark.parametrize("size", [10, 100])
def test_web3_simplecache_retrieval(benchmark: BenchmarkFixture, size):
    cache = web3.utils.caching.SimpleCache(size=size)
    keys = list(map(str, range(size)))
    for k, v in zip(keys, range(size)):
        cache.cache(k, v)
    def retrieve_items():
        for k in keys:
            cache.get_cache_entry(k)
    benchmark(run_100, retrieve_items)

@pytest.mark.benchmark(group="SimpleCache-retrieval")
@pytest.mark.parametrize("size", [10, 100])
def test_faster_simplecache_retrieval(benchmark: BenchmarkFixture, size):
    cache = faster_web3.utils.caching.SimpleCache(size=size)
    keys = list(map(str, range(size)))
    for k, v in zip(keys, range(size)):
        cache.cache(k, v)
    def retrieve_items():
        for k in keys:
            cache.get_cache_entry(k)
    benchmark(run_100, retrieve_items)

@pytest.mark.benchmark(group="SimpleCache-pop")
@pytest.mark.parametrize("size", [10, 100])
def test_web3_simplecache_pop(benchmark: BenchmarkFixture, size):
    keys = list(map(str, range(size)))
    values = list(range(size))
    def pop_items():
        cache = web3.utils.caching.SimpleCache(size=size)
        for k, v in zip(keys, values):
            cache.cache(k, v)
        for k in keys:
            cache.pop(k)
    benchmark(run_100, pop_items)

@pytest.mark.benchmark(group="SimpleCache-pop")
@pytest.mark.parametrize("size", [10, 100])
def test_faster_simplecache_pop(benchmark: BenchmarkFixture, size):
    keys = list(map(str, range(size)))
    values = list(range(size))
    def pop_items():
        cache = faster_web3.utils.caching.SimpleCache(size=size)
        for k, v in zip(keys, values):
            cache.cache(k, v)
        for k in keys:
            cache.pop(k)
    benchmark(run_100, pop_items)

@pytest.mark.benchmark(group="SimpleCache-async_await_and_popitem")
@pytest.mark.parametrize("size", [10, 100])
def test_web3_simplecache_async_await_and_popitem(benchmark: BenchmarkFixture, size):
    cache = web3.utils.caching.SimpleCache(size=size)
    loop = asyncio.new_event_loop()
    for i in range(size):
        cache.cache(str(i), i)
    async def popitem_many():
        for _ in range(size):
            await cache.async_await_and_popitem()
    @benchmark
    def run() -> None:
        loop.run_until_complete(popitem_many())

@pytest.mark.benchmark(group="SimpleCache-async_await_and_popitem")
@pytest.mark.parametrize("size", [10, 100])
def test_faster_simplecache_async_await_and_popitem(benchmark: BenchmarkFixture, size):
    cache = faster_web3.utils.caching.SimpleCache(size=size)
    loop = asyncio.new_event_loop()
    for i in range(size):
        cache.cache(str(i), i)
    async def popitem_many():
        for _ in range(size):
            await cache.async_await_and_popitem()
    @benchmark
    def run() -> None:
        loop.run_until_complete(popitem_many())
