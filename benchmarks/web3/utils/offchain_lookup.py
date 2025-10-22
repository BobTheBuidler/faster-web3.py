import pytest

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

TX_PARAMS = {"to": b"\x00" * 20}


cases = []
for payload, payload_name in [(OFFCHAIN_LOOKUP_PAYLOAD_BYTES, "bytes"), (OFFCHAIN_LOOKUP_PAYLOAD_HEX, "hexstr")]:
    for url, patch_method in [
        ("https://fake.node/", "post"),
        ("https://fake.node/{sender}/{data}", "get"),
    ]:
        cases.extend(
            (
                # Case 1: Single URL, always succeeds
                pytest.param(
                    payload,
                    [url],
                    patch_method,
                    [],
                    id=f"{patch_method}-single-{payload_name}",
                ),
                # Case 2: Two URLs, first fails, second succeeds
                pytest.param(
                    payload,
                    [f"fail-{url}", url],
                    patch_method,
                    [0],
                    id=f"{patch_method}-try2-{payload_name}",
                ),
                # Case 3: Three URLs, first and second fail, third succeeds
                pytest.param(
                    payload,
                    [f"fail-{url}", f"try3-{url}", url],
                    patch_method,
                    [0, 1],
                    id=f"{patch_method}-try3-{payload_name}",
                ),
            )
        )
    
parametrize_offchain_lookup = pytest.mark.parametrize(
    "payload,urls,patch_method,fail_indices", cases
)
