import asyncio
from typing import TYPE_CHECKING, Any, AsyncGenerator, cast

from faster_web3.exceptions import (
    ProviderConnectionError,
    TaskNotRunning,
    Web3TypeError,
)
from faster_web3.providers import (
    PersistentConnectionProvider,
)
from faster_web3.types import (
    FormattedEthSubscriptionResponse,
)

if TYPE_CHECKING:
    from faster_web3.main import (  # noqa: F401
        AsyncWeb3,
    )
    from faster_web3.manager import (
        RequestManager,
    )


async def message_stream(
    self: "RequestManager",
) -> AsyncGenerator[FormattedEthSubscriptionResponse, None]:
    if not isinstance(self._provider, PersistentConnectionProvider):
        raise Web3TypeError(
            "Only providers that maintain an open, persistent connection "
            "can listen to streams."
        )
    async_w3 = cast("AsyncWeb3[Any]", self.w3)

    if self._provider._message_listener_task is None:
        raise ProviderConnectionError("No listener found for persistent connection.")

    while True:
        try:
            response = await self._request_processor.pop_raw_response(subscription=True)
            # if the subscription was unsubscribed from, we won't have a formatted
            # response because we lost the request information.
            sub_id = response.get(
                "subscription", response.get("params", {}).get("subscription")
            )
            if async_w3.subscription_manager.get_by_id(sub_id):
                # if active subscription, process and yield the formatted response
                yield cast(
                    FormattedEthSubscriptionResponse,
                    await self._process_response(response),
                )
            else:
                # if not an active sub, skip processing and continue
                continue
        except TaskNotRunning as e:
            await asyncio.sleep(0)
            self._provider._handle_listener_task_exceptions()
            self.logger.error("Stopping message stream: %s", e.message)
            return
