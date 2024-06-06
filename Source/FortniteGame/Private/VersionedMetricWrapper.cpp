#include "VersionedMetricWrapper.h"

FVersionedMetricWrapper::FVersionedMetricWrapper() {
    IntroducedVersion = ELevelSaveRecordVersion::CloudSaveInfoAdded;
    DeprecatedVersion = ELevelSaveRecordVersion::CloudSaveInfoAdded;
}

