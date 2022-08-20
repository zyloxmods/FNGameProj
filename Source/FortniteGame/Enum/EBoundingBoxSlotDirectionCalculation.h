#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EBoundingBoxSlotDirectionCalculation : uint8 
{
	FaceWall,
	FaceAwayFromWall,
	FaceCenter,
	EBoundingBoxSlotDirectionCalculation_MAX,
};
