#pragma once
#include "CoreMinimal.h"
#include "EFortTheaterMapTileType.generated.h"

UENUM(BlueprintType)
enum class EFortTheaterMapTileType : uint8 {
    Normal,
    CriticalMission,
    AlwaysActive,
    Outpost,
    NonMission,
    PvPFOB,
};

