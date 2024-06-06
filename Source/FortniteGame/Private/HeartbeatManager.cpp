#include "HeartbeatManager.h"

UHeartbeatManager::UHeartbeatManager() {
    bShouldTrackLocation = true;
    TrackLocationFrequencySec = 1;
    bShouldSendPerMinuteResourceAndDamageEvents = true;
    bShouldSendPerMinuteVehicleEvents = true;
    AnalyticsClientEngagementsManager = NULL;
}

