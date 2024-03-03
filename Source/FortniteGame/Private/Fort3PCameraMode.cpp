#include "Fort3PCameraMode.h"

UFort3PCameraMode::UFort3PCameraMode() {
    this->FOV = 1;
    this->bValidateSafeLoc = false;
    this->bDoPredictiveAvoidance = true;
    this->bPreventPenetration = true;
    this->PenetrationAvoidanceFeelers.AddDefaulted(7);
    this->PenetrationBlendInTime = 1;
    this->PenetrationBlendOutTime = 1;
    this->PivotRotInterpSpeed = 1;
    this->FOVInterpSpeed = 1;
    this->ViewOffsetInterpSpeed = 1;
    this->SafeLocationInterpSpeed = 1;
    this->LastSafeLocBlockedPct = 1;
    this->LastPenetrationBlockedPct = 1;
}

