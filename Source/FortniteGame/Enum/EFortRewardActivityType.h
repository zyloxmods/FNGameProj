#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortRewardActivityType : uint8 
{
	MissionPrimary,
	MissionSecondary,
	AccountLevelUp,
	Max_None,
	EFortRewardActivityType_MAX,
};
