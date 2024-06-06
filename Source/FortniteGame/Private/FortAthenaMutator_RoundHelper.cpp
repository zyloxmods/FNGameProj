#include "FortAthenaMutator_RoundHelper.h"

void AFortAthenaMutator_RoundHelper::StartNextRound() {
}

void AFortAthenaMutator_RoundHelper::SetCurrentRound(int32 NewRound) {
}

void AFortAthenaMutator_RoundHelper::OnInitialTeleportComplete(AFortPlayerPawn* PlayerPawn) {
}

int32 AFortAthenaMutator_RoundHelper::GetNumOfRounds() const {
    return 0;
}

int32 AFortAthenaMutator_RoundHelper::GetCurrentRound() const {
    return 0;
}

AFortAthenaMutator_RoundHelper::AFortAthenaMutator_RoundHelper() {
    NumOfRounds = 0;
    NumOfTeams = 0;
    StartingTeamNum = 3;
}

