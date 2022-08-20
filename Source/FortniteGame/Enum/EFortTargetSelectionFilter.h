#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortTargetSelectionFilter : uint8 
{
	Everything,
	Pawns,
	Buildings,
	Walls,
	Traps,
	Players,
	AIPawns,
	Instigator,
	WeakSpots,
	World,
	Max,
};
