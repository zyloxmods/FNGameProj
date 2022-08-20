#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortEncounterSpawnLocationPlacementMode : uint8 
{
	Ring,
	Volume,
	Custom,
	Max_None,
	EFortEncounterSpawnLocationPlacementMode_MAX,
};
