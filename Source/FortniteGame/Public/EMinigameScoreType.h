#pragma once
#include "CoreMinimal.h"
#include "EMinigameScoreType.generated.h"

UENUM(BlueprintType)
enum class EMinigameScoreType : uint8 {
    Time,
    PointTotal,
};

