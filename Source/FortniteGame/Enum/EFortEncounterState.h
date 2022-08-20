#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortEncounterState : uint8 
{
	InitializingProperties,
	InitializingRiftManager,
	AwaitingActivation,
	Active,
	ReplacingRifts,
	Max_None,
	EFortEncounterState_MAX,
};
