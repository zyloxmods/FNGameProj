#pragma once
#include "CoreMinimal.h"
#include "EFortSessionHelperJoinState.generated.h"

UENUM(BlueprintType)
namespace EFortSessionHelperJoinState {
    enum Type {
        NotJoining,
        RequestingReservation,
        FailedReservation,
        WaitingOnGame,
        AttemptingJoin,
        JoiningSession,
        FailedJoin,
        CanceledJoin,
    };
}

