#include "AthenaChallengeSetTile_Mission.h"

bool UAthenaChallengeSetTile_Mission::IsUrgentMission() const {
    return false;
}

bool UAthenaChallengeSetTile_Mission::IsLockedByTime() const {
    return false;
}

bool UAthenaChallengeSetTile_Mission::IsGenericMission() const {
    return false;
}

TSoftObjectPtr<UTexture2D> UAthenaChallengeSetTile_Mission::GetSoftTextureForChaseReward() const {
    return NULL;
}

bool UAthenaChallengeSetTile_Mission::CanLevelUpBundle() const {
    return false;
}

UAthenaChallengeSetTile_Mission::UAthenaChallengeSetTile_Mission() {
    this->BundleLevel = 0;
    this->BundleLevelCompletionPercent = 0;
    this->PrestigeShimmerParamName = TEXT("PrestigeActive");
    this->ContextColorParamName = TEXT("BaseColor");
    this->Image_MissionCompleted = NULL;
    this->Image_ChaseReward = NULL;
    this->Text_AvailableInTime = NULL;
    this->Countdown_TimeRemaining = NULL;
    this->Switcher_LockReason = NULL;
    this->Switcher_MissionIcon = NULL;
    this->Switcher_Reward = NULL;
}

