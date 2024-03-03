#include "CombinedFeatureProgressSummary.h"

FCombinedFeatureProgressSummary::FCombinedFeatureProgressSummary() {
    this->GameFeature = EFortGameFeature::EarlyStartup;
    this->CombinedProgress = 1;
    this->bIsPaused = false;
    this->bCanBePaused = false;
    this->bIsFinished = false;
}

