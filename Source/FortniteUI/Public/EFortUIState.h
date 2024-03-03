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
    InGame_Custom,
    UNUSED,
    InGame_STW,
    Cinematic,
    InGame_BR,
    AthenaSpectator,
    Replay,
    InGame_STW_Custom,
    MAX,
};

