#pragma once
#include "CoreMinimal.h"
#include "EFortMinigamePlayerSpawnLocationSetting.generated.h"

UENUM(BlueprintType)
enum class EFortMinigamePlayerSpawnLocationSetting : uint8 {
    SpawnPads,
    Air,
    CurrentLocation,
};

