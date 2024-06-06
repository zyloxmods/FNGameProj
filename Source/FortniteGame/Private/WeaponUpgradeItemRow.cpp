#include "WeaponUpgradeItemRow.h"

FWeaponUpgradeItemRow::FWeaponUpgradeItemRow() {
    CurrentWeaponDef = NULL;
    UpgradedWeaponDef = NULL;
    WoodCost = EFortWeaponUpgradeCosts::NotSet;
    MetalCost = EFortWeaponUpgradeCosts::NotSet;
    BrickCost = EFortWeaponUpgradeCosts::NotSet;
    Direction = EFortWeaponUpgradeDirection::NotSet;
}

