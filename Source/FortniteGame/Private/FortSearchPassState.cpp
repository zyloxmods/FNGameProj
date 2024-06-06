#include "FortSearchPassState.h"

FFortSearchPassState::FFortSearchPassState() {
    BestSessionIdx = 0;
    bWasCanceled = false;
    FailureType = EFortSessionHelperJoinResult::NoResult;
    MatchmakingState = EMatchmakingState::NotMatchmaking;
}

