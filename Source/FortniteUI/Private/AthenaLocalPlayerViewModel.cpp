#include "AthenaLocalPlayerViewModel.h"

void UAthenaLocalPlayerViewModel::HandleViewTargetPlayerStateReplicated(AFortPlayerPawn* Pawn) {
}

void UAthenaLocalPlayerViewModel::HandleLocalPlayerChangedTeams() {
}

UAthenaLocalPlayerViewModel::UAthenaLocalPlayerViewModel() {
    this->PlayerController = NULL;
    this->IndicatorCache = NULL;
}

