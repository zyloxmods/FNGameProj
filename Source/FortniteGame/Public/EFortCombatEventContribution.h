#pragma once
#include "CoreMinimal.h"
#include "EFortCombatEventContribution.generated.h"

UENUM(BlueprintType)
namespace EFortCombatEventContribution {
    enum Type {
        Linear,
        Inverse,
        Accumulator,
        Max_None,
    };
}

