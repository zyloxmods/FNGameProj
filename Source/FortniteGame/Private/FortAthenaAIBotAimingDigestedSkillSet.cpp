#include "FortAthenaAIBotAimingDigestedSkillSet.h"

UFortAthenaAIBotAimingDigestedSkillSet::UFortAthenaAIBotAimingDigestedSkillSet() {
    this->IgnoreThreatTimeWhenNotAttacking = 1;
    this->IgnoreThreatDeviationWhenNotAttacking = 1;
    this->IgnoreThreatDuration = 1;
    this->IgnoreThreatDurationDeviation = 1;
    this->bAllowScanAroundWhileSwimming = false;
    this->TrackingReactionTime = 1;
    this->TrackingInterpTime = 1;
    this->MaxTrackingPredictionError = 1;
    this->MaxTrackingOffsetErrorMultiplier = 1;
    this->AdjustedTrackingOffsetErrorMultiplierAgainstAIs = 1;
    this->TrackingErrorUpdateInterval = 1;
    this->TrackingInAirVelocityThreshold = 1;
    this->TrackingInAirHeightDeltaThreshold = 1;
    this->TargetAcquisitionRate = 1;
    this->MaxDistanceEvaluationErrorRatio = 1;
    this->TargetingUpdateInterval = 1;
    this->TargetingUpdateIntervalMaxDeviation = 1;
    this->ReachLeashLimitToleranceDistance = 1;
    this->CachedWeaponUsedToCalculateAccuracy = NULL;
}

