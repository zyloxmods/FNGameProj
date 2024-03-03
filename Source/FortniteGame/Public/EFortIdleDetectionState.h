#pragma once
#include "CoreMinimal.h"
#include "EFortIdleDetectionState.generated.h"

UENUM(BlueprintType)
enum class EFortIdleDetectionState : uint8 {
    Disabled,
    Default,
    Suspicious,
    Problematic,
    Inactive,
};

