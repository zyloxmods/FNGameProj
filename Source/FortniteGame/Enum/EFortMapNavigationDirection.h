#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortMapNavigationDirection : uint8 
{
	NorthEast,
	East,
	SouthEast,
	South,
	SouthWest,
	West,
	NorthWest,
	Invalid,
	EFortMapNavigationDirection_MAX,
};
