from web3.utils.subscriptions import (
    LogsSubscription,
    NewHeadsSubscription,
    PendingTxSubscription,
)

from faster_web3.utils.subscriptions import (
    LogsSubscription as FasterLogsSubscription,
    NewHeadsSubscription as FasterNewHeadsSubscription,
    PendingTxSubscription as FasterPendingTxSubscription,
)

from benchmarks.web3.fixtures.core import (
    HEX_2,
)
from benchmarks.web3.fixtures.rpc import (
    SUBSCRIPTION_ID_1,
)


SUBSCRIPTION_ID_3 = "0x3"
HANDLED_SUBSCRIPTION_ID = "0x4"


async def handler(_context):
    return None


def assign_id(subscription, subscription_id):
    subscription._id = subscription_id
    return subscription


def web3_subscription_set():
    return (
        assign_id(NewHeadsSubscription(label="heads"), SUBSCRIPTION_ID_1),
        assign_id(LogsSubscription(label="logs"), HEX_2),
        assign_id(PendingTxSubscription(label="txs"), SUBSCRIPTION_ID_3),
    )


def faster_subscription_set():
    return (
        assign_id(FasterNewHeadsSubscription(label="heads"), SUBSCRIPTION_ID_1),
        assign_id(FasterLogsSubscription(label="logs"), HEX_2),
        assign_id(FasterPendingTxSubscription(label="txs"), SUBSCRIPTION_ID_3),
    )


def web3_handler_subscription():
    return assign_id(
        NewHeadsSubscription(label="handled", handler=handler),
        HANDLED_SUBSCRIPTION_ID,
    )


def faster_handler_subscription():
    return assign_id(
        FasterNewHeadsSubscription(label="handled", handler=handler),
        HANDLED_SUBSCRIPTION_ID,
    )


def web3_subscription(label):
    return NewHeadsSubscription(label=label)


def faster_subscription(label):
    return FasterNewHeadsSubscription(label=label)


def web3_subscription_sequence(prefix):
    return (
        NewHeadsSubscription(label=f"{prefix}-heads"),
        LogsSubscription(label=f"{prefix}-logs"),
        PendingTxSubscription(label=f"{prefix}-txs"),
    )


def faster_subscription_sequence(prefix):
    return (
        FasterNewHeadsSubscription(label=f"{prefix}-heads"),
        FasterLogsSubscription(label=f"{prefix}-logs"),
        FasterPendingTxSubscription(label=f"{prefix}-txs"),
    )


def web3_duplicate_subscription_sequence(_prefix):
    return (
        NewHeadsSubscription(label="duplicate"),
        LogsSubscription(label="duplicate"),
    )


def faster_duplicate_subscription_sequence(_prefix):
    return (
        FasterNewHeadsSubscription(label="duplicate"),
        FasterLogsSubscription(label="duplicate"),
    )
