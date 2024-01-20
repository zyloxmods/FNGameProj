#pragma once
#include "CoreMinimal.h"
#include "EFortComparisonType.generated.h"

UENUM(BlueprintType)
enum class EFortComparisonType : uint8 {
    None,
    HigherValue,
    LowerValue,
    Upgrade,
};

