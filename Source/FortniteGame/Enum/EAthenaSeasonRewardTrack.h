#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EAthenaSeasonRewardTrack : uint8 
{
	SeasonProgressionTrack,
	CompendiumFreeTrack,
	CompendiumPaidTrack,
	CompendiumAdditionalTrack,
	EAthenaSeasonRewardTrack_MAX,
};
