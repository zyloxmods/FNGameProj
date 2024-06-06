#include "AthenaRewardItemReference.h"

FAthenaRewardItemReference::FAthenaRewardItemReference() {
    Quantity = 0;
    IsChaseReward = false;
    RewardType = EAthenaRewardItemType::Normal;
    RewardVisualImportanceType = EAthenaRewardVisualImportanceType::Normal;
}

