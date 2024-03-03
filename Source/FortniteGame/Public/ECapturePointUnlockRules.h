#pragma once
#include "CoreMinimal.h"
#include "ECapturePointUnlockRules.generated.h"

UENUM(BlueprintType)
enum class ECapturePointUnlockRules : uint8 {
    Reset,
    MaintainState,
    ResetDeactivate,
};

