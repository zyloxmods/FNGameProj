#pragma once
#include "CoreMinimal.h"
#include "ECaptureState.generated.h"

UENUM(BlueprintType)
enum class ECaptureState : uint8 {
    Neutral,
    Capturing,
    Contested,
    Disabled,
    Decapturing,
    Neutralizing,
    Deneutralizing,
    Captured,
};

