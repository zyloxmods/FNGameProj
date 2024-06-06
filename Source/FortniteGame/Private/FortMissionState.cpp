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
    bAlreadySetTimerOnce = false;
    bAlreadyCalledOnAllPlayersLoadedIn = false;
    TimerForOnAllPlayersLoadedIn = 1;
}

