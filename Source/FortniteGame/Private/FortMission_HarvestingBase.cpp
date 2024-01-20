#include "FortMission_HarvestingBase.h"

AFortMission_HarvestingBase::AFortMission_HarvestingBase() {
    this->ItemDropChancePercent = 100.00f;
    this->ItemMinDropQuantity = 1;
    this->ItemMaxDropQuantity = 1;
    this->MinDurationBetweenDrops = 1.00f;
    this->MaxFailedDropsInARow = 0;
    this->bEnableConversations = true;
}

