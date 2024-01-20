#pragma once
#include "CoreMinimal.h"
#include "EFortAIDirectorFactor.generated.h"

UENUM(BlueprintType)
enum class EFortAIDirectorFactor : uint8 {
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

