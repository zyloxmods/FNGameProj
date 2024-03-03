#include "HeartbeatManager.h"

UHeartbeatManager::UHeartbeatManager() {
    this->bShouldTrackLocation = true;
    this->TrackLocationFrequencySec = 1;
    this->bShouldSendPerMinuteResourceAndDamageEvents = true;
    this->bShouldSendPerMinuteVehicleEvents = true;
    this->AnalyticsClientEngagementsManager = NULL;
}

