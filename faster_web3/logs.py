from typing import (
    Final,
)

from faster_web3._utils.events import (
    EventLogErrorFlags,
)

DISCARD: Final = EventLogErrorFlags.Discard
IGNORE: Final = EventLogErrorFlags.Ignore
STRICT: Final = EventLogErrorFlags.Strict
WARN: Final = EventLogErrorFlags.Warn
