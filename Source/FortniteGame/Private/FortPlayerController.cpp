#include "FortPlayerController.h"
#include "FortClientBotManager.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

void AFortPlayerController::UnMutePlayer(const FUniqueNetIdRepl& UniqueNetId) {
}

void AFortPlayerController::TogglePersonalVehicle_Implementation(bool bOn) {
}
bool AFortPlayerController::TogglePersonalVehicle_Validate(bool bOn) {
    return true;
}

void AFortPlayerController::ToggleInventory() {
}

void AFortPlayerController::ToggleFullScreenMap() {
}

void AFortPlayerController::ToggleClientBot() {
}

void AFortPlayerController::TestStreamedVideo(const FString& URLInQuotes) {
}

void AFortPlayerController::SuppressEventNotifications(bool bSuppress) {
}

void AFortPlayerController::Suicide() {
}

void AFortPlayerController::StartZeroingCameraRoll() {
}

bool AFortPlayerController::StartReadyCheck(FText QueryText, FText YesText, FText NoText, float PercentageToPass) {
    return false;
}

void AFortPlayerController::StartAutoLevelCamera() {
}

AActor* AFortPlayerController::SpawnToyInstance(TSubclassOf<AActor> ToyClass, FTransform SpawnPosition) {
    return NULL;
}

bool AFortPlayerController::ShouldShowInfoIndicator(const AActor* TestActor) const {
    return false;
}

void AFortPlayerController::SetRotatePawnToCamera(bool bNewRotatePawnToCamera) {
}

void AFortPlayerController::SetLockOnTargetStickCoords(const FVector2D& Coords) {
}

void AFortPlayerController::SetInputYawScale(float InInputYawScale) {
}

void AFortPlayerController::SetInputPitchScale(float InInputPitchScale) {
}

void AFortPlayerController::SetFullscreenMapVisible(bool Visible) {
}

void AFortPlayerController::SetFirstPersonCamera(bool bNewUseFirstPersonCamera) {
}

void AFortPlayerController::SetCrucibleMode(bool bEnable) {
}

void AFortPlayerController::SetCinematicOverrideClass(TSubclassOf<UFortCinematicCamera> OverrideCameraClass) {
}

void AFortPlayerController::SetCinematicModeWithWeapon(bool bInCinematicMode, bool bHidePlayer, bool bHideWeapon, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning) {
}

void AFortPlayerController::SetBuildingHighlight(const TArray<ABuildingActor*>& TargetedBuildings, TEnumAsByte<EBuildingHighlightType::Type> HighlightType, bool bValidHighlight) {
}

void AFortPlayerController::SetAutoLevelCamera(bool bShouldLevel) {
}

void AFortPlayerController::SetAtNameHomeBaseScreen(bool AtScreen) {
}

void AFortPlayerController::ServerUpgradeBuildingActor_Implementation(ABuildingActor* BuildingActorToUpgrade, int32 NewUpgradeLevel) {
}
bool AFortPlayerController::ServerUpgradeBuildingActor_Validate(ABuildingActor* BuildingActorToUpgrade, int32 NewUpgradeLevel) {
    return true;
}

void AFortPlayerController::ServerUpdatePlayerData_Implementation(const TArray<uint8>& PlayerData) {
}
bool AFortPlayerController::ServerUpdatePlayerData_Validate(const TArray<uint8>& PlayerData) {
    return true;
}

void AFortPlayerController::ServerUpdateGameplayOptions_Implementation(const TArray<FString>& UserOptionsKeys, const TArray<FString>& UserOptionsValues) {
}
bool AFortPlayerController::ServerUpdateGameplayOptions_Validate(const TArray<FString>& UserOptionsKeys, const TArray<FString>& UserOptionsValues) {
    return true;
}

void AFortPlayerController::ServerUpdateGameDescriptionData_Implementation(AActor* DataTarget, const FText& GameName, const TArray<FText>& GameDescriptionText) {
}
bool AFortPlayerController::ServerUpdateGameDescriptionData_Validate(AActor* DataTarget, const FText& GameName, const TArray<FText>& GameDescriptionText) {
    return true;
}

void AFortPlayerController::ServerUpdateActorOptions_Implementation(AActor* OptionsTarget, const TArray<FString>& OptionsKeys, const TArray<FString>& OptionsValues) {
}
bool AFortPlayerController::ServerUpdateActorOptions_Validate(AActor* OptionsTarget, const TArray<FString>& OptionsKeys, const TArray<FString>& OptionsValues) {
    return true;
}

void AFortPlayerController::ServerUIChoiceCompleted_Implementation(int32 ChosenItem, int32 MenuIdentifier) {
}
bool AFortPlayerController::ServerUIChoiceCompleted_Validate(int32 ChosenItem, int32 MenuIdentifier) {
    return true;
}

void AFortPlayerController::ServerTriggerGenericObjectiveEvent_Implementation(AFortObjectiveBase* Objective) {
}
bool AFortPlayerController::ServerTriggerGenericObjectiveEvent_Validate(AFortObjectiveBase* Objective) {
    return true;
}

void AFortPlayerController::ServerTriggerCombatEventBatch_Implementation(const TArray<FFortCombatManagerEvent>& Payload) {
}
bool AFortPlayerController::ServerTriggerCombatEventBatch_Validate(const TArray<FFortCombatManagerEvent>& Payload) {
    return true;
}

void AFortPlayerController::ServerTriggerCombatEvent_Implementation(EFortCombatEvents TriggeredEvent, float HeatMultiplier) {
}
bool AFortPlayerController::ServerTriggerCombatEvent_Validate(EFortCombatEvents TriggeredEvent, float HeatMultiplier) {
    return true;
}

void AFortPlayerController::ServerTouchActiveTime_Implementation() {
}
bool AFortPlayerController::ServerTouchActiveTime_Validate() {
    return true;
}

void AFortPlayerController::ServerTeleportToReticle_Implementation(FVector TeleportLocation) {
}
bool AFortPlayerController::ServerTeleportToReticle_Validate(FVector TeleportLocation) {
    return true;
}

void AFortPlayerController::ServerTeamChatRoomReady_Implementation(const FString& ChatRoomId) {
}
bool AFortPlayerController::ServerTeamChatRoomReady_Validate(const FString& ChatRoomId) {
    return true;
}

void AFortPlayerController::ServerSuicide_Implementation() {
}
bool AFortPlayerController::ServerSuicide_Validate() {
    return true;
}

void AFortPlayerController::ServerStartPIDValueGraphing_Implementation() {
}
bool AFortPlayerController::ServerStartPIDValueGraphing_Validate() {
    return true;
}

void AFortPlayerController::ServerStartPIDContributionsGraphing_Implementation() {
}
bool AFortPlayerController::ServerStartPIDContributionsGraphing_Validate() {
    return true;
}

void AFortPlayerController::ServerStartIntensityGraphing_Implementation() {
}
bool AFortPlayerController::ServerStartIntensityGraphing_Validate() {
    return true;
}

void AFortPlayerController::ServerSpotActor_Implementation(AActor* NewlySpottedActor) {
}
bool AFortPlayerController::ServerSpotActor_Validate(AActor* NewlySpottedActor) {
    return true;
}

void AFortPlayerController::ServerSpawnMark_Implementation(AActor* ActorToAttachTo, FVector AttachOffset, const FText& PreapprovedText) {
}
bool AFortPlayerController::ServerSpawnMark_Validate(AActor* ActorToAttachTo, FVector AttachOffset, const FText& PreapprovedText) {
    return true;
}

void AFortPlayerController::ServerSetShouldUsePilotComponent_Implementation(bool InValue) {
}
bool AFortPlayerController::ServerSetShouldUsePilotComponent_Validate(bool InValue) {
    return true;
}

void AFortPlayerController::ServerSetShouldUseBotManager_Implementation(bool InValue) {
}
bool AFortPlayerController::ServerSetShouldUseBotManager_Validate(bool InValue) {
    return true;
}

void AFortPlayerController::ServerSetReadyToContinue_Implementation(bool bReady, EFortGameplayState RequestedState, bool bTryStartTimer) {
}
bool AFortPlayerController::ServerSetReadyToContinue_Validate(bool bReady, EFortGameplayState RequestedState, bool bTryStartTimer) {
    return true;
}

void AFortPlayerController::ServerSetPartyOwner_Implementation(const FUniqueNetIdRepl& PartyOwnerUniqueId) {
}
bool AFortPlayerController::ServerSetPartyOwner_Validate(const FUniqueNetIdRepl& PartyOwnerUniqueId) {
    return true;
}

void AFortPlayerController::ServerSetMarkText_Implementation(AFortMarkActor* MarkActor, const FString& MarkText) {
}
bool AFortPlayerController::ServerSetMarkText_Validate(AFortMarkActor* MarkActor, const FString& MarkText) {
    return true;
}

void AFortPlayerController::ServerSetInventoryStateValue_Implementation(FGuid ItemGuid, FFortItemEntryStateValue StateValue) {
}
bool AFortPlayerController::ServerSetInventoryStateValue_Validate(FGuid ItemGuid, FFortItemEntryStateValue StateValue) {
    return true;
}

void AFortPlayerController::ServerSetHero_Implementation(const FString& NewHeroID) {
}
bool AFortPlayerController::ServerSetHero_Validate(const FString& NewHeroID) {
    return true;
}

void AFortPlayerController::ServerSetClientHasFinishedLoading_Implementation(bool bInHasFinishedLoading) {
}
bool AFortPlayerController::ServerSetClientHasFinishedLoading_Validate(bool bInHasFinishedLoading) {
    return true;
}

void AFortPlayerController::ServerSetAutoEquipBetterItems_Implementation(bool bAutoEquip) {
}
bool AFortPlayerController::ServerSetAutoEquipBetterItems_Validate(bool bAutoEquip) {
    return true;
}

void AFortPlayerController::ServerSetAntiAddictionPlayTimeMultiplier_Implementation(float NewPlayTimeRewardRate) {
}
bool AFortPlayerController::ServerSetAntiAddictionPlayTimeMultiplier_Validate(float NewPlayTimeRewardRate) {
    return true;
}

void AFortPlayerController::ServerSendClientProgressUpdate_Implementation(int32 ClientProgressState, const TArray<uint64>& ClientProgressUpdate) {
}
bool AFortPlayerController::ServerSendClientProgressUpdate_Validate(int32 ClientProgressState, const TArray<uint64>& ClientProgressUpdate) {
    return true;
}

void AFortPlayerController::ServerReturnToMainMenu_Implementation() {
}
bool AFortPlayerController::ServerReturnToMainMenu_Validate() {
    return true;
}

void AFortPlayerController::ServerRequestGameplayAction_Implementation(EFortRequestedGameplayAction RequestedAction) {
}
bool AFortPlayerController::ServerRequestGameplayAction_Validate(EFortRequestedGameplayAction RequestedAction) {
    return true;
}

void AFortPlayerController::ServerRequestAttributeSources_Implementation(FGameplayAttribute Attribute, UFortAbilitySystemComponent* AbilitySystemComponent) {
}
bool AFortPlayerController::ServerRequestAttributeSources_Validate(FGameplayAttribute Attribute, UFortAbilitySystemComponent* AbilitySystemComponent) {
    return true;
}

void AFortPlayerController::ServerRequestAIDebug_Implementation() {
}
bool AFortPlayerController::ServerRequestAIDebug_Validate() {
    return true;
}

void AFortPlayerController::ServerReportClientFPS_Implementation(float ClientAvgFPS, uint8 ClientAvgFrameScore, uint8 ClientMaxFrameScore) {
}
bool AFortPlayerController::ServerReportClientFPS_Validate(float ClientAvgFPS, uint8 ClientAvgFrameScore, uint8 ClientMaxFrameScore) {
    return true;
}

void AFortPlayerController::ServerReplyToReadyCheck_Implementation(bool bReady) {
}
bool AFortPlayerController::ServerReplyToReadyCheck_Validate(bool bReady) {
    return true;
}

void AFortPlayerController::ServerRepairBuildingActor_Implementation(ABuildingSMActor* BuildingActorToRepair) {
}
bool AFortPlayerController::ServerRepairBuildingActor_Validate(ABuildingSMActor* BuildingActorToRepair) {
    return true;
}

void AFortPlayerController::ServerRemoveInventoryStateValue_Implementation(FGuid ItemGuid, EFortItemEntryState StateValueType) {
}
bool AFortPlayerController::ServerRemoveInventoryStateValue_Validate(FGuid ItemGuid, EFortItemEntryState StateValueType) {
    return true;
}

void AFortPlayerController::ServerRemoveInventoryItem_Implementation(FGuid ItemGuid, int32 Count, bool bForceRemoveFromQuickBars, bool bForceRemoval) {
}
bool AFortPlayerController::ServerRemoveInventoryItem_Validate(FGuid ItemGuid, int32 Count, bool bForceRemoveFromQuickBars, bool bForceRemoval) {
    return true;
}

void AFortPlayerController::ServerRemoveDefender_Implementation(ABuildingTrapDefender* DefenderTrap) {
}
bool AFortPlayerController::ServerRemoveDefender_Validate(ABuildingTrapDefender* DefenderTrap) {
    return true;
}

void AFortPlayerController::ServerReleaseInventoryItemKey_Implementation(FGuid ItemGuid) {
}
bool AFortPlayerController::ServerReleaseInventoryItemKey_Validate(FGuid ItemGuid) {
    return true;
}

void AFortPlayerController::ServerReadyToStartMatch_Implementation() {
}
bool AFortPlayerController::ServerReadyToStartMatch_Validate() {
    return true;
}

void AFortPlayerController::ServerPlayEmoteItem_Implementation(const UFortMontageItemDefinitionBase* EmoteAsset) {
}
bool AFortPlayerController::ServerPlayEmoteItem_Validate(const UFortMontageItemDefinitionBase* EmoteAsset) {
    return true;
}

void AFortPlayerController::ServerPingMinimap_Implementation(FVector WorldLocation, FLinearColor PingColor, uint8 RequiredTeam) {
}
bool AFortPlayerController::ServerPingMinimap_Validate(FVector WorldLocation, FLinearColor PingColor, uint8 RequiredTeam) {
    return true;
}

void AFortPlayerController::ServerOnMaterialSelection_Implementation(EFortResourceType NewResourceType, EFortResourceLevel NewResourceLevel) {
}
bool AFortPlayerController::ServerOnMaterialSelection_Validate(EFortResourceType NewResourceType, EFortResourceLevel NewResourceLevel) {
    return true;
}

void AFortPlayerController::ServerModifyStat_Implementation(FName StatName, int32 Amount, EStatMod ModType, bool bForceStatSave) {
}
bool AFortPlayerController::ServerModifyStat_Validate(FName StatName, int32 Amount, EStatMod ModType, bool bForceStatSave) {
    return true;
}

void AFortPlayerController::ServerLoadingScreenDropped_Implementation() {
}
bool AFortPlayerController::ServerLoadingScreenDropped_Validate() {
    return true;
}

void AFortPlayerController::ServerKillAllAIPawnsAroundPlayer_Implementation() {
}
bool AFortPlayerController::ServerKillAllAIPawnsAroundPlayer_Validate() {
    return true;
}

void AFortPlayerController::ServerKickPlayer_Implementation(const FUniqueNetIdRepl& PlayerToKick, const FText& Reason) {
}
bool AFortPlayerController::ServerKickPlayer_Validate(const FUniqueNetIdRepl& PlayerToKick, const FText& Reason) {
    return true;
}

void AFortPlayerController::ServerItemWillBeDestroyed_Implementation(FGuid DestroyedItemGuid, int32 Count) {
}
bool AFortPlayerController::ServerItemWillBeDestroyed_Validate(FGuid DestroyedItemGuid, int32 Count) {
    return true;
}

void AFortPlayerController::ServerHandleMissionEvent_ToggledEditMode_Implementation(ABuildingSMActor* EditableActor, bool bOpened) {
}
bool AFortPlayerController::ServerHandleMissionEvent_ToggledEditMode_Validate(ABuildingSMActor* EditableActor, bool bOpened) {
    return true;
}

void AFortPlayerController::ServerHandleMissionEvent_ToggledCursorMode_Implementation(bool bOpened) {
}
bool AFortPlayerController::ServerHandleMissionEvent_ToggledCursorMode_Validate(bool bOpened) {
    return true;
}

void AFortPlayerController::ServerHandleMissionEvent_StartLeavingZone_Implementation() {
}
bool AFortPlayerController::ServerHandleMissionEvent_StartLeavingZone_Validate() {
    return true;
}

void AFortPlayerController::ServerGiftInventoryItemToOtherPlayer_Implementation(FGuid ItemGuid, FUniqueNetIdRepl PlayerID, int32 Quantity) {
}
bool AFortPlayerController::ServerGiftInventoryItemToOtherPlayer_Validate(FGuid ItemGuid, FUniqueNetIdRepl PlayerID, int32 Quantity) {
    return true;
}

void AFortPlayerController::ServerExecutePresetTeamChat_Implementation(const FText& ChatText, FUniqueNetIdRepl SenderID) {
}
bool AFortPlayerController::ServerExecutePresetTeamChat_Validate(const FText& ChatText, FUniqueNetIdRepl SenderID) {
    return true;
}

void AFortPlayerController::ServerExecuteInventoryWeapon_Implementation(AFortWeapon* Weapon) {
}
bool AFortPlayerController::ServerExecuteInventoryWeapon_Validate(AFortWeapon* Weapon) {
    return true;
}

void AFortPlayerController::ServerExecuteInventoryItem_Implementation(FGuid ItemGuid) {
}
bool AFortPlayerController::ServerExecuteInventoryItem_Validate(FGuid ItemGuid) {
    return true;
}

void AFortPlayerController::ServerEndEditingBuildingActor_Implementation(ABuildingSMActor* BuildingActorToStopEditing) {
}
bool AFortPlayerController::ServerEndEditingBuildingActor_Validate(ABuildingSMActor* BuildingActorToStopEditing) {
    return true;
}

void AFortPlayerController::ServerEmote_Implementation(const FName& AssetName) {
}
bool AFortPlayerController::ServerEmote_Validate(const FName& AssetName) {
    return true;
}

void AFortPlayerController::ServerEditBuildingActor_Implementation(ABuildingSMActor* BuildingActorToEdit, TSubclassOf<ABuildingSMActor> NewBuildingClass, uint8 RotationIterations, bool bMirrored) {
}
bool AFortPlayerController::ServerEditBuildingActor_Validate(ABuildingSMActor* BuildingActorToEdit, TSubclassOf<ABuildingSMActor> NewBuildingClass, uint8 RotationIterations, bool bMirrored) {
    return true;
}

void AFortPlayerController::ServerDropCarriedObject_Implementation() {
}
bool AFortPlayerController::ServerDropCarriedObject_Validate() {
    return true;
}

void AFortPlayerController::ServerDropAllItems_Implementation(const UFortItemDefinition* IgnoreItemDef) {
}
bool AFortPlayerController::ServerDropAllItems_Validate(const UFortItemDefinition* IgnoreItemDef) {
    return true;
}

void AFortPlayerController::ServerDisassembleInventoryItems_Implementation(const TArray<FGuid>& ItemGuids, const TArray<int32>& ItemCounts) {
}
bool AFortPlayerController::ServerDisassembleInventoryItems_Validate(const TArray<FGuid>& ItemGuids, const TArray<int32>& ItemCounts) {
    return true;
}

void AFortPlayerController::ServerDeployDefender_Implementation(ABuildingTrapDefender* DefenderTrap, const FString& SelectedItemInstanceId, const FName& DefenderSquadId, const FGuid WeaponToGiveGuid, const int32 AmmoQuantity) {
}
bool AFortPlayerController::ServerDeployDefender_Validate(ABuildingTrapDefender* DefenderTrap, const FString& SelectedItemInstanceId, const FName& DefenderSquadId, const FGuid WeaponToGiveGuid, const int32 AmmoQuantity) {
    return true;
}

void AFortPlayerController::ServerCreateBuildingActor_Implementation(FCreateBuildingActorData CreateBuildingData) {
}
bool AFortPlayerController::ServerCreateBuildingActor_Validate(FCreateBuildingActorData CreateBuildingData) {
    return true;
}

void AFortPlayerController::ServerCraftSchematic_Implementation(const FString& ItemId, int32 PostCraftSlot, int32 CraftAmount, EFortItemTier RequestedTier, bool bIsQuickCrafted) {
}
bool AFortPlayerController::ServerCraftSchematic_Validate(const FString& ItemId, int32 PostCraftSlot, int32 CraftAmount, EFortItemTier RequestedTier, bool bIsQuickCrafted) {
    return true;
}

void AFortPlayerController::ServerCombineInventoryItems_Implementation(FGuid TargetItemGuid, FGuid SourceItemGuid) {
}
bool AFortPlayerController::ServerCombineInventoryItems_Validate(FGuid TargetItemGuid, FGuid SourceItemGuid) {
    return true;
}

void AFortPlayerController::ServerClientPawnLoaded_Implementation(bool bIsPawnLoaded) {
}
bool AFortPlayerController::ServerClientPawnLoaded_Validate(bool bIsPawnLoaded) {
    return true;
}

void AFortPlayerController::ServerCheatAll_Implementation(const FString& Msg) {
}
bool AFortPlayerController::ServerCheatAll_Validate(const FString& Msg) {
    return true;
}

void AFortPlayerController::ServerCheat_Implementation(const FString& Msg) {
}
bool AFortPlayerController::ServerCheat_Validate(const FString& Msg) {
    return true;
}

void AFortPlayerController::ServerBroadcastUIFeedbackEvent_Implementation(FName EventName) {
}
bool AFortPlayerController::ServerBroadcastUIFeedbackEvent_Validate(FName EventName) {
    return true;
}

void AFortPlayerController::ServerBroadcastPlayerChangedBuildMode_Implementation(bool bIsInBuildMode) {
}
bool AFortPlayerController::ServerBroadcastPlayerChangedBuildMode_Validate(bool bIsInBuildMode) {
    return true;
}

void AFortPlayerController::ServerBeginEditingBuildingActor_Implementation(ABuildingSMActor* BuildingActorToEdit) {
}
bool AFortPlayerController::ServerBeginEditingBuildingActor_Validate(ABuildingSMActor* BuildingActorToEdit) {
    return true;
}

void AFortPlayerController::ServerAttemptUnpinSchematic_Implementation(const FString& ItemId, bool bSave) {
}
bool AFortPlayerController::ServerAttemptUnpinSchematic_Validate(const FString& ItemId, bool bSave) {
    return true;
}

void AFortPlayerController::ServerAttemptPinSchematic_Implementation(const FString& ItemId, bool bSave) {
}
bool AFortPlayerController::ServerAttemptPinSchematic_Validate(const FString& ItemId, bool bSave) {
    return true;
}

void AFortPlayerController::ServerAttemptInventoryDrop_Implementation(FGuid ItemGuid, int32 Count) {
}
bool AFortPlayerController::ServerAttemptInventoryDrop_Validate(FGuid ItemGuid, int32 Count) {
    return true;
}

void AFortPlayerController::ServerAttemptAircraftJump_Implementation(FRotator ClientRotation) {
}
bool AFortPlayerController::ServerAttemptAircraftJump_Validate(FRotator ClientRotation) {
    return true;
}

void AFortPlayerController::ServerAnnouncementStoppedOnClient_Implementation(FGuid AnnouncementID) {
}
bool AFortPlayerController::ServerAnnouncementStoppedOnClient_Validate(FGuid AnnouncementID) {
    return true;
}

void AFortPlayerController::ServerAddPawnMovementInput_Implementation(AFortPawn* InChar, FVector WorldDirection, float ScaleValue, bool bForce) {
}
bool AFortPlayerController::ServerAddPawnMovementInput_Validate(AFortPawn* InChar, FVector WorldDirection, float ScaleValue, bool bForce) {
    return true;
}

void AFortPlayerController::ServerAcknowledgeDelayedQuickBarAction_Implementation(const TArray<uint32>& ProcessedActionIds) {
}
bool AFortPlayerController::ServerAcknowledgeDelayedQuickBarAction_Validate(const TArray<uint32>& ProcessedActionIds) {
    return true;
}

void AFortPlayerController::SendStreamingAnalytics() const {
}

void AFortPlayerController::SendMessage(const FText& MESSAGE) {
}

void AFortPlayerController::ReturnToMainMenu() {
}

void AFortPlayerController::ResetInputRotationScale() {
}

void AFortPlayerController::ReportVideoStreamingError(bool bLocalContentFallback, const FString& LastError) const {
}

void AFortPlayerController::RemoveItemFromQuickBars(UFortItemDefinition* ItemDefinition) {
}

void AFortPlayerController::PrintEventInfo() {
}

void AFortPlayerController::PrintDebugInfo() {
}

void AFortPlayerController::PreparePlayerForDisplay() {
}

void AFortPlayerController::PostHeroStatSkillPointsEarned(int32 NumSkillPoints) {
}

void AFortPlayerController::PostHeroStatMissionCompleted(int32 DifficultyRating) {
}

void AFortPlayerController::PostHeroStatCollectionBookProgressMade(int32 LevelReached) {
}

void AFortPlayerController::PlaySpatialSound(USoundBase* Sound, FVector Location) {
}

void AFortPlayerController::PlayEmoteItem(const UFortMontageItemDefinitionBase* EmoteAsset) {
}

bool AFortPlayerController::OwnsIslandVolume(AFortVolume* Volume) const {
    return false;
}

bool AFortPlayerController::OwnsCurrentIslandVolume() const {
    return false;
}

void AFortPlayerController::OpenVoteDialog() {
}

void AFortPlayerController::OpenChoiceUI(FChoiceData ChoiceData) {
}

void AFortPlayerController::OnRep_UpdatedUnsavedPrimaryMissionProgress() {
}

void AFortPlayerController::OnRep_UpdatedObjectiveStats() {
}

void AFortPlayerController::OnRep_PinnedSchematics() {
}

void AFortPlayerController::OnRep_PIDValuesGraphInfo() {
}

void AFortPlayerController::OnRep_PIDContributionsGraphInfo() {
}

void AFortPlayerController::OnRep_LatestRewardReport() {
}

void AFortPlayerController::OnRep_IntensityGraphInfo() {
}

void AFortPlayerController::OnRep_DelayedQuickBarActions() {
}

void AFortPlayerController::OnRep_CombatManager() {
}

void AFortPlayerController::OnRep_CheatMovement() {
}

void AFortPlayerController::OnRep_bHasServerFinishedLoading() {
}

void AFortPlayerController::OnMinigameVolumeStateChanged(EVolumeState NewState, AFortVolume* Volume) {
}





void AFortPlayerController::MutePlayer(const FUniqueNetIdRepl& UniqueNetId) {
}

void AFortPlayerController::ModifyStat(FName StatName, int32 Amount, EStatMod ModType, bool bForceStatSave) {
}

void AFortPlayerController::LocalStopForceFeedback(UForceFeedbackEffect* ForceFeedbackEffect, FName Tag) {
}

void AFortPlayerController::LocalPlayForceFeedback(UForceFeedbackEffect* ForceFeedbackEffect, bool bLooping, FName Tag) {
}

void AFortPlayerController::LocalOverrideBuildMode(bool bVisible, TSubclassOf<ABuildingSMActor> InBuildingClass, FVector BuildingOverrideDistance, UMaterialInterface* PreviewMaterial, FVector NewScale, FRotator NewRotation) {
}

void AFortPlayerController::LocalOnUiChoiceCompleted(int32 ChosenItem, int32 MenuIdentifier) {
}

void AFortPlayerController::LocalOnBlueprintEdit(ABuildingSMActor* EditedActor) {
}

bool AFortPlayerController::IsUsingTouch() const {
    return false;
}

bool AFortPlayerController::IsUsingHarvestingTool() const {
    return false;
}

bool AFortPlayerController::IsUsingGamepad() const {
    return false;
}

bool AFortPlayerController::IsUsingFirstPersonCamera() const {
    return false;
}

bool AFortPlayerController::IsRequirementsMet(const FFortRequirementsInfo& InRequirements) const {
    return false;
}

bool AFortPlayerController::IsPlayingEmote() const {
    return false;
}

bool AFortPlayerController::IsPersonalVehicleAvailable() const {
    return false;
}

bool AFortPlayerController::IsPersonalVehicleActive() const {
    return false;
}

bool AFortPlayerController::IsNearActiveEncounters() const {
    return false;
}

bool AFortPlayerController::IsInRespawnCountdown() const {
    return false;
}

bool AFortPlayerController::IsInBuildMode() const {
    return false;
}

bool AFortPlayerController::IsInAircraft() const {
    return false;
}

bool AFortPlayerController::IsFullscreenMapVisible() const {
    return false;
}

bool AFortPlayerController::IsCrucibleMode() const {
    return false;
}

bool AFortPlayerController::IsClientTimingOut() const {
    return false;
}

bool AFortPlayerController::IsClientBot() const {
    return false;
}

bool AFortPlayerController::IsBuildToolOverridden() const {
    return false;
}

bool AFortPlayerController::IsActionInputIgnored() const {
    return false;
}

void AFortPlayerController::HideFullScreenMap() {
}

bool AFortPlayerController::HasPermissionToEditWorld(const ABuildingActor* Building, const FVector& Location, const FRotator& Rotation) const {
    return false;
}

bool AFortPlayerController::HasLockOnTarget() const {
    return false;
}

void AFortPlayerController::HandleWorldInventoryLocalUpdate() {
}

void AFortPlayerController::HandleOutpostInventoryLocalUpdate() {
}

void AFortPlayerController::HandleHeroLoadoutCommanderChanged() {
}

void AFortPlayerController::HandleCurrentHeroLoadoutChanged() {
}

void AFortPlayerController::GivePlayerAmmo(int32 AmmoCount) {
}

float AFortPlayerController::GetTimeRemainingForRespawnBP() const {
    return 0.0f;
}

int32 AFortPlayerController::GetTeamPerkProgressiveActivationLevel() const {
    return 0;
}

int32 AFortPlayerController::GetStatValue(FName StatName, EStatRecordingPeriod Period) const {
    return 0;
}

bool AFortPlayerController::GetRotatePawnToCamera() const {
    return false;
}

UFortRegisteredPlayerInfo* AFortPlayerController::GetRegisteredPlayerInfo() const {
    return NULL;
}

UAthenaCharacterItemDefinition* AFortPlayerController::GetRandomDefaultAthenaCharacterDefinition(UFortMcpProfileAthena* McpAthenaProfile) {
    return NULL;
}

UFortQuestManager* AFortPlayerController::GetQuestManager(ESubGame SubGame) const {
    return NULL;
}

AFortPlayerPawn* AFortPlayerController::GetPlayerPawn() const {
    return NULL;
}

int32 AFortPlayerController::GetNumQuickbarSlots(EFortQuickBars QuickBarType) {
    return 0;
}

UFortMinigameManager* AFortPlayerController::GetMinigameManager(ESubGame SubGame) const {
    return NULL;
}

UFortMcpProfileCampaign* AFortPlayerController::GetMcpCampaignProfile() const {
    return NULL;
}

ELockOnState AFortPlayerController::GetLockOnState() const {
    return ELockOnState::NoTarget;
}

int32 AFortPlayerController::GetItemNumInStackByGuid(FGuid ItemGuid) {
    return 0;
}

UFortItem* AFortPlayerController::GetItemInQuickbarSlot(EFortQuickBars QuickBarType, int32 SlotIndex) {
    return NULL;
}

FUniqueNetIdRepl AFortPlayerController::GetGameAccountId() const {
    return FUniqueNetIdRepl{};
}

int32 AFortPlayerController::GetFPSForHUD() {
    return 0;
}

bool AFortPlayerController::GetForceAllowCameraMode() const {
    return false;
}

UFortCollectionBookManager* AFortPlayerController::GetCollectionBookManager() const {
    return NULL;
}

ABuildingSMActor* AFortPlayerController::GetBuildPreviewMarker() const {
    return NULL;
}

UFortAwardManager* AFortPlayerController::GetAwardManager(ESubGame SubGame) const {
    return NULL;
}

bool AFortPlayerController::GetAtNameHomeBaseScreen() {
    return false;
}

AFortAIDirectorDataManager* AFortPlayerController::GetAIDirectorDataManager() {
    return NULL;
}

AActor* AFortPlayerController::GetActorUnderReticle() const {
    return NULL;
}

int32 AFortPlayerController::GetAccountLevel() const {
    return 0;
}

UFortAccountItem* AFortPlayerController::GetAccountItem(const FString& ID) const {
    return NULL;
}

void AFortPlayerController::FortClientPlaySoundAtLocation_Implementation(USoundBase* Sound, FVector Location, float VolumeMultiplier, float PitchMultiplier) {
}

void AFortPlayerController::FortClientPlaySound_Implementation(USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier) {
}

void AFortPlayerController::ForceCancelBuildingTool() {
}

void AFortPlayerController::FixupInteractionWidgetsOnUnzoom() {
}

void AFortPlayerController::EnterAircraftClient_Implementation(AFortAircraft* Aircraft) {
}
bool AFortPlayerController::EnterAircraftClient_Validate(AFortAircraft* Aircraft) {
    return true;
}

void AFortPlayerController::Emote(const FName& AssetName) {
}

void AFortPlayerController::DumpHomebaseRatingInfo() const {
}

void AFortPlayerController::DropSpecificItem(const UFortItemDefinition* DropItemDef) {
}

void AFortPlayerController::DropAllItems(const UFortItemDefinition* IgnoreItemDef, bool bIgnoreBuildingMaterials) {
}

void AFortPlayerController::DeployDefender(ABuildingTrapDefender* DefenderTrap, const UFortDefenderItem* DefenderItem, const FName& DefenderSquadId, const UFortItem* WeaponItem, const int32 AmmoQuantity) {
}

void AFortPlayerController::ClientUpdateServerOnPlayerChangedBuildMode_Implementation() {
}

void AFortPlayerController::ClientUpdateRichPresence_Implementation(ERichPresenceStateChange RichPresenceChange, bool bImportant) {
}

void AFortPlayerController::ClientUpdatePlayerList_Implementation() {
}

void AFortPlayerController::ClientTriggerUIFeedbackEvent_Implementation(FName EventName) {
}

void AFortPlayerController::ClientSwapQuickBarFocus_Implementation(EFortQuickBars InQuickBar, int32 SlotOverride, bool bForceExecution) {
}

void AFortPlayerController::ClientStopUIFeedbackEvent_Implementation(FName EventName) {
}

void AFortPlayerController::ClientStayWithParty_Implementation(bool bStayWithParty) {
}

void AFortPlayerController::ClientSpawnWeakSpotOnBuildingActor_Implementation(FBuildingWeakSpotData ReplicatedWeakSpotData) {
}

void AFortPlayerController::ClientSideEditPredictionTimedOut() {
}

void AFortPlayerController::ClientSetSpectatorCamera_Implementation(FVector CameraLocation, FRotator CameraRotation) {
}

void AFortPlayerController::ClientSetInviteFlags_Implementation(const FJoinabilitySettings& Settings) {
}

void AFortPlayerController::ClientSetActionMappingEnabled_Implementation(FName ActionName, bool bEnabled) {
}

void AFortPlayerController::ClientSendMessage_Implementation(const FText& MESSAGE, USoundBase* StartSound) {
}

void AFortPlayerController::ClientSendConfirmationMessage_Implementation(const FText& ConfirmationMessage, bool bClientQuitAfterMessage) {
}

void AFortPlayerController::ClientRequestReadyCheck_Implementation(const FText& QueryText, const FText& YesText, const FText& NoText) {
}
bool AFortPlayerController::ClientRequestReadyCheck_Validate(const FText& QueryText, const FText& YesText, const FText& NoText) {
    return true;
}

void AFortPlayerController::ClientReportDamagedResourceBuilding_Implementation(ABuildingSMActor* BuildingSMActor, EFortResourceType PotentialResourceType, int32 PotentialResourceCount, bool bDestroyed, bool bJustHitWeakspot) {
}

void AFortPlayerController::ClientRegisterWithParty_Implementation() {
}

void AFortPlayerController::ClientRefreshPlayerList_Implementation() {
}

void AFortPlayerController::ClientReceivePresetTeamChat_Implementation(const FText& ChatText, FUniqueNetIdRepl SenderID) {
}

void AFortPlayerController::ClientReceivedAttributeSources_Implementation(FGameplayAttribute Attribute, UFortAbilitySystemComponent* AbilitySystemComponent, const TArray<FAttributeModifierInfo>& Sources) {
}

void AFortPlayerController::ClientReadyCheckComplete_Implementation(bool bPassed) {
}
bool AFortPlayerController::ClientReadyCheckComplete_Validate(bool bPassed) {
    return true;
}

void AFortPlayerController::ClientPrecacheMediaSource_Implementation(UMediaPlayer* InMediaPlayer, UMediaSource* InMediaSource) {
}

void AFortPlayerController::ClientPingMinimap_Implementation(FVector WorldLocation, FLinearColor PingColor) {
}

void AFortPlayerController::ClientOpenChoiceUI_Implementation(FChoiceData ChoiceItems) {
}

void AFortPlayerController::ClientOnGenericPlayerInitialization_Implementation() {
}

void AFortPlayerController::ClientJoinConsoleSession_Implementation(const FString& ConsoleSession) {
}
bool AFortPlayerController::ClientJoinConsoleSession_Validate(const FString& ConsoleSession) {
    return true;
}

void AFortPlayerController::ClientGivePlayerLocalAccountItem_Implementation(UFortAccountItemDefinition* ItemDefinition, int32 Count) {
}

void AFortPlayerController::ClientForceWorldInventoryUpdate_Implementation() {
}

void AFortPlayerController::ClientForceUpdateQuickbar_Implementation(EFortQuickBars QuickbarToRefresh) {
}

void AFortPlayerController::ClientForceProfileQuery_Implementation() {
}

void AFortPlayerController::ClientForceCancelBuildingTool_Implementation() {
}

void AFortPlayerController::ClientFinishedInteractionInZone_Implementation() {
}

void AFortPlayerController::ClientFailedToBeginEditingBuildingActor_Implementation(ABuildingSMActor* BuildingActorToStopEditing) {
}

void AFortPlayerController::ClientExecuteInventoryItem_Implementation(FGuid ItemGuid, float Delay, bool bForceExecute, bool bActivateSlotAfterSettingFocused) {
}

void AFortPlayerController::ClientEquipItem_Implementation(const FGuid& ItemGuid, bool bForceExecution) {
}

void AFortPlayerController::ClientCreateOrJoinChatRoom_Implementation(const FString& ChatRoomId) {
}

void AFortPlayerController::ClientConfirmTargetData_Implementation(uint16 UniqueId, bool bSuccess, const TArray<uint8>& HitReplaces) {
}

void AFortPlayerController::ClientCancelCrafting_Implementation() {
}

void AFortPlayerController::ClientBotSetModuleToUse_Implementation(const FString& PilotCategory, const FString& NewModule, bool bResetNow) {
}

void AFortPlayerController::ClientBotEnqueueCommand_Implementation(const FString& CommandToEnqueue) {
}

void AFortPlayerController::ClientAddScoreNumber_Implementation(int32 Score, EStatCategory ScoreCategory, const FVector_NetQuantize& ScoreLocation, bool bDisplayScoreOnPlayer) {
}

void AFortPlayerController::ClientActivateSlot_Implementation(EFortQuickBars InQuickBar, int32 Slot, float ActivateDelay, bool bUpdatePreviousFocusedSlot, bool bForceExecution) {
}

void AFortPlayerController::CheatAll(const FString& Msg) {
}

void AFortPlayerController::Cheat_ForcePlayEmoteItem_Implementation(const UFortMontageItemDefinitionBase* EmoteAsset) {
}
bool AFortPlayerController::Cheat_ForcePlayEmoteItem_Validate(const UFortMontageItemDefinitionBase* EmoteAsset) {
    return true;
}

void AFortPlayerController::Cheat_ForceAthenaCosmeticItemInSlot_Implementation(UFortAccountItemDefinition* CosmeticItem, EAthenaCustomizationCategory Slot, int32 Index) {
}
bool AFortPlayerController::Cheat_ForceAthenaCosmeticItemInSlot_Validate(UFortAccountItemDefinition* CosmeticItem, EAthenaCustomizationCategory Slot, int32 Index) {
    return true;
}

void AFortPlayerController::Cheat_ClearForcedCosmeticItems_Implementation() {
}
bool AFortPlayerController::Cheat_ClearForcedCosmeticItems_Validate() {
    return true;
}

void AFortPlayerController::Cheat(const FString& Msg) {
}

void AFortPlayerController::ChangeActiveVariantForCosmeticItem(FName ItemTemplateToChange, FGameplayTag VariantChannelToChange, FGameplayTag DesiredActiveVariant) {
}

bool AFortPlayerController::CanAlterHostileWalls() const {
    return false;
}

UFortItem* AFortPlayerController::BP_GetInventoryItemWithGuid(FGuid ItemGuid) const {
    return NULL;
}

void AFortPlayerController::BP_FindItemInstancesFromDefinition(const UFortItemDefinition* ItemDefinition, TArray<UFortItem*>& ItemArray) {
}

UFortItem* AFortPlayerController::BP_FindExistingItemForDefinition(const UFortItemDefinition* ItemDefinition, bool bInStorageVault) const {
    return NULL;
}

void AFortPlayerController::AddItemToQuickBars(UFortItemDefinition* ItemDefinition, EFortQuickBars QuickBarType, int32 SlotIndex) {
}

void AFortPlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortPlayerController, bFailedToRespawn);
    DOREPLIFETIME(AFortPlayerController, bHasInitiallySpawned);
    DOREPLIFETIME(AFortPlayerController, bHasServerFinishedLoading);
    DOREPLIFETIME(AFortPlayerController, IntensityGraphInfo);
    DOREPLIFETIME(AFortPlayerController, PIDValuesGraphInfo);
    DOREPLIFETIME(AFortPlayerController, PIDContributionsGraphInfo);
    DOREPLIFETIME(AFortPlayerController, CombatManager);
    DOREPLIFETIME(AFortPlayerController, bBuildFree);
    DOREPLIFETIME(AFortPlayerController, bCraftFree);
    DOREPLIFETIME(AFortPlayerController, DelayedQuickBarActions);
    DOREPLIFETIME(AFortPlayerController, PinnedSchematics);
    DOREPLIFETIME(AFortPlayerController, bAutoEquipBetterItems);
    DOREPLIFETIME(AFortPlayerController, WorldInventory);
    DOREPLIFETIME(AFortPlayerController, OutpostInventory);
    DOREPLIFETIME(AFortPlayerController, LatestRewardReport);
    DOREPLIFETIME(AFortPlayerController, UpdatedObjectiveStats);
    DOREPLIFETIME(AFortPlayerController, bHasUnsavedPrimaryMissionProgress);
    DOREPLIFETIME(AFortPlayerController, TutorialCompletedState);
    DOREPLIFETIME(AFortPlayerController, bInfiniteAmmo);
    DOREPLIFETIME(AFortPlayerController, bNoCoolDown);
    DOREPLIFETIME(AFortPlayerController, bInfiniteDurability);
    DOREPLIFETIME(AFortPlayerController, bCheatGhost);
    DOREPLIFETIME(AFortPlayerController, bCheatFly);
    DOREPLIFETIME(AFortPlayerController, bEnableShotLogging);
    DOREPLIFETIME(AFortPlayerController, bIsNearActiveEncounters);
    DOREPLIFETIME(AFortPlayerController, OverriddenBackpackSize);
    DOREPLIFETIME(AFortPlayerController, AimHelpMode);
    DOREPLIFETIME(AFortPlayerController, JumpStaminaCost);
    DOREPLIFETIME(AFortPlayerController, CameraPrototypeName);
    DOREPLIFETIME(AFortPlayerController, bFinalXPUpdateFailed);
}

AFortPlayerController::AFortPlayerController() {
    this->AircraftInputComponent = NULL;
    this->bFailedToRespawn = false;
    this->bIsDisconnecting = false;
    this->bIsBeingKicked = false;
    this->bHasInitiallySpawned = false;
    this->bAssignedStartSpawn = false;
    this->bReadyToStartMatch = false;
    this->bClientPawnIsLoaded = false;
    this->NumPreviousSpawns = 0;
    this->SimpleLoadingScreenSoundMix = NULL;
    this->MyFortPawn = NULL;
    this->MyFortPawnBeforeTakeoverOfScriptedPawn = NULL;
    this->ScriptedPawnControllerBeforeTakeover = NULL;
    this->bHasClientFinishedLoading = false;
    this->bHasServerFinishedLoading = false;
    this->TimeStartedWaiting = -1.00f;
    this->TimeFinishedNavigationBuild = -1.00f;
    this->MaterialParameterCollection = NULL;
    this->bLoadingScreenDropped = false;
    this->LastActiveTime = 0.00f;
    this->VehicleInputComponent = NULL;
    this->bHoldingPrimaryFireFromTouch = false;
    this->AutoFireReticleWeaponDistanceScale = 0.80f;
    this->bSupportNextPieceAssist = false;
    this->bAutoBuildForTrapPlacement = true;
    this->bAutoBuildForFloorTrapPlacement = true;
    this->bAutoBuildForWallTrapPlacement = true;
    this->bAutoBuildForCeilingTrapPlacement = true;
    this->bNoControllerLighting = false;
    this->ReturnToMainMenuTimeoutDelay = 5.00f;
    this->LastDamager = NULL;
    this->LastFallInstigator = NULL;
    this->LastDamagerCreditThresholdDropElim = 15.00f;
    this->LastDamagerCreditThresholdSelfElim = 15.00f;
    this->LastDamagerCreditThresholdStormElim = 5.00f;
    this->bGiveLastDamagerElimCreditOnDrop = true;
    this->bGiveLastDamagerElimCreditOnSelfDamage = true;
    this->bGiveLastDamagerElimCreditOnStormDamage = true;
    this->bWantsToSprint = false;
    this->bHoldingSprint = false;
    this->bSprintToggleable = false;
    this->bSprintByDefault = false;
    this->bSprintCancelsReload = false;
    this->bSprintWasCancelledByReload = false;
    this->bAutoRunOn = false;
    this->bTargetingToggleable = false;
    this->bMovementDisabledDueToCancellableAction = false;
    this->bIsPlayerActivelyMoving = false;
    this->InMovementCancellableAction = 0;
    this->bAllowHoldForAmmoCrafting = true;
    this->AutoLevelCameraStartPitch = 0.00f;
    this->AutoLevelCameraStartTime = 0.00f;
    this->bIsClientTimingOut = false;
    this->ClientTimeoutBlockInputTime = 2.00f;
    this->LastMoveInputFrame = 0;
    this->LastPressGamepadSprintTime = 0.00f;
    this->bAutoRunWasHoldingForward = false;
    this->bAtNameBaseScreen = false;
    this->bInventoryToggledByAlt = false;
    this->bIsCrucibleMode = false;
    this->CinematicCameraClassOverride = NULL;
    this->bOnPressExecuteJetpack = false;
    this->bServerSideHitMarkers = false;
    this->bIsInQuickToggleCursorMode = false;
    this->bGamepadAbilityPending = false;
    this->bForceAllowCursorMode = false;
    this->bForceAllowCameraMode = false;
    this->bDragDropPending = false;
    this->bSuppressEventNotifications = false;
    this->LastSpotTime = 0.00f;
    this->PreviewAbility = NULL;
    this->CombatManager = NULL;
    this->AIDirectorDataManager = NULL;
    this->MusicManager = NULL;
    this->bUsePredictedBuildingActors = true;
    this->bRegisterPredictedBuildingActorsWithGrid = true;
    this->PredictedActorLifespan = 0.50f;
    this->BuildPreviewModeInputComponent = NULL;
    this->BuildPreviewMarker = NULL;
    this->BuildPreviewMarkerExtraPiece = NULL;
    this->bAllowBuildingPreviewAutoRotation = false;
    this->TargetedBuilding = NULL;
    this->TargetedVehicle = NULL;
    this->ContextualConversionClass = NULL;
    this->BuildPreviewRotationIterations = 0;
    this->bBuildPreviewMirrored = false;
    this->BuildPreviewMarkerOptionalAdjustment = EFortBuildPreviewMarkerOptionalAdjustment::None;
    this->bBuildFree = false;
    this->bCraftFree = false;
    this->CurrentCostInfoType = EFortCostInfoTypes::None;
    this->CurrentBuildableClass = NULL;
    this->PreviousBuildableClass = NULL;
    this->CurrentResourceLevel = EFortResourceLevel::First;
    this->CurrentResourceType = EFortResourceType::Wood;
    this->DamageNumbersActor = NULL;
    this->EditModeInputComponent = NULL;
    this->EditBuildingActor = NULL;
    this->EditModeDistance = 2048.00f;
    this->PickerInputComponent = NULL;
    this->TrapPickerDecoHelper = NULL;
    this->bBuildingPlacementTraceSkipInitialPenetrationOfBuildingSMActor = true;
    this->bBuildingPlacementTraceSkipInitialPenetrationOfStaticMesh = true;
    this->ClientQuickBars = NULL;
    this->bAutoEquipBetterItems = true;
    this->WorldInventory = NULL;
    this->OutpostInventory = NULL;
    this->bHasInitializedWorldInventory = false;
    this->bHasInitializedHeroInventory = false;
    this->bAccountInventoryWasUpdated = false;
    this->bForceWorldInventoryUpdate = false;
    this->bIsSavingGadgetLoadout = false;
    this->BotPilot = NULL;
    this->BotManager = NULL;
    this->ClientBotManagerClass = UFortClientBotManager::StaticClass();
    this->LocalPawnCustomizationAssetLoader = NULL;
    this->bDropWeaponsDuringAllMissionStates = false;
    this->MyPlayerInfo = NULL;
    this->bHasUnsavedPrimaryMissionProgress = false;
    this->StatManager = NULL;
    this->HeartbeatManager = NULL;
    this->StatEventManager = NULL;
    this->LastEmotePlayed = NULL;
    this->McpProfileGroup = NULL;
    this->CommonPublicMcpProfile = NULL;
    this->CommonCoreMcpProfile = NULL;
    this->MainMcpProfile = NULL;
    this->AthenaProfile = NULL;
    this->MetadataProfile = NULL;
    this->CreativeModeProfile = NULL;
    this->TutorialCompletedState = EFortPCTutorialCompletedState::Unknown;
    this->bShouldReceiveCriticalMatchBonus = false;
    this->bEnableVoiceChatPTT = false;
    this->bInfiniteAmmo = false;
    this->bInfiniteMagazine = false;
    this->bNoCoolDown = false;
    this->bInfiniteDurability = false;
    this->bUsePickers = true;
    this->bPickerOpen = false;
    this->bCheatGhost = false;
    this->bCheatFly = false;
    this->bEnableShotLogging = false;
    this->bIsNearActiveEncounters = false;
    this->OverriddenBackpackSize = -1;
    this->AimHelpMode = 2;
    this->JumpStaminaCost = EFortJumpStaminaCost::SprintAir;
    this->CameraPrototypeName = TEXT("MPR");
    this->bHideHudEnglishText = false;
    this->bTurboBuild = true;
    this->TurboBuildFirstInterval = 0.05f;
    this->TurboBuildInterval = 0.00f;
    this->TurboPlaceFirstInterval = 0.50f;
    this->TurboPlaceInterval = 0.30f;
    this->bCreativeTurboDelete = true;
    this->TurboDeleteFirstInterval = 0.50f;
    this->TurboDeleteInterval = 0.05f;
    this->bAutoChangeMaterial = true;
    this->bPeripheralLightingEnabled = false;
    this->EmoteOffCooldownTime = 0.00f;
    this->SprayOffCooldownTime = 0.00f;
    this->bSyncPeripheralLightingWithEmoteMusic = true;
    this->bPushEmoteAudioDataToCosmeticMaterials = true;
    this->LastEmoteMusicFFT100hz = 0.00f;
    this->LastEmoteMusicFFT2000hz = 0.00f;
    this->EmoteMusicBeatThreshold = 0.50f;
    this->EmoteMusicEnvelopeBeatCount = 0.00f;
    this->bZeroingCameraRoll = false;
    this->bTryPickupSwap = false;
    this->bShouldPickupOnUseRelease = false;
    this->bClientSideEditPrediction = false;
    this->ClientSideEditPredictionTimeout = 1.50f;
    this->PendingEnterModeActor = NULL;
    this->RandomCharacterIndex = -1;
    this->AntiAddictionPlayTimeMultiplier = 1.00f;
    this->bUsesWidgetForFPSDisplay = false;
    this->bShowFPS = false;
    this->bLockPrimaryInputMethodToMouse = false;
    this->NumberOfInputMethodChangesRecently = 0;
    this->bInputModeThrashing = false;
    this->IndicatorManager = NULL;
    this->bFinalXPUpdateFailed = false;
    this->TestUserWidget = NULL;
    this->PreviousStasisMode = EFortPawnStasisMode::None;
}

