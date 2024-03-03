#pragma once
#include "CoreMinimal.h"
#include "EFortPowerRatingComparison.generated.h"

UENUM(BlueprintType)
enum class EFortPowerRatingComparison : uint8 {
    InRange,
    OverLevel,
    UnderLevel,
    Unknown,
};

