#include "Fort3PCameraMode.h"

UFort3PCameraMode::UFort3PCameraMode() {
    this->FOV = 90.00f;
    this->bValidateSafeLoc = false;
    this->bDoPredictiveAvoidance = true;
    this->bPreventPenetration = true;
    this->PenetrationAvoidanceFeelers.AddDefaulted(7);
    this->PenetrationBlendInTime = 0.10f;
    this->PenetrationBlendOutTime = 0.15f;
    this->PivotRotInterpSpeed = 8.00f;
    this->FOVInterpSpeed = 8.00f;
    this->ViewOffsetInterpSpeed = 8.00f;
    this->SafeLocationInterpSpeed = 8.00f;
    this->LastSafeLocBlockedPct = 0.00f;
    this->LastPenetrationBlockedPct = 1.00f;
}

