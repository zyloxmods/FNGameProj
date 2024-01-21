#pragma once
#include "CoreMinimal.h"
#include "EFortEncounterSpawnLocationPlacementMode.generated.h"

UENUM(BlueprintType)
namespace EFortEncounterSpawnLocationPlacementMode {
    enum Type {
        Directional,
        Ring,
        Volume,
        Custom,
        Max_None,
    };
}

