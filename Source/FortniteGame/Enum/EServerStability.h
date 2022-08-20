#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EServerStability : uint8 
{
	LowUnstability,
	HighUnstability,
	Count,
	EServerStability_MAX,
};
