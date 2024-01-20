#pragma once
#include "CoreMinimal.h"
#include "EMinigameScoreboardStates.generated.h"

UENUM(BlueprintType)
enum class EMinigameScoreboardStates : uint8 {
    RoundEndDisplayWinner,
    RoundEndDisplayScoreboard,
    GameEndDisplayWinner,
    GameEndDisplayScoreboard,
    Max,
};

