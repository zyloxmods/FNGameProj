#pragma once
#include "CoreMinimal.h"
#include "EUraniumGameEndedReason.generated.h"

UENUM(BlueprintType)
enum class EUraniumGameEndedReason : uint8 {
    GameIsStillInProgress,
    AllRoundsPlayed,
    EarlyGameEnd_BlowOut,
    EarlyGameEnd_OutNumbered,
};

