#include "VersionedCostOverride.h"

FVersionedCostOverride::FVersionedCostOverride() {
    this->IntroducedVersion = ELevelSaveRecordVersion::CloudSaveInfoAdded;
    this->DeprecatedVersion = ELevelSaveRecordVersion::CloudSaveInfoAdded;
    this->OverrideCost = 0;
}

