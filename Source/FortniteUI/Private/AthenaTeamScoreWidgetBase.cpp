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
    this->PreviousScore = -1;
    this->PreviousScorePlacement = -1;
    this->PreviousDeltaScore = 99999999;
    this->bPreviousIsWinner = false;
    this->bPreviousHasScore = false;
}

