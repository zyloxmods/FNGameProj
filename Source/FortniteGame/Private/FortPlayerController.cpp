#include "FortPlayerController.h"
#include "FortClientBotManager.h"
#include "FortControllerComponent_Collections.h"
#include "FortControllerComponent_Interaction.h"
#include "FortControllerComponent_InventoryNetworkManagement.h"
#include "FortControllerComponent_Telemetry.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

bool AFortPlayerController::WantsToSecondaryInteract() {
    return false;
}

bool AFortPlayerController::WantsToDBNOCarry() {
    return false;
}

void AFortPlayerController::UpdateClientCollection_Implementation(const FString& CollectionType, const FString& Category, const FFortMcpCollectedItemProperties& Properties, EFortCollectedVariantClientUpdate UpdateKind) {
}

void AFortPlayerController::UnMutePlayer(const FUniqueNetIdRepl& UniqueNetId) {
}

void AFortPlayerController::TossSpecificItem(const UFortItemDefinition* DropItemDef, const FFortPickupTossOverrideData& TossOverrideData) {
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

void AFortPlayerController::ToggleBattleMapSpectator() {
}

void AFortPlayerController::TestStreamedVideo(const FString& URLInQuotes) {
}

void AFortPlayerController::SuppressEventNotifications(bool bSuppress) {
}

void AFortPlayerController::Suicide() {
}

bool AFortPlayerController::StopBattleMapSpectator() {
    return false;
}

void AFortPlayerController::StartZeroingCameraRoll() {
}

bool AFortPlayerController::StartReadyCheck(FText QueryText, FText YesText, FText NoText, float PercentageToPass) {
    return false;
}

AActor* AFortPlayerController::SpawnToyInstance(TSubclassOf<AActor> ToyClass, FTransform SpawnPosition) {
    return NULL;
}

ABattleMapPawnLive* AFortPlayerController::SpawnBattleMapSpectator() {
    return NULL;
}

bool AFortPlayerController::ShouldShowInfoIndicator(const AActor* TestActor) const {
    return false;
}

void AFortPlayerController::SetVoiceInputEffectChain(USoundEffectSourcePresetChain* InSourceEffectPresetChain) {
}

void AFortPlayerController::SetRotatePawnToCamera(bool bNewRotatePawnToCamera) {
}

void AFortPlayerController::SetPickerEnabled(bool bEnabled) {
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

bool AFortPlayerController::SetCompHiddenOtherLocalControllersOnly(USceneComponent* SceneComp, const bool bNewHiddenGame, const bool bPropagateToChildren) {
    return false;
}

bool AFortPlayerController::SetCompHiddenControllerOnly(USceneComponent* SceneComp, const bool bNewHiddenGame, const bool bPropagateToChildren) {
    return false;
}

void AFortPlayerController::SetClientPawnNewRotation(const FRotator& NewRotation) {
}

void AFortPlayerController::SetCinematicOverrideClass(TSubclassOf<UFortCinematicCamera> OverrideCameraClass) {
}

void AFortPlayerController::SetCinematicModeWithWeapon(bool bInCinematicMode, bool bHidePlayer, bool bHideWeapon, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning) {
}

void AFortPlayerController::SetBuildingHighlight(const TArray<ABuildingActor*>& TargetedBuildings, TEnumAsByte<EBuildingHighlightType::Type> HighlightType, bool bValidHighlight) {
}

void AFortPlayerController::SetAtNameHomeBaseScreen(bool AtScreen) {
}

bool AFortPlayerController::SetActorHiddenControllerOnly(AActor* TargetActor, const bool bNewHidden) {
    return false;
}

void AFortPlayerController::ServerUpgradeBuildingActor_Implementation(ABuildingActor* BuildingActorToUpgrade, int32 NewUpgradeLevel) {
}
bool AFortPlayerController::ServerUpgradeBuildingActor_Validate(ABuildingActor* BuildingActorToUpgrade, int32 NewUpgradeLevel) {
    return true;
}

void AFortPlayerController::ServerUpdateMessageComponents_Implementation(const TArray<UFortGameplayMessageComponentBase*>& ModifiedComponents, const TArray<FGameplayTagContainer>& NewChannelIds) {
}
bool AFortPlayerController::ServerUpdateMessageComponents_Validate(const TArray<UFortGameplayMessageComponentBase*>& ModifiedComponents, const TArray<FGameplayTagContainer>& NewChannelIds) {
    return true;
}

void AFortPlayerController::ServerUpdateItemListOptions_Implementation(UFortMinigameItemContainerComponent* ItemContainerComponent, int32 ItemIndex, const TArray<FString>& OptionsKeys, const TArray<FString>& OptionsValues) {
}
bool AFortPlayerController::ServerUpdateItemListOptions_Validate(UFortMinigameItemContainerComponent* ItemContainerComponent, int32 ItemIndex, const TArray<FString>& OptionsKeys, const TArray<FString>& OptionsValues) {
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

void AFortPlayerController::ServerRemoveInventoryItem_Implementation(FGuid ItemGuid, int32 Count, bool bForceRemoveFromQuickBars, bool bForceRemoval, bool bForcePersistWhenEmpty) {
}
bool AFortPlayerController::ServerRemoveInventoryItem_Validate(FGuid ItemGuid, int32 Count, bool bForceRemoveFromQuickBars, bool bForceRemoval, bool bForcePersistWhenEmpty) {
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

void AFortPlayerController::ServerPlayEmoteItem_Implementation(const UFortMontageItemDefinitionBase* EmoteAsset, float EmoteRandomNumber) {
}
bool AFortPlayerController::ServerPlayEmoteItem_Validate(const UFortMontageItemDefinitionBase* EmoteAsset, float EmoteRandomNumber) {
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

void AFortPlayerController::ServerNotifyMeshNetPlayer_Implementation(FName Tag) {
}
bool AFortPlayerController::ServerNotifyMeshNetPlayer_Validate(FName Tag) {
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

void AFortPlayerController::ServerGiftInventoryItemToOtherPlayer_Implementation(FGuid ItemGuid, FUniqueNetIdRepl PlayerId, int32 Quantity) {
}
bool AFortPlayerController::ServerGiftInventoryItemToOtherPlayer_Validate(FGuid ItemGuid, FUniqueNetIdRepl PlayerId, int32 Quantity) {
    return true;
}

void AFortPlayerController::ServerExecutePresetTeamChat_Implementation(const FText& ChatText, FUniqueNetIdRepl SenderID) {
}
bool AFortPlayerController::ServerExecutePresetTeamChat_Validate(const FText& ChatText, FUniqueNetIdRepl SenderID) {
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

void AFortPlayerController::ServerEmote_Implementation(const FName AssetName) {
}
bool AFortPlayerController::ServerEmote_Validate(const FName AssetName) {
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

void AFortPlayerController::ServerDeveloper_GetConsoleVariable_Implementation(const FString& ConsoleVariable) {
}

void AFortPlayerController::ServerDeployDefender_Implementation(ABuildingTrapDefender* DefenderTrap, const FString& SelectedItemInstanceId, const FName DefenderSquadId, const FGuid WeaponToGiveGuid, const int32 AmmoQuantity) {
}
bool AFortPlayerController::ServerDeployDefender_Validate(ABuildingTrapDefender* DefenderTrap, const FString& SelectedItemInstanceId, const FName DefenderSquadId, const FGuid WeaponToGiveGuid, const int32 AmmoQuantity) {
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

void AFortPlayerController::ServerClearItemList_Implementation(UFortMinigameItemContainerComponent* ItemContainerComponent) {
}
bool AFortPlayerController::ServerClearItemList_Validate(UFortMinigameItemContainerComponent* ItemContainerComponent) {
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

void AFortPlayerController::ServerAttemptInventoryDrop_Implementation(FGuid ItemGuid, int32 Count, bool bTrash) {
}
bool AFortPlayerController::ServerAttemptInventoryDrop_Validate(FGuid ItemGuid, int32 Count, bool bTrash) {
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

void AFortPlayerController::SendStreamingAnalytics(UMediaPlayer* MediaPlayer) const {
}

void AFortPlayerController::SendMessage(const FText& Message) {
}

void AFortPlayerController::ReturnToMainMenu() {
}

void AFortPlayerController::ReturnToAthenaItemShop() {
}

void AFortPlayerController::ResetInputRotationScale() {
}

void AFortPlayerController::ReportVideoStreamingError(UMediaPlayer* MediaPlayer, bool bLocalContentFallback, const FString& LastError) const {
}

void AFortPlayerController::RemoveItemFromQuickBars(UFortItemDefinition* ItemDefinition) {
}

void AFortPlayerController::ProcessMcpProfileUpdate_Implementation(const FProfileUpdateSingle& Update) {
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

void AFortPlayerController::OpenInventory(int32 TargetTab) {
}

void AFortPlayerController::OpenChoiceUI(FChoiceData ChoiceData) {
}

void AFortPlayerController::OnRep_UpdatedUnsavedPrimaryMissionProgress() {
}

void AFortPlayerController::OnRep_UpdatedObjectiveStats() {
}

void AFortPlayerController::OnRep_PIDValuesGraphInfo() {
}

void AFortPlayerController::OnRep_PIDContributionsGraphInfo() {
}

void AFortPlayerController::OnRep_MeshParentIds() {
}

void AFortPlayerController::OnRep_LatestRewardReport() {
}

void AFortPlayerController::OnRep_IntensityGraphInfo() {
}

void AFortPlayerController::OnRep_HoldingObject() {
}

void AFortPlayerController::OnRep_DelayedQuickBarActions() {
}

void AFortPlayerController::OnRep_CheatMovement() {
}

void AFortPlayerController::OnRep_bHasServerFinishedLoading() {
}

void AFortPlayerController::OnMinigameVolumeStateChanged(EVolumeState NewState, AFortVolume* Volume) {
}



void AFortPlayerController::NotifyMeshNetPlayer(FName Tag) {
}

void AFortPlayerController::MutePlayer(const FUniqueNetIdRepl& UniqueNetId) {
}

void AFortPlayerController::MulticastClearWeakSpotData_Implementation(ABuildingSMActor* ParentBuilding) {
}

void AFortPlayerController::ModifyStat(FName StatName, int32 Amount, EStatMod ModType, bool bForceStatSave) {
}

void AFortPlayerController::MarkCollectionItemSeen_Implementation(const FString& CollectionType, const FString& Category, const FString& Variant) {
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

void AFortPlayerController::IsUsingCosmeticsOwnedByStWHero(bool& bIsUsingOutfitOwnedByHero, bool& bIsUsingBackblingOwnedByHero) const {
}

bool AFortPlayerController::IsRequirementsMet(const FFortRequirementsInfo& InRequirements, bool bUsePhoenixStats) const {
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

bool AFortPlayerController::IsPartyLeader() const {
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

bool AFortPlayerController::IsHiddenControllerOnly(AActor* TargetActor) const {
    return false;
}

bool AFortPlayerController::IsFullscreenMapVisible() const {
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

bool AFortPlayerController::IsAutoChangeMaterialOn() {
    return false;
}

bool AFortPlayerController::IsActionInputIgnored() const {
    return false;
}

void AFortPlayerController::InitializeZeroingCameraRoll() {
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

void AFortPlayerController::HandleWinnerAnnounced(const FString& WinnerPlayerName) {
}

void AFortPlayerController::HandleViewTargetInventoryLocalUpdate() {
}

void AFortPlayerController::HandleOutpostInventoryLocalUpdate() {
}

void AFortPlayerController::HandleNonZeroRollSetOnCamera() {
}

void AFortPlayerController::HandleDifferentHeroLoadoutActivated(const UFortMcpProfileCampaign* Profile) {
}

void AFortPlayerController::HandleBattleMapSpectatorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void AFortPlayerController::GivePlayerAmmo(int32 AmmoCount) {
}

bool AFortPlayerController::GetUseHoldToSwapPickupSetting() const {
    return false;
}

float AFortPlayerController::GetTimeRemainingForRespawnBP() const {
    return 0.0f;
}

int32 AFortPlayerController::GetTeamPerkProgressiveActivationLevel() const {
    return 0;
}

ABuildingActor* AFortPlayerController::GetTargetedBuilding() const {
    return NULL;
}

int32 AFortPlayerController::GetStatValue(FName StatName, EStatRecordingPeriod Period) const {
    return 0;
}

bool AFortPlayerController::GetRotatePawnToCamera() const {
    return false;
}

bool AFortPlayerController::GetRevertPlayerListenerChangeFlag() const {
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

AFortPlayerPawn* AFortPlayerController::GetPlayerPawnOrVehicleDriver() const {
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

bool AFortPlayerController::GetItemDefinitionOwnershipState(const UFortItemDefinition* ItemDefinition, bool& bIsOwned) const {
    return false;
}

FText AFortPlayerController::GetGliderDisplayName() const {
    return FText::GetEmpty();
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

ABuildingPlayerPrimitivePreview* AFortPlayerController::GetBuildPreviewMarker() const {
    return NULL;
}

UFortAwardManager* AFortPlayerController::GetAwardManager(ESubGame SubGame) const {
    return NULL;
}

bool AFortPlayerController::GetAtNameHomeBaseScreen() {
    return false;
}

UFortControllerComponent_Aircraft* AFortPlayerController::GetAircraftComponent() const {
    return NULL;
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

void AFortPlayerController::ForwardActiveVariantChangeRequest_Implementation(FName ItemTemplateToChange, FGameplayTag VariantChannelToChange, FGameplayTag DesiredActiveVariant, AFortPlayerPawn* PreviewPawn) {
}
bool AFortPlayerController::ForwardActiveVariantChangeRequest_Validate(FName ItemTemplateToChange, FGameplayTag VariantChannelToChange, FGameplayTag DesiredActiveVariant, AFortPlayerPawn* PreviewPawn) {
    return true;
}

void AFortPlayerController::FortClientPlaySoundAtLocation_Implementation(USoundBase* Sound, FVector Location, float VolumeMultiplier, float PitchMultiplier) {
}

void AFortPlayerController::FortClientPlaySound_Implementation(USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier) {
}

void AFortPlayerController::ForceCancelBuildingTool() {
}

void AFortPlayerController::FixupInteractionWidgetsOnUnzoom() {
}

bool AFortPlayerController::FindItem(const UFortItem* Item, EFortQuickBars& OutQuickBar, int32& OutSlot) const {
    return false;
}

void AFortPlayerController::ExecuteInventoryItemDefinition(UFortItemDefinition* ItemDefinition, float Delay, bool bForceExecute, bool bActivateSlotAfterSettingFocused) {
}

void AFortPlayerController::Emote(const FName AssetName) {
}

void AFortPlayerController::DumpHomebaseRatingInfo() const {
}

void AFortPlayerController::DropSpecificItem(const UFortItemDefinition* DropItemDef) {
}

void AFortPlayerController::DropAllItems(const UFortItemDefinition* IgnoreItemDef, const UFortItemDefinition* AdditionalIgnoreItemDef, bool bIgnoreBuildingMaterials, bool bSpawnPickups) {
}

void AFortPlayerController::DeployDefender(ABuildingTrapDefender* DefenderTrap, const UFortDefenderItem* DefenderItem, const FName DefenderSquadId, const UFortItem* WeaponItem, const int32 AmmoQuantity) {
}

bool AFortPlayerController::DBNOTryStartCarry() {
    return false;
}

void AFortPlayerController::DBNOCarryThrow() {
}

void AFortPlayerController::DBNOCarryHoist() {
}

void AFortPlayerController::DBNOCarryDrop() {
}

int32 AFortPlayerController::CountInventoryOverflowFromAddingItem(const FFortItemEntry& ItemDescription, bool bIsClassItem, bool bFromPickup) const {
    return 0;
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

void AFortPlayerController::ClientStopAutoRun_Implementation() {
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

void AFortPlayerController::ClientSendMessage_Implementation(const FText& Message, USoundBase* StartSound) {
}

void AFortPlayerController::ClientSendConfirmationMessage_Implementation(const FText& ConfirmationMessage, bool bClientQuitAfterMessage) {
}

void AFortPlayerController::ClientRequestReadyCheck_Implementation(const FText& QueryText, const FText& YesText, const FText& NoText) {
}
bool AFortPlayerController::ClientRequestReadyCheck_Validate(const FText& QueryText, const FText& YesText, const FText& NoText) {
    return true;
}

void AFortPlayerController::ClientReportGotResourceFromVehicle_Implementation(AActor* Vehicle, int32 ResourceCount) {
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

void AFortPlayerController::ClientLogDebugString_Implementation(const FString& Msg) {
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

void AFortPlayerController::ClientEndGameKick_Implementation() {
}

void AFortPlayerController::ClientDeveloper_GetConsoleVariable_Implementation(const FString& ConsoleVariable, const FString& Value) {
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

bool AFortPlayerController::CheckPossessionOfAmountOfItems(EFortItemType Type, int32 AmountToCheck) {
    return false;
}

void AFortPlayerController::CheatAll(const FString& Msg) {
}

void AFortPlayerController::Cheat_StopObjectiveServer_Implementation(AFortObjectiveBase* Objective, const EFortObjectiveStatus Status) {
}
bool AFortPlayerController::Cheat_StopObjectiveServer_Validate(AFortObjectiveBase* Objective, const EFortObjectiveStatus Status) {
    return true;
}

void AFortPlayerController::Cheat_ForcePlayEmoteItem_Implementation(const UFortMontageItemDefinitionBase* EmoteAsset) {
}
bool AFortPlayerController::Cheat_ForcePlayEmoteItem_Validate(const UFortMontageItemDefinitionBase* EmoteAsset) {
    return true;
}

void AFortPlayerController::Cheat_ForceCosmeticVariantChannels_Implementation(const TArray<FMcpVariantChannelInfo>& CosmeticVariantChannels) {
}
bool AFortPlayerController::Cheat_ForceCosmeticVariantChannels_Validate(const TArray<FMcpVariantChannelInfo>& CosmeticVariantChannels) {
    return true;
}

void AFortPlayerController::Cheat_ForceAthenaCosmeticItemInSlot_Implementation(const UAthenaCosmeticItemDefinition* CosmeticItem, EAthenaCustomizationCategory Slot, int32 Index) {
}
bool AFortPlayerController::Cheat_ForceAthenaCosmeticItemInSlot_Validate(const UAthenaCosmeticItemDefinition* CosmeticItem, EAthenaCustomizationCategory Slot, int32 Index) {
    return true;
}

void AFortPlayerController::Cheat_ClearForcedCosmeticVariantChannels_Implementation() {
}
bool AFortPlayerController::Cheat_ClearForcedCosmeticVariantChannels_Validate() {
    return true;
}

void AFortPlayerController::Cheat_ClearForcedCosmeticItems_Implementation() {
}
bool AFortPlayerController::Cheat_ClearForcedCosmeticItems_Validate() {
    return true;
}

void AFortPlayerController::Cheat(const FString& Msg) {
}

void AFortPlayerController::ChangeActiveVariantForCosmeticItem(FName ItemTemplateToChange, FGameplayTag VariantChannelToChange, FGameplayTag DesiredActiveVariant, AFortPlayerPawn* PreviewPawn) {
}

bool AFortPlayerController::CanEnableBattleMapSpectator() const {
    return false;
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

bool AFortPlayerController::AreActionsBoundToSameKey(FName FirstActionName, FName SecondActionName, const TEnumAsByte<EInputEvent> InputEvent) {
    return false;
}

void AFortPlayerController::AlternateInteractCarryHoldStopped(FName InputActionName, bool bCompletedSuccessfully) {
}

void AFortPlayerController::AddItemToQuickBars(UFortItemDefinition* ItemDefinition, EFortQuickBars QuickBarType, int32 SlotIndex) {
}

void AFortPlayerController::AddInventoryItemWithAnimation(const FFortItemEntry& ItemDescription) {
}

void AFortPlayerController::AddInventoryItemWithAlterationBasedOnLootLevel(FFortItemEntry ItemDescription) {
}

void AFortPlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortPlayerController, bFailedToRespawn);
    DOREPLIFETIME(AFortPlayerController, bHasInitiallySpawned);
    DOREPLIFETIME(AFortPlayerController, bHasServerFinishedLoading);
    DOREPLIFETIME(AFortPlayerController, bHoldingObject);
    DOREPLIFETIME(AFortPlayerController, IntensityGraphInfo);
    DOREPLIFETIME(AFortPlayerController, PIDValuesGraphInfo);
    DOREPLIFETIME(AFortPlayerController, PIDContributionsGraphInfo);
    DOREPLIFETIME(AFortPlayerController, bBuildFree);
    DOREPLIFETIME(AFortPlayerController, bCraftFree);
    DOREPLIFETIME(AFortPlayerController, DelayedQuickBarActions);
    DOREPLIFETIME(AFortPlayerController, bAutoEquipBetterItems);
    DOREPLIFETIME(AFortPlayerController, WorldInventory);
    DOREPLIFETIME(AFortPlayerController, OutpostInventory);
    DOREPLIFETIME(AFortPlayerController, ViewTargetInventory);
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
    DOREPLIFETIME(AFortPlayerController, MeshParentIds);
}

AFortPlayerController::AFortPlayerController() {
    bAllowPcbBenefits = true;
    bInPossession = false;
    AircraftInputComponent = NULL;
    SkydiveMusicAudioComp = NULL;
    bFailedToRespawn = false;
    bIsDisconnecting = false;
    bIsBeingKicked = false;
    bHasInitiallySpawned = false;
    bAssignedStartSpawn = false;
    bReadyToStartMatch = false;
    bClientPawnIsLoaded = false;
    NumPreviousSpawns = 0;
    bCanSpectateBot = false;
    SimpleLoadingScreenSoundMix = NULL;
    MyFortPawn = NULL;
    MyFortPawnBeforeTakeoverOfScriptedPawn = NULL;
    ScriptedPawnControllerBeforeTakeover = NULL;
    bHasClientFinishedLoading = false;
    bHasServerFinishedLoading = false;
    TimeStartedWaiting = 1;
    TimeFinishedNavigationBuild = 1;
    MaterialParameterCollection = NULL;
    bLoadingScreenDropped = false;
    LastActiveTime = 1;
    bRevertPlayerListenerChange = true;
    VehicleInputComponent = NULL;
    bHoldingPrimaryFireFromTouch = false;
    bSupportNextPieceAssist = false;
    bAutoBuildForTrapPlacement = true;
    bAutoBuildForFloorTrapPlacement = true;
    bAutoBuildForWallTrapPlacement = true;
    bAutoBuildForCeilingTrapPlacement = true;
    bNoControllerLighting = false;
    ReturnToMainMenuTimeoutDelay = 1;
    LastDamager = NULL;
    LastFallInstigator = NULL;
    LastDamagerCreditThresholdDropElim = 1;
    LastDamagerCreditThresholdSelfElim = 1;
    LastDamagerCreditThresholdStormElim = 1;
    bGiveLastDamagerElimCreditOnDrop = true;
    bGiveLastDamagerElimCreditOnSelfDamage = true;
    bGiveLastDamagerElimCreditOnStormDamage = true;
    bHoldingObject = false;
    DBNOCarryInputComponent = NULL;
    HeldObjectsInputComponent = NULL;
    bWantsToSprint = false;
    bHoldingSprint = false;
    bSprintToggleable = false;
    bSprintByDefault = false;
    bSprintCancelsReload = false;
    bSprintWasCancelledByReload = false;
    bAutoRunOn = false;
    bUseHoldToSwapPickup = false;
    bTargetingToggleable = false;
    bTargetingToggleableWithTouch = false;
    bMovementDisabledDueToCancellableAction = false;
    bIsPlayerActivelyMoving = false;
    bPlaceHeldObjectPressed = false;
    InMovementCancellableAction = 0;
    bAllowHoldForAmmoCrafting = true;
    bIsClientTimingOut = false;
    ClientTimeoutBlockInputTime = 1;
    LastMoveInputFrame = 0;
    LastPressGamepadSprintTime = 1;
    bAutoRunWasHoldingForward = false;
    bAtNameBaseScreen = false;
    CinematicCameraClassOverride = NULL;
    bOnPressExecuteJetpack = false;
    bShowHitMarkersForFriendlyFire = false;
    bServerSideHitMarkers = false;
    bGamepadAbilityPending = false;
    bForceAllowCursorMode = false;
    bForceAllowCameraMode = false;
    bSuppressEventNotifications = false;
    LastSpotTime = 1;
    PreviewAbility = NULL;
    AIDirectorDataManager = NULL;
    MusicManager = NULL;
    bUsePredictedBuildingActors = true;
    bRegisterPredictedBuildingActorsWithGrid = true;
    PredictedActorLifespan = 1;
    BuildPreviewModeInputComponent = NULL;
    BuildPreviewMarker = NULL;
    BuildPreviewMarkerExtraPiece = NULL;
    bAllowBuildingPreviewAutoRotation = false;
    bRequireTraceToExistingBuildingToSetContext = false;
    bAllowTraceToExistingBuildingToSetContextToRedirectToBlockingBuilding = true;
    bRequireTraceToExistingBuildingToSetContextExcludeCurrentContext = true;
    TargetedBuilding = NULL;
    TargetedVehicle = NULL;
    ContextualConversionClass = NULL;
    BuildPreviewRotationIterations = 0;
    bBuildPreviewMirrored = false;
    BuildPreviewMarkerOptionalAdjustment = EFortBuildPreviewMarkerOptionalAdjustment::None;
    bBuildFree = false;
    bCraftFree = false;
    CurrentCostInfoType = EFortCostInfoTypes::None;
    CurrentBuildableClass = NULL;
    PreviousBuildableClass = NULL;
    CurrentResourceLevel = EFortResourceLevel::First;
    CurrentResourceType = EFortResourceType::Wood;
    DamageNumbersActor = NULL;
    EditModeInputComponent = NULL;
    EditBuildingActor = NULL;
    EditModeDistance = 1;
    PickerInputComponent = NULL;
    TrapPickerDecoHelper = NULL;
    bBuildingPlacementTraceSkipInitialPenetrationOfBuildingSMActor = true;
    bBuildingPlacementTraceSkipInitialPenetrationOfStaticMesh = true;
    ClientQuickBars = NULL;
    bShouldForceDeleteDroppedItems = false;
    bAutoEquipBetterItems = true;
    WorldInventory = NULL;
    OutpostInventory = NULL;
    ViewTargetInventory = NULL;
    bHasInitializedWorldInventory = false;
    bHasInitializedHeroInventory = false;
    bAccountInventoryWasUpdated = false;
    bForceWorldInventoryUpdate = false;
    bIsSavingGadgetLoadout = false;
    BotPilot = NULL;
    BotManager = NULL;
    ClientBotManagerClass = UFortClientBotManager::StaticClass();
    LocalPawnCustomizationAssetLoader = NULL;
    bDropWeaponsDuringAllMissionStates = false;
    MyPlayerInfo = NULL;
    bHasUnsavedPrimaryMissionProgress = false;
    StatManager = NULL;
    HeartbeatManager = NULL;
    StatEventManager = NULL;
    LastEmotePlayed = NULL;
    McpProfileGroup = NULL;
    CommonPublicMcpProfile = NULL;
    CommonCoreMcpProfile = NULL;
    MainMcpProfile = NULL;
    AthenaProfile = NULL;
    MetadataProfile = NULL;
    CreativeModeProfile = NULL;
    CollectionsMcpProfile = NULL;
    TutorialCompletedState = EFortPCTutorialCompletedState::Unknown;
    bShouldReceiveCriticalMatchBonus = false;
    VoiceInputSourceEffectPresetChain = NULL;
    bEnableVoiceChatPTT = false;
    bVoiceChatPTTTransmit = false;
    bInfiniteAmmo = false;
    bInfiniteMagazine = false;
    bNoCoolDown = false;
    bInfiniteDurability = false;
    bUsePickers = true;
    bPickerOpen = false;
    bPickerEnabled = true;
    bCheatGhost = false;
    bCheatFly = false;
    bEnableShotLogging = false;
    bIsNearActiveEncounters = false;
    OverriddenBackpackSize = 0;
    AimHelpMode = 0;
    JumpStaminaCost = EFortJumpStaminaCost::SprintAir;
    CameraPrototypeName = TEXT("MPR");
    bHideHudEnglishText = false;
    bAutoChangeMaterial = true;
    bServerAutoChangeMaterial = true;
    bPeripheralLightingEnabled = false;
    bRudderControlEnabled = false;
    RudderDeadZone = 1;
    RudderMaxThrottle = 1;
    bSyncPeripheralLightingWithEmoteMusic = true;
    bPushEmoteAudioDataToCosmeticMaterials = true;
    LastEmoteMusicFFT100hz = 1;
    LastEmoteMusicFFT2000hz = 1;
    EmoteMusicBeatThreshold = 1;
    EmoteMusicEnvelopeBeatCount = 1;
    bZeroingCameraRoll = false;
    bTryPickupSwap = false;
    bClientSideEditPrediction = false;
    ClientSideEditPredictionTimeout = 1;
    PendingEnterEditModeActor = NULL;
    RandomCharacterIndex = 0;
    AntiAddictionPlayTimeMultiplier = 1;
    bSupportQuickEdit = false;
    bQuickEditEnabled = true;
    bUsesWidgetForFPSDisplay = false;
    bShowFPS = false;
    bShowTemperature = false;
    bLockPrimaryInputMethodToMouse = false;
    IndicatorManager = NULL;
    bFinalXPUpdateFailed = false;
    TestUserWidget = NULL;
    PreviousStasisMode = EFortPawnStasisMode::None;
    BattleMapSpectatorClass = NULL;
    bReleaseBuildingContextOnPlace = true;
    TurboPlaceFirstInterval = 1;
    TurboPlaceInterval = 1;
    bCreativeTurboDelete = true;
    TurboDeleteFirstInterval = 1;
    TurboDeleteInterval = 1;
    bTurboBuild = true;
    TurboBuildFirstInterval = 1;
    TurboBuildRequestFailedInterval = 1;
    TurboBuildInterval = 1;
    FortControllerComponent_Telemetry = CreateDefaultSubobject<UFortControllerComponent_Telemetry>(TEXT("TelemetryComp"));
    InventoryNetworkManagementComponent = CreateDefaultSubobject<UFortControllerComponent_InventoryNetworkManagement>(TEXT("InventoryManagementComp"));
    InteractionComponent = CreateDefaultSubobject<UFortControllerComponent_Interaction>(TEXT("InteractionComp"));
    CollectionsComponent = CreateDefaultSubobject<UFortControllerComponent_Collections>(TEXT("CollectionsComp"));
    PendingExecuteInventoryItemDefinition = NULL;
    QuickHealItemPickerClass = NULL;
}

