#pragma once
#include "CoreMinimal.h"
#include "EFortAbilityChargeState.generated.h"

UENUM(BlueprintType)
enum class EFortAbilityChargeState : uint8 {
    None,
    ChargingUp,
    MaxCharge,
    Discharge,
    ChargingDown,
};

