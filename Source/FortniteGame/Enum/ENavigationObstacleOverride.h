#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ENavigationObstacleOverride : uint8 
{
	ForceEnabled,
	ForceDisabled,
	ENavigationObstacleOverride_MAX,
};
