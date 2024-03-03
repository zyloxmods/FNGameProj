#include "EliminatedOverlay.h"

void UEliminatedOverlay::UpdateMultiwinner() {
}

void UEliminatedOverlay::StreamingLoadingChanged(bool bLoading) {
}









AFortPlayerStateAthena* UEliminatedOverlay::GetPlayerState() {
    return NULL;
}


UEliminatedOverlay::UEliminatedOverlay() {
    this->bIsWaitingForTeamEliminationForPlacement = false;
    this->Overlay_PlayerName = NULL;
    this->Text_EliminatedBy = NULL;
    this->Text_UserId = NULL;
    this->Text_SpectatorName = NULL;
    this->VBox_PlacementText = NULL;
    this->VBox_Winner = NULL;
    this->Text_WinnerPoints = NULL;
    this->Text_Winner = NULL;
    this->Text_MultiWinner = NULL;
    this->Text_Placement = NULL;
    this->Text_PlaceNumber = NULL;
    this->Text_PlacePoints = NULL;
    this->Switcher_MultiWinners = NULL;
    this->Text_MultiWinner1 = NULL;
    this->Text_MultiWinner2 = NULL;
    this->HBox_LoadingBox = NULL;
    this->AthenaWinnersList = NULL;
    this->Widget_KillCounter = NULL;
}

