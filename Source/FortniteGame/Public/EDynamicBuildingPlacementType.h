#pragma once
#include "CoreMinimal.h"
#include "EDynamicBuildingPlacementType.generated.h"

UENUM(BlueprintType)
namespace EDynamicBuildingPlacementType {
    enum Type {
        CountsTowardsBounds,
        DestroyIfColliding,
        DestroyAnythingThatCollides,
    };
}

