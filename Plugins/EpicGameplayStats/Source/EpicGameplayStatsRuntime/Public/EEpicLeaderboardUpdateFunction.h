#pragma once
#include "CoreMinimal.h"
#include "EEpicLeaderboardUpdateFunction.generated.h"

UENUM(BlueprintType)
enum class EEpicLeaderboardUpdateFunction : uint8 {
    Min,
    Max,
    Sum,
    MostRecent,
};

