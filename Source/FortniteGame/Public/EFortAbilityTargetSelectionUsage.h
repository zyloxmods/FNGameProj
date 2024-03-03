#pragma once
#include "CoreMinimal.h"
#include "EFortAbilityTargetSelectionUsage.generated.h"

UENUM(BlueprintType)
enum class EFortAbilityTargetSelectionUsage : uint8 {
    BothTargetingAndCanHit,
    OnlyTargeting,
    OnlyCanHit,
};

