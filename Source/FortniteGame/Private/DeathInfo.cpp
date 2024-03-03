#include "DeathInfo.h"

FDeathInfo::FDeathInfo() {
    this->FinisherOrDowner = NULL;
    this->Downer = NULL;
    this->bDBNO = false;
    this->DeathCause = EDeathCause::OutsideSafeZone;
    this->DeathClassSlot = 0;
    this->Distance = 1;
    this->bInitialized = false;
}

