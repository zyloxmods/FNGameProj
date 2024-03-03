#include "FortAthenaMutator_Uranium.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_Uranium::TickUraniumEvents() {
}

void AFortAthenaMutator_Uranium::TeleportPlayerLoadComplete(AFortPlayerStateAthena* PlayerState) {
}

void AFortAthenaMutator_Uranium::StartEndOfRoundStasis() {
}

void AFortAthenaMutator_Uranium::OnRep_TeleportComplete() {
}

void AFortAthenaMutator_Uranium::OnRep_RoundData() {
}

void AFortAthenaMutator_Uranium::OnRep_PushCart() {
}

void AFortAthenaMutator_Uranium::OnRep_CurrentRoundPhase() {
}

void AFortAthenaMutator_Uranium::OnRep_CurrentPOI() {
}

void AFortAthenaMutator_Uranium::OnRep_bInOvertime() {
}

void AFortAthenaMutator_Uranium::OnPushCartTeamsRolesChanged(uint8 NewPusherTeam, uint8 NewDefenerTeam) {
}

void AFortAthenaMutator_Uranium::OnPushCartReachedCheckPoint(int32 CheckPointIndex) {
}

void AFortAthenaMutator_Uranium::OnPushCartPushersOrDefendersChanged() {
}

void AFortAthenaMutator_Uranium::OnPlaylistDataLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContainerTags) {
}

void AFortAthenaMutator_Uranium::MulticastSetWinningTeams_Implementation(const TArray<uint8>& InWinningTeams) {
}

void AFortAthenaMutator_Uranium::HandleTeleportComplete() {
}

void AFortAthenaMutator_Uranium::HandleRoundPhase(EUraniumRoundPhase NewRoundPhase) {
}

uint8 AFortAthenaMutator_Uranium::GetWinningTeamForRound(int32 RoundNumber) const {
    return 0;
}

void AFortAthenaMutator_Uranium::GetRoundTeamWinners(TArray<uint8>& TeamWinnersEachRound) {
}

AFortPlayerPushableCart* AFortAthenaMutator_Uranium::GetPushCart() const {
    return NULL;
}

int32 AFortAthenaMutator_Uranium::GetCurrentRoundNumber() const {
    return 0;
}

int32 AFortAthenaMutator_Uranium::GetCurrentRoundCheckPoint() const {
    return 0;
}

void AFortAthenaMutator_Uranium::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_Uranium, PushCart);
    DOREPLIFETIME(AFortAthenaMutator_Uranium, StormShield);
    DOREPLIFETIME(AFortAthenaMutator_Uranium, RespawnLocation_PusherTeam);
    DOREPLIFETIME(AFortAthenaMutator_Uranium, RespawnLocation_DefenderTeam);
    DOREPLIFETIME(AFortAthenaMutator_Uranium, CurrentPOI);
    DOREPLIFETIME(AFortAthenaMutator_Uranium, RoundData);
    DOREPLIFETIME(AFortAthenaMutator_Uranium, CurrentRoundPhase);
    DOREPLIFETIME(AFortAthenaMutator_Uranium, bRoundTimerStarted);
    DOREPLIFETIME(AFortAthenaMutator_Uranium, PushersAbandonedCartStartTime);
    DOREPLIFETIME(AFortAthenaMutator_Uranium, PushersAbandonedCartDuration);
    DOREPLIFETIME(AFortAthenaMutator_Uranium, bInOvertime);
    DOREPLIFETIME(AFortAthenaMutator_Uranium, bIsSafeToTurnOnCameraAfterRespawn);
    DOREPLIFETIME(AFortAthenaMutator_Uranium, CheckpointTeleportPlayersReleased);
    DOREPLIFETIME(AFortAthenaMutator_Uranium, CheckpointTeleportComplete);
}

AFortAthenaMutator_Uranium::AFortAthenaMutator_Uranium() {
    this->RoundIntroFactionSound_Attacking = NULL;
    this->RoundIntroFactionSound_Defending = NULL;
    this->MatchEndSound_Win_Attackers = NULL;
    this->MatchEndSound_Win_Defenders = NULL;
    this->MatchEndSound_Lose_Attackers = NULL;
    this->MatchEndSound_Lose_Defenders = NULL;
    this->PushCartClass = NULL;
    this->StormShieldClass = NULL;
    this->StormShield = NULL;
    this->RespawnRadius = 1;
    this->CurrentMovingRespawnOffset_PusherTeam = 1;
    this->CurrentMovingRespawnOffset_DefenderTeam = 1;
    this->NumberOfRounds = 0;
    this->RoundEndCondition = EUraniumRoundEndCondition::RanOutOfTime_Or_CheckpointReached;
    this->CartMovementRuleOnNewRound = EUraniumCartMovementRuleOnNewRound::NoChange;
    this->RoundPhaseDurations[0] = 1;
    this->RoundPhaseDurations[1] = 1;
    this->RoundPhaseDurations[2] = 1;
    this->RoundPhaseDurations[3] = 1;
    this->RoundPhaseDurations[4] = 1;
    this->RoundPhaseDurations[5] = 1;
    this->RoundPhaseDurations[6] = 1;
    this->RoundPhaseDurations[7] = 1;
    this->RoundPhaseDurations[8] = 1;
    this->RoundPhaseDurations[9] = 1;
    this->RoundPhaseDurations[10] = 1;
    this->RoundPhaseDurations[11] = 1;
    this->RoundPhaseDurations[12] = 1;
    this->RoundPhaseDurations[13] = 1;
    this->RoundPhaseDurations[14] = 1;
    this->EndOfRoundCameraFadeOutTime = 1;
    this->EndOfRoundCameraFadeInTime = 1;
    this->EndOfRoundStasisDelay = 1;
    this->CurrentRoundPhase = EUraniumRoundPhase::None;
    this->bRoundTimerStarted = false;
    this->PushersAbandonedCartOvertimeInterval = 0;
    this->bPushCartIsPushableAtStart = false;
    this->PushersAbandonedCartStartTime = 1;
    this->PushersAbandonedCartDuration = 1;
    this->bInOvertime = false;
    this->bPerkModeOn = false;
    this->bShouldPlayFactionIntro = false;
    this->MinimapMaterialParameterCollection = NULL;
    this->bShowFullSplineOnMapUI = false;
    this->CheckPointMarkerClass = NULL;
    this->bIsSafeToTurnOnCameraAfterRespawn = false;
    this->bForcePerkPickerOnCheckpoint = false;
    this->TimeDilationManager = NULL;
    this->EndRoundTimeDilationCurve = NULL;
    this->EndRoundTimeDilationDuration = 1;
    this->TeleportMutator = NULL;
    this->InventoryOverrideMutator = NULL;
    this->RespawnWaveMutator = NULL;
    this->CheckpointTeleportPlayersReleased = 0;
    this->CheckpointTeleportComplete = 0;
    this->bCheatDrawRespawnLocations = true;
}

