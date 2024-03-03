#pragma once
#include "CoreMinimal.h"
#include "EFortItemCooldownType.generated.h"

UENUM(BlueprintType)
enum class EFortItemCooldownType : uint8 {
    None,
    AmmoRegeneration,
    ItemActivation,
    WeaponReloading,
    Death,
    AthenaWeaponFireCooldown,
    AbilitySetActivateByInputAbility,
};

