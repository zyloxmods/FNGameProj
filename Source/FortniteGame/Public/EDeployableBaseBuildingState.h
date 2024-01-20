#pragma once
#include "CoreMinimal.h"
#include "EDeployableBaseBuildingState.generated.h"

UENUM(BlueprintType)
enum class EDeployableBaseBuildingState : uint8 {
    Empty,
    Built,
    Unoccupied,
    WaitingToBuild,
    Building,
    WaitingToDestroy,
    Destroying,
    WaitingToReset,
    Resetting,
};

