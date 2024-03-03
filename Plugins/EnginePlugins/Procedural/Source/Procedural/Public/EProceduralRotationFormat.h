#pragma once
#include "CoreMinimal.h"
#include "EProceduralRotationFormat.generated.h"

UENUM(BlueprintType)
enum class EProceduralRotationFormat : uint8 {
    VectorXAxis,
    VectorXAxisNegative,
    VectorYAxis,
    VectorYAxisNegative,
    VectorZAxis,
    VectorZAxisNegative,
    Vector2DXAxis,
    Vector2DXAxisNegative,
    Vector2DYAxis,
    Vector2DYAxisNegative,
    Vector2DZAxis,
    Vector2DZAxisNegative,
    RangedRotator,
};

