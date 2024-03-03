#pragma once
#include "CoreMinimal.h"
#include "EFortIdleCheckResult.generated.h"

UENUM(BlueprintType)
enum class EFortIdleCheckResult : uint8 {
    Invalid,
    ActivityDetected,
    Idle,
    IdlePastMaxTime,
};

