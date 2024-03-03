#pragma once
#include "CoreMinimal.h"
#include "EFortGameplayState.generated.h"

UENUM(BlueprintType)
enum class EFortGameplayState :uint8
{
        NormalGameplay,
        WaitingToStart,
        EndOfZone,
        EnteringZone,
        LeavingZone,
        Invalid,
    };


