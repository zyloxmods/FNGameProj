#pragma once
#include "CoreMinimal.h"
#include "EHudVisibilityState.generated.h"

UENUM(BlueprintType)
enum class EHudVisibilityState : uint8 {
    FullyVisible,
    FullyHidden,
    GameOnly,
    ReplayOnly,
    MAX,
};

