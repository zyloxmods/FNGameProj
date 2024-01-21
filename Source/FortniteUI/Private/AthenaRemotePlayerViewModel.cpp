#include "AthenaRemotePlayerViewModel.h"

void UAthenaRemotePlayerViewModel::OnFollowedPlayerChanged(AFortPlayerControllerSpectating* SpectatorPC, AFortPlayerState* NewFollowedPlayer) {
}

UAthenaRemotePlayerViewModel::UAthenaRemotePlayerViewModel() {
    this->PlayerController = NULL;
}

