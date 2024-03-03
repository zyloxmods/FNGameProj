#pragma once
#include "CoreMinimal.h"
#include "ESmoothProgressState.generated.h"

UENUM(BlueprintType)
enum class ESmoothProgressState : uint8 {
    Enabled,
    DisabledByForceProgress,
    DisabledByState,
};

