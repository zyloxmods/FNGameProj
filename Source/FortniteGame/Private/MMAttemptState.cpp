#include "MMAttemptState.h"

FMMAttemptState::FMMAttemptState() {
    this->BestSessionIdx = 0;
    this->NumSearchResults = 0;
    this->State = EMatchmakingState::NotMatchmaking;
    this->LastBeaconResponse = EPartyReservationResult::NoResult;
}

