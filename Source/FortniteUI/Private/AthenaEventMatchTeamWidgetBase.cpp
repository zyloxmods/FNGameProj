#include "AthenaEventMatchTeamWidgetBase.h"


void UAthenaEventMatchTeamWidgetBase::OnPlayerDisconnectedChanged(UAthenaRemotePlayerViewData* InPlayerData, bool bInIsDisconnected) {
}

void UAthenaEventMatchTeamWidgetBase::OnPlayerDeadStateChanged(UAthenaRemotePlayerViewData* InPlayerData, bool bInIsDead) {
}

bool UAthenaEventMatchTeamWidgetBase::IsTeamDead() const {
    return false;
}

int32 UAthenaEventMatchTeamWidgetBase::GetTeamKills() const {
    return 0;
}

UAthenaEventMatchTeamWidgetBase::UAthenaEventMatchTeamWidgetBase() {
    this->SquadId = 0;
    this->MaxTeamSize = 0;
    this->PlayerWidgetClass = NULL;
}

