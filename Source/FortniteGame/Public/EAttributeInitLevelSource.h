#pragma once
#include "CoreMinimal.h"
#include "EAttributeInitLevelSource.generated.h"

UENUM(BlueprintType)
enum class EAttributeInitLevelSource : uint8 {
    WorldDifficulty,
    PlayerBuildingSkill,
    AthenaPlaylist,
};

