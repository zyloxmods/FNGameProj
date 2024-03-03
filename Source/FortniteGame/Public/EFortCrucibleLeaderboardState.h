#pragma once
#include "CoreMinimal.h"
#include "EFortCrucibleLeaderboardState.generated.h"

UENUM(BlueprintType)
enum class EFortCrucibleLeaderboardState : uint8 {
    Disabled,
    ReadyForQuery,
    WaitingForQueryResults,
    NeedsUserInfoQueried,
    Complete,
};

