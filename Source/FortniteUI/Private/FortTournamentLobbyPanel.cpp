#include "FortTournamentLobbyPanel.h"

bool UFortTournamentLobbyPanel::UsesScheduledMatchmaking() const {
    return false;
}

UFortTournamentLobbyPanel::UFortTournamentLobbyPanel() {
    this->Button_EventDetails = NULL;
    this->TournamentModalClass = NULL;
    this->Text_TimeRemainingScheduledMatch = NULL;
    this->Text_ScheduledMatchInfo = NULL;
}

