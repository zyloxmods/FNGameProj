#pragma once
#include "CoreMinimal.h"
#include "EFortWeaponOverheatState.generated.h"

UENUM(BlueprintType)
enum class EFortWeaponOverheatState : uint8 {
    None,
    Heating,
    Cooling,
    Overheated,
};

