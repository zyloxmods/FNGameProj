#pragma once
#include "CoreMinimal.h"
#include "EFortWeaponUpgradeInteractionResult.generated.h"

UENUM(BlueprintType)
enum class EFortWeaponUpgradeInteractionResult : uint8 {
    Upgradable,
    NotEnoughResources,
    CannotUpgrade,
    CannotInteract,
};

