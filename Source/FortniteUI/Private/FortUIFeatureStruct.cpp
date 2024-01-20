#include "FortUIFeatureStruct.h"

FFortUIFeatureStruct::FFortUIFeatureStruct() {
    this->CurrentState = EFortUIFeatureState::Enabled;
    this->ForcedState = EFortUIFeatureState::Enabled;
    this->ForcedStateReason = EFortUIFeatureStateReason::Default;
}

