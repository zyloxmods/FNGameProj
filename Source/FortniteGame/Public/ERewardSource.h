#pragma once
#include "CoreMinimal.h"
#include "ERewardSource.generated.h"

UENUM(BlueprintType)
enum class ERewardSource : uint8 {
    Invalid,
    MinutesPlayed,
    FirstKill,
    TeamKills,
    FirstRevive,
    AdditionalRevives,
    Placement,
    Medals,
    FirstWin,
    SeasonLevelUp,
    BookLevelUp,
    MatchXP,
    MAX_COUNT,
};

