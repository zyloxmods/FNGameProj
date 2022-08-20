#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortCombatEvents : uint8 
{
	SmasherFollowing,
	TrollFollowing,
	FlingerFollowing,
	TakerFollowing,
	HuskCombatNearby,
	SmasherCombatNearby,
	TrollCombatNearby,
	FlingerCombatNearby,
	TakerCombatNearby,
	PlayerTakeDamage,
	PlayerHealth,
	PlayerLookAtEnemy,
	PlayerDamageEnemy,
	PlayerKilledEnemy,
	AtlasTakeDamage,
	AtlasHealth,
	AtlasDestroyed,
	TrapFiring,
	BuildingTakeDamage,
	FoodHealingPotential,
	PlayerAmmo,
	EnemiesNear,
	PlayerMovement,
	BuildingDamagedNearObjective,
	TrapDamageEnemy,
	ObjectivePathCost,
	PlayerPathCost,
	Max_None,
	EFortCombatEvents_MAX,
};
