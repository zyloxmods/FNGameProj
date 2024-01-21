#pragma once
#include "CoreMinimal.h"
#include "EAthenaRespawnLocation.generated.h"

UENUM(BlueprintType)
enum class EAthenaRespawnLocation : uint8 {
    LastDeath,
    CreativePlayerStart,
};

