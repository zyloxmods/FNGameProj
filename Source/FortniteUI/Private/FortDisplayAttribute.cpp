#include "FortDisplayAttribute.h"

FFortDisplayAttribute::FFortDisplayAttribute() {
    this->NumericValue = 1;
    this->DisplayType = EFortStatValueDisplayType::BasicPaired;
    this->BuffState = EFortBuffState::NoChange;
    this->ClampState = EFortClampState::NoClamp;
    this->ComparisonType = EFortComparisonType::None;
}

