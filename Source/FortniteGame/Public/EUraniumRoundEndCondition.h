#pragma once
#include "CoreMinimal.h"
#include "EUraniumRoundEndCondition.generated.h"

UENUM(BlueprintType)
enum class EUraniumRoundEndCondition : uint8 {
    RanOutOfTime_Or_CheckpointReached,
    RanOutOfTime_Or_LastCheckpointReached,
    RanOutOfTime_Or_MAX UMETA(Hidden),
};

