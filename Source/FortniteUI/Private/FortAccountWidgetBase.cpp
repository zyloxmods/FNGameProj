#include "FortAccountWidgetBase.h"


void UFortAccountWidgetBase::HandleCurrentlyViewedAccountInfoChanged(FFortPublicAccountInfo NewInfo) {
}

FAthenaSeasonBannerLevel UFortAccountWidgetBase::GetSeasonBannerInfo(int32 Level) const {
    return FAthenaSeasonBannerLevel{};
}

bool UFortAccountWidgetBase::GetNextSeasonReward(FFortItemQuantityPair& Reward, int32& RewardLevel) const {
    return false;
}

bool UFortAccountWidgetBase::GetNextSeasonChaseReward(FFortItemQuantityPair& Reward, int32& RewardLevel, int32 StartingLevel) const {
    return false;
}

FText UFortAccountWidgetBase::GetCurrentSeasonNumberAsText() const {
    return FText::GetEmpty();
}

FText UFortAccountWidgetBase::GetCurrentChapterAsText() const {
    return FText::GetEmpty();
}

UFortAccountWidgetBase::UFortAccountWidgetBase() {
}

