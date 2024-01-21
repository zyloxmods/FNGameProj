#include "MatchHeartbeatManager.h"

UMatchHeartbeatManager::UMatchHeartbeatManager() {
    this->OwningGameMode = NULL;
    this->SlowStatReader = NULL;
    this->ServerMetricsLOD = 3;
    this->HighFrequencyServerMetricsDurationSec = 0;
    this->HighFrequencyEventsLOD = 0;
}

