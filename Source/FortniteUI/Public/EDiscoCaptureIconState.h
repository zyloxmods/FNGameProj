#pragma once
#include "CoreMinimal.h"
#include "EDiscoCaptureIconState.generated.h"

UENUM(BlueprintType)
enum class EDiscoCaptureIconState : uint8 {
    None,
    Hidden,
    Neutral,
    AllyCaptured,
    EnemyCaptured,
};

