#pragma once
#include "CoreMinimal.h"
#include "EProceduralScatterContentPivotMode.generated.h"

UENUM(BlueprintType)
enum class EProceduralScatterContentPivotMode : uint8 {
    UsePivot,
    UseBoundingBoxCenter,
    UseBoundingBoxBottomCenter,
    UseFootprintBoundingBoxBottomCenter,
};

