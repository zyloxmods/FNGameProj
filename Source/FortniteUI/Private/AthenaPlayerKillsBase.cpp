#include "AthenaPlayerKillsBase.h"

void UAthenaPlayerKillsBase::SetKillsSourcePlayerState(AFortPlayerStateAthena* InPlayerState) {
}

void UAthenaPlayerKillsBase::SetKillsSourcePlayerController(AFortPlayerControllerAthena* InPlayerController) {
}

UAthenaPlayerKillsBase::UAthenaPlayerKillsBase() {
    this->KillsText = NULL;
    this->KillsSource = NULL;
    this->bCustomKillSource = false;
}

