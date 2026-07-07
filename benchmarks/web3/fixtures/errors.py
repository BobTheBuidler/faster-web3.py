import eth_abi

from benchmarks.web3.fixtures.core import (
    EXAMPLE_ADDRESS_LOWER,
)

OFFCHAIN_LOOKUP_SELECTOR = "0x556f1830"
OFFCHAIN_LOOKUP_TYPES = ("address", "string[]", "bytes", "bytes4", "bytes")
OFFCHAIN_LOOKUP_URLS = ("https://example.invalid/{data}",)
OFFCHAIN_LOOKUP_CALL_DATA = b"\x12\x34"
OFFCHAIN_LOOKUP_CALLBACK_FUNCTION = b"\x12\x34\x56\x78"
OFFCHAIN_LOOKUP_EXTRA_DATA = b"\x56\x78"
REVERT_REASON_SELECTOR_BYTES = b"\x08\xc3\x79\xa0"

REVERT_WITH_MSG = (
    "0x08c379a0"
    "00000000000000000000000000000000000000000000000000000000000000020"
    "0000000000000000000000000000000000000000000000000000000000000000b"
    "457865637574696f6e000000000000000000000000000000000000000000000000"
)
PANIC = "0x4e487b71" "0000000000000000000000000000000000000000000000000000000000000011"
PANIC_BYTES = bytes.fromhex(PANIC[2:])
CUSTOM_ERROR = "0x82b42900" "000000000000000000000000" f"{EXAMPLE_ADDRESS_LOWER[2:]}"
OFFCHAIN_LOOKUP = (
    OFFCHAIN_LOOKUP_SELECTOR
    + eth_abi.encode(
        OFFCHAIN_LOOKUP_TYPES,
        (
            EXAMPLE_ADDRESS_LOWER,
            OFFCHAIN_LOOKUP_URLS,
            OFFCHAIN_LOOKUP_CALL_DATA,
            OFFCHAIN_LOOKUP_CALLBACK_FUNCTION,
            OFFCHAIN_LOOKUP_EXTRA_DATA,
        ),
    ).hex()
)
OFFCHAIN_LOOKUP_BYTES = bytes.fromhex(OFFCHAIN_LOOKUP[2:])
REVERT_REASON_BYTES = REVERT_REASON_SELECTOR_BYTES + eth_abi.encode(
    ("string",), ("nope",)
)
REVERT_RESPONSES = (
    {
        "error": {
            "code": -32015,
            "message": "VM execution error.",
            "data": REVERT_WITH_MSG,
        }
    },
    {"error": {"code": 3, "message": "execution reverted", "data": REVERT_WITH_MSG}},
    {"error": {"code": 3, "message": "execution reverted", "data": None}},
    {
        "error": {
            "code": -32000,
            "message": "execution reverted",
            "data": {"originalError": {"data": REVERT_WITH_MSG}},
        }
    },
    {"error": {"code": 3, "message": "execution reverted: message only"}},
    {"error": {"code": 3, "message": "execution reverted", "data": PANIC}},
    {"error": {"code": 3, "message": "execution reverted", "data": CUSTOM_ERROR}},
    {"error": {"code": 3, "message": "execution reverted", "data": OFFCHAIN_LOOKUP}},
)
