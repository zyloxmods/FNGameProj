#pragma once
#include "CoreMinimal.h"
#include "EInteriorAudioBuildingDefaultRotation.generated.h"

UENUM(BlueprintType)
enum class EInteriorAudioBuildingDefaultRotation : uint8 {
    PositiveY,
    NegativeX,
    NegativeY,
    PositiveX,
};

