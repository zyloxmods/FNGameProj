#include "FortLiveSpectatorController.h"

void AFortLiveSpectatorController::ServerSetFollowedPlayer_Implementation(AFortPlayerState* NewPlayerToFollow, const FVector& SpectatorLocation, bool bValidPos) {
}
bool AFortLiveSpectatorController::ServerSetFollowedPlayer_Validate(AFortPlayerState* NewPlayerToFollow, const FVector& SpectatorLocation, bool bValidPos) {
    return true;
}

AFortLiveSpectatorController::AFortLiveSpectatorController() {
    FollowedPlayerState = NULL;
}

