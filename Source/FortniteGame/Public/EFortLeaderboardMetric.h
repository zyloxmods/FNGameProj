#pragma once
#include "CoreMinimal.h"
#include "EFortLeaderboardMetric.generated.h"

UENUM(BlueprintType)
enum class EFortLeaderboardMetric : uint8 {
    Score,
    Kills,
    TeamScore,
};

