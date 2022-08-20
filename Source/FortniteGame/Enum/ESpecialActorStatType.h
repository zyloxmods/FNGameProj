#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ESpecialActorStatType : uint8 
{
	TimeInWorld,
	PickupNumSpawns,
	PickupNumDespawns,
	PickupNumDropped,
	PickupNumTaken,
	PlayerWon,
	PlayerNumEliminations,
	PlayerNum,
	TotalStats,
	ESpecialActorStatType_MAX,
};
