#pragma once
#include "CoreMinimal.h"
#include "ERespawnAndSpectatePlayerRespawningState.generated.h"

UENUM(BlueprintType)
enum class ERespawnAndSpectatePlayerRespawningState : uint8 {
    None,
    WaitingOnTimer,
    WaitingOnPlayerSelection,
    WaitingOnClientReady,
    Respawning,
    RespawnFinishing,
};

