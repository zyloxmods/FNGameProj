#include "FortLiveBroadcastController.h"

void AFortLiveBroadcastController::TryBeginBusPhase() {
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

void AFortLiveBroadcastController::ClientHideBusButton_Implementation() {
}

bool AFortLiveBroadcastController::CanStartBattleBus() {
    return false;
}

AFortLiveBroadcastController::AFortLiveBroadcastController() {
    BroadcastPostProcessingActorClass = NULL;
    SquadMarkerActorClass = NULL;
}

