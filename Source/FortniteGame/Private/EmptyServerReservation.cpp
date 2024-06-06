#include "EmptyServerReservation.h"

FEmptyServerReservation::FEmptyServerReservation() {
    PlaylistId = 0;
    bMakePrivate = false;
    MatchmakingPool = EFortMatchmakingPool::Any;
    bUsesMatchmakingV2 = false;
}

