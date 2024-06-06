#include "FortGameplayCueAttachInfo.h"

FFortGameplayCueAttachInfo::FFortGameplayCueAttachInfo() {
    AttachType = EFortGameplayCueAttachType::AttachToTarget;
    bAttachToWeapon = false;
    bAttachToHitResult = false;
    bUseUnsmoothedNetworkPosition = false;
    bIgnoreScale = false;
    bIgnoreRotation = false;
}

