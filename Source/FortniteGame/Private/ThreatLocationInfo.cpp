#include "ThreatLocationInfo.h"

FThreatLocationInfo::FThreatLocationInfo() {
    this->ThreatVisualsManager = NULL;
    this->bThreatActivated = false;
    this->DeactivationType = EFortThreatDeactivationType::Off;
}

