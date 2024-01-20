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
    this->PercentageScoreToPlayCountdown = 0.00f;
    this->PercentageScoreToPlayFinalCountdown = 0.00f;
    this->ScoreCountdownSoundFrequency = 0.00f;
    this->bLocalTeamIsScoring = false;
    this->bEnemyTeamIsScoring = false;
    this->LastViewedTeam = 0;
}

