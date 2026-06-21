from eth_abi import (
    encode,
)

from benchmarks.web3.fixtures.core import (
    EXAMPLE_ADDRESS_LOWER,
)


REVERT_WITH_MSG = (
    "0x08c379a0"
    "00000000000000000000000000000000000000000000000000000000000000020"
    "0000000000000000000000000000000000000000000000000000000000000000b"
    "457865637574696f6e000000000000000000000000000000000000000000000000"
)
PANIC = (
    "0x4e487b71"
    "0000000000000000000000000000000000000000000000000000000000000011"
)
PANIC_BYTES = bytes.fromhex(PANIC[2:])
CUSTOM_ERROR = (
    "0x82b42900"
    "000000000000000000000000"
    f"{EXAMPLE_ADDRESS_LOWER[2:]}"
)
OFFCHAIN_LOOKUP = "0x556f1830" + encode(
    ("address", "string[]", "bytes", "bytes4", "bytes"),
    (
        EXAMPLE_ADDRESS_LOWER,
        ("https://example.invalid/{data}",),
        b"\x12\x34",
        b"\x12\x34\x56\x78",
        b"\x56\x78",
    ),
).hex()
OFFCHAIN_LOOKUP_BYTES = bytes.fromhex(OFFCHAIN_LOOKUP[2:])
REVERT_REASON_BYTES = b"\x08\xc3\x79\xa0" + encode(("string",), ("nope",))
