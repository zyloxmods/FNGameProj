#include "PropertyOverrideData.h"

FPropertyOverrideData::FPropertyOverrideData() {
    this->TargetObjectReplicationKey = 0;
    this->OverrideMode = EPropertyOverrideTargetType::None;
    this->BaseObject = NULL;
    this->MutableObject = NULL;
}

