#include "FortAnimNode_Flap.h"

FFortAnimNode_Flap::FFortAnimNode_Flap() {
    this->TargetComponent = EComponentType::None;
    this->SelectionMode = ESourceSelectionMode::MaxDifference;
    this->bUseClamp = false;
    this->TargetClampMin = 1;
    this->TargetClampMax = 1;
}

