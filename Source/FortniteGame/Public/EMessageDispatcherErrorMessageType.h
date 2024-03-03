#pragma once
#include "CoreMinimal.h"
#include "EMessageDispatcherErrorMessageType.generated.h"

UENUM(BlueprintType)
enum class EMessageDispatcherErrorMessageType : uint8 {
    FailedToSetTrigger_TooManyTriggers,
    FailedToSetReceiver_TooManyReceivers,
    FailedToSetReceiver_TooManyReceiversOnOneChannel,
    FailedToSetTriggerReceiver_InvalidChannel,
    FailedToEnqueueMessage,
    BuildLimitReached,
    UnknownError,
};

