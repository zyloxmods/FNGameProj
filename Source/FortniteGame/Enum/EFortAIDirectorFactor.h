#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortAIDirectorFactor : uint8 
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
	EFortAIDirectorFactor_MAX,
};
