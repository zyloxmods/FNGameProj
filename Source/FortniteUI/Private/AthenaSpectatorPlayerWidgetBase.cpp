#include "AthenaSpectatorPlayerWidgetBase.h"

void UAthenaSpectatorPlayerWidgetBase::SetPlayerData(UAthenaRemotePlayerViewData* InPlayerData, bool bForceUpdate) {
}


























void UAthenaSpectatorPlayerWidgetBase::HandleTeamColorChanged(UAthenaRemotePlayerViewData* InPlayerData, FLinearColor TeamColor) {
}

void UAthenaSpectatorPlayerWidgetBase::HandleSquadIdChanged(UAthenaRemotePlayerViewData* InPlayerData, uint8 SquadId) {
}

void UAthenaSpectatorPlayerWidgetBase::HandleShieldHealed(UAthenaRemotePlayerViewData* InPlayerData, float Shield, float MaxShield) {
}

void UAthenaSpectatorPlayerWidgetBase::HandleShieldDamaged(UAthenaRemotePlayerViewData* InPlayerData, float Shield, float MaxShield) {
}

void UAthenaSpectatorPlayerWidgetBase::HandlePlayerStateChanged(UAthenaRemotePlayerViewData* InPlayerData, AFortPlayerStateAthena* PlayerState) {
}

void UAthenaSpectatorPlayerWidgetBase::HandlePlayerNameChanged(UAthenaRemotePlayerViewData* InPlayerData, const FString& PlayerName) {
}

void UAthenaSpectatorPlayerWidgetBase::HandlePlaceChanged(UAthenaRemotePlayerViewData* InPlayerData, int32 Place) {
}

void UAthenaSpectatorPlayerWidgetBase::HandleMaterialCountChanged(UAthenaRemotePlayerViewData* InPlayerData, int32 MaterialCount) {
}

void UAthenaSpectatorPlayerWidgetBase::HandleKillScoreChanged(UAthenaRemotePlayerViewData* InPlayerData, int32 KillScore) {
}

void UAthenaSpectatorPlayerWidgetBase::HandleIsReplayRelevancyPlayerChanged(UAthenaRemotePlayerViewData* InPlayerData, bool bIsReplayRelevancyPlayer) {
}

void UAthenaSpectatorPlayerWidgetBase::HandleIsInRelevancyChanged(UAthenaRemotePlayerViewData* InPlayerData, bool bIsInRelevancy) {
}

void UAthenaSpectatorPlayerWidgetBase::HandleIsFollowedPlayerChanged(UAthenaRemotePlayerViewData* InPlayerData, bool bIsFollowedPlayer) {
}

void UAthenaSpectatorPlayerWidgetBase::HandleHealthHealed(UAthenaRemotePlayerViewData* InPlayerData, float Health, float MaxHealth) {
}

void UAthenaSpectatorPlayerWidgetBase::HandleHealthDamaged(UAthenaRemotePlayerViewData* InPlayerData, float Health, float MaxHealth) {
}

void UAthenaSpectatorPlayerWidgetBase::HandleDisconnectedChanged(UAthenaRemotePlayerViewData* InPlayerData, bool bIsDisconnected) {
}

void UAthenaSpectatorPlayerWidgetBase::HandleDeadStateChanged(UAthenaRemotePlayerViewData* InPlayerData, bool bIsDead) {
}

void UAthenaSpectatorPlayerWidgetBase::HandleDBNOStateChanged(UAthenaRemotePlayerViewData* InPlayerData, bool bIsDBNO) {
}

void UAthenaSpectatorPlayerWidgetBase::HandleBeingRevivedStateChanged(UAthenaRemotePlayerViewData* InPlayerData, bool bIsBeingRevived) {
}

UAthenaRemotePlayerViewData* UAthenaSpectatorPlayerWidgetBase::GetPlayerData() const {
    return NULL;
}

UAthenaSpectatorPlayerWidgetBase::UAthenaSpectatorPlayerWidgetBase() {
}

