#pragma once
#include "CoreMinimal.h"
#include "ETargetDistanceComparisonType.generated.h"

UENUM(BlueprintType)
namespace ETargetDistanceComparisonType {
    enum Type {
        TwoDimensions,
        ThreeDimensions,
        CollisionHalfHeightMultiplier,
    };
}

