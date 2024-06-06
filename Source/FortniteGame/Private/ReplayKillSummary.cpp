#include "ReplayKillSummary.h"

FReplayKillSummary::FReplayKillSummary() {
    Timestamp = 1;
    bIsDownButNotOut = false;
    DeathCause = EDeathCause::OutsideSafeZone;
}

