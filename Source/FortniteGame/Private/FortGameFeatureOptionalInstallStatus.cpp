#include "FortGameFeatureOptionalInstallStatus.h"

FFortGameFeatureOptionalInstallStatus::FFortGameFeatureOptionalInstallStatus() {
    Feature = EFortGameFeature::EarlyStartup;
    bContentReady = false;
    bIsUsingBackgroundDownloads = false;
    bIsProgressPaused = false;
}

