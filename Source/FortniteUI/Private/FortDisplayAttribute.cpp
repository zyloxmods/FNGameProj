#include "FortDisplayAttribute.h"

FFortDisplayAttribute::FFortDisplayAttribute() {
    this->NumericValue = 0.00f;
    this->DisplayType = EFortStatValueDisplayType::BasicPaired;
    this->BuffState = EFortBuffState::NoChange;
    this->ClampState = EFortClampState::NoClamp;
    this->ComparisonType = EFortComparisonType::None;
}

