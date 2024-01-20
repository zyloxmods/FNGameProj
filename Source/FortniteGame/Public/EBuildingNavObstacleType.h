#pragma once
#include "CoreMinimal.h"
#include "EBuildingNavObstacleType.generated.h"

UENUM(BlueprintType)
enum class EBuildingNavObstacleType : uint8 {
    UnwalkableAll,
    UnwalkableHuskOnly,
    SmashWhenLowHeight,
    SmashOnlyLowHeight,
    SmashSmasherOnly,
    SmashAll,
};

