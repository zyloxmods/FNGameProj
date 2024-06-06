#include "FortAIPawnStats.h"

FFortAIPawnStats::FFortAIPawnStats() {
    ScoreValue = 0;
    DormantSightRadius = 1;
    DormantHearingThreshold = 1;
    DormantLOSHearingThreshold = 1;
    DormantPeripheralVisionAngle = 1;
    AlertSightRadius = 1;
    AlertHearingThreshold = 1;
    AlertLOSHearingThreshold = 1;
    AlertPeripheralVisionAngle = 1;
    AutoSuccessRangeFromLastSeenLocation = 1;
    HealthScalingTable = NULL;
    ControlResistanceScalingTable = NULL;
    DifficultyRatingTable = NULL;
}

