#pragma once
#include "CoreMinimal.h"
#include "EFortFuelGadgetVisualType.generated.h"

UENUM(BlueprintType)
enum class EFortFuelGadgetVisualType : uint8 {
    FuelMeter,
    ChargeText,
    Invalid,
};

