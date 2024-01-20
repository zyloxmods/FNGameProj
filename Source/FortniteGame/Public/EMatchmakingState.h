#pragma once
#include "CoreMinimal.h"
#include "EMatchmakingState.generated.h"

UENUM(BlueprintType)
namespace EMatchmakingState {
    enum Type {
        NotMatchmaking,
        CancelingMatchmaking,
        ReleasingLock,
        AcquiringLock,
        LockAcquistionFailure,
        FindingEmptyServer,
        FindingExistingSession,
        TestingEmptyServers,
        TestingExistingSessions,
        JoiningExistingSession,
        NoMatchesAvailable,
        CleaningUpExisting,
        HandlingFailure,
        JoinSuccess,
    };
}

