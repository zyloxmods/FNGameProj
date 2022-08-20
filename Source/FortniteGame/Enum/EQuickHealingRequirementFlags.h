#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EQuickHealingRequirementFlags : uint8 
{
	NeedsHealing,
	NeedsShields,
	NeedsBoth,
	Invalid,
	EQuickHealingRequirementFlags_MAX,
};
