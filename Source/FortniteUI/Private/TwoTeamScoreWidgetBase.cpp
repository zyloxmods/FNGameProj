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
    this->PercentageScoreToPlayCountdown = 1;
    this->PercentageScoreToPlayFinalCountdown = 1;
    this->ScoreCountdownSoundFrequency = 1;
    this->LastViewedTeam = 0;
}

