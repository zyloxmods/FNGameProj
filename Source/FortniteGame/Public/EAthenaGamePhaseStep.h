#pragma once
#include "CoreMinimal.h"
#include "EAthenaGamePhaseStep.generated.h"

UENUM(BlueprintType)
enum class EAthenaGamePhaseStep : uint8 {
    None,
    Setup,
    Warmup,
    GetReady,
    BusLocked,
    BusFlying,
    StormForming,
    StormHolding,
    StormShrinking,
    Countdown,
    FinalCountdown,
    EndGame,
    Count,
};

