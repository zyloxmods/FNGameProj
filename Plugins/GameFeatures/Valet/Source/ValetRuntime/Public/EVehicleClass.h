#pragma once
#include "CoreMinimal.h"
#include "EVehicleClass.generated.h"

UENUM(BlueprintType)
enum class EVehicleClass : uint8 {
    Sedan,
    Sport,
    PickupTruck,
    SemiTruck,
};

