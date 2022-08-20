#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EObstacleType : uint8 
{
	BlockingSmashable,
	BlockingDetectedTrap,
	Unknown,
	Count,
	EObstacleType_MAX,
};
