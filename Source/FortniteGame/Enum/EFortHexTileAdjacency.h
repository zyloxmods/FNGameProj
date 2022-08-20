#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortHexTileAdjacency : uint8 
{
	NorthEast,
	SouthEast,
	South,
	SouthWest,
	NorthWest,
	Max_None,
	EFortHexTileAdjacency_MAX,
};
