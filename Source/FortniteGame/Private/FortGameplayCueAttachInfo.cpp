#include "FortGameplayCueAttachInfo.h"

FFortGameplayCueAttachInfo::FFortGameplayCueAttachInfo() {
    this->AttachType = EFortGameplayCueAttachType::AttachToTarget;
    this->bAttachToWeapon = false;
    this->bAttachToHitResult = false;
    this->bUseUnsmoothedNetworkPosition = false;
    this->bIgnoreScale = false;
    this->bIgnoreRotation = false;
}

