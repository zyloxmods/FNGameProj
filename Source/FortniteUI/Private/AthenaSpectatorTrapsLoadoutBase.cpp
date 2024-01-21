#include "AthenaSpectatorTrapsLoadoutBase.h"


void UAthenaSpectatorTrapsLoadoutBase::OnWorldItemListChanged(const TArray<UFortWorldItem*>& ItemsAdded, const TArray<UFortWorldItem*>& ItemsRemoved) {
}

void UAthenaSpectatorTrapsLoadoutBase::OnFollowedPlayerChanged(AFortPlayerControllerSpectating* SpectatingPC, AFortPlayerState* FollowedPlayerState) {
}

UAthenaSpectatorTrapsLoadoutBase::UAthenaSpectatorTrapsLoadoutBase() {
    this->LastFollowedPlayer = NULL;
}

