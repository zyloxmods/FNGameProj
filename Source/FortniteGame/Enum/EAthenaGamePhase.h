#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EAthenaGamePhase : uint8 
{
	Setup,
	Warmup,
	Aircraft,
	SafeZones,
	EndGame,
	Count,
	EAthenaGamePhase_MAX,
};
