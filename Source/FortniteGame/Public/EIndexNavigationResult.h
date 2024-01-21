#pragma once
#include "CoreMinimal.h"
#include "EIndexNavigationResult.generated.h"

UENUM(BlueprintType)
enum class EIndexNavigationResult : uint8 {
    Succeeded,
    Modified,
    Clamped,
    StepOff,
    NoMove,
};

