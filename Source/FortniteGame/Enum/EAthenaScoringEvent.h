#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EAthenaScoringEvent : uint8 
{
	Elimination,
	ChestOpened,
	AmmoCanOpened,
	SupplyDropOpened,
	SupplyLlamaOpened,
	ForagedItemConsumed,
	SurvivalInMinutes,
	CollectedCoinBronze,
	CollectedCoinSilver,
	CollectedCoinGold,
	AIKilled,
	EAthenaScoringEvent_MAX,
};
