#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EInventoryContentSortType : uint8 
{
	ByRating,
	ByLevel,
	ByCategory,
	ByRarity,
	ByLocation,
	ByPersonality,
	ByBonus,
	BySubtype,
	ByGrantTime,
	Invalid,
	EInventoryContentSortType_MAX,
};
