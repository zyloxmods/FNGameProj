#include "IntelState.h"

FIntelState::FIntelState() {
    bInRange = false;
    TimeRemaining = 1;
    ServerEndTime = 1;
    ServerGroundTimerEnd = 1;
    IntelState = EIntelStateEnum::None;
    WinningTeam = 0;
    AttackingTeam = 0;
    DefendingTeam = 0;
}

