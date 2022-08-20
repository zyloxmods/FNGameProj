#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortCostInfoTypes : uint8 
{
	Repair,
	Conversion,
	Ability,
	None,
	EFortCostInfoTypes_MAX,
};
