#pragma once
#include "CoreMinimal.h"
#include "EFortAIDirectorEvent.generated.h"

UENUM(BlueprintType)
enum class EFortAIDirectorEvent : uint8 {
    PlayerAIEnemies,
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
};

