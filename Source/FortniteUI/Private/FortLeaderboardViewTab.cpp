#include "FortLeaderboardViewTab.h"


UListView* UFortLeaderboardViewTab::GetListView() const {
    return NULL;
}

UFortLeaderboardViewTab::UFortLeaderboardViewTab() {
    this->Switcher_LeaderboardEntries = NULL;
    this->ActivatableContent_LeaderboardListWrapper = NULL;
    this->Content_NoLeaderboardEntries = NULL;
}

