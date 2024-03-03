#pragma once
#include "CoreMinimal.h"
#include "ELocalNotificationEventType.generated.h"

UENUM(BlueprintType)
enum class ELocalNotificationEventType : uint8 {
    None,
    FirstLogin,
    Max,
};

