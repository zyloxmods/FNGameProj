#pragma once
#include "CoreMinimal.h"
#include "EAudioAnalysisParameterTypes.generated.h"

UENUM(BlueprintType)
enum class EAudioAnalysisParameterTypes : uint8 {
    Scalar,
    Vector4,
    Count,
};

