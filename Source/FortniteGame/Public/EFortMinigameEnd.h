#pragma once
#include "CoreMinimal.h"
#include "EFortMinigameEnd.generated.h"

UENUM(BlueprintType)
enum class EFortMinigameEnd : uint8 {
    AbandonGame,
    EndGame,
    EndRound,
};

