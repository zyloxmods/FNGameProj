#pragma once
#include "CoreMinimal.h"
#include "EPathObstacleAction.generated.h"

UENUM(BlueprintType)
namespace EPathObstacleAction {
    enum Type {
        Melee,
        Ignore,
        AbortMoveAsFailed,
        FinishMoveAsSucceeded,
    };
}

