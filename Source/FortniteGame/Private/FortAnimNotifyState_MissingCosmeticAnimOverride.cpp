#include "FortAnimNotifyState_MissingCosmeticAnimOverride.h"

UFortAnimNotifyState_MissingCosmeticAnimOverride::UFortAnimNotifyState_MissingCosmeticAnimOverride() {
    this->RequiredAnimInstanceClass = NULL;
    this->PartTypeToCheck = EFortCustomPartType::Head;
    this->UpperBodyOverride = NULL;
    this->LowerBodyOverride = NULL;
    this->LowerBodyInMotionOverride = NULL;
}

