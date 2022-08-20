#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortTheaterMapTileType : uint8 
{
	CriticalMission,
	AlwaysActive,
	Outpost,
	NonMission,
	PvPFOB,
	EFortTheaterMapTileType_MAX,
};
