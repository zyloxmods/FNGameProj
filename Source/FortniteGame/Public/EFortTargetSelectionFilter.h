#pragma once
#include "CoreMinimal.h"
#include "EFortTargetSelectionFilter.generated.h"

UENUM(BlueprintType)
namespace EFortTargetSelectionFilter {
    enum Type {
        Damageable,
        Everything,
        Pawns,
        Buildings,
        Walls,
        Traps,
        Players,
        AIPawns,
        Instigator,
        WeakSpots,
        World,
        Max,
    };
}

