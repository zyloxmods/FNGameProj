#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EBuildingNavObstacleType : uint8 
{
	UnwalkableHuskOnly,
	SmashWhenLowHeight,
	SmashOnlyLowHeight,
	SmashSmasherOnly,
	SmashAll,
	EBuildingNavObstacleType_MAX,
};
