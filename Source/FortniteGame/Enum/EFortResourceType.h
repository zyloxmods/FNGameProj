#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortResourceType : uint8 
{
	Stone,
	Metal,
	Permanite,
	GoldCurrency,
	Ingredient,
	None,
	EFortResourceType_MAX,
};
