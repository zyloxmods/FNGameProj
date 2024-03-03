#include "AthenaGameFeatureStatus.h"


UAthenaGameFeatureStatus::UAthenaGameFeatureStatus() {
    this->GameFeature = EFortGameFeature::EarlyStartup;
    this->bExtendedDisplay = false;
    this->Image_DownloadingIcon = NULL;
    this->Text_ProgressPercent = NULL;
    this->Text_ExtendedDisplayText = NULL;
}

