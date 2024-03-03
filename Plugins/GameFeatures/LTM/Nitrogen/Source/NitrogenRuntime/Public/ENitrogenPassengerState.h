#pragma once
#include "CoreMinimal.h"
#include "ENitrogenPassengerState.generated.h"

UENUM(BlueprintType)
enum class ENitrogenPassengerState : uint8 {
    None,
    HailingCab,
    VehicleSeated,
    DroppedOff,
};

