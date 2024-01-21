#include "FortSearchPassState.h"

FFortSearchPassState::FFortSearchPassState() {
    this->BestSessionIdx = 0;
    this->bWasCanceled = false;
    this->FailureType = EFortSessionHelperJoinResult::NoResult;
    this->MatchmakingState = EMatchmakingState::NotMatchmaking;
    this->LastBeaconResponse = EPartyReservationResult::NoResult;
}

