#include "FortInviteSessionParams.h"

FFortInviteSessionParams::FFortInviteSessionParams() {
    this->State = EMatchmakingState::NotMatchmaking;
    this->LastBeaconResponse = EPartyReservationResult::NoResult;
}

