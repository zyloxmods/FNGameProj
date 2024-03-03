#pragma once
#include "CoreMinimal.h"
#include "EFortUIScoreType.generated.h"

UENUM(BlueprintType)
namespace EFortUIScoreType {
    enum Type {
        Combat,
        Building,
        Utility,
        Badges,
        Bonus,
        Total,
        Max_None,
    };
}

