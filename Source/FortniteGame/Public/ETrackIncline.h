#pragma once
#include "CoreMinimal.h"
#include "ETrackIncline.generated.h"

UENUM(BlueprintType)
enum class ETrackIncline : uint8 {
    NoNeighbor,
    Flat,
    Up,
    Down,
    GradualUp,
    GradualDown,
    Max_None,
};

