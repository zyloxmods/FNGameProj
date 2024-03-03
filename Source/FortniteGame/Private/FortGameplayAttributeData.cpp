#include "FortGameplayAttributeData.h"

FFortGameplayAttributeData::FFortGameplayAttributeData() {
    this->Minimum = 1;
    this->Maximum = 1;
    this->bIsCurrentClamped = false;
    this->bIsBaseClamped = false;
    this->bShouldClampBase = false;
    this->UnclampedBaseValue = 1;
    this->UnclampedCurrentValue = 1;
}

