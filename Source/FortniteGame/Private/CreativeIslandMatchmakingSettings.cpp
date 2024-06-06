#include "CreativeIslandMatchmakingSettings.h"

FCreativeIslandMatchmakingSettings::FCreativeIslandMatchmakingSettings() {
    MinimumNumberOfPlayers = 0;
    MaximumNumberOfPlayers = 0;
    PlayerCount = 0;
    NumberOfTeams = 0;
    PlayersPerTeam = 0;
    bAllowJoinInProgress = false;
    JoinInProgressType = EJoinInProgress::Spectate;
    JoinInProgressTeam = 0;
}

