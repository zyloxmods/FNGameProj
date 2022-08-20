#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EEventResponderEventType : uint8 
{
	PersistentEventJoinInProgress,
	PersistentEventStart,
	PersistentEventChange,
	PersistentEventEnd,
	EEventResponderEventType_MAX,
};
