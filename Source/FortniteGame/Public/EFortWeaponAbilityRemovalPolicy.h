#pragma once
#include "CoreMinimal.h"
#include "EFortWeaponAbilityRemovalPolicy.generated.h"

UENUM(BlueprintType)
enum class EFortWeaponAbilityRemovalPolicy : uint8 {
    GameDefault,
    Remove,
    Persist,
};

