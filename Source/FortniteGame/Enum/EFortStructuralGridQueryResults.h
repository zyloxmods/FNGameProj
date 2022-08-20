#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortStructuralGridQueryResults : uint8 
{
	ExistingActor,
	Obstructed,
	NoStructuralSupport,
	InvalidActor,
	ReachedLimit,
	NoEditPermission,
	PatternNotPermittedByLayoutRequirement,
	ResourceTypeNotPermittedByLayoutRequirement,
	BuildingAtRequirementsDisabled,
	BuildingOtherThanRequirementsDisabled,
	EFortStructuralGridQueryResults_MAX,
};
