#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortPartialPathUsage : uint8 
{
	OnlyGoalsOnDestructible,
	Never,
	EFortPartialPathUsage_MAX,
};
