#include "Fort3PCameraMode.h"

UFort3PCameraMode::UFort3PCameraMode() {
    FOV = 1;
    bValidateSafeLoc = false;
    bDoPredictiveAvoidance = true;
    bPreventPenetration = true;
    PenetrationAvoidanceFeelers.AddDefaulted(7);
    PenetrationBlendInTime = 1;
    PenetrationBlendOutTime = 1;
    PivotRotInterpSpeed = 1;
    FOVInterpSpeed = 1;
    ViewOffsetInterpSpeed = 1;
    SafeLocationInterpSpeed = 1;
    LastSafeLocBlockedPct = 1;
    LastPenetrationBlockedPct = 1;
}

