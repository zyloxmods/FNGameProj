#include "PropertyOverrideData.h"

FPropertyOverrideData::FPropertyOverrideData() {
    OverrideMode = EPropertyOverrideTargetType::None;
    BaseObject = NULL;
    MutableObject = NULL;
}

