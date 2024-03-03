#pragma once
#include "CoreMinimal.h"
#include "EFortFoleyHitAudioType.generated.h"

UENUM(BlueprintType)
namespace EFortFoleyHitAudioType {
    enum Type {
        Body,
        Shield,
        Crit,
        Death,
        DeathCrit,
        Fall,
        FallDeath,
        Max_None,
    };
}

