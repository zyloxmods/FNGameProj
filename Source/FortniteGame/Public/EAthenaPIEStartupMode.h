#pragma once
#include "CoreMinimal.h"
#include "EAthenaPIEStartupMode.generated.h"

UENUM(BlueprintType)
enum class EAthenaPIEStartupMode : uint8 {
    UseDefaults,
    Warmup,
    WarmupPaused,
    Aircraft,
    AircraftPaused,
    Gameplay,
};

