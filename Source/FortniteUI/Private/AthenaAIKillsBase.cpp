#include "AthenaAIKillsBase.h"

void UAthenaAIKillsBase::SetKillsSourcePlayerState(AFortPlayerStateAthena* InPlayerState) {
}

void UAthenaAIKillsBase::SetKillsSourcePlayerController(AFortPlayerControllerAthena* InPlayerController) {
}

UAthenaAIKillsBase::UAthenaAIKillsBase() {
    this->KillsText = NULL;
    this->KillsSource = NULL;
    this->bCustomKillSource = false;
}

