#include "AIBotSkills.h"

FAIBotSkills::FAIBotSkills() {
    this->MaxTimeBetweenShots = 0.00f;
    this->MaxDeviationTimeBetweenShots = 0.00f;
    this->MaxTrackingReactionTime = 0.00f;
    this->MaxTrackingInterpTime = 0.00f;
    this->MaxTrackingPredictionError = 0.00f;
    this->MaxTrackingOffsetError = 0.00f;
    this->TrackingErrorUpdateInterval = 0.00f;
    this->SightPerceptionDistance = 0.00f;
    this->EvasiveManeuverDelay = 0.00f;
    this->EvasiveManeuverDelayRandomDeviation = 0.00f;
}

