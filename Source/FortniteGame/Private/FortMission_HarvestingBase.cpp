#include "FortMission_HarvestingBase.h"

AFortMission_HarvestingBase::AFortMission_HarvestingBase() {
    this->ItemDropChancePercent = 1;
    this->ItemMinDropQuantity = 0;
    this->ItemMaxDropQuantity = 0;
    this->MinDurationBetweenDrops = 1;
    this->MaxFailedDropsInARow = 0;
    this->bEnableConversations = true;
}

