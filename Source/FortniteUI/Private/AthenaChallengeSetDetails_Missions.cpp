#include "AthenaChallengeSetDetails_Missions.h"




bool UAthenaChallengeSetDetails_Missions::IsUrgentMission() const {
    return false;
}

bool UAthenaChallengeSetDetails_Missions::IsGenericMission() const {
    return false;
}

bool UAthenaChallengeSetDetails_Missions::IsCurrentlyViewPrestige() const {
    return false;
}


TSoftObjectPtr<UTexture2D> UAthenaChallengeSetDetails_Missions::GetChaseRewardForBundleLevel(int32 BundleLevel) const {
    return NULL;
}

bool UAthenaChallengeSetDetails_Missions::CanLevelBundle() const {
    return false;
}

bool UAthenaChallengeSetDetails_Missions::BundleHasMultipleLevels() const {
    return false;
}

UAthenaChallengeSetDetails_Missions::UAthenaChallengeSetDetails_Missions() {
    this->CurrentBundleItemLevel = 0;
    this->PrestigeShimmerParamName = TEXT("PrestigeActive");
    this->ContextColorParamName = TEXT("BaseColor");
    this->ChallengeDetails_Rewards = NULL;
    this->Button_LevelUpBundle = NULL;
    this->Text_RewardUnlockTip = NULL;
    this->PrestiegeUpsell = NULL;
    this->Switcher_ProgressDisplay = NULL;
    this->Switcher_MissionIcon = NULL;
    this->Switcher_BundleState = NULL;
}

