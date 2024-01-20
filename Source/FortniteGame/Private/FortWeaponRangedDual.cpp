#include "FortWeaponRangedDual.h"
#include "SkeletalMeshComponentBudgeted.h"

EDualWeaponHand AFortWeaponRangedDual::GetNextFireHand() const {
    return EDualWeaponHand::LEFT;
}

EDualWeaponHand AFortWeaponRangedDual::GetLastFireHand() const {
    return EDualWeaponHand::LEFT;
}

AFortWeaponRangedDual::AFortWeaponRangedDual() {
    this->LeftHandWeaponMesh = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("Left Hand Weapon Mesh"));
    this->LeftHandFireAnimation = NULL;
    this->LeftCockingAnimation = NULL;
    this->LeftHandFireDownsightsAnimation = NULL;
    this->LeftWeaponFireMontage = NULL;
    this->LeftWeaponFireDownsightsMontage = NULL;
    this->LeftWeaponCockingMontage = NULL;
    this->LeftWeaponReloadMontage = NULL;
}

