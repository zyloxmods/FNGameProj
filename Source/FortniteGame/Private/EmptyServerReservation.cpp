#include "EmptyServerReservation.h"

FEmptyServerReservation::FEmptyServerReservation() {
    this->PlaylistId = 0;
    this->bMakePrivate = false;
    this->MatchmakingPool = EFortMatchmakingPool::Any;
    this->bUsesMatchmakingV2 = false;
}

