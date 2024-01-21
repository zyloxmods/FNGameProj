#include "AthenaSpectatorBuildCountBase.h"

void UAthenaSpectatorBuildCountBase::UpdateBuildCount() {
}

void UAthenaSpectatorBuildCountBase::OnWorldItemListChanged(const TArray<UFortWorldItem*>& ItemsAdded, const TArray<UFortWorldItem*>& ItemsRemoved) {
}


void UAthenaSpectatorBuildCountBase::OnFollowedPlayerChanged(AFortPlayerControllerSpectating* SpectatingPC, AFortPlayerState* NewFollowedPlayer) {
}


UAthenaSpectatorBuildCountBase::UAthenaSpectatorBuildCountBase() {
    this->BuildingClass = NULL;
    this->BuildCountType = ESpectatorBuildCountType::BuildCount;
}

