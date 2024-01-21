#include "FortEventLeaderboardScreen.h"

void UFortEventLeaderboardScreen::SetEvent(const FString& EventWindowId) {
}

void UFortEventLeaderboardScreen::RequestNextPage() {
}




void UFortEventLeaderboardScreen::HandleLeaderboardSetInView() {
}

UFortEventLeaderboardEntryData* UFortEventLeaderboardScreen::GetMyLeaderboardEntry() {
    return NULL;
}

UFortEventLeaderboardScreen::UFortEventLeaderboardScreen() {
    this->TimeDelayToShowDetails = 0.25f;
    this->EntryToShowDetails = NULL;
    this->MyEntryData = NULL;
    this->ListView_LeaderboardEntries = NULL;
    this->Button_ViewLiveGames = NULL;
}

