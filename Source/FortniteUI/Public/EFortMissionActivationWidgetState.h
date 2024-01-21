#pragma once
#include "CoreMinimal.h"
#include "EFortMissionActivationWidgetState.generated.h"

UENUM(BlueprintType)
enum class EFortMissionActivationWidgetState : uint8 {
    Default,
    StartObjective,
    IncreaseDifficulty,
    Invalid,
};

