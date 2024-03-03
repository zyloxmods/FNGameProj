#include "AthenaSpectatorNameplateLayerBase.h"

void UAthenaSpectatorNameplateLayerBase::OnTeamColorVisibleChanged(bool bVisible) {
}

void UAthenaSpectatorNameplateLayerBase::OnPlayerDataAdded(UAthenaRemotePlayerViewData* InPlayerData) {
}

void UAthenaSpectatorNameplateLayerBase::OnArrowTeamColorVisibleChanged(bool bVisible) {
}

UAthenaSpectatorNameplateLayerBase::UAthenaSpectatorNameplateLayerBase() {
    this->NameplateWidgetClass = NULL;
    this->Canvas_NameplateIndicators = NULL;
}

