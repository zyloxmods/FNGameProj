#pragma once
#include "CoreMinimal.h"
#include "ESurvivalObjectiveIconState.generated.h"

UENUM(BlueprintType)
enum class ESurvivalObjectiveIconState : uint8 {
    None,
    Spawned,
    Destroyed,
};

