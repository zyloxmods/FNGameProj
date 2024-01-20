#pragma once
#include "CoreMinimal.h"
#include "EFortUIState.generated.h"

UENUM(BlueprintType)
enum class EFortUIState : uint8 {
    Invalid,
    Login,
    JoinServer,
    SubgameSelect,
    FrontEnd,
    PvE_PostGame,
    PvP_PostGame,
    InGame,
    Cinematic,
    Athena,
    AthenaSpectator,
    AthenaSpectatorAlt,
    Replay,
    AthenaReplay,
    MAX,
};

