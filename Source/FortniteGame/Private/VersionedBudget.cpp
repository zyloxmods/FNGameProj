#include "VersionedBudget.h"

FVersionedBudget::FVersionedBudget() {
    Version = ELevelSaveRecordVersion::CloudSaveInfoAdded;
    Value = 0;
}

