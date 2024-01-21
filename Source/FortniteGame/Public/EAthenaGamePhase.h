#pragma once
#include "CoreMinimal.h"
#include "EAthenaGamePhase.generated.h"

UENUM(BlueprintType)
enum class EAthenaGamePhase : uint8 {
    None,
    Setup,
    Warmup,
    Aircraft,
    SafeZones,
    EndGame,
    Count,
};

