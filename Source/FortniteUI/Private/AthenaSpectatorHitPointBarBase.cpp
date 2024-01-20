#include "AthenaSpectatorHitPointBarBase.h"

void UAthenaSpectatorHitPointBarBase::SetPlayerData(UAthenaRemotePlayerViewData* InPlayerData) {
}

void UAthenaSpectatorHitPointBarBase::OnValueHealed(UAthenaRemotePlayerViewData* InPlayerData, float InValuePercent) {
}

void UAthenaSpectatorHitPointBarBase::OnValueDamaged(UAthenaRemotePlayerViewData* InPlayerData, float InValuePercent) {
}

void UAthenaSpectatorHitPointBarBase::OnEliminatedStateChanged(UAthenaRemotePlayerViewData* InPlayerData, bool bInIsEliminated) {
}


void UAthenaSpectatorHitPointBarBase::OnDBNOStateChanged(UAthenaRemotePlayerViewData* InPlayerData, bool bInIsDBNO) {
}



UAthenaSpectatorHitPointBarBase::UAthenaSpectatorHitPointBarBase() {
    this->BarType = EHealthBarType::Health;
    this->LastToCurrentUpdateRate = 1.50f;
    this->bIsDBNO = false;
}

