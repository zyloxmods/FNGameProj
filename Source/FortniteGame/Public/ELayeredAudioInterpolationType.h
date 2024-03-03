#pragma once
#include "CoreMinimal.h"
#include "ELayeredAudioInterpolationType.generated.h"

UENUM(BlueprintType)
enum class ELayeredAudioInterpolationType : uint8 {
    None,
    CustomCurve,
    Linear,
};

