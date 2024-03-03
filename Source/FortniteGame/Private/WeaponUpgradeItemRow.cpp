#include "WeaponUpgradeItemRow.h"

FWeaponUpgradeItemRow::FWeaponUpgradeItemRow() {
    this->CurrentWeaponDef = NULL;
    this->UpgradedWeaponDef = NULL;
    this->WoodCost = EFortWeaponUpgradeCosts::NotSet;
    this->MetalCost = EFortWeaponUpgradeCosts::NotSet;
    this->BrickCost = EFortWeaponUpgradeCosts::NotSet;
    this->Direction = EFortWeaponUpgradeDirection::NotSet;
}

