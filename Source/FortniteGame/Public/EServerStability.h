#pragma once
#include "CoreMinimal.h"
#include "EServerStability.generated.h"

UENUM(BlueprintType)
enum class EServerStability : uint8 {
    Stable,
    LowUnstability,
    HighUnstability,
    Count,
};

