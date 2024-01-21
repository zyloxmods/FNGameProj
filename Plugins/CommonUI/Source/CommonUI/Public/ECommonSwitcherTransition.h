#pragma once
#include "CoreMinimal.h"
#include "ECommonSwitcherTransition.generated.h"

UENUM(BlueprintType)
enum class ECommonSwitcherTransition : uint8 {
    FadeOnly,
    Horizontal,
    Vertical,
    Zoom,
};

