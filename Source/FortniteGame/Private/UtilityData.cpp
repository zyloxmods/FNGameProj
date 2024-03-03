#include "UtilityData.h"

FUtilityData::FUtilityData() {
    this->ContributionsTotal = 1;
    this->bApplyRecentSelectionPenalty = false;
    this->RecentlySelectedPenaltyPercentage = 1;
    this->PenaltyFallOffRate = 1;
}

