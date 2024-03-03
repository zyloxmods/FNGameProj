#include "FortAIPawnStats.h"

FFortAIPawnStats::FFortAIPawnStats() {
    this->ScoreValue = 0;
    this->DormantSightRadius = 1;
    this->DormantHearingThreshold = 1;
    this->DormantLOSHearingThreshold = 1;
    this->DormantPeripheralVisionAngle = 1;
    this->AlertSightRadius = 1;
    this->AlertHearingThreshold = 1;
    this->AlertLOSHearingThreshold = 1;
    this->AlertPeripheralVisionAngle = 1;
    this->AutoSuccessRangeFromLastSeenLocation = 1;
    this->HealthScalingTable = NULL;
    this->ControlResistanceScalingTable = NULL;
    this->DifficultyRatingTable = NULL;
}

