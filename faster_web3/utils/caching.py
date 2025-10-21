import asyncio
from collections import (
    OrderedDict,
)
from enum import (
    Enum,
)
import time as _time
from typing import (
    Dict,
    Final,
    Generic,
    List,
    Optional,
    Tuple,
    TypeVar,
    final,
)


T = TypeVar("T")

TimeoutError: Final = asyncio.TimeoutError

sleep: Final = asyncio.sleep
time: Final = _time.time


@final
class RequestCacheValidationThreshold(Enum):
    FINALIZED: Final = "finalized"
    SAFE: Final = "safe"


@final
class SimpleCache(Generic[T]):
    def __init__(self, size: int = 100) -> None:
        self._size: Final = size
        self._data: Final[OrderedDict[str, T]] = OrderedDict()

    def __contains__(self, key: str) -> bool:
        return key in self._data

    def __len__(self) -> int:
        return len(self._data)

    def cache(self, key: str, value: T) -> Tuple[T, Optional[Dict[str, T]]]:
        evicted_items = {}
        # If the key is already in the OrderedDict just update it
        # and don't evict any values. Ideally, we could still check to see
        # if there are too many items in the OrderedDict but that may rearrange
        # the order it should be unlikely that the size could grow over the limit
        if key not in self._data:
            while len(self._data) >= self._size:
                k, v = self._data.popitem(last=False)
                evicted_items[k] = v
        self._data[key] = value

        # Return the cached value along with the evicted items at the same time. No
        # need to reach back into the cache to grab the value.
        return value, evicted_items or None

    def get_cache_entry(self, key: str) -> Optional[T]:
        return self._data[key] if key in self._data else None

    def clear(self) -> None:
        self._data.clear()

    def items(self) -> List[Tuple[str, T]]:
        return list(self._data.items())

    def values(self) -> List[T]:
        return list(self._data.values())

    def pop(self, key: str) -> Optional[T]:
        return self._data.pop(key, None)

    def popitem(self, last: bool = True) -> Tuple[str, T]:
        return self._data.popitem(last=last)

    def is_full(self) -> bool:
        return len(self._data) >= self._size

    # -- async utility methods -- #

    async def async_await_and_popitem(
        self, last: bool = True, timeout: float = 10.0
    ) -> Tuple[str, T]:
        start = time()
        end_time = start + timeout
        while True:
            await sleep(0)
            try:
                return self.popitem(last=last)
            except KeyError:
                now = time()
                if now >= end_time:
                    raise TimeoutError(
                        "Timeout waiting for item to be available"
                    )
                await sleep(min(0.1, end_time - now))
