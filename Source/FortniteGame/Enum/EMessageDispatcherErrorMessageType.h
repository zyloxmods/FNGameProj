#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EMessageDispatcherErrorMessageType : uint8 
{
	FailedToSetReceiver_TooManyReceivers,
	FailedToSetReceiver_TooManyReceiversOnOneChannel,
	FailedToSetTriggerReceiver_InvalidChannel,
	FailedToEnqueueMessage,
	BuildLimitReached,
	UnknownError,
	EMessageDispatcherErrorMessageType_MAX,
};
