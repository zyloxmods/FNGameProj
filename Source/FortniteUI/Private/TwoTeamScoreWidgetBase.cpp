#include "TwoTeamScoreWidgetBase.h"

void UTwoTeamScoreWidgetBase::UpdateAllUI() {
}




void UTwoTeamScoreWidgetBase::OnHandleSpectatingChanged(AFortPlayerStateZone* SpectatingTarget) {
}

void UTwoTeamScoreWidgetBase::OnGamePhaseChanged(EAthenaGamePhase GamePhase) {
}

void UTwoTeamScoreWidgetBase::OnCountdownTimerUpdate() {
}

UTwoTeamScoreWidgetBase::UTwoTeamScoreWidgetBase() {
    this->PercentageScoreToPlayCountdown = 0.00f;
    this->PercentageScoreToPlayFinalCountdown = 0.00f;
    this->ScoreCountdownSoundFrequency = 0.00f;
    this->LastViewedTeam = 0;
}

