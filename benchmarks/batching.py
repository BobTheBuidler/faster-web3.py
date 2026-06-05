import atexit
import asyncio


_ASYNC_LOOP = asyncio.new_event_loop()
atexit.register(_ASYNC_LOOP.close)


def _run_async(coro):
    return _ASYNC_LOOP.run_until_complete(coro)


def run_10(fn, *args, **kwargs):
    for _ in range(10):
        fn(*args, **kwargs)


def run_10_exc(exc, fn, *args, **kwargs):
    for _ in range(10):
        try:
            fn(*args, **kwargs)
        except exc:
            pass


def run_100(fn, *args, **kwargs):
    for _ in range(100):
        fn(*args, **kwargs)


def run_100_exc(exc, fn, *args, **kwargs):
    for _ in range(100):
        try:
            fn(*args, **kwargs)
        except exc:
            pass


def run_500(fn, *args, **kwargs):
    for _ in range(500):
        fn(*args, **kwargs)


def run_500_exc(exc, fn, *args, **kwargs):
    for _ in range(500):
        try:
            fn(*args, **kwargs)
        except exc:
            pass


def run_1000(fn, *args, **kwargs):
    for _ in range(1000):
        fn(*args, **kwargs)


def run_1000_exc(exc, fn, *args, **kwargs):
    for _ in range(1000):
        try:
            fn(*args, **kwargs)
        except exc:
            pass


def run_5000(fn, *args, **kwargs):
    for _ in range(5000):
        fn(*args, **kwargs)


def run_5000_exc(exc, fn, *args, **kwargs):
    for _ in range(5000):
        try:
            fn(*args, **kwargs)
        except exc:
            pass


def run_10000(fn, *args, **kwargs):
    for _ in range(10000):
        fn(*args, **kwargs)


def run_10000_exc(exc, fn, *args, **kwargs):
    for _ in range(10000):
        try:
            fn(*args, **kwargs)
        except exc:
            pass


def run_10_async(fn, *args, **kwargs):
    async def runner():
        for _ in range(10):
            await fn(*args, **kwargs)

    return _run_async(runner())


def run_10_async_exc(exc, fn, *args, **kwargs):
    async def runner():
        for _ in range(10):
            try:
                await fn(*args, **kwargs)
            except exc:
                pass

    return _run_async(runner())


def run_100_async(fn, *args, **kwargs):
    async def runner():
        for _ in range(100):
            await fn(*args, **kwargs)

    return _run_async(runner())


def run_500_async(fn, *args, **kwargs):
    async def runner():
        for _ in range(500):
            await fn(*args, **kwargs)

    return _run_async(runner())


def run_1000_async(fn, *args, **kwargs):
    async def runner():
        for _ in range(1000):
            await fn(*args, **kwargs)

    return _run_async(runner())


def run_5000_async(fn, *args, **kwargs):
    async def runner():
        for _ in range(5000):
            await fn(*args, **kwargs)

    return _run_async(runner())


def run_10000_async(fn, *args, **kwargs):
    async def runner():
        for _ in range(10000):
            await fn(*args, **kwargs)

    return _run_async(runner())
