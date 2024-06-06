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
    RoundIntroFactionSound_Attacking = NULL;
    RoundIntroFactionSound_Defending = NULL;
    MatchEndSound_Win_Attackers = NULL;
    MatchEndSound_Win_Defenders = NULL;
    MatchEndSound_Lose_Attackers = NULL;
    MatchEndSound_Lose_Defenders = NULL;
    PushCartClass = NULL;
    StormShieldClass = NULL;
    StormShield = NULL;
    RespawnRadius = 1;
    CurrentMovingRespawnOffset_PusherTeam = 1;
    CurrentMovingRespawnOffset_DefenderTeam = 1;
    NumberOfRounds = 0;
    RoundEndCondition = EUraniumRoundEndCondition::RanOutOfTime_Or_CheckpointReached;
    CartMovementRuleOnNewRound = EUraniumCartMovementRuleOnNewRound::NoChange;
    RoundPhaseDurations[0] = 1;
    RoundPhaseDurations[1] = 1;
    RoundPhaseDurations[2] = 1;
    RoundPhaseDurations[3] = 1;
    RoundPhaseDurations[4] = 1;
    RoundPhaseDurations[5] = 1;
    RoundPhaseDurations[6] = 1;
    RoundPhaseDurations[7] = 1;
    RoundPhaseDurations[8] = 1;
    RoundPhaseDurations[9] = 1;
    RoundPhaseDurations[10] = 1;
    RoundPhaseDurations[11] = 1;
    RoundPhaseDurations[12] = 1;
    RoundPhaseDurations[13] = 1;
    RoundPhaseDurations[14] = 1;
    EndOfRoundCameraFadeOutTime = 1;
    EndOfRoundCameraFadeInTime = 1;
    EndOfRoundStasisDelay = 1;
    CurrentRoundPhase = EUraniumRoundPhase::None;
    bRoundTimerStarted = false;
    PushersAbandonedCartOvertimeInterval = 0;
    bPushCartIsPushableAtStart = false;
    PushersAbandonedCartStartTime = 1;
    PushersAbandonedCartDuration = 1;
    bInOvertime = false;
    bPerkModeOn = false;
    bShouldPlayFactionIntro = false;
    MinimapMaterialParameterCollection = NULL;
    bShowFullSplineOnMapUI = false;
    CheckPointMarkerClass = NULL;
    bIsSafeToTurnOnCameraAfterRespawn = false;
    bForcePerkPickerOnCheckpoint = false;
    TimeDilationManager = NULL;
    EndRoundTimeDilationCurve = NULL;
    EndRoundTimeDilationDuration = 1;
    TeleportMutator = NULL;
    InventoryOverrideMutator = NULL;
    RespawnWaveMutator = NULL;
    CheckpointTeleportPlayersReleased = 0;
    CheckpointTeleportComplete = 0;
    bCheatDrawRespawnLocations = true;
}

