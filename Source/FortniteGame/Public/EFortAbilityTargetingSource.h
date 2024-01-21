#pragma once
#include "CoreMinimal.h"
#include "EFortAbilityTargetingSource.generated.h"

UENUM(BlueprintType)
enum class EFortAbilityTargetingSource : uint8 {
    Camera,
    PawnForward,
    PawnTowardsFocus,
    WeaponForward,
    WeaponTowardsFocus,
    Custom,
    Max_None,
};

