#include "DiscoWidgetBase.h"

void UDiscoWidgetBase::UpdateAllUI() {
}




void UDiscoWidgetBase::OnMutatorObjectUpdated(const FGameplayMutatorObjectDataArray& MutatorArray) {
}

void UDiscoWidgetBase::OnHandleSpectatingChanged(AFortPlayerStateZone* SpectatingTarget) {
}

void UDiscoWidgetBase::OnGamePhaseChanged(EAthenaGamePhase GamePhase) {
}

void UDiscoWidgetBase::OnCountdownTimerUpdate() {
}

UDiscoWidgetBase::UDiscoWidgetBase() {
    this->PercentageScoreToPlayCountdown = 1;
    this->PercentageScoreToPlayFinalCountdown = 1;
    this->ScoreCountdownSoundFrequency = 1;
    this->bLocalTeamIsScoring = false;
    this->bEnemyTeamIsScoring = false;
    this->LastViewedTeam = 0;
}

