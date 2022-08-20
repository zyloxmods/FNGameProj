#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ERewardPlacementBonusType : uint8 
{
	Duo,
	Squad,
	LargeTeam,
	None,
	TwoTeam,
	MediumTeam,
	QuickSolo,
	QuickDuo,
	QuickSquad,
	QuickLargeTeam,
	QuickTwoTeam,
	QuickMediumTeam,
	SinglePlacement,
	ERewardPlacementBonusType_MAX,
};
