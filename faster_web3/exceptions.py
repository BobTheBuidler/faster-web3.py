import datetime
import time
from typing import (
    TYPE_CHECKING,
    Any,
    Dict,
    Final,
    Optional,
    Union,
    final,
)

from mypy_extensions import (
    mypyc_attr,
)

from faster_web3.types import (
    BlockData,
    RPCResponse,
)

if TYPE_CHECKING:
    import asyncio


@mypyc_attr(allow_interpreted_subclasses=True)
class Web3Exception(Exception):
    """
    Exception mixin inherited by all exceptions of web3.py

    This allows::

        try:
            some_call()
        except Web3Exception:
            # deal with web3 exception
        except:
            # deal with other exceptions
    """

    user_message: Final[Optional[str]]

    def __init__(
        self,
        *args: Any,
        user_message: Optional[str] = None,
    ):
        super().__init__(*args)

        # Assign properties of Web3Exception
        self.user_message = user_message


@final
@mypyc_attr(native_class=False)
class Web3AssertionError(Web3Exception, AssertionError):
    """
    A web3.py exception wrapper for `AssertionError`, for better control over
    exception handling.
    """


class Web3ValueError(Web3Exception, ValueError):
    """
    A web3.py exception wrapper for `ValueError`, for better control over
    exception handling.
    """


@final
@mypyc_attr(native_class=False)
class Web3AttributeError(Web3Exception, AttributeError):
    """
    A web3.py exception wrapper for `AttributeError`, for better control over
    exception handling.
    """


@final
@mypyc_attr(native_class=False)
class Web3TypeError(Web3Exception, TypeError):
    """
    A web3.py exception wrapper for `TypeError`, for better control over
    exception handling.
    """


@final
class MethodNotSupported(Web3Exception):
    """
    Raised when a method is not supported by the provider.
    """


@final
class BadFunctionCallOutput(Web3Exception):
    """
    We failed to decode ABI output.

    Most likely ABI mismatch.
    """


@final
class BlockNumberOutOfRange(Web3Exception):
    """
    block_identifier passed does not match known block.
    """


@final
class ProviderConnectionError(Web3Exception):
    """
    Raised when unable to connect to a provider
    """


@final
class CannotHandleRequest(Web3Exception):
    """
    Raised by a provider to signal that it cannot handle an RPC request and
    that the manager should proceed to the next provider.
    """


@final
class TooManyRequests(Web3Exception):
    """
    Raised by a provider to signal that too many requests have been made consecutively.
    """


@final
class MultipleFailedRequests(Web3Exception):
    """
    Raised by a provider to signal that multiple requests to retrieve the same
    (or similar) data have failed.
    """


@final
class InvalidAddress(Web3Exception):
    """
    The supplied address does not have a valid checksum, as defined in EIP-55
    """


@final
class NameNotFound(Web3Exception):
    """
    Raised when a caller provides an Ethereum Name Service name that
    does not resolve to an address.
    """


@final
class StaleBlockchain(Web3Exception):
    """
    Raised by the stalecheck_middleware when the latest block is too old.
    """

    def __init__(self, block: BlockData, allowable_delay: int) -> None:
        last_block_date = datetime.datetime.fromtimestamp(block["timestamp"]).strftime(
            "%c"
        )
        message = (
            f"The latest block, #{block['number']}, is "
            f"{time.time() - block['timestamp']} seconds old, but is only "
            f"allowed to be {allowable_delay} s old. "
            f"The date of the most recent block is {last_block_date}. Continue "
            "syncing and try again..."
        )
        super().__init__(message, block, allowable_delay)

    def __str__(self) -> str:
        return self.args[0]


@final
@mypyc_attr(allow_interpreted_subclasses=True)
class MismatchedABI(Web3Exception):
    """
    Raised when an ABI does not match with supplied parameters, or when an
    attempt is made to access a function/event that does not exist in the ABI.
    """


@final
@mypyc_attr(native_class=False)
class ABIEventNotFound(AttributeError, MismatchedABI):
    """
    Raised when an attempt is made to access an event
    that does not exist in the ABI.
    """


@final
@mypyc_attr(native_class=False)
class ABIFunctionNotFound(AttributeError, MismatchedABI):
    """
    Raised when an attempt is made to access a function
    that does not exist in the ABI.
    """


@final
class ABIConstructorNotFound(Web3Exception):
    """
    Raised when a constructor function doesn't exist in contract.
    """


@final
class ABIFallbackNotFound(Web3Exception):
    """
    Raised when a fallback function doesn't exist in contract.
    """


@final
class ABIReceiveNotFound(Web3Exception):
    """
    Raised when a receive function doesn't exist in contract.
    """


class Web3ValidationError(Web3Exception):
    """
    Raised when a supplied value is invalid.
    """


@final
class ExtraDataLengthError(Web3ValidationError):
    """
    Raised when an RPC call returns >32 bytes of extraData.
    """


@final
class NoABIFunctionsFound(Web3Exception):
    """
    Raised when an ABI is present, but doesn't contain any functions.
    """


@final
class NoABIFound(Web3Exception):
    """
    Raised when no ABI is present.
    """


@final
class NoABIEventsFound(Web3Exception):
    """
    Raised when an ABI doesn't contain any events.
    """


@final
class InsufficientData(Web3Exception):
    """
    Raised when there are insufficient data points to
    complete a calculation
    """


@final
class TimeExhausted(Web3Exception):
    """
    Raised when a method has not retrieved the desired
    result within a specified timeout.
    """


@final
class InfuraProjectIdNotFound(Web3Exception):
    """
    Raised when there is no Infura Project Id set.
    """


@final
class LogTopicError(Web3Exception):
    """
    Raised when the number of log topics is mismatched.
    """


@final
class InvalidEventABI(Web3Exception):
    """
    Raised when the event ABI is invalid.
    """


class ContractLogicError(Web3Exception):
    """
    Raised on a contract revert error
    """

    def __init__(
        self,
        message: Optional[str] = None,
        data: Optional[Union[str, Dict[str, str]]] = None,
    ):
        super().__init__(message, data)
        self.message: Final = message
        self.data: Final = data


@final
class ContractCustomError(ContractLogicError):
    """
    Raised on a contract revert custom error
    """


@final
class ContractPanicError(ContractLogicError):
    """
    Raised when a contract reverts with Panic, as of Solidity 0.8.0
    """


@final
class OffchainLookup(ContractLogicError):
    """
    Raised when a contract reverts with OffchainLookup as described in EIP-3668
    """

    def __init__(self, payload: Dict[str, Any], data: Optional[str] = None) -> None:
        self.payload: Final = payload
        self.data: Final = data
        super().__init__(data=data)


class InvalidTransaction(Web3Exception):
    """
    Raised when a transaction includes an invalid combination of arguments.
    """

    def __init__(self, message: str) -> None:
        super().__init__(message)


@final
class TransactionTypeMismatch(InvalidTransaction):
    """
    Raised when legacy transaction values are used alongside dynamic
    fee (EIP-1559) transaction values.
    """

    def __init__(self) -> None:
        message = "Found legacy and EIP 1559 transaction values."
        super().__init__(message)


@final
class BadResponseFormat(Web3Exception):
    """
    Raised when a JSON-RPC response comes back in an unexpected format
    """


class TaskNotRunning(Web3Exception):
    """
    Used to signal between asyncio contexts that a task that is being awaited
    is not currently running.
    """

    def __init__(
        self, task: "asyncio.Task[Any]", message: Optional[str] = None
    ) -> None:
        self.task: Final = task
        if message is None:
            message = f"Task {task} is not running."
        self.message: Final = message
        super().__init__(message)


class PersistentConnectionError(Web3Exception):
    """
    Raised when a persistent connection encounters an error.
    """


@final
class ReadBufferLimitReached(PersistentConnectionError, Web3ValueError):
    """
    Raised when the read buffer limit is reached while reading data from a persistent
    connection.
    """


@final
class PersistentConnectionClosedOK(PersistentConnectionError):
    """
    Raised when a persistent connection is closed gracefully by the server.
    """


@final
class SubscriptionProcessingFinished(PersistentConnectionError):
    """
    Raised to alert the subscription manager that the processing of subscriptions
    has finished.
    """


@final
class SubscriptionHandlerTaskException(TaskNotRunning):
    """
    Raised to alert the subscription manager that an exception occurred in the
    subscription processing task.
    """


class Web3RPCError(Web3Exception):
    """
    Raised when a JSON-RPC response contains an error field.
    """

    def __init__(
        self,
        message: str,
        rpc_response: Optional[RPCResponse] = None,
        user_message: Optional[str] = None,
    ) -> None:
        if user_message is None:
            user_message = (
                "An RPC error was returned by the node. Check the message provided in "
                "the error and any available logs for more information."
            )

        super().__init__(
            message,
            user_message=user_message,
        )
        self.message: Final = message
        self.rpc_response: Final = rpc_response


@final
class MethodUnavailable(Web3RPCError):
    """
    Raised when the method is not available on the node
    """


@final
class RequestTimedOut(Web3RPCError):
    """
    Raised when a request to the node times out.
    """


@final
class TransactionNotFound(Web3RPCError):
    """
    Raised when a tx hash used to look up a tx in a jsonrpc call cannot be found.
    """


@final
class TransactionIndexingInProgress(Web3RPCError):
    """
    Raised when a transaction receipt is not yet available due to transaction indexing
    still being in progress.
    """


@final
class BlockNotFound(Web3RPCError):
    """
    Raised when the block id used to look up a block in a jsonrpc call cannot be found.
    """
