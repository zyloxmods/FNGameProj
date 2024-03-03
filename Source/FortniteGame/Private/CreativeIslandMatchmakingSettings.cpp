#include "CreativeIslandMatchmakingSettings.h"

FCreativeIslandMatchmakingSettings::FCreativeIslandMatchmakingSettings() {
    this->MinimumNumberOfPlayers = 0;
    this->MaximumNumberOfPlayers = 0;
    this->PlayerCount = 0;
    this->NumberOfTeams = 0;
    this->PlayersPerTeam = 0;
    this->bAllowJoinInProgress = false;
    this->JoinInProgressType = EJoinInProgress::Spectate;
    this->JoinInProgressTeam = 0;
}

