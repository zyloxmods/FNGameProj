#include "FortAnimNode_Flap.h"

FFortAnimNode_Flap::FFortAnimNode_Flap() {
    TargetComponent = EComponentType::None;
    SelectionMode = ESourceSelectionMode::MaxDifference;
    bUseClamp = false;
    TargetClampMin = 1;
    TargetClampMax = 1;
}

