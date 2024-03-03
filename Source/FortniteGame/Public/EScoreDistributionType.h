#pragma once
#include "CoreMinimal.h"
#include "EScoreDistributionType.generated.h"

UENUM(BlueprintType)
enum class EScoreDistributionType : uint8 {
    Default,
    DivideByDamage,
    DivideEvenly,
    AllToKiller,
};

