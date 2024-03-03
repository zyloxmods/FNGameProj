#pragma once
#include "CoreMinimal.h"
#include "ETimeLimitForReplayCinematic.generated.h"

UENUM(BlueprintType)
enum class ETimeLimitForReplayCinematic : uint8 {
    OpenTimeLimit,
    DurationTimeLimit,
    DurationExtraTime,
};

