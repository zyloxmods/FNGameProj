#pragma once
#include "CoreMinimal.h"
#include "EPayoutScoringType.generated.h"

UENUM(BlueprintType)
enum class EPayoutScoringType : uint8 {
    Invalid,
    Points,
    Ranking,
    Percentile,
    Persistent,
};

