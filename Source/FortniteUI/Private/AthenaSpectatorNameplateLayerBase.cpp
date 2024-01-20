#include "AthenaSpectatorNameplateLayerBase.h"


void UAthenaSpectatorNameplateLayerBase::OnTeamColorVisibleChanged(bool bVisible) {
}

void UAthenaSpectatorNameplateLayerBase::OnSquadIdsVisibilityChanged(bool bSquadIdsVisible) {
}

void UAthenaSpectatorNameplateLayerBase::OnPlayerDataAdded(UAthenaRemotePlayerViewData* InPlayerData) {
}


UAthenaSpectatorNameplateLayerBase::UAthenaSpectatorNameplateLayerBase() {
    this->NameplateWidgetClass = NULL;
    this->BroadcastNameplateWidgetClass = NULL;
}

