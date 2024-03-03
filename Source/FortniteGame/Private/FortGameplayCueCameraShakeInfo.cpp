#include "FortGameplayCueCameraShakeInfo.h"

FFortGameplayCueCameraShakeInfo::FFortGameplayCueCameraShakeInfo() {
    this->Shake = NULL;
    this->Scale = 1;
    this->bAlwaysPlayOnTarget = false;
    this->bCalculateUserPlaySpaceRotationFromLocation = false;
    this->bCancelOnRemove = false;
}

