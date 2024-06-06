#include "PickupManagementSettings.h"

FPickupManagementSettings::FPickupManagementSettings() {
    PickupsAllowedMax = 0;
    PickupsDesiredSlack = 0;
    PickupDespawnDelaySeconds = 1;
    bDebugPickupManagement = false;
    bEnablePickupManagement = false;
    NotJunkPickupThreshold = EFortRarity::Common;
    ImportantPickupThreshold = EFortRarity::Common;
    bFlagPlayerDropsAsImportant = false;
}

