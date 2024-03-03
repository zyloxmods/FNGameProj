#include "PropertyOverrideData.h"

FPropertyOverrideData::FPropertyOverrideData() {
    this->OverrideMode = EPropertyOverrideTargetType::None;
    this->BaseObject = NULL;
    this->MutableObject = NULL;
}

