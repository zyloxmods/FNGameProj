#pragma once
#include "CoreMinimal.h"
#include "EFortMusicCombatIntensity.generated.h"

UENUM(BlueprintType)
namespace EFortMusicCombatIntensity {
    enum Type {
        Low,
        Medium,
        High,
        VeryHigh,
        Max_None,
    };
}

