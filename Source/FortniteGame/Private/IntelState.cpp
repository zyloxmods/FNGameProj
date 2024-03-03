#include "IntelState.h"

FIntelState::FIntelState() {
    this->bInRange = false;
    this->TimeRemaining = 1;
    this->ServerEndTime = 1;
    this->ServerGroundTimerEnd = 1;
    this->IntelState = EIntelStateEnum::None;
    this->WinningTeam = 0;
    this->AttackingTeam = 0;
    this->DefendingTeam = 0;
}

