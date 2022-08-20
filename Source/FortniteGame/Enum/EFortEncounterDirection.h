#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortEncounterDirection : uint8 
{
	NorthEast,
	East,
	SouthEast,
	South,
	SouthWest,
	West,
	NorthWest,
	Max_None,
	EFortEncounterDirection_MAX,
};
