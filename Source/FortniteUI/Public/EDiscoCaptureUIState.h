#pragma once
#include "CoreMinimal.h"
#include "EDiscoCaptureUIState.generated.h"

UENUM(BlueprintType)
enum class EDiscoCaptureUIState : uint8 {
    None,
    Hidden,
    Dance,
    Capturing,
    Contested,
};

