#pragma once
#include "CoreMinimal.h"
#include "EMinigameCaptureObjectiveIconState.generated.h"

UENUM(BlueprintType)
enum class EMinigameCaptureObjectiveIconState : uint8 {
    NotCaptured,
    Captured,
};

