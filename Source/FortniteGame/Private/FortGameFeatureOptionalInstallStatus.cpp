#include "FortGameFeatureOptionalInstallStatus.h"

FFortGameFeatureOptionalInstallStatus::FFortGameFeatureOptionalInstallStatus() {
    this->Feature = EFortGameFeature::EarlyStartup;
    this->bContentReady = false;
    this->bIsUsingBackgroundDownloads = false;
    this->bIsProgressPaused = false;
}

