#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EPayoutScoringType : uint8 
{
	Points,
	Ranking,
	Percentile,
	Persistent,
	EPayoutScoringType_MAX,
};
