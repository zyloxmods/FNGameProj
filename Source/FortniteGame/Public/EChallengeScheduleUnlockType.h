#pragma once
#include "CoreMinimal.h"
#include "EChallengeScheduleUnlockType.generated.h"

UENUM(BlueprintType)
enum class EChallengeScheduleUnlockType : uint8 {
    Manually,
    OnScheduleGranted,
    DaysSinceEventStart,
};

