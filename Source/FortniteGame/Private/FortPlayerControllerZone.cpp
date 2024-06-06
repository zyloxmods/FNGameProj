#include "FortPlayerControllerZone.h"
#include "Net/UnrealNetwork.h"

void AFortPlayerControllerZone::TestVehicleVelocity(const FString& Command) {
}

void AFortPlayerControllerZone::SpectateOnDeath() {
}

void AFortPlayerControllerZone::SetVehicleHealth(float NewHealth) {
}

void AFortPlayerControllerZone::ServerVoiceChatRequestJoinToken_Implementation(const FString& ChannelName) {
}
bool AFortPlayerControllerZone::ServerVoiceChatRequestJoinToken_Validate(const FString& ChannelName) {
    return true;
}

void AFortPlayerControllerZone::ServerSubmitGameplayVote_Implementation(EFortVoteType VoteType, int32 VoteDecision) {
}
bool AFortPlayerControllerZone::ServerSubmitGameplayVote_Validate(EFortVoteType VoteType, int32 VoteDecision) {
    return true;
}

void AFortPlayerControllerZone::ServerSpectatePlayerState_Implementation(AFortPlayerStateZone* PlayerToSpectate, bool bAllowStateChange) {
}
bool AFortPlayerControllerZone::ServerSpectatePlayerState_Validate(AFortPlayerStateZone* PlayerToSpectate, bool bAllowStateChange) {
    return true;
}

void AFortPlayerControllerZone::ServerSpectateActor_Implementation(AActor* NewViewTarget, bool bAllowStateChange) {
}
bool AFortPlayerControllerZone::ServerSpectateActor_Validate(AActor* NewViewTarget, bool bAllowStateChange) {
    return true;
}

void AFortPlayerControllerZone::ServerSetVehicleHealth_Implementation(float NewHealth) {
}
bool AFortPlayerControllerZone::ServerSetVehicleHealth_Validate(float NewHealth) {
    return true;
}

void AFortPlayerControllerZone::ServerSetShouldDisablePlayerTeleportingDuringMissionResults_Implementation() {
}
bool AFortPlayerControllerZone::ServerSetShouldDisablePlayerTeleportingDuringMissionResults_Validate() {
    return true;
}

void AFortPlayerControllerZone::ServerSendPartyJoinInfoToPlayer_Implementation(const FUniqueNetIdRepl& RecipientId, const FString& JoinInfoStr) {
}
bool AFortPlayerControllerZone::ServerSendPartyJoinInfoToPlayer_Validate(const FUniqueNetIdRepl& RecipientId, const FString& JoinInfoStr) {
    return true;
}

void AFortPlayerControllerZone::ServerSendLoadoutConfig_Implementation(int32 LoadoutSeed, const TArray<uint8>& Loadout) {
}
bool AFortPlayerControllerZone::ServerSendLoadoutConfig_Validate(int32 LoadoutSeed, const TArray<uint8>& Loadout) {
    return true;
}

void AFortPlayerControllerZone::ServerRequestSeatChange_Implementation(int32 TargetSeatIndex) {
}
bool AFortPlayerControllerZone::ServerRequestSeatChange_Validate(int32 TargetSeatIndex) {
    return true;
}

void AFortPlayerControllerZone::ServerRequestLoadoutRefresh_Implementation() {
}

void AFortPlayerControllerZone::ServerEndGameplayVote_Implementation(EFortVoteType VoteType) {
}
bool AFortPlayerControllerZone::ServerEndGameplayVote_Validate(EFortVoteType VoteType) {
    return true;
}

void AFortPlayerControllerZone::ServerDetachFromRemoteControlledPawn_Implementation() {
}
bool AFortPlayerControllerZone::ServerDetachFromRemoteControlledPawn_Validate() {
    return true;
}

void AFortPlayerControllerZone::ServerDestroyFromRemoteControlledPawn_Implementation() {
}
bool AFortPlayerControllerZone::ServerDestroyFromRemoteControlledPawn_Validate() {
    return true;
}

void AFortPlayerControllerZone::ServerBeginGameplayVote_Implementation(EFortVoteType VoteType, FFortVoteConfig VoteConfig) {
}
bool AFortPlayerControllerZone::ServerBeginGameplayVote_Validate(EFortVoteType VoteType, FFortVoteConfig VoteConfig) {
    return true;
}

void AFortPlayerControllerZone::ServerAttemptExitVehicle_Implementation() {
}
bool AFortPlayerControllerZone::ServerAttemptExitVehicle_Validate() {
    return true;
}

void AFortPlayerControllerZone::ServerActivateMission_Implementation() {
}
bool AFortPlayerControllerZone::ServerActivateMission_Validate() {
    return true;
}

void AFortPlayerControllerZone::RewindVehicle(const FString& Command) {
}

void AFortPlayerControllerZone::ResurrectPlayer() {
}

void AFortPlayerControllerZone::RespawnPlayer() {
}

void AFortPlayerControllerZone::ResetExecuteJetpackToggle() {
}

void AFortPlayerControllerZone::PushDeathInputComponent() {
}

void AFortPlayerControllerZone::PopDeathInputComponent() {
}

void AFortPlayerControllerZone::OnRep_VoiceChatChannel() {
}

void AFortPlayerControllerZone::KillAllVehicles(const FString& Command) {
}

bool AFortPlayerControllerZone::IsUsingAnonymousMode() const {
    return false;
}

bool AFortPlayerControllerZone::IsUsingAnonymousCharacterMode() const {
    return false;
}

bool AFortPlayerControllerZone::IsClientNotifiedOfPawnDied() const {
    return false;
}

int32 AFortPlayerControllerZone::GetVehicleSeatTransitionTargetIndex() const {
    return 0;
}

void AFortPlayerControllerZone::DumpPhysicsVehicleBuffer(const FString& Command) {
}

void AFortPlayerControllerZone::DisableRangedWeaponScopeFX() {
}

void AFortPlayerControllerZone::ClientVoiceChatSendJoinToken_Implementation(bool bSuccess, const FString& Error, const FString& Token) {
}

void AFortPlayerControllerZone::ClientUpdatePlaylistFlags_Implementation(const TArray<uint8>& Buffer) {
}

void AFortPlayerControllerZone::ClientSendPartyJoinInfoToPlayer_Implementation(const FString& JoinInfoStr) {
}

void AFortPlayerControllerZone::ClientPresentGameplayVote_Implementation(uint32 Payload) {
}

void AFortPlayerControllerZone::ClientOnZoneEndScoreReports_Implementation(const TArray<FFortPlayerScoreReport>& ScoreReports) {
}

void AFortPlayerControllerZone::ClientOnPawnSpawned_Implementation() {
}

void AFortPlayerControllerZone::ClientOnPawnRevived_Implementation(AController* EventInstigator) {
}

void AFortPlayerControllerZone::ClientOnPawnDied_Implementation(FFortPlayerDeathReport DeathReport) {
}

void AFortPlayerControllerZone::ClientClearDeathNotification_Implementation() {
}

void AFortPlayerControllerZone::ClientAckLoadoutConfig_Implementation(int32 LoadoutSeed) {
}

bool AFortPlayerControllerZone::AreResurrectionAndRespawnTimeRemainingValid() const {
    return false;
}

void AFortPlayerControllerZone::AllowLoadoutRefresh() {
}

void AFortPlayerControllerZone::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortPlayerControllerZone, PlayerLeecherStatus);
    DOREPLIFETIME(AFortPlayerControllerZone, VoiceChatChannel);
    DOREPLIFETIME(AFortPlayerControllerZone, VoiceChatChannelImplementation);
    DOREPLIFETIME(AFortPlayerControllerZone, DesyncNotifyList);
}

AFortPlayerControllerZone::AFortPlayerControllerZone() {
    bDontChangeReticleColorForEnemy = false;
    LastVehicleSeatSwitchTime = 1;
    PlayerToSpectateOnDeath = NULL;
    DeathInputComponent = NULL;
    RemoteControlledPawnInputComponent = NULL;
    bClientNotifiedOfPawnDied = false;
    bEnterCameraModeOnDeath = true;
    PlayerLeecherStatus = ELeecherStatus::NotReady;
    LastScoreEarnedTime = 1;
    VehicleSeatTransitionTargetIndex = 0;
    VoiceChatChannelImplementation = 0;
    bJetpackExecuteToggle = false;
    bAllowMovementCancellableActionsWithIceFeet = true;
    MoveForwardOnlyEmoteCancelBackwardsThreshold = 1;
    MoveForwardOnlyEmoteCancelStrafeThreshold = 1;
}

