#pragma once
#include "CoreMinimal.h"
#include "EMinigameWinCondition.generated.h"

UENUM(BlueprintType)
enum class EMinigameWinCondition : uint8 {
    MostRoundWins,
    MostScoreWins,
};

