#pragma once
#include "CoreMinimal.h"
#include "EStatRecordingPeriod.generated.h"

UENUM(BlueprintType)
enum class EStatRecordingPeriod : uint8 {
    Minute,
    AthenaSafeZonePhase,
    Life,
    Map,
    Campaign,
    Persistent,
    Max,
};

