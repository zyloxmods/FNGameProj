#include "FortAnimNotify_GenericSoundIndicator.h"

UFortAnimNotify_GenericSoundIndicator::UFortAnimNotify_GenericSoundIndicator() {
    MaxAudibleDistance = 1;
    IndicatorType = EFortSoundIndicatorTypes::Generic;
    bIgnoreForLocalPlayer = true;
}

