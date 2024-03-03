#pragma once
#include "CoreMinimal.h"
#include "EJoinInProgress.generated.h"

UENUM(BlueprintType)
enum class EJoinInProgress : uint8 {
    Spectate,
    JoinOnNextRound,
    JoinImmediately,
    JoinSpecificTeam,
};

