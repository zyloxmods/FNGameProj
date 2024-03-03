#include "FortAnimNotify_GenericSoundIndicator.h"

UFortAnimNotify_GenericSoundIndicator::UFortAnimNotify_GenericSoundIndicator() {
    this->MaxAudibleDistance = 1;
    this->IndicatorType = EFortSoundIndicatorTypes::Generic;
    this->bIgnoreForLocalPlayer = true;
}

