#pragma once
#include "CoreMinimal.h"
#include "EFortWeaponAbilityRemovalReason.generated.h"

UENUM(BlueprintType)
enum class EFortWeaponAbilityRemovalReason : uint8 {
    RemovedFromInventory,
    EndPlay,
    Unequipped,
    INVALID_MAX UMETA(Hidden),
};

