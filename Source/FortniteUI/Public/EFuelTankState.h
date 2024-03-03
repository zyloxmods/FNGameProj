#pragma once
#include "CoreMinimal.h"
#include "EFuelTankState.generated.h"

UENUM(BlueprintType)
enum class EFuelTankState : uint8 {
    Empty,
    LowFuel,
    RegularFuel,
};

