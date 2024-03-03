#pragma once
#include "CoreMinimal.h"
#include "ENitrogenGamePhase.generated.h"

UENUM(BlueprintType)
enum class ENitrogenGamePhase : uint8 {
    None,
    TeleportingPlayers,
    Active,
    Finish,
    MAX,
};

