#include "FortAthenaMutator_SpecialEvent.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_SpecialEvent::ToggleHUDs(bool bHide) {
}

void AFortAthenaMutator_SpecialEvent::ToggleDisableWeapons(bool bDisableWeapons) {
}

void AFortAthenaMutator_SpecialEvent::ToggleAllPlayersInvincibility(bool bInvincible) {
}

void AFortAthenaMutator_SpecialEvent::TeleportAllPlayers(FGameplayTagContainer EventTags, int32 TeleportsPerFrame) {
}

void AFortAthenaMutator_SpecialEvent::StartSafeZoneOverrideForEvent(int32 SafeZoneIndexForEvent) {
}

void AFortAthenaMutator_SpecialEvent::SetWeightForContainerLootRoll(const float Weight) {
}

void AFortAthenaMutator_SpecialEvent::SetNamedWeightForContainerLootRoll(const FName WeightName) {
}

void AFortAthenaMutator_SpecialEvent::ResetSafeZoneOverrideAfterEvent(int32 MinResetSafeZoneIndex, float MinDelayReturnToMainMenu, float MaxDelayReturnToMainMenu) {
}

void AFortAthenaMutator_SpecialEvent::RequestSanitizedPlayers(int32 NumPlayersRequested) {
}

void AFortAthenaMutator_SpecialEvent::PauseSupplyDrops(bool bPause) {
}

void AFortAthenaMutator_SpecialEvent::PauseStormProgression(bool bPause) {
}

void AFortAthenaMutator_SpecialEvent::PauseStormDamage(bool bPause) {
}

void AFortAthenaMutator_SpecialEvent::OnRep_DelayPlayersFromReturningToLobbyData() {
}

void AFortAthenaMutator_SpecialEvent::OnRep_bPlayersAreInvincible() {
}

void AFortAthenaMutator_SpecialEvent::OnRep_bDisableHUD() {
}

void AFortAthenaMutator_SpecialEvent::OnRep_AllPlayerTeleportedCount() {
}

void AFortAthenaMutator_SpecialEvent::OnGamePhaseStepChanged(EAthenaGamePhaseStep GamePhaseStep) {
}

void AFortAthenaMutator_SpecialEvent::JumpToSafeZonePhase(FVector PawnSpawnCenterLocation, float PawnSpawnMinDistance, float PawnSpawnMaxDistance) {
}

void AFortAthenaMutator_SpecialEvent::ForceSafeZoneFinalLocation(FVector NewFinalLocation, float DefaultAircraftOffsetFromMidLine, float MinDefaultMidlineAngle, float MaxDefaultMidlineAngle) {
}

void AFortAthenaMutator_SpecialEvent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_SpecialEvent, bPlayersAreInvincible);
    DOREPLIFETIME(AFortAthenaMutator_SpecialEvent, bDisableHUD);
    DOREPLIFETIME(AFortAthenaMutator_SpecialEvent, AllPlayerTeleportedCount);
    DOREPLIFETIME(AFortAthenaMutator_SpecialEvent, DelayPlayersFromReturningToLobbyData);
}

AFortAthenaMutator_SpecialEvent::AFortAthenaMutator_SpecialEvent() {
    this->bPlayersAreInvincible = false;
    this->bDisableHUD = false;
    this->AllPlayerTeleportedCount = 0;
    this->WeightForContainerLootRoll = 0.00f;
}

