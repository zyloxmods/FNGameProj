#pragma once
#include "CoreMinimal.h"
#include "EFortProximityBasedGEApplicationType.generated.h"

UENUM(BlueprintType)
enum class EFortProximityBasedGEApplicationType : uint8 {
    ApplyOnProximityPulse,
    ApplyOnProximityTouch,
    ApplyOnlyDuringProximityTouch,
    ApplyOnProximityExit,
    ApplyOnProximityPrePulse,
};

