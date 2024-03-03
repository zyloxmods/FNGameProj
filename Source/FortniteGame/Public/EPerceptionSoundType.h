#pragma once
#include "CoreMinimal.h"
#include "EPerceptionSoundType.generated.h"

UENUM(BlueprintType)
namespace EPerceptionSoundType {
    enum Type {
        Default,
        Explosion,
        ProjectileFlyBy,
        ProjectileImpact,
        WeaponFiring,
        Building,
        MeleeImpact,
        MAX,
    };
}

