#include "ThreatCloud.h"









FBox AThreatCloud::GetThreatVolume() const {
    return FBox{};
}

AThreatCloud::AThreatCloud() {
    MiniMapIconPercent = 1;
    ActiveTransitionTime = 1;
    DeathTimerDuration = 1;
    CloudMiniMapTickInterval = 1;
    MiniMapFarOffIconDegreesOfArc = 1;
    GroundLevelUnderCloud = 1;
}

