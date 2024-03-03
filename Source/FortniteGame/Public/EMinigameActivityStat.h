#pragma once
#include "CoreMinimal.h"
#include "EMinigameActivityStat.generated.h"

UENUM(BlueprintType)
enum class EMinigameActivityStat : uint8 {
    Time,
    Distance,
    COUNT,
};

