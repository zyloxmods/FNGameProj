#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortVisibilityBehavior : uint8 
{
	OnceSeenAlwaysSeen,
	AlwaysSeen,
	Invalid,
	EFortVisibilityBehavior_MAX,
};
