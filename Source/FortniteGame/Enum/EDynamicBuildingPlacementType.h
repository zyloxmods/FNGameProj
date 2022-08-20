#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EDynamicBuildingPlacementType : uint8 
{
	DestroyIfColliding,
	DestroyAnythingThatCollides,
	EDynamicBuildingPlacementType_MAX,
};
