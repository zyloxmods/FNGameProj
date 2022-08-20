#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EItemEvolutionRestrictionReason : uint8 
{
	BelowMaximumLevel,
	VaultOverflow,
	MissingCatalyst,
	MissingCosts,
	NoRarityUpgrade,
	InUseByCrafting,
	EItemEvolutionRestrictionReason_MAX,
};
