#include "DigestedTargetBasedAccuracy.h"

FDigestedTargetBasedAccuracy::FDigestedTargetBasedAccuracy() {
    this->AimTrackingOffsetErrorMultiplier = 1;
    this->AimTrackingHeightOffsetErrorMultiplier = 1;
    this->AimTrackingDistanceErrorMultiplier = 1;
    this->AimTrackingReactionTimeMultiplier = 1;
    this->AimTrackingInterpTimeMultiplier = 1;
    this->AimTrackingInAirVelocityThresholdMultiplier = 1;
    this->AimTrackinginAirHeightDataThresholdMultiplier = 1;
}

