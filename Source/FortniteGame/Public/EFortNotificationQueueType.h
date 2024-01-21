#pragma once
#include "CoreMinimal.h"
#include "EFortNotificationQueueType.generated.h"

UENUM(BlueprintType)
enum class EFortNotificationQueueType : uint8 {
    Toasts,
    Stickies,
    Messages,
    Max,
};

