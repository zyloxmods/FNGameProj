#pragma once
#include "CoreMinimal.h"
#include "EInteriorAudioBuildingPlayerBuiltState.generated.h"

UENUM(BlueprintType)
enum class EInteriorAudioBuildingPlayerBuiltState : uint8 {
    Any,
    Designed,
    PlayerBuilt,
};

