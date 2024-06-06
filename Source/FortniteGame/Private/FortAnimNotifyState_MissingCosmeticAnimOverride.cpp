#include "FortAnimNotifyState_MissingCosmeticAnimOverride.h"

UFortAnimNotifyState_MissingCosmeticAnimOverride::UFortAnimNotifyState_MissingCosmeticAnimOverride() {
    RequiredAnimInstanceClass = NULL;
    PartTypeToCheck = EFortCustomPartType::Head;
    UpperBodyOverride = NULL;
    LowerBodyOverride = NULL;
    LowerBodyInMotionOverride = NULL;
}

