#include "FortGameFeatureStatus.h"

FFortGameFeatureStatus::FFortGameFeatureStatus() {
    this->Feature = EFortGameFeature::EarlyStartup;
    this->CurrentState = EFortGameFeatureState::Unknown;
    this->RequestedState = EFortGameFeatureState::Unknown;
    this->bIsUsingBackgroundDownloads = false;
    this->bIsProgressPaused = false;
    this->IsActive = false;
    this->IsPendingActive = false;
}

