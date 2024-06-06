#include "MMAttemptState.h"

FMMAttemptState::FMMAttemptState() {
    BestSessionIdx = 0;
    NumSearchResults = 0;
    State = EMatchmakingState::NotMatchmaking;
  //  LastBeaconResponse = EPartyReservationResult::NoResult;
}

