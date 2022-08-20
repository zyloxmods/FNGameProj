#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EOrientedConstructionBuildingType : uint8 
{
	WallY,
	Floor,
	StairsUpX,
	StairsUpY,
	StairsDownX,
	StairsDownY,
	Roof,
	BraceLeftX,
	BraceRightX,
	BraceLeftY,
	BraceRightY,
	WallWindowX,
	WallWindowY,
	Count,
	EOrientedConstructionBuildingType_MAX,
};
