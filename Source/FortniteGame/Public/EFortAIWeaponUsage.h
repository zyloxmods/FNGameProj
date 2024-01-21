#pragma once
#include "CoreMinimal.h"
#include "EFortAIWeaponUsage.generated.h"

UENUM(BlueprintType)
enum class EFortAIWeaponUsage : uint8 {
    NoWeaponUsage,
    UsesRangedWeapon,
    UsesMeleeWeapon,
};

