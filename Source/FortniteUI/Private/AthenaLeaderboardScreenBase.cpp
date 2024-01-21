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
    this->LeaderboardDisplayData = NULL;
    this->LocalUserRowProxy = NULL;
}

