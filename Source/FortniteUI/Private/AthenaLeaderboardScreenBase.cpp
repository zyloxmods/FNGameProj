#include "AthenaLeaderboardScreenBase.h"






void UAthenaLeaderboardScreenBase::OnPlaylistChanged(const FName NewPlaylistName, const ECommonInputType NewInputType) {
}

void UAthenaLeaderboardScreenBase::OnMatchTypeChanged(int32 MatchTypeIndex) {
}

void UAthenaLeaderboardScreenBase::OnFriendsFilterChanged(int32 FriendsFilterIndex) {
}

void UAthenaLeaderboardScreenBase::OnActiveLeaderboardTabChanged(int32 ActiveWidgetIndex) {
}

bool UAthenaLeaderboardScreenBase::CanShowFriendsOnlyLeaderboard() const {
    return false;
}

UAthenaLeaderboardScreenBase::UAthenaLeaderboardScreenBase() {
    this->LeaderboardTabList = NULL;
    this->MatchRotator = NULL;
    this->LeaderboardTypeRotator = NULL;
    this->RefreshTimeText = NULL;
    this->NoDataMessageText = NULL;
    this->BorderLocalUserFocus = NULL;
    this->Widget_ProfileStats = NULL;
    this->AthenaStats_Wins = NULL;
    this->AthenaStats_SecondTierFinishes = NULL;
    this->AthenaStats_ThirdTierFinishes = NULL;
    this->AthenaStats_Eliminations = NULL;
    this->AthenaStats_MatchesPlayer = NULL;
    this->Button_ChangeFlag = NULL;
    this->Image_YourFlag = NULL;
    this->FortFlagSelectionModalClass = NULL;
    this->PlaylistsData = NULL;
    this->LocalUserRowProxy = NULL;
}

