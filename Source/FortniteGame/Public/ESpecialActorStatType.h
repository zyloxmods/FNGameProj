#pragma once
#include "CoreMinimal.h"
#include "ESpecialActorStatType.generated.h"

UENUM(BlueprintType)
enum class ESpecialActorStatType : uint8 {
    NumEliminationsNearby,
    TimeInWorld,
    PickupNumSpawns,
    PickupNumDespawns,
    PickupNumDropped,
    PickupNumTaken,
    PlayerWon,
    PlayerNumEliminations,
    PlayerNum,
    TotalStats,
};

