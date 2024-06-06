#include "FortBTDecorator_WeaponStatus.h"

UFortBTDecorator_WeaponStatus::UFortBTDecorator_WeaponStatus() {
    WeaponStatusUpdateRate = 1;
    bTestIfCurrentWeaponIsValid = false;
    bCurrentWeaponShouldBeValid = false;
    bTestAllowedCurrentWeaponTags = false;
    bTestIfCurrentWeaponIsReloading = false;
    bCurrentWeaponShouldBeReloading = false;
    bTestIfCurrentWeaponHasAmmoInMagazine = false;
    bCurrentWeaponShouldHaveAmmoInMagazine = false;
    bTestIfCurrentWeaponHasExtraAmmo = false;
    bCurrentWeaponShouldHaveExtraAmmo = false;
    bAllInterestedTestsMustPass = false;
}

