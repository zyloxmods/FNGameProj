#pragma once
#include "CoreMinimal.h"
#include "EMMSPlayersPerTeamPreset.generated.h"

UENUM(BlueprintType)
enum class EMMSPlayersPerTeamPreset : uint8 {
    Solos,
    Duos,
    Trios,
    Squads,
    SplitEvenly,
    Dynamic,
};

