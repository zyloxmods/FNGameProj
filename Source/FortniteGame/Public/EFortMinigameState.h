#pragma once
#include "CoreMinimal.h"
#include "EFortMinigameState.generated.h"

UENUM(BlueprintType)
enum class EFortMinigameState : uint8 {
    PreGame,
    Setup,
    Transitioning,
    WaitingForCameras,
    Warmup,
    InProgress,
    PostGameTimeDilation,
    PostRoundEnd,
    PostGameEnd,
    PostGameAbandon,
    PostGameReset,
};

