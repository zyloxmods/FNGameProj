#include "ReplayEliminationEventInfo.h"

FReplayEliminationEventInfo::FReplayEliminationEventInfo() {
    DeathCause = EDeathCause::OutsideSafeZone;
    bDBNO = false;
    EventType = EFortReplayEventType::Elimination;
}

