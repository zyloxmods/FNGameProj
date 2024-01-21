#include "FortAnimNotify_GenericSoundIndicator.h"

UFortAnimNotify_GenericSoundIndicator::UFortAnimNotify_GenericSoundIndicator() {
    this->MaxAudibleDistance = 0.00f;
    this->IndicatorType = EFortSoundIndicatorTypes::Generic;
    this->bIgnoreForLocalPlayer = true;
}

