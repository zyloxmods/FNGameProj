#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EConstructionBuildingType : uint8 
{
	Floor,
	Stairs,
	Roof,
	Brace,
	WallWindow,
	Count,
	EConstructionBuildingType_MAX,
};
