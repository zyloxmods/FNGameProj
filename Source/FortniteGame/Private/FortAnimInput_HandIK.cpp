#include "FortAnimInput_HandIK.h"

FFortAnimInput_HandIK::FFortAnimInput_HandIK() {
    this->IKAlphaOverrideInterpSpeed = 1;
    this->IKSpaceSwitchOverrideInterpSpeed = 1;
    this->HandIKRetargetingWeight = 1;
    this->HandsInRootSpaceAlpha = 1;
    this->LeftHandIKAlpha = 1;
    this->RightHandIKAlpha = 1;
    this->LeftHandIKOverrideType = EFortHandIKOverrideType::UseDefault;
    this->RightHandIKOverrideType = EFortHandIKOverrideType::UseDefault;
}

