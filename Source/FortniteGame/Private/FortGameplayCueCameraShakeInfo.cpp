#include "FortGameplayCueCameraShakeInfo.h"

FFortGameplayCueCameraShakeInfo::FFortGameplayCueCameraShakeInfo() {
    this->Shake = NULL;
    this->Scale = 0.00f;
    this->PlaySpace = ECameraAnimPlaySpace::CameraLocal;
    this->bAlwaysPlayOnTarget = false;
    this->bCalculateUserPlaySpaceRotationFromLocation = false;
    this->bCancelOnRemove = false;
}

