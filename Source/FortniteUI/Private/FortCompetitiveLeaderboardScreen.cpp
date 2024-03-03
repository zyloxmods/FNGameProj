#include "FortCompetitiveLeaderboardScreen.h"

void UFortCompetitiveLeaderboardScreen::SetEvent(const FString& EventId, const FString& EventWindowId) {
}

void UFortCompetitiveLeaderboardScreen::RequestNextPage() {
}



void UFortCompetitiveLeaderboardScreen::HandleLeaderboardSetInView() {
}

UFortEventLeaderboardEntryData* UFortCompetitiveLeaderboardScreen::GetMyLeaderboardEntry() {
    return NULL;
}

UFortCompetitiveLeaderboardScreen::UFortCompetitiveLeaderboardScreen() {
    this->TimeDelayToShowDetails = 1;
    this->MyEntryData = NULL;
    this->EntryToShowDetails = NULL;
    this->ActivatableContent_LeaderboardTab = NULL;
}

