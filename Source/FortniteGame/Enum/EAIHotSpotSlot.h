#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EAIHotSpotSlot : uint8 
{
	Claimed,
	Occupied,
	Blocked,
	Disabled,
	EAIHotSpotSlot_MAX,
};
