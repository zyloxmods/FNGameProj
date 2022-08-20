#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EAthenaMatchXpMultiplierSource : uint8 
{
	BattlePassSelf,
	BattlePassFriends,
	CosmeticSet,
	AntiAddictionPenalty,
	BonusXpEvent,
	MAX_COUNT,
	EAthenaMatchXpMultiplierSource_MAX,
};
