#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EScoreDistributionType : uint8 
{
	DivideByDamage,
	DivideEvenly,
	AllToKiller,
	EScoreDistributionType_MAX,
};
