#pragma once
#include "CoreMinimal.h"
#include "EQuickHealingRequirementFlags.generated.h"

UENUM(BlueprintType)
enum class EQuickHealingRequirementFlags : uint8 {
    Nothing,
    NeedsHealing,
    NeedsShields,
    NeedsBoth,
};

