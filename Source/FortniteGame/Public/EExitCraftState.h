#pragma once
#include "CoreMinimal.h"
#include "EExitCraftState.generated.h"

UENUM(BlueprintType)
enum class EExitCraftState : uint8 {
    None,
    Spawned,
    Landed,
    SpawnBalloon,
    GettingIntoPosition,
    GettingIntoPosition_Simple,
    WaitingForPawns,
    Exiting,
};

