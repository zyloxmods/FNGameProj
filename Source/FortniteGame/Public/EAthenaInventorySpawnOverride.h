#pragma once
#include "CoreMinimal.h"
#include "EAthenaInventorySpawnOverride.generated.h"

UENUM(BlueprintType)
enum class EAthenaInventorySpawnOverride : uint8 {
    NoOverride,
    Always,
    IntialSpawn,
    AircraftPhaseOnly,
    AfterWarmup,
};

