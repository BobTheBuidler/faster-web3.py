from typing import (
    Any,
    Dict,
    Final,
)

import requests
from faster_eth_abi import (
    abi,
)
from eth_typing import (
    URI,
)

from faster_web3._utils.http import (
    DEFAULT_HTTP_TIMEOUT,
)
from faster_web3._utils.type_conversion import (
    to_bytes_if_hex,
    to_hex_if_bytes,
)
from faster_web3.exceptions import (
    MultipleFailedRequests,
    Web3ValidationError,
)
from faster_web3.types import (
    TxParams,
)


Session: Final = requests.Session

encode: Final = abi.encode


def handle_offchain_lookup(
    offchain_lookup_payload: Dict[str, Any],
    transaction: TxParams,
) -> bytes:
    formatted_sender = to_hex_if_bytes(offchain_lookup_payload["sender"]).lower()
    formatted_data = to_hex_if_bytes(offchain_lookup_payload["callData"]).lower()

    if formatted_sender != to_hex_if_bytes(transaction["to"]).lower():
        raise Web3ValidationError(
            "Cannot handle OffchainLookup raised inside nested call. "
            "Returned `sender` value does not equal `to` address in transaction."
        )

    session = requests.Session()
    for url in offchain_lookup_payload["urls"]:
        formatted_url = URI(
            str(url)
            .replace("{sender}", str(formatted_sender))
            .replace("{data}", str(formatted_data))
        )

        try:
            if "{data}" in url and "{sender}" in url:
                response = session.get(formatted_url, timeout=DEFAULT_HTTP_TIMEOUT)
            else:
                response = session.post(
                    formatted_url,
                    json={"data": formatted_data, "sender": formatted_sender},
                    timeout=DEFAULT_HTTP_TIMEOUT,
                )
        except Exception:
            continue  # try next url if timeout or issues making the request

        status_code = response.status_code
        if 400 <= status_code <= 499:  # if request returns 400 error, raise exception
            response.raise_for_status()
        if not 200 <= status_code <= 299:  # if not 400 error, try next url
            continue

        result = response.json()

        if "data" not in result.keys():
            raise Web3ValidationError(
                "Improperly formatted response for offchain lookup HTTP request"
                " - missing 'data' field."
            )

        # 4-byte callback function selector
        fourbyte = to_bytes_if_hex(offchain_lookup_payload["callbackFunction"])

        # encode the `data` from the result and the `extraData` as bytes
        return fourbyte + encode(
            ("bytes", "bytes"),
            [
                to_bytes_if_hex(result["data"]),
                to_bytes_if_hex(offchain_lookup_payload["extraData"]),
            ],
        )

    raise MultipleFailedRequests("Offchain lookup failed for supplied urls.")
