import web3

import faster_web3

from benchmarks.web3.fixtures.core import (
    LOCALHOST_HTTP_ENDPOINT,
)


def web3_http_provider(cache_allowed=True, threshold=3600):
    return web3.HTTPProvider(
        LOCALHOST_HTTP_ENDPOINT,
        cache_allowed_requests=cache_allowed,
        request_cache_validation_threshold=threshold,
    )


def faster_http_provider(cache_allowed=True, threshold=3600):
    return faster_web3.HTTPProvider(
        LOCALHOST_HTTP_ENDPOINT,
        cache_allowed_requests=cache_allowed,
        request_cache_validation_threshold=threshold,
    )


def web3_async_http_provider(cache_allowed=True, threshold=3600):
    return web3.AsyncHTTPProvider(
        LOCALHOST_HTTP_ENDPOINT,
        cache_allowed_requests=cache_allowed,
        request_cache_validation_threshold=threshold,
    )


def faster_async_http_provider(cache_allowed=True, threshold=3600):
    return faster_web3.AsyncHTTPProvider(
        LOCALHOST_HTTP_ENDPOINT,
        cache_allowed_requests=cache_allowed,
        request_cache_validation_threshold=threshold,
    )
