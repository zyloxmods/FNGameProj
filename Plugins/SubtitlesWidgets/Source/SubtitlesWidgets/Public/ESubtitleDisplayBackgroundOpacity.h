#pragma once
#include "CoreMinimal.h"
#include "ESubtitleDisplayBackgroundOpacity.generated.h"

UENUM(BlueprintType)
enum class ESubtitleDisplayBackgroundOpacity : uint8 {
    Clear,
    Low,
    Medium,
    High,
    Solid,
};

