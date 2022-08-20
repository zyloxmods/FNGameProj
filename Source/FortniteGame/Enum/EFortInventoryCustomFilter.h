#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortInventoryCustomFilter : uint8 
{
	Legendary,
	Epic,
	Rare,
	Uncommon,
	Common,
	EFortInventoryCustomFilter_MAX,
};
