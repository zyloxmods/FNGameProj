#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ETimespanAsTextFormat : uint8 
{
	Colons,
	ColonsWithMilliseconds,
	Approximate,
	ApproximateWithWeeks,
	ApproximateWithMonths,
	ApproximateWithYears,
	ETimespanAsTextFormat_MAX,
};
