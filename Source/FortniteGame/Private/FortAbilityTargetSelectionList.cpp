#include "FortAbilityTargetSelectionList.h"

FFortAbilityTargetSelectionList::FFortAbilityTargetSelectionList() {
    bStopAtFirstSuccess = false;
    bKeepCheckingListOnIndestructibleHit = false;
    bUseWeaponRanges = false;
    bUseMaxYawAngleToTarget = false;
    MaxYawAngleToTarget = 1;
}

