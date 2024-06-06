#pragma once
#include "CoreMinimal.h"
#include "EFortWeaponSoundState.generated.h"

UENUM(BlueprintType)
namespace EFortWeaponSoundState {
    enum Type {
        Normal,
        LowAmmo,
        Degraded,
        Max_None UMETA(Hidden),
    };
}

