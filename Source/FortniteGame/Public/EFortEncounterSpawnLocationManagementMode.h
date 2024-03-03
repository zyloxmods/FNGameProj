#pragma once
#include "CoreMinimal.h"
#include "EFortEncounterSpawnLocationManagementMode.generated.h"

UENUM(BlueprintType)
enum class EFortEncounterSpawnLocationManagementMode : uint8 {
    Spawn,
    Search,
};

