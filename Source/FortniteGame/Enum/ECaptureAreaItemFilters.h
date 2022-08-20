#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ECaptureAreaItemFilters : uint8 
{
	Both,
	ForPeriodicScoring,
	ToTakeControl,
	ECaptureAreaItemFilters_MAX,
};
