#include "VersionedBudget.h"

FVersionedBudget::FVersionedBudget() {
    this->Version = ELevelSaveRecordVersion::CloudSaveInfoAdded;
    this->Value = 0;
}

