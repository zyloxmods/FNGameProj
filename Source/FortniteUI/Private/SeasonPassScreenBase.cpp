#include "SeasonPassScreenBase.h"


bool USeasonPassScreenBase::ShouldOpenAboutScreen() {
    return false;
}



bool USeasonPassScreenBase::PurchaseAvailible() const {
    return false;
}

bool USeasonPassScreenBase::OwnsSeasonPass() const {
    return false;
}






void USeasonPassScreenBase::NavigateToLevel(int32 Level) {
}

bool USeasonPassScreenBase::IsCellConnection() {
    return false;
}

bool USeasonPassScreenBase::HasUnclaimedBattlePassDiscountToken() const {
    return false;
}

int32 USeasonPassScreenBase::GetSeasonPassLevelMax() const {
    return 0;
}

int32 USeasonPassScreenBase::GetSeasonPassLevel() const {
    return 0;
}

FDateTime USeasonPassScreenBase::GetSeasonEndDate() const {
    return FDateTime{};
}

UFortSeasonPassLevelInfo* USeasonPassScreenBase::GetLevelInfo(int32 Level) const {
    return NULL;
}

TMap<int32, UFortSeasonPassLevelInfo*> USeasonPassScreenBase::GetAllLevelInfos() const {
    return TMap<int32, UFortSeasonPassLevelInfo*>();
}


bool USeasonPassScreenBase::CanClaimBattlePassDiscountToken() const {
    return false;
}

USeasonPassScreenBase::USeasonPassScreenBase() {
    this->SeasonData = NULL;
}

