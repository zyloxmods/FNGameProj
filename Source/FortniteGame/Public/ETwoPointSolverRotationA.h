#pragma once
#include "CoreMinimal.h"
#include "ETwoPointSolverRotationA.generated.h"

UENUM(BlueprintType)
enum class ETwoPointSolverRotationA : uint8 {
    PointAToQuerier,
    QuerierToPointA,
    PointAToQuerierWithRandomOffset,
    QuerierToPointAWithRandomOffset,
    Custom,
};

