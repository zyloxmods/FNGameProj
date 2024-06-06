#include "DeathEvent.h"

FDeathEvent::FDeathEvent() {
    bIsDBNO = false;
    bWasDBNOOnDeath = false;
    DeathCause = EDeathCause::OutsideSafeZone;
    DeathDistance = 1;
}

