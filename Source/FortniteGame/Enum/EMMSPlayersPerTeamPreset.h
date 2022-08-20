#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EMMSPlayersPerTeamPreset : uint8 
{
	Duos,
	Trios,
	Squads,
	SplitEvenly,
	Dynamic,
	EMMSPlayersPerTeamPreset_MAX,
};
