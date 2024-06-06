#include "FortPlayerControllerAthena.h"
#include "AthenaMarkerComponent.h"
#include "AthenaResurrectionComponent.h"
#include "FortControllerComponent_ContextualChallenges.h"
#include "FortControllerComponent_HeldDeviceUsage.h"
#include "FortControllerComponent_IndicatedActorManagement.h"
#include "FortControllerComponent_LocalizationService.h"
#include "FortControllerComponent_MapDiscoverability.h"
#include "FortControllerComponent_MinigameActivity.h"
#include "FortControllerComponent_RechargeWeapons.h"
#include "FortControllerComponent_SkydiveFeedback.h"
#include "FortControllerComponent_ToxicityService.h"
#include "FortPlayerControllerAthenaXPComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

void AFortPlayerControllerAthena::WriteCreateBuildingAnalytics() {
}

void AFortPlayerControllerAthena::UpdateUGCRestrictedForVolume_Implementation(AFortVolume* Volume, bool bRestricted) {
}
bool AFortPlayerControllerAthena::UpdateUGCRestrictedForVolume_Validate(AFortVolume* Volume, bool bRestricted) {
    return true;
}

void AFortPlayerControllerAthena::UpdateRichPresenceTimer() {
}

void AFortPlayerControllerAthena::UpdateCreativePlotName_Implementation(const FString& IslandId, const FString& Locale, const FString& Title) {
}
bool AFortPlayerControllerAthena::UpdateCreativePlotName_Validate(const FString& IslandId, const FString& Locale, const FString& Title) {
    return true;
}

void AFortPlayerControllerAthena::UpdateCreativePlotData_Implementation(AFortVolume* VolumeToPublish, FCreativeIslandInfo MyInfo) {
}
bool AFortPlayerControllerAthena::UpdateCreativePlotData_Validate(AFortVolume* VolumeToPublish, FCreativeIslandInfo MyInfo) {
    return true;
}

void AFortPlayerControllerAthena::UpdateCreativeIslandDescriptionTags_Implementation(const FString& IslandId, const FString& Locale, const TArray<FString>& DescriptionTags) {
}
bool AFortPlayerControllerAthena::UpdateCreativeIslandDescriptionTags_Validate(const FString& IslandId, const FString& Locale, const TArray<FString>& DescriptionTags) {
    return true;
}

void AFortPlayerControllerAthena::TellServer_ClientReceivedPlaysetDataForVolume_Implementation(FFortPlaysetStreamingData PlaysetData, AFortVolume* Volume) {
}
bool AFortPlayerControllerAthena::TellServer_ClientReceivedPlaysetDataForVolume_Validate(FFortPlaysetStreamingData PlaysetData, AFortVolume* Volume) {
    return true;
}

void AFortPlayerControllerAthena::StopRecordingHighlights() {
}

void AFortPlayerControllerAthena::StartRespawnLoading() {
}

void AFortPlayerControllerAthena::StartMatchmakingByLinkCode(const FString& LinkCode) {
}

void AFortPlayerControllerAthena::StartCreativeMatchmakingReadyCheck(const FString& LinkCode, bool& OutDidStartMatchmakingImmediately) {
}

void AFortPlayerControllerAthena::ShowHighlightSummary() {
}

void AFortPlayerControllerAthena::SetupClientRespawnTimerAndLocation(FVector RespawnLoc, FRotator RespawnRot, FVector OldPlayerLocation, bool bCalculateRespawnData) {
}

void AFortPlayerControllerAthena::SetFocalPointWithDuration(AActor* InFocalPoint, FVector InFocalPointOffset, float InFocalPointFOV, float InDuration) {
}

void AFortPlayerControllerAthena::SetFocalPoint(AActor* InFocalPoint, FVector InFocalPointOffset, float InFocalPointFOV) {
}

void AFortPlayerControllerAthena::SetCanStreamBuildingFoundationsIn(bool bCanStream) {
}

void AFortPlayerControllerAthena::ServerUpdateUserCameraPreview_Implementation() {
}
bool AFortPlayerControllerAthena::ServerUpdateUserCameraPreview_Validate() {
    return true;
}

void AFortPlayerControllerAthena::ServerUpdateSkydiveLocation_Implementation(const FString& LocationStr, const FVector& Location) {
}

void AFortPlayerControllerAthena::ServerUpdateLevelStreamingHandshakeData_Implementation(const bool bClientLevelStreamingState) {
}
bool AFortPlayerControllerAthena::ServerUpdateLevelStreamingHandshakeData_Validate(const bool bClientLevelStreamingState) {
    return true;
}

void AFortPlayerControllerAthena::ServerTryFindPlotItemForDefinition_Implementation(UFortCreativeRealEstatePlotItemDefinition* PlotDefinition) {
}

void AFortPlayerControllerAthena::ServerToggleAutoRestartMinigame_Implementation() {
}
bool AFortPlayerControllerAthena::ServerToggleAutoRestartMinigame_Validate() {
    return true;
}

void AFortPlayerControllerAthena::ServerTickForDoneTeleporting_Implementation(AFortAthenaCreativePortal* Portal) {
}

void AFortPlayerControllerAthena::ServerThankBusDriverCheck_Implementation() {
}
bool AFortPlayerControllerAthena::ServerThankBusDriverCheck_Validate() {
    return true;
}

void AFortPlayerControllerAthena::ServerThankBusDriver_Implementation() {
}
bool AFortPlayerControllerAthena::ServerThankBusDriver_Validate() {
    return true;
}

void AFortPlayerControllerAthena::ServerTeleportViaCreativePortal_Implementation(int32 PortalIndex) {
}

void AFortPlayerControllerAthena::ServerTeleportToPlaygroundLobbyIsland_Implementation() {
}
bool AFortPlayerControllerAthena::ServerTeleportToPlaygroundLobbyIsland_Validate() {
    return true;
}

void AFortPlayerControllerAthena::ServerTeleportToPlaygroundIslandDock_Implementation() {
}
bool AFortPlayerControllerAthena::ServerTeleportToPlaygroundIslandDock_Validate() {
    return true;
}

void AFortPlayerControllerAthena::ServerStopWaitLTMLoading_Implementation() {
}

void AFortPlayerControllerAthena::ServerStopSavingCreativePlot_Implementation() {
}
bool AFortPlayerControllerAthena::ServerStopSavingCreativePlot_Validate() {
    return true;
}

void AFortPlayerControllerAthena::ServerStartUnloadingVolume_Implementation(AFortVolume* VolumeToUnload) {
}
bool AFortPlayerControllerAthena::ServerStartUnloadingVolume_Validate(AFortVolume* VolumeToUnload) {
    return true;
}

void AFortPlayerControllerAthena::ServerStartMinigame_Implementation() {
}
bool AFortPlayerControllerAthena::ServerStartMinigame_Validate() {
    return true;
}

void AFortPlayerControllerAthena::ServerStartLoadingVolume_Implementation(AFortVolume* VolumeToLoad) {
}
bool AFortPlayerControllerAthena::ServerStartLoadingVolume_Validate(AFortVolume* VolumeToLoad) {
    return true;
}

void AFortPlayerControllerAthena::ServerStartInteractWithIslandPortal_Implementation(AFortAthenaCreativePortal* Portal) {
}

void AFortPlayerControllerAthena::ServerSpawnCreativeSupplyDrop_Implementation(FVector position, TSubclassOf<AActor> InSupplyDropClass) {
}
bool AFortPlayerControllerAthena::ServerSpawnCreativeSupplyDrop_Validate(FVector position, TSubclassOf<AActor> InSupplyDropClass) {
    return true;
}

void AFortPlayerControllerAthena::ServerSimulateLevelUp_Implementation(int32 ClientSimulatedLevel) {
}
bool AFortPlayerControllerAthena::ServerSimulateLevelUp_Validate(int32 ClientSimulatedLevel) {
    return true;
}

void AFortPlayerControllerAthena::ServerSetTeam_Implementation(uint8 InTeam) {
}
bool AFortPlayerControllerAthena::ServerSetTeam_Validate(uint8 InTeam) {
    return true;
}

void AFortPlayerControllerAthena::ServerSetStreamingTestStreamingLevels_Implementation(bool streaming) {
}

void AFortPlayerControllerAthena::ServerSetRespawnData(FVector RespawnLoc, FRotator RespawnRot, float RespawnCameraDist) {
}

void AFortPlayerControllerAthena::ServerSetReceiveEmailSignups_Implementation(bool bSignUp) {
}
bool AFortPlayerControllerAthena::ServerSetReceiveEmailSignups_Validate(bool bSignUp) {
    return true;
}

void AFortPlayerControllerAthena::ServerSetPlayset_Implementation(UFortPlaysetItemDefinition* NewPlayset) {
}
bool AFortPlayerControllerAthena::ServerSetPlayset_Validate(UFortPlaysetItemDefinition* NewPlayset) {
    return true;
}

void AFortPlayerControllerAthena::ServerSetOnCreativePortalLoadedDelegate_Implementation(int32 PortalIndex) {
}

void AFortPlayerControllerAthena::ServerSetMinigameClassSlot_Implementation(uint8 InClassSlotIndex) {
}

void AFortPlayerControllerAthena::ServerSendSquadFriend_Implementation(AFortPlayerStateAthena* FriendInSquad) {
}
bool AFortPlayerControllerAthena::ServerSendSquadFriend_Validate(AFortPlayerStateAthena* FriendInSquad) {
    return true;
}

void AFortPlayerControllerAthena::ServerSelectMutatorItem_Implementation(AFortGameplayMutator* Mutator, int32 ItemIndex, int32 PayloadData) {
}
bool AFortPlayerControllerAthena::ServerSelectMutatorItem_Validate(AFortGameplayMutator* Mutator, int32 ItemIndex, int32 PayloadData) {
    return true;
}

void AFortPlayerControllerAthena::ServerSaveIslandCheckpoint_Implementation(AFortAthenaCreativePortal* Portal) {
}
bool AFortPlayerControllerAthena::ServerSaveIslandCheckpoint_Validate(AFortAthenaCreativePortal* Portal) {
    return true;
}

void AFortPlayerControllerAthena::ServerRestartMinigame_Implementation() {
}
bool AFortPlayerControllerAthena::ServerRestartMinigame_Validate() {
    return true;
}

void AFortPlayerControllerAthena::ServerRespondToAbandonMatch_Implementation(bool bAbandon) {
}
bool AFortPlayerControllerAthena::ServerRespondToAbandonMatch_Validate(bool bAbandon) {
    return true;
}

void AFortPlayerControllerAthena::ServerResetCurrentVolumeWithoutTeleport_Implementation() {
}

void AFortPlayerControllerAthena::ServerResetCameraPreviewToDefaultLocation_Implementation() {
}
bool AFortPlayerControllerAthena::ServerResetCameraPreviewToDefaultLocation_Validate() {
    return true;
}

void AFortPlayerControllerAthena::ServerRequestObjectTrackingDetails_Implementation(const AFortVolume* Volume) {
}

void AFortPlayerControllerAthena::ServerRequestNewSkydiveLeader_Implementation() {
}
bool AFortPlayerControllerAthena::ServerRequestNewSkydiveLeader_Validate() {
    return true;
}

void AFortPlayerControllerAthena::ServerReloadCreativePlot_Implementation() {
}
bool AFortPlayerControllerAthena::ServerReloadCreativePlot_Validate() {
    return true;
}

void AFortPlayerControllerAthena::ServerReleasePortal_Implementation() {
}
bool AFortPlayerControllerAthena::ServerReleasePortal_Validate() {
    return true;
}

void AFortPlayerControllerAthena::ServerPlaySquadQuickChatMessage_Implementation(FAthenaQuickChatActiveEntry ChatEntry, FUniqueNetIdRepl SenderID) {
}
bool AFortPlayerControllerAthena::ServerPlaySquadQuickChatMessage_Validate(FAthenaQuickChatActiveEntry ChatEntry, FUniqueNetIdRepl SenderID) {
    return true;
}

void AFortPlayerControllerAthena::ServerNotifyOstrichShieldOvercharge_Implementation() {
}
bool AFortPlayerControllerAthena::ServerNotifyOstrichShieldOvercharge_Validate() {
    return true;
}

void AFortPlayerControllerAthena::ServerNotifyOstrichSelfDestruct_Implementation() {
}
bool AFortPlayerControllerAthena::ServerNotifyOstrichSelfDestruct_Validate() {
    return true;
}

void AFortPlayerControllerAthena::ServerNotifyClientReachedMaxWaitingTimeForDeviceReplication_Implementation() {
}
bool AFortPlayerControllerAthena::ServerNotifyClientReachedMaxWaitingTimeForDeviceReplication_Validate() {
    return true;
}

void AFortPlayerControllerAthena::ServerMarkSkydiveLocationsComplete_Implementation() {
}

void AFortPlayerControllerAthena::ServerLookedAtFocalPoint_Implementation() {
}

void AFortPlayerControllerAthena::ServerLoadPlotForPortalFromMnemonic_Implementation(AFortAthenaCreativePortal* Portal, const FString& Mnemonic) {
}
bool AFortPlayerControllerAthena::ServerLoadPlotForPortalFromMnemonic_Validate(AFortAthenaCreativePortal* Portal, const FString& Mnemonic) {
    return true;
}

void AFortPlayerControllerAthena::ServerLoadPlotForPortal_Implementation(AFortAthenaCreativePortal* Portal, const FString& PlotItemId) {
}
bool AFortPlayerControllerAthena::ServerLoadPlotForPortal_Validate(AFortAthenaCreativePortal* Portal, const FString& PlotItemId) {
    return true;
}

void AFortPlayerControllerAthena::ServerLoadIslandCheckpoint_Implementation(AFortAthenaCreativePortal* Portal) {
}
bool AFortPlayerControllerAthena::ServerLoadIslandCheckpoint_Validate(AFortAthenaCreativePortal* Portal) {
    return true;
}

void AFortPlayerControllerAthena::ServerInsertExtraStreamingTestSkydiveStates_Implementation() {
}

void AFortPlayerControllerAthena::ServerGiveCreativeItem_Implementation(const FFortItemEntry& CreativeItem, const FGuid& ItemToRemoveGuid) {
}
bool AFortPlayerControllerAthena::ServerGiveCreativeItem_Validate(const FFortItemEntry& CreativeItem, const FGuid& ItemToRemoveGuid) {
    return true;
}

void AFortPlayerControllerAthena::ServerGenerateMockMatchReport_Implementation() {
}
bool AFortPlayerControllerAthena::ServerGenerateMockMatchReport_Validate() {
    return true;
}

void AFortPlayerControllerAthena::ServerEndUnloadingVolume_Implementation(AFortVolume* VolumeToUnload) {
}
bool AFortPlayerControllerAthena::ServerEndUnloadingVolume_Validate(AFortVolume* VolumeToUnload) {
    return true;
}

void AFortPlayerControllerAthena::ServerEndMinigame_Implementation(bool bAbandon) {
}
bool AFortPlayerControllerAthena::ServerEndMinigame_Validate(bool bAbandon) {
    return true;
}

void AFortPlayerControllerAthena::ServerEndLoadingVolume_Implementation(AFortVolume* VolumeToLoad) {
}
bool AFortPlayerControllerAthena::ServerEndLoadingVolume_Validate(AFortVolume* VolumeToLoad) {
    return true;
}

void AFortPlayerControllerAthena::ServerEnableAnonymousMode_Implementation() {
}
bool AFortPlayerControllerAthena::ServerEnableAnonymousMode_Validate() {
    return true;
}

void AFortPlayerControllerAthena::ServerEnableAnonymousCharacterMode_Implementation() {
}
bool AFortPlayerControllerAthena::ServerEnableAnonymousCharacterMode_Validate() {
    return true;
}

void AFortPlayerControllerAthena::ServerDBNOReviveStarted_Implementation(AFortPlayerPawnAthena* DBNOPawn) {
}
bool AFortPlayerControllerAthena::ServerDBNOReviveStarted_Validate(AFortPlayerPawnAthena* DBNOPawn) {
    return true;
}

void AFortPlayerControllerAthena::ServerDBNOReviveInterrupted_Implementation(AFortPlayerPawnAthena* DBNOPawn) {
}
bool AFortPlayerControllerAthena::ServerDBNOReviveInterrupted_Validate(AFortPlayerPawnAthena* DBNOPawn) {
    return true;
}

void AFortPlayerControllerAthena::ServerCreateProfileGoCollectionForSublevels_Implementation(const FString& SublevelSearchString, int32 GridStepsX, int32 GridStepsY, int32 RotationSteps, int32 Quad) {
}
bool AFortPlayerControllerAthena::ServerCreateProfileGoCollectionForSublevels_Validate(const FString& SublevelSearchString, int32 GridStepsX, int32 GridStepsY, int32 RotationSteps, int32 Quad) {
    return true;
}

void AFortPlayerControllerAthena::ServerClientIsReadyToRespawn_Implementation() {
}
bool AFortPlayerControllerAthena::ServerClientIsReadyToRespawn_Validate() {
    return true;
}

void AFortPlayerControllerAthena::ServerClearSkydiveLeader_Implementation() {
}
bool AFortPlayerControllerAthena::ServerClearSkydiveLeader_Validate() {
    return true;
}

void AFortPlayerControllerAthena::ServerClaimPortal_Implementation() {
}
bool AFortPlayerControllerAthena::ServerClaimPortal_Validate() {
    return true;
}

void AFortPlayerControllerAthena::ServerBroadcastDeviceButtonComponentClickedDelegate_Implementation(const UFortCreativeDeviceButtonComponent* DeviceButtonComponent) {
}
bool AFortPlayerControllerAthena::ServerBroadcastDeviceButtonComponentClickedDelegate_Validate(const UFortCreativeDeviceButtonComponent* DeviceButtonComponent) {
    return true;
}

void AFortPlayerControllerAthena::ServerBeginEndPreview_Implementation(bool bInBegin) {
}
bool AFortPlayerControllerAthena::ServerBeginEndPreview_Validate(bool bInBegin) {
    return true;
}

void AFortPlayerControllerAthena::ServerApplyOverrideWrapToVehicle_Implementation(const TSoftObjectPtr<UAthenaItemWrapDefinition>& ItemWrap) {
}

void AFortPlayerControllerAthena::ServerApplyOverrideWrapToItem_Implementation(const FGuid& Guid, const TSoftObjectPtr<UAthenaItemWrapDefinition>& ItemWrap) {
}
bool AFortPlayerControllerAthena::ServerApplyOverrideWrapToItem_Validate(const FGuid& Guid, const TSoftObjectPtr<UAthenaItemWrapDefinition>& ItemWrap) {
    return true;
}

void AFortPlayerControllerAthena::ServerAddToCachedPurchased_Implementation(UFortItemDefinition* ItemDefinition, int32 Count) {
}
bool AFortPlayerControllerAthena::ServerAddToCachedPurchased_Validate(UFortItemDefinition* ItemDefinition, int32 Count) {
    return true;
}

void AFortPlayerControllerAthena::ServerAddSimulatedXp_Implementation(float XpAmmount, const FText& Source, FGameplayTag MetaData) {
}
bool AFortPlayerControllerAthena::ServerAddSimulatedXp_Validate(float XpAmmount, const FText& Source, FGameplayTag MetaData) {
    return true;
}

void AFortPlayerControllerAthena::SendPhysicsBallHitToServer_Implementation(AFortPhysicsPawnObject* PhysicsObject, const float ClientPing, APawn* HittingPawn, const FVector VelocityOfHitter, const FVector HitNormal, const FTimeStampedPhysicsPawnState ClientBallState) {
}
bool AFortPlayerControllerAthena::SendPhysicsBallHitToServer_Validate(AFortPhysicsPawnObject* PhysicsObject, const float ClientPing, APawn* HittingPawn, const FVector VelocityOfHitter, const FVector HitNormal, const FTimeStampedPhysicsPawnState ClientBallState) {
    return true;
}

void AFortPlayerControllerAthena::SendClientPhysicsBallStateToServer_Implementation(AFortPhysicsPawnObject* PhysicsObject, const float ClientPing, const FTimeStampedPhysicsPawnState ClientBallState) {
}
bool AFortPlayerControllerAthena::SendClientPhysicsBallStateToServer_Validate(AFortPhysicsPawnObject* PhysicsObject, const float ClientPing, const FTimeStampedPhysicsPawnState ClientBallState) {
    return true;
}


void AFortPlayerControllerAthena::RestoreCreativePlot_Implementation(const FString& IslandId) {
}
bool AFortPlayerControllerAthena::RestoreCreativePlot_Validate(const FString& IslandId) {
    return true;
}

void AFortPlayerControllerAthena::RespawnTurnCameraBackOn() {
}

void AFortPlayerControllerAthena::RespawnPlayerAfterDeath(bool bEnterSkydiving) {
}

void AFortPlayerControllerAthena::ResetMyCurrentCreativePlot_Implementation() {
}
bool AFortPlayerControllerAthena::ResetMyCurrentCreativePlot_Validate() {
    return true;
}

void AFortPlayerControllerAthena::RemoveDroppableTaggedItems(const FGameplayTagContainer GameplayTagContainer) {
}

void AFortPlayerControllerAthena::RemoveDroppableItems() {
}

void AFortPlayerControllerAthena::ReduceDroppableResources(const float ReductionPercentage) {
}

void AFortPlayerControllerAthena::RecordTeamStats() {
}

void AFortPlayerControllerAthena::RecordMatchStats() {
}

void AFortPlayerControllerAthena::PublishCreativePlot_Implementation(AFortVolume* VolumeToPublish, FCreativePublishOptions MyPublishOptions) {
}
bool AFortPlayerControllerAthena::PublishCreativePlot_Validate(AFortVolume* VolumeToPublish, FCreativePublishOptions MyPublishOptions) {
    return true;
}

void AFortPlayerControllerAthena::PrepareClientForRespawning() {
}

void AFortPlayerControllerAthena::PreLobbyIslandTeleport() {
}

void AFortPlayerControllerAthena::PostLobbyIslandTeleport(AFortPlayerPawn* PlayerPawn) {
}


void AFortPlayerControllerAthena::OnServerMarkerAdded(FFortWorldMarkerData MarkerData) {
}

void AFortPlayerControllerAthena::OnRep_TrackedVictimsShared() {
}

void AFortPlayerControllerAthena::OnRep_SkydiveLeader() {
}

void AFortPlayerControllerAthena::OnRep_FocalPoint() {
}

void AFortPlayerControllerAthena::OnRep_CreativePlotLinkedVolume() {
}

void AFortPlayerControllerAthena::OnRep_CreativeIslands() {
}

void AFortPlayerControllerAthena::OnPostGameForced_Implementation() {
}
bool AFortPlayerControllerAthena::OnPostGameForced_Validate() {
    return true;
}

void AFortPlayerControllerAthena::OnMinigameStarted() {
}

void AFortPlayerControllerAthena::OnMinigameEnded() {
}

void AFortPlayerControllerAthena::OnMatchmakingPartyReady() {
}

void AFortPlayerControllerAthena::OnGameServerNodeTypeChanged(EMeshNetworkNodeType NewNodeType) {
}

void AFortPlayerControllerAthena::OnFortPlayerPawnAthenaDied(AFortPlayerPawnAthena* FortPlayerPawnAthena) {
}

void AFortPlayerControllerAthena::OnCreativePlotLinkedVolumeMinigameChanged(AFortMinigame* Minigame) {
}

void AFortPlayerControllerAthena::OnClientVolumeManagerReplicated() {
}

void AFortPlayerControllerAthena::OnClientEnterVolume(APlayerState* InPlayerState, AFortVolume* InVolume) {
}

void AFortPlayerControllerAthena::MultiKillExpired() {
}

void AFortPlayerControllerAthena::MakeNewCreativePlotFromLinkCode_Implementation(const FString& LinkCode, const FString& Locale, const FString& Title) {
}
bool AFortPlayerControllerAthena::MakeNewCreativePlotFromLinkCode_Validate(const FString& LinkCode, const FString& Locale, const FString& Title) {
    return true;
}

void AFortPlayerControllerAthena::MakeNewCreativePlot_Implementation(const UFortCreativeRealEstatePlotItemDefinition* PlotType, const FString& Locale, const FString& Title) {
}
bool AFortPlayerControllerAthena::MakeNewCreativePlot_Validate(const UFortCreativeRealEstatePlotItemDefinition* PlotType, const FString& Locale, const FString& Title) {
    return true;
}

bool AFortPlayerControllerAthena::IsUnderPlotLimit(int32& MaxIslands, int32& NumIslands, bool bIncludeDeleted) {
    return false;
}

bool AFortPlayerControllerAthena::IsTryToFireRestrictedByTypeCooldowns() const {
    return false;
}

bool AFortPlayerControllerAthena::IsPlayerRebootingNow() const {
    return false;
}

bool AFortPlayerControllerAthena::IsPlayerInReadOnlyVolume() const {
    return false;
}

bool AFortPlayerControllerAthena::IsPlayerInPublishedVolume() const {
    return false;
}

bool AFortPlayerControllerAthena::IsPlayerInFeaturedVolume() const {
    return false;
}

bool AFortPlayerControllerAthena::IsPlayerInAVolumeTheyCanCreateIn() const {
    return false;
}

bool AFortPlayerControllerAthena::IsPlayerInAMinigame() const {
    return false;
}

bool AFortPlayerControllerAthena::IsPartyMemberReadyCheckStatusInProgress() const {
    return false;
}

bool AFortPlayerControllerAthena::IsOnPublishedIsland() {
    return false;
}

bool AFortPlayerControllerAthena::IsMatchmaking() const {
    return false;
}

bool AFortPlayerControllerAthena::IsLoadingScreenActive() {
    return false;
}

bool AFortPlayerControllerAthena::IsClientNotifiedOfWin() const {
    return false;
}

bool AFortPlayerControllerAthena::IsClientNotifiedOfTeamWin() const {
    return false;
}

bool AFortPlayerControllerAthena::IsClientNotifiedOfLoss() const {
    return false;
}

void AFortPlayerControllerAthena::HighlightNumberReturned(int32 NumHighlights) {
}

bool AFortPlayerControllerAthena::HasItems(const TArray<EFortItemType>& ExcludedItemTypes) const {
    return false;
}

void AFortPlayerControllerAthena::HandlePlayersLeftChanged(int32 NumPlayersLeft) {
}

void AFortPlayerControllerAthena::HandleGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep) {
}

void AFortPlayerControllerAthena::HandleGamePhaseChanged(EAthenaGamePhase NewPhase) {
}

void AFortPlayerControllerAthena::GetTrackedVictims(AFortPlayerStateAthena*& EliminatedVictim, AFortPlayerStateAthena*& DownedVictim) const {
}

TArray<AFortPlayerStateAthena*> AFortPlayerControllerAthena::GetSquadMemberPlayerStates(const bool bIncludeSelf) const {
    return TArray<AFortPlayerStateAthena*>();
}

int32 AFortPlayerControllerAthena::GetSquadKillsCount() const {
    return 0;
}

void AFortPlayerControllerAthena::GetSquadKills(TArray<int32>& Kills) const {
}

int32 AFortPlayerControllerAthena::GetProfilePlotEntries(bool bIncludeDeleted) {
    return 0;
}

void AFortPlayerControllerAthena::GetPlaysetSize(int32& SizeX, int32& SizeY, int32& SizeZ) const {
}

UFortPlaysetItemDefinition* AFortPlayerControllerAthena::GetPlayset() const {
    return NULL;
}

FText AFortPlayerControllerAthena::GetPlaylistGameTypeText() const {
    return FText::GetEmpty();
}

AFortMinigame* AFortPlayerControllerAthena::GetMinigame() const {
    return NULL;
}

int32 AFortPlayerControllerAthena::GetMaxNumberOfPlots() {
    return 0;
}

UAthenaPlayerMatchReport* AFortPlayerControllerAthena::GetMatchReport() {
    return NULL;
}

UAthenaMarkerComponent* AFortPlayerControllerAthena::GetMarkerComponent() const {
    return NULL;
}

int32 AFortPlayerControllerAthena::GetInventorySpace() const {
    return 0;
}

AFortGameStateAthena* AFortPlayerControllerAthena::GetGameStateAthena() const {
    return NULL;
}

AFortVolume* AFortPlayerControllerAthena::GetCurrentVolumeOrCreativePlotLinkedVolume() const {
    return NULL;
}

AFortVolume* AFortPlayerControllerAthena::GetCurrentVolume() const {
    return NULL;
}

EFortVolumeType AFortPlayerControllerAthena::GetCurrentFortVolumeType() const {
    return EFortVolumeType::None;
}

UCreativeUserContentManager* AFortPlayerControllerAthena::GetCreativeUserContentManager() const {
    return NULL;
}

AFortVolume* AFortPlayerControllerAthena::GetCreativePlotLinkedVolume() const {
    return NULL;
}

int32 AFortPlayerControllerAthena::GetCachedHighlightCount() {
    return 0;
}

void AFortPlayerControllerAthena::ForceSpectatorToCursorMode() {
}

void AFortPlayerControllerAthena::FollowSpecialActor() {
}

void AFortPlayerControllerAthena::EnableCreativeContentManagerBasedOnPlaylist() {
}

void AFortPlayerControllerAthena::DuplicateCreativePlot_Implementation(const FString& IslandId, const FString& Locale, const FString& Title) {
}
bool AFortPlayerControllerAthena::DuplicateCreativePlot_Validate(const FString& IslandId, const FString& Locale, const FString& Title) {
    return true;
}

void AFortPlayerControllerAthena::DestroyCreativePlot_Implementation(const FString& IslandId) {
}
bool AFortPlayerControllerAthena::DestroyCreativePlot_Validate(const FString& IslandId) {
    return true;
}

void AFortPlayerControllerAthena::ClientUpdateGeneratedSkydivePath_Implementation(const FString& LocationStr, const FVector& DropLocationStr, const FVector& GlideLocationStr, const FVector& LandingLocationStr) {
}

void AFortPlayerControllerAthena::ClientStopWaitLTMLoading_Implementation() {
}

void AFortPlayerControllerAthena::ClientStartWaitLTMLoading_Implementation() {
}

void AFortPlayerControllerAthena::ClientStartRespawnPreparation_Implementation(FVector RespawnLoc, FRotator RespawnRot, float RespawnCameraDist, FName InRespawnCameraBehavior, const FText& HUDReasonText) {
}

void AFortPlayerControllerAthena::ClientSignalPortalLoadCompleteViaDelegate_Implementation(const FAsyncTaskResult& Result) {
}

void AFortPlayerControllerAthena::ClientSetStreamingTestStreamingLevels_Implementation(bool streaming) {
}

void AFortPlayerControllerAthena::ClientSetDeathReport_Implementation(FFortPlayerDeathReport InDeathReport) {
}

void AFortPlayerControllerAthena::ClientSendTeamStatsForPlayer_Implementation(const FAthenaMatchTeamStats& TeamStats) {
}

void AFortPlayerControllerAthena::ClientSendStateEncryptionKey_Implementation(const FPlayerStateEncryptionKey& Key) {
}

void AFortPlayerControllerAthena::ClientSendMatchStatsForPlayer_Implementation(const FAthenaMatchStats& Stats) {
}

void AFortPlayerControllerAthena::ClientSendEndMatchReportHeartbeat_Implementation() {
}

void AFortPlayerControllerAthena::ClientSendEndBattleRoyaleMatchForPlayer_Implementation(bool bSuccess, const FAthenaRewardResult& Result) {
}

void AFortPlayerControllerAthena::ClientSendDebugPoiVolumeData_Implementation(const FString& PoiVolumes) {
}

void AFortPlayerControllerAthena::ClientSendDebugPoiLocationTags_Implementation(const FGameplayTagContainer& InPoiTags) {
}

void AFortPlayerControllerAthena::ClientRequestLevelStreamingHandshake_Implementation() {
}

void AFortPlayerControllerAthena::ClientReportTournamentPlacementPointsScored_Implementation(int32 Placement, int32 PointsEarned) {
}

void AFortPlayerControllerAthena::ClientReceiveSquadQuickChatMessage_Implementation(FAthenaQuickChatActiveEntry ChatEntry, AFortPlayerController* SenderPC) {
}

void AFortPlayerControllerAthena::ClientReceiveKillNotification_Implementation(AFortPlayerStateZone* Killer, AFortPlayerStateZone* Killed) {
}

void AFortPlayerControllerAthena::ClientPublishCreativePlotComplete_Implementation(const FString& ResultErrorCode, const FString& LinkJson) {
}

void AFortPlayerControllerAthena::ClientPreviewScreenshotModeActivated_Implementation(bool bSuccess, bool bForceQuit) {
}

void AFortPlayerControllerAthena::ClientNotifyWon_Implementation(APawn* FinisherPawn, const UFortWeaponItemDefinition* FinishingWeapon, EDeathCause DeathCause) {
}

void AFortPlayerControllerAthena::ClientNotifyTeamWon_Implementation(APawn* FinisherPawn, const UFortWeaponItemDefinition* FinishingWeapon, EDeathCause DeathCause) {
}

void AFortPlayerControllerAthena::ClientNotifyTeamLost_Implementation() {
}

void AFortPlayerControllerAthena::ClientNotifyLost_Implementation(APawn* WinningPawn, EEndOfMatchReason LostReason) {
}

void AFortPlayerControllerAthena::ClientNotifyAbortRespawn_Implementation() {
}

void AFortPlayerControllerAthena::ClientMutatorEvent_Implementation(AFortGameplayMutator* Mutator, int32 EventId, int32 PayloadData) {
}

void AFortPlayerControllerAthena::ClientMarkSkydivePathsComplete_Implementation() {
}

void AFortPlayerControllerAthena::ClientHideScreenWhileRespawning_Implementation(const FText& HUDReasonText) {
}

void AFortPlayerControllerAthena::ClientEnterCameraMode_Implementation() {
}

void AFortPlayerControllerAthena::ClientCycleQuickBarToCreativeItem_Implementation(const FGuid& CreativeItemGuid, const UFortWorldItemDefinition* CreativeItemDef) {
}

void AFortPlayerControllerAthena::ClientCheckIfSafeToTurnOnCamera_Implementation() {
}

void AFortPlayerControllerAthena::ClientBroadcastPlotItemID_Implementation(const FString& PlotID) {
}

void AFortPlayerControllerAthena::ClientBroadcastOnUpdateCreativePlotName_Implementation(bool bSuccess, const FText& Reason) {
}

void AFortPlayerControllerAthena::ClientBroadcastOnUpdateCreativeDescriptionTags_Implementation(bool bSuccess, const FText& Reason) {
}

void AFortPlayerControllerAthena::ClientBroadcastOnRestoreCreativePlotFinished_Implementation(bool bSuccess, const FText& Reason) {
}

void AFortPlayerControllerAthena::ClientBroadcastOnMakeNewCreativePlotFinished_Implementation(bool bSuccess, const FText& Reason) {
}

void AFortPlayerControllerAthena::ClientBroadcastOnDuplicateCreativePlotFinished_Implementation(bool bSuccess, const FText& Reason) {
}

void AFortPlayerControllerAthena::ClientBroadcastOnDestroyCreativePlotFinished_Implementation(bool bSuccess, const FText& Reason) {
}

void AFortPlayerControllerAthena::ClientBotStopDogpile_Implementation() {
}

void AFortPlayerControllerAthena::ClientBotStartDogpile_Implementation(FVector DogpilePosition) {
}

void AFortPlayerControllerAthena::ClientAutoEquipFirstItem_Implementation(FGuid ItemGuid, bool bForceExecution) {
}

void AFortPlayerControllerAthena::ClientAlertPortalDoneTeleporting_Implementation() {
}

void AFortPlayerControllerAthena::ClientAlertLeaveIsland_Implementation() {
}

void AFortPlayerControllerAthena::ClientAddProfileGoCollection_Implementation(const FString& CollectionName, const TArray<FProfileGoScenario>& NewScenarios) {
}

void AFortPlayerControllerAthena::Client_DisplayQuestUpdate_Implementation(FFortUpdatedObjectiveStat ObjectiveUpdated, const AFortPlayerState* QuestOwner, const AFortPlayerState* AssistingPlayer) {
}

void AFortPlayerControllerAthena::ClearInventorySpaces(int32 NumSpaces) {
}

void AFortPlayerControllerAthena::ClearDroppableItems() {
}

void AFortPlayerControllerAthena::CheckIfSafeToTurnOnCamera() {
}

void AFortPlayerControllerAthena::CheckIfSafeToRespawn() {
}

void AFortPlayerControllerAthena::CheckIfLevelStreamingCompleteForHandshake() {
}

void AFortPlayerControllerAthena::CheckIfClientLoadedLTM() {
}

bool AFortPlayerControllerAthena::CanPlayerCreateInCurrentVolume(AFortVolume*& OutCurrentVolume) const {
    return false;
}

bool AFortPlayerControllerAthena::CanFollowSpecialActor() const {
    return false;
}

void AFortPlayerControllerAthena::CancelMatchmaking(EMatchmakingCancelReasonV2 CancelReason) {
}

void AFortPlayerControllerAthena::CancelCreativeMatchmakingReadyCheck() {
}

void AFortPlayerControllerAthena::BroadcastDeviceButtonComponentClickedDelegate(const UFortCreativeDeviceButtonComponent* DeviceButtonComponent) {
}

void AFortPlayerControllerAthena::ApplyOverrideWrapToVehicle(const TSoftObjectPtr<UAthenaItemWrapDefinition>& ItemWrap) {
}

void AFortPlayerControllerAthena::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortPlayerControllerAthena, FocalPoint);
    DOREPLIFETIME(AFortPlayerControllerAthena, FocalPointOffset);
    DOREPLIFETIME(AFortPlayerControllerAthena, FocalPointFOV);
    DOREPLIFETIME(AFortPlayerControllerAthena, SkydiveLeader);
    DOREPLIFETIME(AFortPlayerControllerAthena, LastDownedVictim);
    DOREPLIFETIME(AFortPlayerControllerAthena, LastElimVictim);
    DOREPLIFETIME(AFortPlayerControllerAthena, bNextRespawnInAir);
    DOREPLIFETIME(AFortPlayerControllerAthena, MaxPlotCount);
    DOREPLIFETIME(AFortPlayerControllerAthena, bMarkedAlive);
    DOREPLIFETIME(AFortPlayerControllerAthena, CreativeIslands);
    DOREPLIFETIME(AFortPlayerControllerAthena, LastUsedSavePlot);
    DOREPLIFETIME(AFortPlayerControllerAthena, bIsAllowedToPublish);
    DOREPLIFETIME(AFortPlayerControllerAthena, BroadcastRemoteClientInfo);
    DOREPLIFETIME(AFortPlayerControllerAthena, CreativePlotLinkedVolume);
    DOREPLIFETIME(AFortPlayerControllerAthena, OwnedPortal);
    DOREPLIFETIME(AFortPlayerControllerAthena, CachedPurchasedItems);
    DOREPLIFETIME(AFortPlayerControllerAthena, CurrentPlayset);
    DOREPLIFETIME(AFortPlayerControllerAthena, CreativeUserContentManager);
    DOREPLIFETIME(AFortPlayerControllerAthena, CreativeObjectTrackingComponent);
}

AFortPlayerControllerAthena::AFortPlayerControllerAthena() {
    FireAbilityToWeaponSwitchTime = 1;
    SwappingItemDefinition = NULL;
    WinScreenDelayTime = 1;
    bSkipPlayWinEffects = false;
    bAllowPlayersCreditOnLeave = true;
    FocalPoint = NULL;
    FocalPointFOV = 1;
    FocalPointDuration = 1;
    SkydiveLeaderManualCameraTime = 1;
    SkydiveLeader = NULL;
    LastDownedVictim = NULL;
    LastElimVictim = NULL;
    bLeaveDisconnectedPawnsInGame = true;
    DisconnectedPawn = NULL;
    PreviousPawn = NULL;
    bUseDeferredFireInputs = true;
    bReplicateViewTargetInventory = true;
    bHasHadValidPawn = false;
    bClientNotifiedOfWin = false;
    bClientNotifiedOfTeamWin = false;
    bClientNotifiedOfLoss = false;
    bHighlightRecordingEnabled = false;
    bPlaceDangerMarkerWhenTargeting = false;
    bDeferringStartRecordingHighlights = false;
    CachedHighlightCount = 0;
    HighlightFirstKillTime = 1;
    HighlightKillMultiple = 0;
    HighlightDownMultiple = 0;
    HighlightKillCooldown = 1;
    HighlightKillRewindTime = 1;
    RespawnCamera_Time = 1;
    RespawnCamera_HoldPositionTime = 1;
    bNextRespawnInAir = false;
    MaximumNumberOfPawnsToSearchForEmoteMusic = 0;
    PickupSwapHoldTime = 1;
    bUseNewPickupSwapLogic = true;
    SpectatorLevelStreamDistance = 1;
    RespawnLevelStreamDistance = 1;
    RespawnCameraActor = NULL;
    bDelayedTeleporting = false;
    bBlockTeleporting = false;
    MaxPlotCount = 0;
    bNoInGameMatchmaking = false;
    AudioOnExitAircraft = NULL;
    AudioOnExitAircraftHornDoppler = NULL;
    MinQuickChatCooldown = 1;
    QuickChatOffCooldownTime = 1;
    bMarkedAlive = false;
    bIsAllowedToPublish = false;
    MapCursorSpeed = 1;
    MapCursorSpeedGamepad = 1;
    bMatchStatsForPlayerSent = false;
    bAddedBookProgressStatsToGamemode = false;
    bHasSentMatchEndedQuestProgress = false;
    bEnableBroadcastRemoteClientInfo = true;
    BroadcastRemoteClientInfo = NULL;
    StrongMyHero = NULL;
    EndMatchHeartbeatTimerDelay = 1;
    EndMatchHeartbeatTimestamp = 4294967295;
    WarmupPlayerStart = NULL;
    FullScreenMapInputComponent = NULL;
    FullScreenScoreboardInputComponent = NULL;
    CurrentFullscreenInputComponent = NULL;
    GameChannelRecommendationInputComponent = NULL;
    SubscriptionNudgeInputComponent = NULL;
    BattleLabInputComponent = NULL;
    bUseTrapPicker = false;
    DoubleTapEditTime = 1;
    MatchReport = NULL;
    MinimapIndicatorClass = NULL;
    MinimapChallengeIndicatorClass = NULL;
    MinimapChallengeIndicators = NULL;
    bEnableInGameChallengeLocationIndicators = false;
    SquadMarkerActorClass = NULL;
    BuildingsCreated = 0;
    BuildingsEdited = 0;
    BuildingsRepaired = 0;
    BuildingsUpgraded = 0;
    BuildingActionDoneLastAtTime = 1;
    TimeStartedTrackingBuildingAnalytics = 1;
    CreativePlotLinkedVolume = NULL;
    OwnedPortal = NULL;
    CurrentPlayset = NULL;
    DestructedBuildingInGridTimeoutOverride = 1;
    MarkerComponent = CreateDefaultSubobject<UAthenaMarkerComponent>(TEXT("MarkerComponent"));
    ResurrectionComponent = CreateDefaultSubobject<UAthenaResurrectionComponent>(TEXT("ResurrectionComponent"));
    HeldDeviceUsageComponent = CreateDefaultSubobject<UFortControllerComponent_HeldDeviceUsage>(TEXT("HeldDeviceUsageComponent"));
    XPComponent = CreateDefaultSubobject<UFortPlayerControllerAthenaXPComponent>(TEXT("XPComponent"));
    DiscoverabilityComponent = CreateDefaultSubobject<UFortControllerComponent_MapDiscoverability>(TEXT("DiscoverabilityComponent"));
    SkydiveFeedback = CreateDefaultSubobject<UFortControllerComponent_SkydiveFeedback>(TEXT("SkydiveFeedbackComponent"));
    ContextualChallenges = CreateDefaultSubobject<UFortControllerComponent_ContextualChallenges>(TEXT("ContextualChallenges"));
    IndicatedActorManagementComponent = CreateDefaultSubobject<UFortControllerComponent_IndicatedActorManagement>(TEXT("IndicatedActorManagementComponent"));
    LocalizationServiceComponent = CreateDefaultSubobject<UFortControllerComponent_LocalizationService>(TEXT("LocalizationServiceComponent"));
    ToxicityServiceComponent = CreateDefaultSubobject<UFortControllerComponent_ToxicityService>(TEXT("ToxicityServiceComponent"));
    RechargingWeaponsComponent = CreateDefaultSubobject<UFortControllerComponent_RechargeWeapons>(TEXT("RechargeWeaponsComponent"));
    MinigameActivityComponent = CreateDefaultSubobject<UFortControllerComponent_MinigameActivity>(TEXT("MinigameActivityComponent"));
    TimeSinceLastCreativeSpawn = 4294967295;
    bIgnoreSignifanceBasedCustomDepthRendering = false;
    CreativeUserContentManager = NULL;
    CreativeObjectTrackingComponent = NULL;
    CreativeItemToRemoveWhenAddingInventoryItem = NULL;
}

