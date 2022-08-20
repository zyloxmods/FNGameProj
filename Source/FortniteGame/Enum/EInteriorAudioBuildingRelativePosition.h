#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EInteriorAudioBuildingRelativePosition : uint8 
{
	SameCellQuadrantTestFailed,
	OtherCellParallelToForward,
	OtherCellParallelToRight,
	OtherCellParallelToUp,
	Max_None,
	EInteriorAudioBuildingRelativePosition_MAX,
};
