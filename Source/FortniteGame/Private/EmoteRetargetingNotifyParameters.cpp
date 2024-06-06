#include "EmoteRetargetingNotifyParameters.h"

FEmoteRetargetingNotifyParameters::FEmoteRetargetingNotifyParameters() {
    BodyTypeToAffect = EFortPlayerAnimBodyType::Small;
    LeftHandIK = EFortHandIKOverrideType::UseDefault;
    RightHandIK = EFortHandIKOverrideType::UseDefault;
}

