#include "CrucibleLeaderboardData.h"

FCrucibleLeaderboardData::FCrucibleLeaderboardData() {
    this->LeaderboardId = EFortCrucibleLeaderboardId::GlobalGamepad;
    this->CurrentState = EFortCrucibleLeaderboardState::Disabled;
    this->bHasBeenRequestedByUser = false;
    this->bHasHadWorkQueued = false;
    this->NumQueries = 0;
}

