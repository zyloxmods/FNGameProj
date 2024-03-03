#pragma once
#include "CoreMinimal.h"
#include "EProceduralParameterModifierBlendMode.generated.h"

UENUM(BlueprintType)
enum class EProceduralParameterModifierBlendMode : uint8 {
    Min,
    Max,
    Additive,
    Subtractive,
    Multiply,
    Interpolate,
};

