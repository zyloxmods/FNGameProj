#include "FortGameplayAttributeData.h"

FFortGameplayAttributeData::FFortGameplayAttributeData() {
    Minimum = 1;
    Maximum = 1;
    bIsCurrentClamped = false;
    bIsBaseClamped = false;
    bShouldClampBase = false;
    UnclampedBaseValue = 1;
    UnclampedCurrentValue = 1;
}

