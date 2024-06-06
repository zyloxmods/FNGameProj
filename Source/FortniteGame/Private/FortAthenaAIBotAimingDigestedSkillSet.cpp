#include "FortAthenaAIBotAimingDigestedSkillSet.h"

UFortAthenaAIBotAimingDigestedSkillSet::UFortAthenaAIBotAimingDigestedSkillSet() {
    IgnoreThreatTimeWhenNotAttacking = 1;
    IgnoreThreatDeviationWhenNotAttacking = 1;
    IgnoreThreatDuration = 1;
    IgnoreThreatDurationDeviation = 1;
    bAllowScanAroundWhileSwimming = false;
    TrackingReactionTime = 1;
    TrackingInterpTime = 1;
    MaxTrackingPredictionError = 1;
    MaxTrackingOffsetErrorMultiplier = 1;
    AdjustedTrackingOffsetErrorMultiplierAgainstAIs = 1;
    TrackingErrorUpdateInterval = 1;
    TrackingInAirVelocityThreshold = 1;
    TrackingInAirHeightDeltaThreshold = 1;
    TargetAcquisitionRate = 1;
    MaxDistanceEvaluationErrorRatio = 1;
    TargetingUpdateInterval = 1;
    TargetingUpdateIntervalMaxDeviation = 1;
    ReachLeashLimitToleranceDistance = 1;
    CachedWeaponUsedToCalculateAccuracy = NULL;
}

