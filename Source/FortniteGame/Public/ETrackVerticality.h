#pragma once
#include "CoreMinimal.h"
#include "ETrackVerticality.generated.h"

UENUM(BlueprintType)
enum class ETrackVerticality : uint8 {
    Floor,
    Ramp,
    GradualRamp,
    Max_None,
};

