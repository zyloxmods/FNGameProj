#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortCombatFactors : uint8 
{
	ObjectiveDamageThreat,
	ObjectivePathCost,
	PlayerPathCost,
	PlayerMovement,
	TrapsEffective,
	PlayerWander,
	NearbyEnemyPresence,
	OffensiveResources,
	DefensiveResources,
	Boredom,
	ArtilleryVulnerability,
	Max_None,
	EFortCombatFactors_MAX,
};
