#pragma once
#include "CoreMinimal.h"
#include "EFortCombatFactors.generated.h"

UENUM(BlueprintType)
namespace EFortCombatFactors {
    enum Type {
        PlayerDamageThreat,
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
    };
}

