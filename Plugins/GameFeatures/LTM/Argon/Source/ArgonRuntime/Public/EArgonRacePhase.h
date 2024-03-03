#pragma once
#include "CoreMinimal.h"
#include "EArgonRacePhase.generated.h"

UENUM(BlueprintType)
enum class EArgonRacePhase : uint8 {
    None,
    TeleportingPlayers,
    PreRaceSequence,
    RaceActive,
    PostRaceSequence,
    RaceEnded,
    MAX,
};

