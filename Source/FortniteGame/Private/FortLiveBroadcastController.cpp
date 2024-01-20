#include "FortLiveBroadcastController.h"

void AFortLiveBroadcastController::TryBeginBusPhase() {
}

void AFortLiveBroadcastController::ServerSetFollowedPlayer_Implementation(AFortPlayerState* NewPlayerToFollow, const FVector& SpectatorLocation, bool bValidPos) {
}
bool AFortLiveBroadcastController::ServerSetFollowedPlayer_Validate(AFortPlayerState* NewPlayerToFollow, const FVector& SpectatorLocation, bool bValidPos) {
    return true;
}

void AFortLiveBroadcastController::ServerOnSpectatorCameraTypeChanged_Implementation(ESpectatorCameraType NewCameraMode, const FVector& SpectatorLocation, bool bValidPos) {
}
bool AFortLiveBroadcastController::ServerOnSpectatorCameraTypeChanged_Validate(ESpectatorCameraType NewCameraMode, const FVector& SpectatorLocation, bool bValidPos) {
    return true;
}

void AFortLiveBroadcastController::ServerBeginBusPhase_Implementation() {
}
bool AFortLiveBroadcastController::ServerBeginBusPhase_Validate() {
    return true;
}

bool AFortLiveBroadcastController::CanStartBattleBus() {
    return false;
}

AFortLiveBroadcastController::AFortLiveBroadcastController() {
    this->BroadcastPostProcessingActorClass = NULL;
    this->SquadMarkerActorClass = NULL;
}

