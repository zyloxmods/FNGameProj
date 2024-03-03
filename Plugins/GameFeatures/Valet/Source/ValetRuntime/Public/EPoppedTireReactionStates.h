#pragma once
#include "CoreMinimal.h"
#include "EPoppedTireReactionStates.generated.h"

UENUM(BlueprintType)
enum class EPoppedTireReactionStates : uint8 {
    None,
    VeerLeft,
    VeerRight,
    Wiggle,
    Yaw90,
    FlipPitch,
    FlipRoll,
};

