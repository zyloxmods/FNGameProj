#pragma once
#include "CoreMinimal.h"
#include "ESpectatorLeaderboardEntryType.generated.h"

UENUM(BlueprintType)
enum class ESpectatorLeaderboardEntryType : uint8 {
    ScoreWithEndScore,
    NoEndScore,
    Time,
    Invalid,
};

