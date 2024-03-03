#pragma once
#include "CoreMinimal.h"
#include "EFortWeaponUpgradeDirection.generated.h"

UENUM(BlueprintType)
enum class EFortWeaponUpgradeDirection : uint8 {
    NotSet,
    Vertical,
    Horizontal,
};

