#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ERewardSource : uint8 
{
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
	ERewardSource_MAX,
};
