#pragma once
#include "CoreMinimal.h"
#include "EVehicleAudioInterpolationType.generated.h"

UENUM(BlueprintType)
enum class EVehicleAudioInterpolationType : uint8 {
    None,
    CustomCurve,
    Linear,
};

