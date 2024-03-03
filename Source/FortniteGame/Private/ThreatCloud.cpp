#include "ThreatCloud.h"









FBox AThreatCloud::GetThreatVolume() const {
    return FBox{};
}

AThreatCloud::AThreatCloud() {
    this->MiniMapIconPercent = 1;
    this->ActiveTransitionTime = 1;
    this->DeathTimerDuration = 1;
    this->CloudMiniMapTickInterval = 1;
    this->MiniMapFarOffIconDegreesOfArc = 1;
    this->GroundLevelUnderCloud = 1;
}

