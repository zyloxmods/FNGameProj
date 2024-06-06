#include "FortWeaponRangedDual.h"
#include "SkeletalMeshComponentBudgeted.h"

EDualWeaponHand AFortWeaponRangedDual::GetNextFireHand() const {
    return EDualWeaponHand::LEFT;
}

USkeletalMeshComponentBudgeted* AFortWeaponRangedDual::GetLeftHandWeaponMesh() const {
    return NULL;
}

EDualWeaponHand AFortWeaponRangedDual::GetLastFireHand() const {
    return EDualWeaponHand::LEFT;
}

AFortWeaponRangedDual::AFortWeaponRangedDual() {
    LeftHandWeaponMesh = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("Left Hand Weapon Mesh"));
    LeftHandFireAnimation = NULL;
    LeftCockingAnimation = NULL;
    LeftHandFireDownsightsAnimation = NULL;
    LeftWeaponFireMontage = NULL;
    LeftWeaponFireDownsightsMontage = NULL;
    LeftWeaponCockingMontage = NULL;
    LeftWeaponReloadMontage = NULL;
}

