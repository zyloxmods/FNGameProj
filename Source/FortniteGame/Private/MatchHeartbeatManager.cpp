#include "MatchHeartbeatManager.h"

UMatchHeartbeatManager::UMatchHeartbeatManager() {
    OwningGameMode = NULL;
    SlowStatReader = NULL;
    ServerMetricsLOD = 0;
    HighFrequencyServerMetricsDurationSec = 0;
    HighFrequencyEventsLOD = 0;
}

