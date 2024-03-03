#pragma once
#include "CoreMinimal.h"
#include "EFortServerGameMode.generated.h"

UENUM(BlueprintType)
enum class EFortServerGameMode : uint8 {
    Idle,
    LobbyPvE,
    LobbyPvP,
    ZonePvP,
    ZonePvE,
};

