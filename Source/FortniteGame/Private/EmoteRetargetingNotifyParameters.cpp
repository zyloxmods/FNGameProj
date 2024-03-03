#include "EmoteRetargetingNotifyParameters.h"

FEmoteRetargetingNotifyParameters::FEmoteRetargetingNotifyParameters() {
    this->BodyTypeToAffect = EFortPlayerAnimBodyType::Small;
    this->LeftHandIK = EFortHandIKOverrideType::UseDefault;
    this->RightHandIK = EFortHandIKOverrideType::UseDefault;
}

