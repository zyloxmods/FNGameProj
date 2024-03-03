#include "FortHUDScoringAlert.h"

void UFortHUDScoringAlert::OnTeamPlacementChanged(int32 NewTeamPlacement) {
}


void UFortHUDScoringAlert::OnPlayerPlacementChanged(AFortPlayerStateAthena* Sender, int32 NewPlayerPlacement) {
}

void UFortHUDScoringAlert::OnPlayerMatchAbandonStateChanged(EMatchAbandonState OldState, EMatchAbandonState NewState) {
}

void UFortHUDScoringAlert::OnGamePhaseChanged(EAthenaGamePhase GamePhase) {
}

void UFortHUDScoringAlert::HandlePointAnimationFinished() {
}

UFortHUDScoringAlert::UFortHUDScoringAlert() {
    this->ScoringDataDisplay = NULL;
    this->HUDPointCounter = NULL;
    this->Text_ScoreDesc = NULL;
    this->Text_PointCount = NULL;
    this->Icon_Scoring = NULL;
    this->AbandonMatchClass = NULL;
}

