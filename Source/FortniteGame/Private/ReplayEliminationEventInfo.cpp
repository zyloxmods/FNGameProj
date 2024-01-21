#include "ReplayEliminationEventInfo.h"

FReplayEliminationEventInfo::FReplayEliminationEventInfo() {
    this->DeathCause = EDeathCause::OutsideSafeZone;
    this->bDBNO = false;
    this->EventType = EFortReplayEventType::Elimination;
}

