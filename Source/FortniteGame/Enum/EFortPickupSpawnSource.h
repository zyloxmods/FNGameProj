#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortPickupSpawnSource : uint8 
{
	PlayerElimination,
	Chest,
	SupplyDrop,
	AmmoBox,
	Drone,
	ItemSpawner,
	BotElimination,
	NPCElimination,
	EFortPickupSpawnSource_MAX,
};
