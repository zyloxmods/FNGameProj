#pragma once
#include "CoreMinimal.h"
#include "EAthenaLootDropOverride.generated.h"

UENUM(BlueprintType)
enum class EAthenaLootDropOverride : uint8 {
    NoOverride,
    ForceDrop,
    ForceKeep,
    ForceDestroy,
    ForceDropUnlessRespawning,
    ForceDestroyUnlessRespawning,
    DropUnlessTeamSelectionUpdated,
};

