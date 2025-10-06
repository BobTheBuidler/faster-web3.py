import pytest

@pytest.fixture
def fake_ens_registry():
    """
    Returns the fake ENS registry address used in benchmarks.
    This address is required so that all ENS contract calls in tests
    are routed to a known, controlled value, allowing the fake RPC
    handler to simulate ENS contract behavior deterministically.
    """
    return "0x0000000000000000000000000000000000000002"

@pytest.fixture
def fake_resolver():
    """
    Returns the fake resolver contract address for ENS benchmarks.
    This address is used to simulate the resolver contract in the
    ENS resolution chain, enabling predictable test results.
    """
    return "0x0000000000000000000000000000000000000001"

@pytest.fixture
def fake_result_addr():
    """
    Returns the fake result address for ENS resolution.
    This address is returned by the fake resolver to simulate
    a successful ENS name resolution in benchmarks.
    """
    return "0x314159265dD8dbb310642f98f50C066173C1259b"

@pytest.fixture
def fake_json_rpc_response_factory(fake_ens_registry, fake_resolver, fake_result_addr):
    """
    Returns a function that simulates JSON-RPC responses for ENS contract calls.
    This handler intercepts eth_call and eth_getCode requests to the fake
    registry and resolver addresses, returning deterministic results for
    benchmarking ENS resolution logic.
    """
    def _response(request_data: dict):
        method = request_data.get("method")
        params = request_data.get("params", [])
        if method == "eth_call":
            call_data = params[0]
            to_addr = call_data.get("to", "").lower()
            if to_addr == fake_ens_registry.lower():
                return {
                    "jsonrpc": "2.0",
                    "id": request_data["id"],
                    "result": "0x" + "0" * 24 + fake_resolver[2:]
                }
            elif to_addr == fake_resolver.lower():
                return {
                    "jsonrpc": "2.0",
                    "id": request_data["id"],
                    "result": "0x" + "0" * 24 + fake_result_addr[2:]
                }
            else:
                return {
                    "jsonrpc": "2.0",
                    "id": request_data["id"],
                    "result": "0x" + "0" * 40
                }
        elif method == "eth_getCode":
            addr = params[0].lower()
            if addr == fake_resolver.lower():
                return {
                    "jsonrpc": "2.0",
                    "id": request_data["id"],
                    "result": "0x6001600101"
                }
            else:
                return {
                    "jsonrpc": "2.0",
                    "id": request_data["id"],
                    "result": "0x"
                }
        return {
            "jsonrpc": "2.0",
            "id": request_data["id"],
            "result": None
        }
    return _response
