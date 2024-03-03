#pragma once
#include "CoreMinimal.h"
#include "EEventResponderEventType.generated.h"

UENUM(BlueprintType)
enum class EEventResponderEventType : uint8 {
    OneShotEvent,
    PersistentEventStart,
    PersistentEventChange,
    PersistentEventEnd,
};

