#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EBuildingAttachmentType : uint8 
{
	ATTACH_Wall,
	ATTACH_Ceiling,
	ATTACH_Corner,
	ATTACH_All,
	ATTACH_WallThenFloor,
	ATTACH_FloorAndStairs,
	ATTACH_CeilingAndStairs,
	ATTACH_None,
	ATTACH_MAX,
};
