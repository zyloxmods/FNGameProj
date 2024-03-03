#include "AthenaChallengeDetailRewardTrack.h"

void UAthenaChallengeDetailRewardTrack::HandlePreviewItemChanged(int32 RewardIndexToView) {
}

UAthenaChallengeDetailRewardTrack::UAthenaChallengeDetailRewardTrack() {
    this->NumRewardsBeforeScrolling = 0;
    this->bAllowWrapping = false;
    this->bScrollingRewards = false;
    this->CurrentBundleLevelBeingViewed = 0;
    this->CurrentRewardBeingViewed = 0;
    this->Switcher_RewardTrack = NULL;
    this->EntryBox_RewardTrack_Small = NULL;
    this->EntryBox_RewardTrack_Scroll = NULL;
}

