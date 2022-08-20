#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EAthenaInventorySpawnOverride : uint8 
{
	Always,
	IntialSpawn,
	AircraftPhaseOnly,
	AfterWarmup,
	EAthenaInventorySpawnOverride_MAX,
};
