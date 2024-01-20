#pragma once
#include "CoreMinimal.h"
#include "EMinigameCaptureObjectiveState.generated.h"

UENUM(BlueprintType)
enum class EMinigameCaptureObjectiveState : uint8 {
    NotCaptured,
    Captured,
};

