#include "CrucibleLeaderboardData.h"

FCrucibleLeaderboardData::FCrucibleLeaderboardData() {
    LeaderboardId = EFortCrucibleLeaderboardId::GlobalGamepad;
    CurrentState = EFortCrucibleLeaderboardState::Disabled;
    bHasBeenRequestedByUser = false;
    bHasHadWorkQueued = false;
    NumQueries = 0;
}

