#include "FortMission_HarvestingBase.h"

AFortMission_HarvestingBase::AFortMission_HarvestingBase() {
    ItemDropChancePercent = 1;
    ItemMinDropQuantity = 0;
    ItemMaxDropQuantity = 0;
    MinDurationBetweenDrops = 1;
    MaxFailedDropsInARow = 0;
    bEnableConversations = true;
}

