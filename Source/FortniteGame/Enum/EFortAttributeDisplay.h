#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortAttributeDisplay : uint8 
{
	NegativeImpliesInfiniteInt,
	BasicFloat,
	NegativeImpliesInfiniteFloat,
	BasicString,
	NormalizedPercentage,
	StringArray,
	SlateBrush,
	DoNotDisplay,
	None_Max,
	EFortAttributeDisplay_MAX,
};
