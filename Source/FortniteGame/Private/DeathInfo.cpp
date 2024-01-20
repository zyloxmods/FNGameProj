#include "DeathInfo.h"

FDeathInfo::FDeathInfo() {
    this->FinisherOrDowner = NULL;
    this->Downer = NULL;
    this->bDBNO = false;
    this->DeathCause = EDeathCause::OutsideSafeZone;
    this->Distance = 0.00f;
    this->bInitialized = false;
}

