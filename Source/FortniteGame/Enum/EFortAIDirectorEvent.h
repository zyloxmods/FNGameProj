#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortAIDirectorEvent : uint8 
{
	PlayerTakeDamage,
	PlayerHealth,
	PlayerDeath,
	PlayerLookAtAIEnemy,
	PlayerDamageAIEnemy,
	PlayerKillAIEnemy,
	PlayerHealingPotential,
	PlayerAmmoLight,
	PlayerAmmoMedium,
	PlayerAmmoHeavy,
	PlayerAmmoShells,
	PlayerAmmoEnergy,
	PlayerAINear,
	PlayerMovement,
	ObjectiveTakeDamage,
	ObjectiveHealth,
	ObjectiveDestroyed,
	TrapFired,
	TrapDamagedAIEnemy,
	ObjectivePathCost,
	PlayerPathCost,
	ObjectiveNearbyBuildingDamaged,
	Max_None,
	EFortAIDirectorEvent_MAX,
};
