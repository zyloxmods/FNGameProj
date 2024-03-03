#pragma once
#include "CoreMinimal.h"
#include "EEquippedWeaponDisplay.generated.h"

UENUM(BlueprintType)
enum class EEquippedWeaponDisplay : uint8 {
    None,
    Resource,
    Magazine,
    Utility,
    Chargeable,
};

