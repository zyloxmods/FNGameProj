#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ETargetDistanceComparisonType : uint8 
{
	ThreeDimensions,
	CollisionHalfHeightMultiplier,
	ETargetDistanceComparisonType_MAX,
};
