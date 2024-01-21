#include "AthenaPlayerTeamKillsBase.h"

void UAthenaPlayerTeamKillsBase::SetKillsSourcePlayerState(AFortPlayerStateAthena* InPlayerState) {
}

void UAthenaPlayerTeamKillsBase::SetKillsSourcePlayerController(AFortPlayerControllerAthena* InPlayerController) {
}

UAthenaPlayerTeamKillsBase::UAthenaPlayerTeamKillsBase() {
    this->KillsText = NULL;
    this->KillsSource = NULL;
    this->bCustomKillSource = false;
}

