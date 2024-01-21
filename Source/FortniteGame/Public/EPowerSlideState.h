#pragma once
#include "CoreMinimal.h"
#include "EPowerSlideState.generated.h"

UENUM(BlueprintType)
enum class EPowerSlideState : uint8 {
    None,
    Entering,
    InProgress,
    Exiting,
};

