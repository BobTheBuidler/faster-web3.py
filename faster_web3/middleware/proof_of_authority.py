from typing import (
    TYPE_CHECKING,
    Any,
)

from faster_eth_utils import (
    is_dict,
)
from faster_eth_utils.curried import (
    apply_formatter_if,
    apply_formatters_to_dict,
    apply_key_map,
)
from faster_eth_utils.toolz import (
    compose,
)
from faster_hexbytes import (
    HexBytes,
)

from faster_web3._utils.rpc_abi import (
    RPC,
)
from faster_web3.middleware.formatting import (
    FormattingMiddlewareBuilder,
)

if TYPE_CHECKING:
    from faster_web3 import (  # noqa: F401
        AsyncWeb3,
        Web3,
    )

def is_not_null(value: Any) -> bool:
    return value is not None

remap_extradata_to_poa_fields = apply_key_map(
    {
        "extraData": "proofOfAuthorityData",
    }
)

pythonic_extradata_to_poa = apply_formatters_to_dict(
    {
        "proofOfAuthorityData": HexBytes,
    }
)

extradata_to_poa_cleanup = compose(
    pythonic_extradata_to_poa, remap_extradata_to_poa_fields
)


ExtraDataToPOAMiddleware = FormattingMiddlewareBuilder.build(
    result_formatters={
        RPC.eth_getBlockByHash: apply_formatter_if(
            is_not_null, extradata_to_poa_cleanup
        ),
        RPC.eth_getBlockByNumber: apply_formatter_if(
            is_not_null, extradata_to_poa_cleanup
        ),
        RPC.eth_subscribe: apply_formatter_if(
            is_not_null,
            # original call to eth_subscribe returns a string, needs a dict check
            apply_formatter_if(is_dict, extradata_to_poa_cleanup),
        ),
    },
)
