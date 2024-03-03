#pragma once
#include "CoreMinimal.h"
#include "EIndicatorDisplayMode.generated.h"

UENUM(BlueprintType)
enum class EIndicatorDisplayMode : uint8 {
    Default,
    Always,
    Never,
    MiniMap,
};

