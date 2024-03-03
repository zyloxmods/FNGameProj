#pragma once
#include "CoreMinimal.h"
#include "EInteriorAudioBuildingDirection.generated.h"

UENUM(BlueprintType)
enum class EInteriorAudioBuildingDirection : uint8 {
    Left,
    Right,
    Forward,
    Backward,
    Upward,
};

