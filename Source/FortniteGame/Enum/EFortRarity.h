#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortRarity : uint8 
{
	Uncommon,
	Rare,
	Epic,
	Legendary,
	Mythic,
	Transcendent,
	Unattainable,
	NumRarityValues,
	EFortRarity_MAX,
};
