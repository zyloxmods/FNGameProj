#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EPayoutRewardType : uint8 
{
	Commerce,
	GameRelated,
	Token,
	Score,
	EPayoutRewardType_MAX,
};
