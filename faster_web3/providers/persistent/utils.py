import functools
from typing import (
    TYPE_CHECKING,
    Any,
    Callable,
    Optional,
)

from typing_extensions import (
    Concatenate,
    ParamSpec,
)

from faster_web3.exceptions import (
    Web3ValidationError,
)
from faster_web3.providers import (
    PersistentConnectionProvider,
)
from faster_web3.types import (
    TReturn,
)

if TYPE_CHECKING:
    from faster_web3.main import (  # noqa: F401
        AsyncWeb3,
    )


P = ParamSpec("P")

AsyncWeb3Method = Callable[Concatenate["AsyncWeb3[Any]", P], TReturn]


def persistent_connection_provider_method(
    message: Optional[str] = None,
) -> Callable[[AsyncWeb3Method[P, TReturn]], AsyncWeb3Method[P, TReturn]]:
    """
    Decorator that raises an exception if the provider is not an instance of
    ``PersistentConnectionProvider``.
    """

    def decorator(
        func: AsyncWeb3Method[P, TReturn],
    ) -> AsyncWeb3Method[P, TReturn]:
        if message is None:
            message_actual = (
                f"``{func.__name__}`` can only be called on a "
                "``PersistentConnectionProvider`` instance."
            )
        else:
            message_actual = message

        @functools.wraps(func)
        def inner(self: "AsyncWeb3[Any]", *args: P.args, **kwargs: P.kwargs) -> TReturn:
            if not isinstance(self.provider, PersistentConnectionProvider):
                raise Web3ValidationError(message_actual)
            return func(self, *args, **kwargs)

        return inner

    return decorator
