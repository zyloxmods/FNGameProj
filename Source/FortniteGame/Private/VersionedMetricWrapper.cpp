#include "VersionedMetricWrapper.h"

FVersionedMetricWrapper::FVersionedMetricWrapper() {
    this->IntroducedVersion = ELevelSaveRecordVersion::CloudSaveInfoAdded;
    this->DeprecatedVersion = ELevelSaveRecordVersion::CloudSaveInfoAdded;
}

