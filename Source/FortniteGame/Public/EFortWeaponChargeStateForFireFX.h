#pragma once
#include "CoreMinimal.h"
#include "EFortWeaponChargeStateForFireFX.generated.h"

UENUM(BlueprintType)
enum class EFortWeaponChargeStateForFireFX : uint8 {
    Partial,
    Full,
    Over,
    Max_None UMETA(Hidden),
};

