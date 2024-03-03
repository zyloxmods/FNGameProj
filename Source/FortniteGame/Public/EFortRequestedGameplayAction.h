#pragma once
#include "CoreMinimal.h"
#include "EFortRequestedGameplayAction.generated.h"

UENUM(BlueprintType)
enum class EFortRequestedGameplayAction : uint8 {
        ContinuePlaying,
        StartPlaying,
        StopPlaying,
        EnterZone,
        LeaveZone,
        ReturnToMainMenu,
        QuitGame,
        Invalid,
    };


