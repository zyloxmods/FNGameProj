#include "VersionedCostOverride.h"

FVersionedCostOverride::FVersionedCostOverride() {
    IntroducedVersion = ELevelSaveRecordVersion::CloudSaveInfoAdded;
    DeprecatedVersion = ELevelSaveRecordVersion::CloudSaveInfoAdded;
    OverrideCost = 0;
}

