#pragma once
#include "CoreMinimal.h"
#include "EFortWeaponSoundChannel.generated.h"

UENUM(BlueprintType)
namespace EFortWeaponSoundChannel {
    enum Type {
        NormalA,
        NormalB,
        LowAmmo,
        Degraded,
        Max_None,
    };
}

