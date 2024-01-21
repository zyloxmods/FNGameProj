#include "FortGameFeatureStatus.h"

FFortGameFeatureStatus::FFortGameFeatureStatus() {
    this->Feature = EFortGameFeature::EarlyStartup;
    this->CurrentState = EFortGameFeatureState::Unknown;
    this->RequestedState = EFortGameFeatureState::Unknown;
    this->Progress = 0.00f;
    this->bIsProgressPaused = false;
    this->CurrentBundleNum = 0;
    this->TotalNumBundles = 0;
    this->IsActive = false;
    this->IsPendingActive = false;
}

