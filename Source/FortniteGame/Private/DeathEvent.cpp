#include "DeathEvent.h"

FDeathEvent::FDeathEvent() {
    this->bIsDBNO = false;
    this->bWasDBNOOnDeath = false;
    this->DeathCause = EDeathCause::OutsideSafeZone;
    this->DeathDistance = 1;
}

