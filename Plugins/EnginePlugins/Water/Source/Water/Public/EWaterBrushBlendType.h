#pragma once
#include "CoreMinimal.h"
#include "EWaterBrushBlendType.generated.h"

UENUM(BlueprintType)
enum class EWaterBrushBlendType : uint8 {
    AlphaBlend,
    Min,
    Max,
    Additive,
};

