#include "FortEventTeamMatchHistoryModal.h"

void UFortEventTeamMatchHistoryModal::SetupMatchHistory(const UFortEventLeaderboardEntryData* DataForDisplay, const FString& TournamentId, const FString& EventWindowId) {
}


UFortEventTeamMatchHistoryModal::UFortEventTeamMatchHistoryModal() {
    this->ListView_MatchHistory = NULL;
    this->Text_TeamNames = NULL;
    this->LeaderboardEntryData = NULL;
    this->LastClickedMatchHistoryEntry = NULL;
}

