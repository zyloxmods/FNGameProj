#include "WeaponUpgradeRequiredResources.h"

UWeaponUpgradeRequiredResources::UWeaponUpgradeRequiredResources() {
    this->RequiredWood = 0;
    this->RequiredMetal = 0;
    this->RequiredBrick = 0;
    this->Direction = EFortWeaponUpgradeDirection::NotSet;
}

