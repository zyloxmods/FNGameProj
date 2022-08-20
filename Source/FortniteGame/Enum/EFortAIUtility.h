#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortAIUtility : uint8 
{
	KillPlayersRanged,
	KillPlayersArtillery,
	DestroyBuildingsMelee,
	DestroyBuildingsRanged,
	DestroyBuildingsArtillery,
	DestroyTraps,
	Tank,
	Infiltrate,
	Mob,
	Support,
	Kiting,
	AreaOfDenial,
	DisableTraps,
	Dormant,
	Assassin,
	MAX,
};
