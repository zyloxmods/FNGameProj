#include "PickupManagementSettings.h"

FPickupManagementSettings::FPickupManagementSettings() {
    this->PickupsAllowedMax = 0;
    this->PickupsDesiredSlack = 0;
    this->PickupDespawnDelaySeconds = 1;
    this->bDebugPickupManagement = false;
    this->bEnablePickupManagement = false;
    this->NotJunkPickupThreshold = EFortRarity::Common;
    this->ImportantPickupThreshold = EFortRarity::Common;
    this->bFlagPlayerDropsAsImportant = false;
}

