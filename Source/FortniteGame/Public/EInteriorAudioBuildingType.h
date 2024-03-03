#pragma once
#include "CoreMinimal.h"
#include "EInteriorAudioBuildingType.generated.h"

UENUM(BlueprintType)
enum class EInteriorAudioBuildingType : uint8 {
    None,
    Wall,
    Floor,
    CenterCell,
};

