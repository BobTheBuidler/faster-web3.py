import pytest

from benchmarks.web3.fixtures.http import (
    AIOHTTP_CLIENT_SESSION_GET,
    AIOHTTP_CLIENT_SESSION_POST,
    REQUESTS_SESSION_GET,
    REQUESTS_SESSION_POST,
    StaticAiohttpResponse,
    StaticResponse,
)


OFFCHAIN_LOOKUP_PAYLOAD_BYTES = {
    "sender": b"\x00" * 20,
    "callData": b"\x01\x02\x03",
    "callbackFunction": b"\x12\x34\x56\x78",
    "extraData": b"\x04\x05",
}
OFFCHAIN_LOOKUP_PAYLOAD_HEX = {
    "sender": "0x" + "00" * 20,
    "callData": "0x010203",
    "callbackFunction": "0x12345678",
    "extraData": "0x0405",
}
OFFCHAIN_LOOKUP_TX_PARAMS = {"to": b"\x00" * 20}
OFFCHAIN_LOOKUP_RESPONSE = {"data": "0xdeadbeef"}
OFFCHAIN_LOOKUP_RESPONSE_OBJECT = StaticResponse(b"", OFFCHAIN_LOOKUP_RESPONSE)
OFFCHAIN_LOOKUP_AIOHTTP_RESPONSE_OBJECT = StaticAiohttpResponse(
    b"",
    OFFCHAIN_LOOKUP_RESPONSE,
)
OFFCHAIN_LOOKUP_PATCH_TARGETS = {
    "get": (REQUESTS_SESSION_GET, AIOHTTP_CLIENT_SESSION_GET),
    "post": (REQUESTS_SESSION_POST, AIOHTTP_CLIENT_SESSION_POST),
}


cases = []
for payload, payload_name in [
    (OFFCHAIN_LOOKUP_PAYLOAD_BYTES, "bytes"),
    (OFFCHAIN_LOOKUP_PAYLOAD_HEX, "hexstr"),
]:
    for url, patch_method in [
        ("https://fake.node/", "post"),
        ("https://fake.node/{sender}/{data}", "get"),
    ]:
        requests_patch_target, aiohttp_patch_target = OFFCHAIN_LOOKUP_PATCH_TARGETS[
            patch_method
        ]
        cases.extend(
            (
                pytest.param(
                    payload,
                    [url],
                    requests_patch_target,
                    aiohttp_patch_target,
                    [],
                    id=f"{patch_method}-single-{payload_name}",
                ),
                pytest.param(
                    payload,
                    [f"fail-{url}", url],
                    requests_patch_target,
                    aiohttp_patch_target,
                    [0],
                    id=f"{patch_method}-try2-{payload_name}",
                ),
                pytest.param(
                    payload,
                    [f"fail-{url}", f"try3-{url}", url],
                    requests_patch_target,
                    aiohttp_patch_target,
                    [0, 1],
                    id=f"{patch_method}-try3-{payload_name}",
                ),
            )
        )


parametrize_offchain_lookup = pytest.mark.parametrize(
    "payload,urls,requests_patch_target,aiohttp_patch_target,fail_indices",
    cases,
)
