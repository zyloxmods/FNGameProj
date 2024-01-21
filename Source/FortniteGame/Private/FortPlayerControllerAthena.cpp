#include "FortPlayerControllerAthena.h"
#include "AthenaMarkerComponent.h"
#include "AthenaResurrectionComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

void AFortPlayerControllerAthena::WriteCreateBuildingAnalytics() {
}

void AFortPlayerControllerAthena::UpdateRichPresenceTimer() {
}

void AFortPlayerControllerAthena::UpdateCreativePlotData_Implementation(AFortVolume* VolumeToPublish, FCreativeIslandInfo MyInfo) {
}
bool AFortPlayerControllerAthena::UpdateCreativePlotData_Validate(AFortVolume* VolumeToPublish, FCreativeIslandInfo MyInfo) {
    return true;
}

void AFortPlayerControllerAthena::TellServer_ClientReceivedPlaysetDataForVolume_Implementation(FFortPlaysetStreamingData PlaysetData, AFortVolume* Volume) {
}
bool AFortPlayerControllerAthena::TellServer_ClientReceivedPlaysetDataForVolume_Validate(FFortPlaysetStreamingData PlaysetData, AFortVolume* Volume) {
    return true;
}

void AFortPlayerControllerAthena::StopRecordingHighlights() {
}

void AFortPlayerControllerAthena::StopAutoPerfCaptureWrapper() {
}

void AFortPlayerControllerAthena::StopAutoPerfCapture(EAthenaGamePhase GamePhase) {
}

void AFortPlayerControllerAthena::StartRespawnLoading() {
}

void AFortPlayerControllerAthena::StartAutoPerfCapture(EAthenaGamePhase GamePhase) {
}

void AFortPlayerControllerAthena::ShowHighlightSummary() {
}

void AFortPlayerControllerAthena::SetupClientRespawnTimerAndLocation(FVector RespawnLoc, FRotator RespawnRot, FVector OldPlayerLocation, bool bUsePlaylistFadeTime) {
}

void AFortPlayerControllerAthena::SetCanStreamBuildingFoundationsIn(bool bCanStream) {
}

void AFortPlayerControllerAthena::ServerToggleAutoRestartMinigame_Implementation() {
}
bool AFortPlayerControllerAthena::ServerToggleAutoRestartMinigame_Validate() {
    return true;
}

void AFortPlayerControllerAthena::ServerThankBusDriver_Implementation() {
}
bool AFortPlayerControllerAthena::ServerThankBusDriver_Validate() {
    return true;
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

void AFortPlayerControllerAthena::ServerSpawnCreativeSupplyDrop_Implementation(FVector Position, TSubclassOf<AActor> InSupplyDropClass) {
}
bool AFortPlayerControllerAthena::ServerSpawnCreativeSupplyDrop_Validate(FVector Position, TSubclassOf<AActor> InSupplyDropClass) {
    return true;
}

void AFortPlayerControllerAthena::ServerSetTeam_Implementation(uint8 InTeam) {
}
bool AFortPlayerControllerAthena::ServerSetTeam_Validate(uint8 InTeam) {
    return true;
}

void AFortPlayerControllerAthena::ServerSetShouldSwapPickup_Implementation(bool bShouldSwapPickup) {
}
bool AFortPlayerControllerAthena::ServerSetShouldSwapPickup_Validate(bool bShouldSwapPickup) {
    return true;
}

void AFortPlayerControllerAthena::ServerSetRespawnData(FVector RespawnLoc, FRotator RespawnRot, float RespawnCameraDist) {
}

void AFortPlayerControllerAthena::ServerSetPlayset_Implementation(UFortPlaysetItemDefinition* NewPlayset) {
}
bool AFortPlayerControllerAthena::ServerSetPlayset_Validate(UFortPlaysetItemDefinition* NewPlayset) {
    return true;
}

void AFortPlayerControllerAthena::ServerSendSquadFriend_Implementation(AFortPlayerStateAthena* FriendInSquad) {
}
bool AFortPlayerControllerAthena::ServerSendSquadFriend_Validate(AFortPlayerStateAthena* FriendInSquad) {
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

void AFortPlayerControllerAthena::ServerRequestNewZebulonDrone_Implementation() {
}
bool AFortPlayerControllerAthena::ServerRequestNewZebulonDrone_Validate() {
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

void AFortPlayerControllerAthena::ServerGiveCreativeItem_Implementation(const FFortItemEntry& CreativeItem) {
}
bool AFortPlayerControllerAthena::ServerGiveCreativeItem_Validate(const FFortItemEntry& CreativeItem) {
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

void AFortPlayerControllerAthena::ServerClearZebulonDrone_Implementation() {
}
bool AFortPlayerControllerAthena::ServerClearZebulonDrone_Validate() {
    return true;
}

void AFortPlayerControllerAthena::ServerClaimPortal_Implementation() {
}
bool AFortPlayerControllerAthena::ServerClaimPortal_Validate() {
    return true;
}

void AFortPlayerControllerAthena::ServerAddToCachedPurchased_Implementation(UFortItemDefinition* ItemDefinition, int32 Count) {
}
bool AFortPlayerControllerAthena::ServerAddToCachedPurchased_Validate(UFortItemDefinition* ItemDefinition, int32 Count) {
    return true;
}

void AFortPlayerControllerAthena::SendPhysicsBallHitToServer_Implementation(APhysicsObject* PhysicsObject, const float ClientPing, APawn* HittingPawn, const FVector VelocityOfHitter, const FVector HitNormal, const FTimeStampedPhysicsPawnState ClientBallState) {
}
bool AFortPlayerControllerAthena::SendPhysicsBallHitToServer_Validate(APhysicsObject* PhysicsObject, const float ClientPing, APawn* HittingPawn, const FVector VelocityOfHitter, const FVector HitNormal, const FTimeStampedPhysicsPawnState ClientBallState) {
    return true;
}

void AFortPlayerControllerAthena::SendClientPhysicsBallStateToServer_Implementation(APhysicsObject* PhysicsObject, const float ClientPing, const FTimeStampedPhysicsPawnState ClientBallState) {
}
bool AFortPlayerControllerAthena::SendClientPhysicsBallStateToServer_Validate(APhysicsObject* PhysicsObject, const float ClientPing, const FTimeStampedPhysicsPawnState ClientBallState) {
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


void AFortPlayerControllerAthena::OnRep_ZebulonDrone() {
}

void AFortPlayerControllerAthena::OnRep_ViewTargetInventoryLocalUpdate() {
}

void AFortPlayerControllerAthena::OnRep_PartyAssistedMemberData() {
}

void AFortPlayerControllerAthena::OnRep_CreativePlotLinkedVolume() {
}

void AFortPlayerControllerAthena::OnRep_CreativeIslands() {
}

void AFortPlayerControllerAthena::OnNewGamePhase(EAthenaGamePhase NewPhase) {
}

void AFortPlayerControllerAthena::OnGameServerNodeTypeChanged(EMeshNetworkNodeType NewNodeType) {
}

void AFortPlayerControllerAthena::OnCreativeModeEnabledChanged(bool bIsEnabled) {
}

void AFortPlayerControllerAthena::MultiKillExpired() {
}

void AFortPlayerControllerAthena::MakeNewCreativePlot_Implementation(const UFortCreativeRealEstatePlotItemDefinition* PlotType) {
}
bool AFortPlayerControllerAthena::MakeNewCreativePlot_Validate(const UFortCreativeRealEstatePlotItemDefinition* PlotType) {
    return true;
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

bool AFortPlayerControllerAthena::IsPlayerInFeaturedVolume() const {
    return false;
}

bool AFortPlayerControllerAthena::IsPlayerInAVolumeTheyCanCreateIn() const {
    return false;
}

bool AFortPlayerControllerAthena::IsPlayerInAMinigame() const {
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

void AFortPlayerControllerAthena::HandlePlayersLeftChanged(int32 NumPlayersLeft) {
}

void AFortPlayerControllerAthena::GetSquadKills(TArray<int32>& Kills) {
}

FString AFortPlayerControllerAthena::GetSettingsFilteredPlayerName(const AFortPlayerState* OtherPlayerState) const {
    return TEXT("");
}

bool AFortPlayerControllerAthena::GetRevertPlayerListenerChangeFlag() const {
    return false;
}

void AFortPlayerControllerAthena::GetPlaysetSize(int32& SizeX, int32& SizeY) const {
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

UAthenaPlayerMatchReport* AFortPlayerControllerAthena::GetMatchReport() {
    return NULL;
}

UAthenaMarkerComponent* AFortPlayerControllerAthena::GetMarkerComponent() const {
    return NULL;
}

AFortVolume* AFortPlayerControllerAthena::GetCurrentVolumeOrCreativePlotLinkedVolume() const {
    return NULL;
}

AFortVolume* AFortPlayerControllerAthena::GetCurrentVolume() const {
    return NULL;
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

void AFortPlayerControllerAthena::DestroyCreativePlot_Implementation(const FString& IslandId) {
}
bool AFortPlayerControllerAthena::DestroyCreativePlot_Validate(const FString& IslandId) {
    return true;
}

void AFortPlayerControllerAthena::ClientStartRespawnPreparation_Implementation(FVector RespawnLoc, FRotator RespawnRot, float RespawnCameraDist, FName InRespawnCameraBehavior, const FText& HUDReasonText) {
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

void AFortPlayerControllerAthena::ClientReceiveSquadQuickChatMessage_Implementation(FAthenaQuickChatActiveEntry ChatEntry, AFortPlayerController* SenderPC) {
}

void AFortPlayerControllerAthena::ClientPublishCreativePlotComplete_Implementation(const FString& ResultErrorCode, const FString& LinkJson) {
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

void AFortPlayerControllerAthena::ClientHideScreenWhileRespawning_Implementation(const FText& HUDReasonText) {
}

void AFortPlayerControllerAthena::ClientEnterCameraMode_Implementation() {
}

void AFortPlayerControllerAthena::ClientCycleQuickBarToCreativeItem_Implementation(const FGuid& CreativeItemGuid, const UFortWorldItemDefinition* CreativeItemDef) {
}

void AFortPlayerControllerAthena::ClientBotStopDogpile_Implementation() {
}

void AFortPlayerControllerAthena::ClientBotStartDogpile_Implementation(FVector DogpilePosition) {
}

void AFortPlayerControllerAthena::ClientAutoEquipFirstItem_Implementation(FGuid ItemGuid, bool bForceExecution) {
}

void AFortPlayerControllerAthena::ClientAlertLeaveIsland_Implementation() {
}

void AFortPlayerControllerAthena::ClientAddProfileGoCollection_Implementation(const FString& CollectionName, const TArray<FProfileGoScenario>& NewScenarios) {
}

void AFortPlayerControllerAthena::Client_DisplayQuestUpdate_Self_Implementation(FFortUpdatedObjectiveStat ObjectiveUpdated) {
}

void AFortPlayerControllerAthena::Client_DisplayQuestUpdate_Assist_Implementation(FFortUpdatedObjectiveStat ObjectiveUpdated, AFortPlayerState* QuestOwner, const AFortPlayerState* AssistingPlayer) {
}

void AFortPlayerControllerAthena::ClearInventorySpaces(int32 NumSpaces) {
}

void AFortPlayerControllerAthena::ClearDroppableItems() {
}

void AFortPlayerControllerAthena::CheckIfSafeToTurnOnCamera() {
}

void AFortPlayerControllerAthena::CheckIfSafeToRespawn() {
}

bool AFortPlayerControllerAthena::CanPlayerCreateInCurrentVolume(AFortVolume*& OutCurrentVolume) const {
    return false;
}

bool AFortPlayerControllerAthena::CanFollowSpecialActor() const {
    return false;
}

void AFortPlayerControllerAthena::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortPlayerControllerAthena, ZebulonDrone);
    DOREPLIFETIME(AFortPlayerControllerAthena, ViewTargetInventory);
    DOREPLIFETIME(AFortPlayerControllerAthena, bNextRespawnInAir);
    DOREPLIFETIME(AFortPlayerControllerAthena, bMarkedAlive);
    DOREPLIFETIME(AFortPlayerControllerAthena, CreativeIslands);
    DOREPLIFETIME(AFortPlayerControllerAthena, LastUsedCreativeIsland);
    DOREPLIFETIME(AFortPlayerControllerAthena, bIsAllowedToPublish);
    DOREPLIFETIME(AFortPlayerControllerAthena, PartyAssistedMemberData);
    DOREPLIFETIME(AFortPlayerControllerAthena, BroadcastRemoteClientInfo);
    DOREPLIFETIME(AFortPlayerControllerAthena, CreativePlotLinkedVolume);
    DOREPLIFETIME(AFortPlayerControllerAthena, OwnedPortal);
    DOREPLIFETIME(AFortPlayerControllerAthena, CachedPurchasedItems);
    DOREPLIFETIME(AFortPlayerControllerAthena, CurrentPlayset);
    DOREPLIFETIME(AFortPlayerControllerAthena, CreativeUserContentManager);
}

AFortPlayerControllerAthena::AFortPlayerControllerAthena() {
    this->FireAbilityToWeaponSwitchTime = 0.02f;
    this->bShouldForceDeleteDroppedItems = false;
    this->SwappingItemDefinition = NULL;
    this->WinScreenDelayTime = 10.00f;
    this->bSkipPlayWinEffects = false;
    this->bAllowPlayersCreditOnLeave = true;
    this->ExitZebulonDroneHoldTime = 2.00f;
    this->ZebulonDrone = NULL;
    this->bLeaveDisconnectedPawnsInGame = true;
    this->DisconnectedPawn = NULL;
    this->bUseDeferredFireInputs = true;
    this->bReplicateViewTargetInventory = true;
    this->ViewTargetInventory = NULL;
    this->bHasHadValidPawn = false;
    this->bClientNotifiedOfWin = false;
    this->bClientNotifiedOfTeamWin = false;
    this->bClientNotifiedOfLoss = false;
    this->bHighlightRecordingEnabled = false;
    this->bPlaceDangerMarkerWhenTargeting = false;
    this->bDeferringStartRecordingHighlights = false;
    this->CachedHighlightCount = 0;
    this->HighlightFirstKillTime = 0.00f;
    this->HighlightKillMultiple = 0;
    this->HighlightDownMultiple = 0;
    this->HighlightKillCooldown = 5.00f;
    this->HighlightKillRewindTime = 10.00f;
    this->RespawnCamera_Time = 1.25f;
    this->RespawnCamera_HoldPositionTime = 0.75f;
    this->bNextRespawnInAir = false;
    this->MaximumNumberOfPawnsToSearchForEmoteMusic = 100;
    this->PickupSwapHoldTime = 0.30f;
    this->bUseNewPickupSwapLogic = true;
    this->SpectatorLevelStreamDistance = 20000.00f;
    this->RespawnLevelStreamDistance = 0.00f;
    this->RespawnCameraActor = NULL;
    this->bDelayedTeleporting = false;
    this->bNoInGameMatchmaking = true;
    this->AudioOnExitAircraft = NULL;
    this->AudioOnExitAircraftHornDoppler = NULL;
    this->MinQuickChatCooldown = 1.00f;
    this->QuickChatOffCooldownTime = 0.00f;
    this->bMarkedAlive = false;
    this->bIsAllowedToPublish = false;
    this->MapCursorSpeed = 200.00f;
    this->MapCursorSpeedGamepad = 2200.00f;
    this->bRevertPlayerListenerChange = false;
    this->bAllowNoShadows = true;
    this->bAllowNoDOF = true;
    this->bHasSentMatchEndedQuestProgress = false;
    this->bEnableBroadcastRemoteClientInfo = true;
    this->BroadcastRemoteClientInfo = NULL;
    this->StrongMyHero = NULL;
    this->EndMatchHeartbeatTimerDelay = 0.25f;
    this->EndMatchHeartbeatTimestamp = 17072091.69f;
    this->WarmupPlayerStart = NULL;
    this->FullScreenMapInputComponent = NULL;
    this->FullScreenScoreboardInputComponent = NULL;
    this->CurrentFullscreenInputComponent = NULL;
    this->bUseTrapPicker = false;
    this->MovementCancellableActionLeashLength = 150.00f;
    this->bAllowMovementCancellableActionsWithIceFeet = true;
    this->MoveForwardOnlyEmoteCancelBackwardsThreshold = -0.20f;
    this->MoveForwardOnlyEmoteCancelStrafeThreshold = 0.40f;
    this->MatchReport = NULL;
    this->MinimapIndicatorClass = NULL;
    this->SquadMarkerActorClass = NULL;
    this->BuildingsCreated = 0;
    this->BuildingsEdited = 0;
    this->BuildingsRepaired = 0;
    this->BuildingsUpgraded = 0;
    this->TimeStartedTrackingBuildingAnalytics = 0.00f;
    this->CreativePlotLinkedVolume = NULL;
    this->OwnedPortal = NULL;
    this->CurrentPlayset = NULL;
    this->DestructedBuildingInGridTimeoutOverride = 0.00f;
    this->MarkerComponent = CreateDefaultSubobject<UAthenaMarkerComponent>(TEXT("MarkerComponent"));
    this->ResurrectionComponent = CreateDefaultSubobject<UAthenaResurrectionComponent>(TEXT("ResurrectionComponent"));
    this->TimeSinceLastCreativeSpawn = 0.00f;
    this->bIgnoreSignifanceBasedCustomDepthRendering = false;
    this->CreativeUserContentManager = NULL;
}

