#pragma once
#include "CoreMinimal.h"
#include "ESplineWaterAudioWindingOrder.generated.h"

UENUM(BlueprintType)
enum class ESplineWaterAudioWindingOrder : uint8 {
    Clockwise,
    Counterclockwise,
};

