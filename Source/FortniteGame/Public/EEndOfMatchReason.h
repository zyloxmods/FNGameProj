#pragma once
#include "CoreMinimal.h"
#include "EEndOfMatchReason.generated.h"

UENUM(BlueprintType)
enum class EEndOfMatchReason : uint8 {
    LastManStanding,
    ScoreReached,
    TimeRanOut,
    WinEventOccurred,
    AllLoggedOut,
    AllEliminated,
};

