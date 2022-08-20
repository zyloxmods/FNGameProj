#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortPowerRatingComparison : uint8 
{
	OverLevel,
	UnderLevel,
	Unknown,
	EFortPowerRatingComparison_MAX,
};
