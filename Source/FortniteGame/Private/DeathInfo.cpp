#include "DeathInfo.h"

FDeathInfo::FDeathInfo() {
    FinisherOrDowner = NULL;
    Downer = NULL;
    bDBNO = false;
    DeathCause = EDeathCause::OutsideSafeZone;
    DeathClassSlot = 0;
    Distance = 1;
    bInitialized = false;
}

