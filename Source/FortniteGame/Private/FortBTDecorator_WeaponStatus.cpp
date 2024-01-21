#include "FortBTDecorator_WeaponStatus.h"

UFortBTDecorator_WeaponStatus::UFortBTDecorator_WeaponStatus() {
    this->WeaponStatusUpdateRate = 0.50f;
    this->bTestIfCurrentWeaponIsValid = false;
    this->bCurrentWeaponShouldBeValid = false;
    this->bTestAllowedCurrentWeaponTags = false;
    this->bTestIfCurrentWeaponIsReloading = false;
    this->bCurrentWeaponShouldBeReloading = false;
    this->bTestIfCurrentWeaponHasAmmoInMagazine = false;
    this->bCurrentWeaponShouldHaveAmmoInMagazine = false;
    this->bTestIfCurrentWeaponHasExtraAmmo = false;
    this->bCurrentWeaponShouldHaveExtraAmmo = false;
    this->bAllInterestedTestsMustPass = false;
}

