#pragma once
#include "CoreMinimal.h"
#include "EAthenaSeasonRewardTrack.generated.h"

UENUM(BlueprintType)
enum class EAthenaSeasonRewardTrack : uint8 {
    Invalid,
    SeasonProgressionTrack,
    CompendiumFreeTrack,
    CompendiumPaidTrack,
    CompendiumAdditionalTrack,
};

