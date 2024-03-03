#pragma once
#include "CoreMinimal.h"
#include "ELocalNotificationType.generated.h"

UENUM(BlueprintType)
enum class ELocalNotificationType : uint8 {
    SpecificDateTime,
    RangeDateTime,
    Max,
};

