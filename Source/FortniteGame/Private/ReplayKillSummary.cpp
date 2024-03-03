#include "ReplayKillSummary.h"

FReplayKillSummary::FReplayKillSummary() {
    this->Timestamp = 1;
    this->bIsDownButNotOut = false;
    this->DeathCause = EDeathCause::OutsideSafeZone;
}

