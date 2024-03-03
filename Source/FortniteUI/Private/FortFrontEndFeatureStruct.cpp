#include "FortFrontEndFeatureStruct.h"

FFortFrontEndFeatureStruct::FFortFrontEndFeatureStruct() {
    this->CurrentState = EFortFrontEndFeatureState::Enabled;
    this->ForcedState = EFortFrontEndFeatureState::Enabled;
    this->ForcedStateReason = EFortFrontEndFeatureStateReason::Default;
}

