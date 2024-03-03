#include "AthenaTeamScoreWidgetBase.h"




void UAthenaTeamScoreWidgetBase::HandleUpdate() {
}

void UAthenaTeamScoreWidgetBase::HandleSpectatingChanged(AFortPlayerStateZone* SpectatingTarget) {
}

void UAthenaTeamScoreWidgetBase::HandleScoreChanged(int32 Score) {
}

UAthenaTeamScoreWidgetBase::UAthenaTeamScoreWidgetBase() {
    this->CurrPlayerState = NULL;
    this->GoalScore = 0;
    this->PreviousScore = 0;
    this->PreviousScorePlacement = 0;
    this->PreviousDeltaScore = 0;
    this->bPreviousIsWinner = false;
    this->bPreviousHasScore = false;
}

