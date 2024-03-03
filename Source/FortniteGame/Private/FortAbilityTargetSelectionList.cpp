#include "FortAbilityTargetSelectionList.h"

FFortAbilityTargetSelectionList::FFortAbilityTargetSelectionList() {
    this->bStopAtFirstSuccess = false;
    this->bKeepCheckingListOnIndestructibleHit = false;
    this->bUseWeaponRanges = false;
    this->bUseMaxYawAngleToTarget = false;
    this->MaxYawAngleToTarget = 1;
}

