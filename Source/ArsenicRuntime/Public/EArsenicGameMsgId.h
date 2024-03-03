#pragma once
#include "CoreMinimal.h"
#include "EArsenicGameMsgId.generated.h"

UENUM(BlueprintType)
enum class EArsenicGameMsgId : uint8 {
    None,
    InitialTeamRevealed,
    BecameInfected,
    OneHumanRemaining,
};

