#include "ReplayKillSummary.h"

FReplayKillSummary::FReplayKillSummary() {
    this->Timestamp = 0.00f;
    this->bIsDownButNotOut = false;
    this->DeathCause = EDeathCause::OutsideSafeZone;
}

