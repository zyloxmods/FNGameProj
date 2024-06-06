#include "DigestedTargetBasedAccuracy.h"

FDigestedTargetBasedAccuracy::FDigestedTargetBasedAccuracy() {
    AimTrackingOffsetErrorMultiplier = 1;
    AimTrackingHeightOffsetErrorMultiplier = 1;
    AimTrackingDistanceErrorMultiplier = 1;
    AimTrackingReactionTimeMultiplier = 1;
    AimTrackingInterpTimeMultiplier = 1;
    AimTrackingInAirVelocityThresholdMultiplier = 1;
    AimTrackinginAirHeightDataThresholdMultiplier = 1;
}

