#include "HeartbeatManager.h"

UHeartbeatManager::UHeartbeatManager() {
    this->bShouldTrackLocation = true;
    this->TrackLocationFrequencySec = 5.00f;
    this->bShouldSendPerMinuteResourceAndDamageEvents = true;
    this->AnalyticsClientEngagementsManager = NULL;
}

