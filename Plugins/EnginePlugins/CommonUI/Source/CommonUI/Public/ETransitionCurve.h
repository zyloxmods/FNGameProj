#pragma once
#include "CoreMinimal.h"
#include "ETransitionCurve.generated.h"

UENUM(BlueprintType)
enum class ETransitionCurve : uint8 {
    Linear,
    QuadIn,
    QuadOut,
    QuadInOut,
    CubicIn,
    CubicOut,
    CubicInOut,
};

