#pragma once
#include "CoreMinimal.h"
#include "ECapturePointState.generated.h"

UENUM(BlueprintType)
enum class ECapturePointState : uint8 {
    Idle,
    Capturing,
    Contested,
    Resetting,
    Captured,
    Reset,
};

