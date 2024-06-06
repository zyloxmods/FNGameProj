#include "FortGameFeatureStatus.h"

FFortGameFeatureStatus::FFortGameFeatureStatus() {
    Feature = EFortGameFeature::EarlyStartup;
    CurrentState = EFortGameFeatureState::Unknown;
    RequestedState = EFortGameFeatureState::Unknown;
    bIsUsingBackgroundDownloads = false;
    bIsProgressPaused = false;
    IsActive = false;
    IsPendingActive = false;
}

