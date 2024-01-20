#pragma once
#include "CoreMinimal.h"
#include "EGoosePickupState.generated.h"

UENUM(BlueprintType)
enum class EGoosePickupState : uint8 {
    None,
    Falling,
    Deployed,
    ImpactedByPlane,
    DeployTimerUp,
};

