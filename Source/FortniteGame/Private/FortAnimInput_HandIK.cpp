#include "FortAnimInput_HandIK.h"

FFortAnimInput_HandIK::FFortAnimInput_HandIK() {
    IKAlphaOverrideInterpSpeed = 1;
    IKSpaceSwitchOverrideInterpSpeed = 1;
    HandIKRetargetingWeight = 1;
    HandsInRootSpaceAlpha = 1;
    LeftHandIKAlpha = 1;
    RightHandIKAlpha = 1;
    LeftHandIKOverrideType = EFortHandIKOverrideType::UseDefault;
    RightHandIKOverrideType = EFortHandIKOverrideType::UseDefault;
}

