#include "FortMissionState.h"

void AFortMissionState::UpdateUI() {
}

void AFortMissionState::SetTimerForOnAllPlayersLoadedIn(float Timer) {
}

void AFortMissionState::SendMissionUIEvent(const FGameplayTagContainer& EventTags) {
}



void AFortMissionState::OnAllPlayersLoadedInWrapper() {
}


AFortMissionState::AFortMissionState() {
    this->bAlreadySetTimerOnce = false;
    this->bAlreadyCalledOnAllPlayersLoadedIn = false;
    this->TimerForOnAllPlayersLoadedIn = 30.00f;
}

