#pragma once
#include "CoreMinimal.h"
#include "EFortFacialAnimTypes.generated.h"

UENUM(BlueprintType)
enum class EFortFacialAnimTypes : uint8 {
    Default,
    FaceOnly,
    FullHead,
    FromAmplitude,
    Max,
};

