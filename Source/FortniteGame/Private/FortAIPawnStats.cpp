#include "FortAIPawnStats.h"

FFortAIPawnStats::FFortAIPawnStats() {
    this->ScoreValue = 0;
    this->DormantSightRadius = 0.00f;
    this->DormantHearingThreshold = 0.00f;
    this->DormantLOSHearingThreshold = 0.00f;
    this->DormantPeripheralVisionAngle = 0.00f;
    this->AlertSightRadius = 0.00f;
    this->AlertHearingThreshold = 0.00f;
    this->AlertLOSHearingThreshold = 0.00f;
    this->AlertPeripheralVisionAngle = 0.00f;
    this->AutoSuccessRangeFromLastSeenLocation = 0.00f;
    this->HealthScalingTable = NULL;
    this->ControlResistanceScalingTable = NULL;
    this->DifficultyRatingTable = NULL;
}

