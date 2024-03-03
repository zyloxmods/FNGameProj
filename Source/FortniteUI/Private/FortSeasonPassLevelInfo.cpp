#include "FortSeasonPassLevelInfo.h"

bool UFortSeasonPassLevelInfo::IsPaidUnlocked() const {
    return false;
}

bool UFortSeasonPassLevelInfo::IsPaidClaimed() const {
    return false;
}

bool UFortSeasonPassLevelInfo::IsFreeUnlocked() const {
    return false;
}

bool UFortSeasonPassLevelInfo::IsFreeClaimed() const {
    return false;
}

int32 UFortSeasonPassLevelInfo::GetSeasonPassMaxLevel() const {
    return 0;
}

TArray<UFortItem*> UFortSeasonPassLevelInfo::GetRewardItems(EAthenaSeasonRewardTrack Track) {
    return TArray<UFortItem*>();
}

int32 UFortSeasonPassLevelInfo::GetNumRewardItems(EAthenaSeasonRewardTrack Track) const {
    return 0;
}

float UFortSeasonPassLevelInfo::GetLevelProgress() const {
    return 0.0f;
}

int32 UFortSeasonPassLevelInfo::GetLevel() const {
    return 0;
}

bool UFortSeasonPassLevelInfo::ContainsChaseReward(EAthenaSeasonRewardTrack Track) const {
    return false;
}

UFortSeasonPassLevelInfo::UFortSeasonPassLevelInfo() {
    this->FortPC = NULL;
    this->SeasonData = NULL;
}

