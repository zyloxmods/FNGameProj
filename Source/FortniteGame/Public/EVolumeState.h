#pragma once
#include "CoreMinimal.h"
#include "EVolumeState.generated.h"

UENUM(BlueprintType)
enum class EVolumeState : uint8 {
    Uninitialized,
    ReadOnly,
    Initializing,
    Ready,
};

