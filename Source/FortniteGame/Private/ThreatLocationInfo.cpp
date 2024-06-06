#include "ThreatLocationInfo.h"

FThreatLocationInfo::FThreatLocationInfo() {
    ThreatVisualsManager = NULL;
    bThreatActivated = false;
    DeactivationType = EFortThreatDeactivationType::Off;
}

