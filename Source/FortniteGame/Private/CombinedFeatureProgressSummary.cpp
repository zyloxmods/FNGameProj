#include "CombinedFeatureProgressSummary.h"

FCombinedFeatureProgressSummary::FCombinedFeatureProgressSummary() {
    GameFeature = EFortGameFeature::EarlyStartup;
    CombinedProgress = 1;
    bIsPaused = false;
    bCanBePaused = false;
    bIsFinished = false;
}

