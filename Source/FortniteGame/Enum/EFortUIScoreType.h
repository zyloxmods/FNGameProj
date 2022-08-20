#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortUIScoreType : uint8 
{
	Building,
	Utility,
	Badges,
	Bonus,
	Total,
	Max_None,
	EFortUIScoreType_MAX,
};
