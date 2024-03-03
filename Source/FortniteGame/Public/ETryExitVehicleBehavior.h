#pragma once
#include "CoreMinimal.h"
#include "ETryExitVehicleBehavior.generated.h"

UENUM(BlueprintType)
enum class ETryExitVehicleBehavior : uint8 {
    DoNotForce,
    ForceOnBlocking,
    ForceAlways,
};

