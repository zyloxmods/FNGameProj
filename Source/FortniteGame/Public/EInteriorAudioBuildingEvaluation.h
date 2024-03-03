#pragma once
#include "CoreMinimal.h"
#include "EInteriorAudioBuildingEvaluation.generated.h"

UENUM(BlueprintType)
enum class EInteriorAudioBuildingEvaluation : uint8 {
    Invalid,
    Partial,
    Solid,
};

