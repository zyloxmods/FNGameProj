#pragma once
#include "CoreMinimal.h"
#include "EHydrogenCaptureStateEnum.generated.h"

UENUM(BlueprintType)
enum class EHydrogenCaptureStateEnum : uint8 {
    Contested,
    Capturing,
    Erasing,
    Idle,
    Captured,
};

