#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortDecoPlacementQueryResults : uint8 
{
	ExistingTrap,
	ExistingObject,
	Obstructed,
	NoLocation,
	WrongType,
	WrongShape,
	BeingModified,
	WrongTeam,
	BlueprintFailure,
	AbilityFailure,
	RequiresPlayerBuildableActor,
	NoEditPermission,
	WrongZone,
	EFortDecoPlacementQueryResults_MAX,
};
