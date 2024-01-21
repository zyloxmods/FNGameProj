#include "ThreatCloud.h"









FBox AThreatCloud::GetThreatVolume() const {
    return FBox{};
}

AThreatCloud::AThreatCloud() {
    this->MiniMapIconPercent = 0.10f;
    this->ActiveTransitionTime = 3.00f;
    this->DeathTimerDuration = 10.00f;
    this->CloudMiniMapTickInterval = 0.10f;
    this->MiniMapFarOffIconDegreesOfArc = 20.00f;
    this->GroundLevelUnderCloud = -340282346638528859811704183484516925440.00f;
}

