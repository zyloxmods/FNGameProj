#pragma once
#include "CoreMinimal.h"
#include "EUraniumEventId.generated.h"

UENUM(BlueprintType)
enum class EUraniumEventId : uint8 {
    Intro,
    CartBecomesPushable,
    CheckPointReached,
    NearCheckPoint,
    NearFinalCheckPoint,
    TimeIsLow,
    TimeIsExtraLow,
    OvertimeStarted,
    RoundEnd_PushersWin,
    RoundEnd_DefendersWin,
    RoundStart,
    GameEnded_AllRoundsPlayed,
    GameEndedEarly_BlowOut,
    GameEndedEarly_OutNumbered,
};

