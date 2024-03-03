#pragma once
#include "CoreMinimal.h"
#include "ETrackingOffsetModifierCurve.generated.h"

UENUM(BlueprintType)
namespace ETrackingOffsetModifierCurve {
    enum Type {
        Default,
        CombatStart,
        TargetLowHealth,
        MAX,
    };
}

