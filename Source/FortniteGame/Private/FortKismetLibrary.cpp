#include "FortKismetLibrary.h"
#include "Templates/SubclassOf.h"

float UFortKismetLibrary::VectorToNormalizedAngleInDegrees(FVector V) {
    return 0.0f;
}
/*
FVector UFortKismetLibrary::VectorSlerp(const FVector& Origin, const FVector& Start, const FVector& End, const float Alpha) {
    return FVector{};
}
*/
void UFortKismetLibrary::UnhideTutorialWidget(UObject* WorldContextObject, FName WidgetName) {
}

void UFortKismetLibrary::UnhideAllTutorialWidgets(UObject* WorldContextObject) {
}

void UFortKismetLibrary::UnequipFortAbilitySet(FFortAbilitySetHandle& AbilitySetHandle) {
}

void UFortKismetLibrary::TriggerFeedbackEvent(UObject* WorldContextObject, FFortFeedbackHandle EventHandle, AFortPawn* InstigatorPawn, AFortPawn* Recipient, float OverriddenDelay, bool bOverriddenQueuing, bool bAllowReplication) {
}

bool UFortKismetLibrary::SwitchHeroType(AFortPlayerController* FortPC, const FString& NewHeroName) {
    return false;
}

void UFortKismetLibrary::StopUIConversation(UObject* WorldContextObject) {
}

void UFortKismetLibrary::StartUIConversation(UObject* WorldContextObject) {
}

AFortTracerBase* UFortKismetLibrary::SpawnTracerFromPool(UObject* WorldContextObject, TSubclassOf<AFortTracerBase> TracerClass, const FVector& Origin, const FVector& Destination, AFortPawn* Instigator) {
    return NULL;
}

AFortProjectileBase* UFortKismetLibrary::SpawnProjectile(TSubclassOf<AFortProjectileBase> ProjectileClass, AActor* RequestedBy, const FVector& SpawnLocation, const FRotator SpawnRotation, const FRotator& SpawnDirection, FFortGameplayEffectContainerSpec EffectContainerSpecToApplyOnHit, FFortGameplayEffectContainerSpec EffectContainerSpecToApplyOnExplode, bool bUseDefaultPhysics, AActor* HomingTarget, float InitialSpeed, float GravityScale, float ChargePercent) {
    return NULL;
}

ABuildingGameplayActor* UFortKismetLibrary::SpawnBuildingGameplayActor(TSubclassOf<ABuildingGameplayActor> BGAClass, const FTransform& Transform, AActor* Instigator) {
    return NULL;
}

AFortAreaOfEffectCloud* UFortKismetLibrary::SpawnAreaOfEffectCloud(TSubclassOf<AFortAreaOfEffectCloud> AreaOfEffectClass, AActor* RequestedBy, const FVector& SpawnLocation, const FRotator& SpawnRotation, FFortGameplayEffectContainerSpec EffectContainerSpecToApplyOnHit, FFortGameplayEffectContainerSpec EffectContainerSpecToApplyOnExplode) {
    return NULL;
}

void UFortKismetLibrary::ShowSoundIndicatorLocalForTeam(UObject* WorldContextObject, AFortPawn* TrackedPawn, FVector Location, float MaxAudibleDistance, EFortSoundIndicatorTypes IndicatorType, uint8 Team, TArray<TEnumAsByte<EFortTeamAffiliation::Type>> Affiliations, const AActor* Instigator, FLinearColor Tint, UTexture* OverrideIcon) {
}

void UFortKismetLibrary::ShowSoundIndicatorLocal(UObject* WorldContextObject, AFortPawn* TrackedPawn, FVector Location, float MaxAudibleDistance, EFortSoundIndicatorTypes IndicatorType, const TArray<AFortPlayerController*>& IgnoreOnControllers, const AActor* Instigator, FLinearColor Tint, UTexture* OverrideIcon) {
}

bool UFortKismetLibrary::ShouldHideTutorialWidget(FName WidgetName) {
    return false;
}

void UFortKismetLibrary::SetTimeOfDaySpeed(UObject* WorldContextObject, float TimeOfDaySpeedFactor) {
}

void UFortKismetLibrary::SetTimeOfDay(UObject* WorldContextObject, float TimeOfDay) {
}

void UFortKismetLibrary::SetIdleKickEnabled(UObject* WorldContextObject, bool bEnabled) {
}

void UFortKismetLibrary::SetEndGameTimeDilation(const UObject* WorldContextObject, float TimeDilation) {
}

void UFortKismetLibrary::SetCanBeDamaged(AActor* Actor, bool bCanBeDamaged) {
}

UMaterialInstance* UFortKismetLibrary::SelectMaterialInstance(UMaterialInstance* A, UMaterialInstance* B, bool bSelectA) {
    return NULL;
}

void UFortKismetLibrary::ScriptError(const FString& MESSAGE) {
}

void UFortKismetLibrary::ScriptEnsureIsValid(const FString& MESSAGE, UObject* Object) {
}

FVector UFortKismetLibrary::RotateVectorTowardVector(const FVector& Source, const FVector& Target, const float Degrees) {
    return FVector{};
}

FFortGameplayEffectContainer UFortKismetLibrary::ReplaceRangeInGameplayEffectContainer(FFortGameplayEffectContainer EffectContainer, const FScalableFloat& NewRange) {
    return FFortGameplayEffectContainer{};
}

void UFortKismetLibrary::RemoveGlobalEnvironmentGameplayEffect(UObject* WorldContextObject, TSubclassOf<UGameplayEffect> GameplayEffect) {
}

void UFortKismetLibrary::RemoveActorsOfClassFromBuildingSMActorArray(const TArray<ABuildingSMActor*>& ArrayToRemoveClassFrom, TSubclassOf<ABuildingSMActor> ClassToRemove, TArray<ABuildingSMActor*>& ArrayWithClassRemoved) {
}

void UFortKismetLibrary::RegisterDayTimeHitCallback(UObject* Object, const FString& FunctionName, float TimeInHours, bool bRecurring, bool bBlockTriggeringThisCycle) {
}

void UFortKismetLibrary::RegisterDayPhaseHitCallback(UObject* Object, const FString& FunctionName, EFortDayPhase Phase, bool bRecurring, bool bBlockTriggeringThisCycle) {
}

bool UFortKismetLibrary::RandomGroundLocationInCircle(UObject* WorldContextObject, const FVector& CircleCenter, float CircleRadius, const AActor* TraceIgnoreActor, float TraceStartZ, float TraceEndZ, float TraceRadius, FCollisionProfileName TraceProfile, FVector& OutLocation) {
    return false;
}

FTransform UFortKismetLibrary::PushOffTransformByHitLocation(AActor* RequestedBy, const FTransform& InTransform, const FHitResult& Hit, float Distance) {
    return FTransform{};
}

FVector UFortKismetLibrary::PushOffHitLocation(AActor* RequestedBy, const FHitResult& Hit, float Distance) {
    return FVector{};
}

void UFortKismetLibrary::PlayLocalForceFeedbackAtLocationMulti(UObject* WorldContextObject, UForceFeedbackEffect* NearForceFeedbackEffect, UForceFeedbackEffect* FarForceFeedbackEffect, FVector Location, float InnerRadius, float OuterRadius, FName Tag) {
}

void UFortKismetLibrary::PlayLocalForceFeedbackAtLocation(UObject* WorldContextObject, UForceFeedbackEffect* ForceFeedbackEffect, FVector Location, float Radius, FName Tag) {
}

bool UFortKismetLibrary::PickLootDropsWithNamedWeights(UObject* WorldContextObject, TArray<FFortItemEntry>& OutLootToDrop, const FName TierGroupName, const int32 WorldLevel, const TMap<FName, float>& NamedWeightsMap, const int32 ForcedLootTier) {
    return false;
}

bool UFortKismetLibrary::PickLootDrops(UObject* WorldContextObject, TArray<FFortItemEntry>& OutLootToDrop, const FName TierGroupName, const int32 WorldLevel, const int32 ForcedLootTier) {
    return false;
}

void UFortKismetLibrary::OpenTalkingHead(UObject* WorldContextObject, UTexture2D* Image, FText Title, FText SpeechText, EFortAnnouncementDisplayPreference DisplayPreference) {
}

bool UFortKismetLibrary::OnSameTeam(const AActor* ActorA, const AActor* ActorB) {
    return false;
}

void UFortKismetLibrary::NotifyProjectileThrown(TSubclassOf<AFortProjectileBase> ProjClass, AActor* RequestedBy, const FVector& SpawnLocation, const FRotator& SpawnRotation, float Speed) {
}

bool UFortKismetLibrary::NotEqual_UniqueNetIdReplUniqueNetIdRepl(const FUniqueNetIdRepl& A, const FUniqueNetIdRepl& B) {
    return false;
}

bool UFortKismetLibrary::NotEqual_FFortDialogWaitingForLatentActionHandle(const FFortDialogExternalLatentActionHandle& A, const FFortDialogExternalLatentActionHandle& B) {
    return false;
}

FVector UFortKismetLibrary::NormalizedAngleInDegreesToVector(float A) {
    return FVector{};
}

TEnumAsByte<EFortWeaponCoreAnimation::Type> UFortKismetLibrary::MakeWeaponCoreAnimation(TEnumAsByte<EFortWeaponCoreAnimation::Type> Value) {
    return EFortWeaponCoreAnimation::Melee;
}

EFortResourceType UFortKismetLibrary::MakeResourceType(EFortResourceType Value) {
    return EFortResourceType::Wood;
}

EFortMovementStyle UFortKismetLibrary::MakeMovementStyle(EFortMovementStyle Value) {
    return EFortMovementStyle::Running;
}

FFortGameplayEffectContainerSpec UFortKismetLibrary::MakeGameplayEffectContainerSpecFromAbilityComponent(const FFortGameplayEffectContainer& EffectContainer, UAbilitySystemComponent* AbilityComp, int32 GameplayEffectLevel) {
    return FFortGameplayEffectContainerSpec{};
}

FFortGameplayEffectContainerSpec UFortKismetLibrary::MakeGameplayEffectContainerSpecFromAbility(const FFortGameplayEffectContainer& EffectContainer, UGameplayAbility* Ability, int32 GameplayEffectLevel) {
    return FFortGameplayEffectContainerSpec{};
}

EFortDayPhase UFortKismetLibrary::MakeDayNightPhase(EFortDayPhase Value) {
    return EFortDayPhase::Morning;
}

TEnumAsByte<EFortBuildingState::Type> UFortKismetLibrary::MakeBuildingState(TEnumAsByte<EFortBuildingState::Type> Value) {
    return EFortBuildingState::Placement;
}

void UFortKismetLibrary::MakeAllPlayersTalkToSelf(UObject* WorldContextObject, FLatentActionInfo LatentInfo, USoundBase* Audio, float Delay, bool bInterruptCurrentLine, bool bCanBeInterrupted, bool bCanCue, TEnumAsByte<EFortFeedbackBroadcastFilter> BroadcastFilter, bool bLatent) {
}

AFortPickup* UFortKismetLibrary::K2_SpawnPickupInWorldWithClass(UObject* WorldContextObject, UFortWorldItemDefinition* ItemDefinition, TSubclassOf<AFortPickup> PickupClass, int32 NumberToSpawn, FVector Position, FVector Direction, int32 OverrideMaxStackCount, bool bToss, bool bRandomRotation, bool bBlockedFromAutoPickup, int32 PickupInstigatorHandle) {
    return NULL;
}

AFortPickup* UFortKismetLibrary::K2_SpawnPickupInWorld(UObject* WorldContextObject, UFortWorldItemDefinition* ItemDefinition, int32 NumberToSpawn, FVector Position, FVector Direction, int32 OverrideMaxStackCount, bool bToss, bool bRandomRotation, bool bBlockedFromAutoPickup, int32 PickupInstigatorHandle) {
    return NULL;
}

void UFortKismetLibrary::K2_SetCurrentResourceType(AFortPlayerController* Controller, EFortResourceType NewMaterial) {
}

int32 UFortKismetLibrary::K2_RemoveItemFromPlayerByGuid(AFortPlayerController* PlayerController, FGuid ItemGuid, int32 AmountToRemove, bool bForceRemoval) {
    return 0;
}

int32 UFortKismetLibrary::K2_RemoveItemFromPlayer(AFortPlayerController* PlayerController, UFortWorldItemDefinition* ItemDefinition, int32 AmountToRemove, bool bForceRemoval) {
    return 0;
}

void UFortKismetLibrary::K2_RemoveItemFromAllPlayers(UObject* WorldContextObject, UFortWorldItemDefinition* ItemDefinition, int32 AmountToRemove) {
}

int32 UFortKismetLibrary::K2_RemoveFortItemFromPlayer(AFortPlayerController* PlayerController, UFortItem* Item, int32 AmountToRemove, bool bForceRemoval) {
    return 0;
}

int32 UFortKismetLibrary::K2_PayBuildingResourceCost(AFortPlayerController* Controller, const EFortResourceType ResourceType, const int32 ResourceAmount) {
    return 0;
}

bool UFortKismetLibrary::K2_HasBuildingResourcesAvailable(AFortPlayerController* Controller, const EFortResourceType ResourceType, const int32 ResourceAmount) {
    return false;
}

void UFortKismetLibrary::K2_GiveItemToPlayer(AFortPlayerController* PlayerController, const UFortWorldItemDefinition* ItemDefinition, int32 NumberToGive, bool bNotifyPlayer) {
}

void UFortKismetLibrary::K2_GiveItemToAllPlayers(UObject* WorldContextObject, UFortWorldItemDefinition* ItemDefinition, int32 NumberToGive, bool bNotifyPlayer) {
}

void UFortKismetLibrary::K2_GiveBuildingResource(AFortPlayerController* Controller, const EFortResourceType ResourceType, const int32 ResourceAmount) {
}

UFortResourceItemDefinition* UFortKismetLibrary::K2_GetResourceItemDefinition(const EFortResourceType ResourceType) {
    return NULL;
}

int32 UFortKismetLibrary::K2_GetNumAvailableBuildingResources(AFortPlayerController* Controller, const EFortResourceType ResourceType) {
    return 0;
}

int32 UFortKismetLibrary::K2_GetItemQuantityOnPlayer(AFortPlayerController* PlayerController, UFortItemDefinition* ItemDefinition) {
    return 0;
}

EFortResourceType UFortKismetLibrary::K2_GetCurrentResourceType(AFortPlayerController* Controller) {
    return EFortResourceType::Wood;
}

FVector UFortKismetLibrary::K2_GetClosestAxisXY(FVector InVector) {
    return FVector{};
}

void UFortKismetLibrary::K2_CycleBuildingMaterial(AFortPlayerController* Controller, bool bBroadcast, bool bDoUIFeedback, bool bHonorAutoSwitch) {
}

TArray<UObject*> UFortKismetLibrary::JonLHack_GetAllObjectsOfClassFromPath(const FString& Path, UClass* Class) {
    return TArray<UObject*>();
}

bool UFortKismetLibrary::IsValid_UniqueNetIdRepl(const FUniqueNetIdRepl& InUniqueNetIdRepl) {
    return false;
}

bool UFortKismetLibrary::IsValid(const FAttributeInfo& AttributeInfo) {
    return false;
}

bool UFortKismetLibrary::IsUsingBattlEye() {
    return false;
}

bool UFortKismetLibrary::IsTabletGame() {
    return false;
}

bool UFortKismetLibrary::IsRunningNoMCP() {
    return false;
}

bool UFortKismetLibrary::IsPhoneGame() {
    return false;
}

bool UFortKismetLibrary::IsMobilePlatform() {
    return false;
}

bool UFortKismetLibrary::IsMobileGame(const UObject* WorldContextObject) {
    return false;
}

bool UFortKismetLibrary::IsLinkingStreamedAccountsEnabled() {
    return false;
}

bool UFortKismetLibrary::IsLatentActionHandleValid(const FFortDialogExternalLatentActionHandle& Handle) {
    return false;
}

bool UFortKismetLibrary::IsItemDefRandomCustomizationSelector(const UFortItemDefinition* InItemDef) {
    return false;
}

bool UFortKismetLibrary::IsFullBodyHit(FGameplayEffectContextHandle EffectContext) {
    return false;
}

bool UFortKismetLibrary::IsFatalHit(FGameplayEffectContextHandle EffectContext) {
    return false;
}

bool UFortKismetLibrary::IsDiceCritical(FGameplayEffectContextHandle EffectContext) {
    return false;
}

bool UFortKismetLibrary::IsCriticalHit(FGameplayEffectContextHandle EffectContext) {
    return false;
}

bool UFortKismetLibrary::IsConsolePlatform() {
    return false;
}

bool UFortKismetLibrary::IsCellConnection() {
    return false;
}

bool UFortKismetLibrary::IsAssetNull(TSoftObjectPtr<UObject> Asset) {
    return false;
}

bool UFortKismetLibrary::IsActorWithinGoldenPOI(const UObject* WorldContextObject, const AActor* InActor) {
    return false;
}

void UFortKismetLibrary::InvalidateLatentActionHandle(FFortDialogExternalLatentActionHandle& Handle) {
}

void UFortKismetLibrary::HideTutorialWidget(UObject* WorldContextObject, FName WidgetName) {
}

bool UFortKismetLibrary::HasSelectableRewards(const FFortRewardInfo& RewardInfo) {
    return false;
}

bool UFortKismetLibrary::HasRewards(const FFortRewardInfo& RewardInfo) {
    return false;
}

bool UFortKismetLibrary::HasOpenBroadcasterGrantWindow(UObject* WorldContextObject) {
    return false;
}

bool UFortKismetLibrary::HasMultipleVisibleRewards(const FFortRewardInfo& RewardInfo) {
    return false;
}

void UFortKismetLibrary::GiveItemToInventoryOwner(TScriptInterface<IFortInventoryOwnerInterface> InventoryOwner, const UFortWorldItemDefinition* ItemDefinition, int32 NumberToGive, bool bNotifyPlayer, int32 ItemLevel) {
}

bool UFortKismetLibrary::GetWeaponStatsRow(FDataTableRowHandle DataTableRowHandle, FFortBaseWeaponStats& OutRow) {
    return false;
}

bool UFortKismetLibrary::GetWeaponDurabilityByRarityStatsRow(FDataTableRowHandle DataTableRowHandle, FFortWeaponDurabilityByRarityStats& OutRow) {
    return false;
}

float UFortKismetLibrary::GetUnmodifiedDamage(FGameplayEffectContextHandle EffectContext) {
    return 0.0f;
}

bool UFortKismetLibrary::GetTrapStatsRow(FDataTableRowHandle DataTableRowHandle, FFortTrapStats& OutRow) {
    return false;
}

bool UFortKismetLibrary::GetTooltipTextFromTokenFromTooltipClass(UObject* WorldContextObject, const UObject* ObjectToDescribe, TSubclassOf<UFortTooltip> TooltipClass, const FGameplayTag Tag, const UFortTooltipContext* Context, const FGameplayTag Token, FText& OutText) {
    return false;
}

bool UFortKismetLibrary::GetTooltipTextFromToken(UObject* WorldContextObject, const UObject* ObjectToDescribe, const FGameplayTag Tag, const UFortTooltipContext* Context, const FGameplayTag Token, FText& OutText) {
    return false;
}

bool UFortKismetLibrary::GetTooltipNumericValueFromTooltipClass(UObject* WorldContextObject, const UObject* ObjectToDescribe, TSubclassOf<UFortTooltip> TooltipClass, FGameplayTag Tag, const UFortTooltipContext* Context, const FGameplayTag Token, float& Value) {
    return false;
}

bool UFortKismetLibrary::GetTooltipNumericValue(UObject* WorldContextObject, const UObject* ObjectToDescribe, FGameplayTag Tag, const UFortTooltipContext* Context, const FGameplayTag Token, float& Value) {
    return false;
}

bool UFortKismetLibrary::GetTooltipDescriptionFromTooltipClass(UObject* WorldContextObject, const UObject* ObjectToDescribe, TSubclassOf<UFortTooltip> TooltipClass, FGameplayTag Tag, const UFortTooltipContext* Context, TArray<FText>& Description, bool bSummaryTooltip) {
    return false;
}

bool UFortKismetLibrary::GetTooltipDescription(UObject* WorldContextObject, const UObject* ObjectToDescribe, FGameplayTag Tag, const UFortTooltipContext* Context, TArray<FText>& Description, bool bSummaryTooltip) {
    return false;
}

float UFortKismetLibrary::GetTimeUntilInRealTimeSeconds(UObject* WorldContextObject, float GameTime) {
    return 0.0f;
}

float UFortKismetLibrary::GetTimeOfDaySpeed(UObject* WorldContextObject) {
    return 0.0f;
}

float UFortKismetLibrary::GetTimeOfDayAccumulator(UObject* WorldContextObject) {
    return 0.0f;
}

float UFortKismetLibrary::GetTimeOfDay(UObject* WorldContextObject) {
    return 0.0f;
}

float UFortKismetLibrary::GetTimeDayPhaseBegins(UObject* WorldContextObject, EFortDayPhase DayPhase) {
    return 0.0f;
}

AFortThreatVisualsManager* UFortKismetLibrary::GetThreatVisualsManager(UObject* WorldContextObject) {
    return NULL;
}

AFortTeamInfo* UFortKismetLibrary::GetTeamInfo(UObject* WorldContextObject, uint8 Team) {
    return NULL;
}

TEnumAsByte<EFortTeamAffiliation::Type> UFortKismetLibrary::GetTeamAffiliationToLocalPlayer(UObject* WorldContextObject, uint8 Team) {
    return EFortTeamAffiliation::Friendly;
}

TEnumAsByte<EFortTeamAffiliation::Type> UFortKismetLibrary::GetTeamAffiliationBetweenTeams(uint8 TeamA, uint8 TeamB) {
    return EFortTeamAffiliation::Friendly;
}

TEnumAsByte<EFortTeamAffiliation::Type> UFortKismetLibrary::GetTeamAffiliation(const AActor* ActorA, const AActor* ActorB) {
    return EFortTeamAffiliation::Friendly;
}

ESubGame UFortKismetLibrary::GetSubGame(const UObject* WorldContextObject) {
    return ESubGame::Campaign;
}

float UFortKismetLibrary::GetStunTime(FGameplayEffectContextHandle EffectContext) {
    return 0.0f;
}

FDataTableRowHandle UFortKismetLibrary::GetSpecialActorInputActionDataTableRow(UObject* WorldContextObject) {
    return FDataTableRowHandle{};
}

bool UFortKismetLibrary::GetShowHeroHeadAccessoriesForLocalPlayer(UObject* WorldContextObject) {
    return false;
}

bool UFortKismetLibrary::GetShowHeroBackpackForLocalPlayer(UObject* WorldContextObject) {
    return false;
}

float UFortKismetLibrary::GetServerWorldTimeSeconds(const UObject* WorldContextObject) {
    return 0.0f;
}

bool UFortKismetLibrary::GetSafeZoneLocation(UObject* WorldContextObject, int32 SafeZoneIndex, FVector& OutLocation) {
    return false;
}

UFortAbilityKit* UFortKismetLibrary::GetRemovedAbilityKit(const FFortSpecializationSlot& Slot) {
    return NULL;
}

bool UFortKismetLibrary::GetRangedWeaponStatsRow(FDataTableRowHandle DataTableRowHandle, FFortRangedWeaponStats& OutRow) {
    return false;
}

FText UFortKismetLibrary::GetRandomSurvivorName(UObject* WorldContextObject, TEnumAsByte<EFortDisplayGender::Type> Gender, bool bRemoveFromList) {
    return FText::GetEmpty();
}

FText UFortKismetLibrary::GetRandomLiveStreamingViewerName(UObject* WorldContextObject, bool bRemoveFromList) {
    return FText::GetEmpty();
}

bool UFortKismetLibrary::GetPurchaseCostsRow(FDataTableRowHandle DataTableRowHandle, FFortCollectionBookDirectPurchaseData& OutRow) {
    return false;
}

UGameplayAbility* UFortKismetLibrary::GetPrimaryInstance(const FGameplayAbilitySpec& Spec) {
    return NULL;
}

EFortDayPhase UFortKismetLibrary::GetPreviousDayPhase(UObject* WorldContextObject) {
    return EFortDayPhase::Morning;
}

bool UFortKismetLibrary::GetPlaylistUsesCustomCharacterParts(const UObject* WorldContextObject) {
    return false;
}

bool UFortKismetLibrary::GetPlaylistAllowsTeamSwitching(const UObject* WorldContextObject) {
    return false;
}

UFortRegisteredPlayerInfo* UFortKismetLibrary::GetPlayerInfoFromUniqueID(UObject* WorldContextObject, const FUniqueNetIdRepl& UniqueId) {
    return NULL;
}

FVector UFortKismetLibrary::GetPlayerAimPoint(const AFortPlayerController* SourcePlayer, const float MaxRange, const bool NoTrace) {
    return FVector{};
}

int32 UFortKismetLibrary::GetPhysicalMemoryMB() {
    return 0;
}

bool UFortKismetLibrary::GetPawnStatsRow(FDataTableRowHandle DataTableRowHandle, FFortPawnStats& OutRow) {
    return false;
}

bool UFortKismetLibrary::GetNumericCVar(const FString& CVar, float& OutValue) {
    return false;
}

int32 UFortKismetLibrary::GetNumberOfRegisteredPlayers(UObject* WorldContextObject) {
    return 0;
}

AFortMusicManager* UFortKismetLibrary::GetMusicManager(UObject* WorldContextObject) {
    return NULL;
}

UMaterialInstanceDynamic* UFortKismetLibrary::GetMIDForSkeletalMeshComponent(USkeletalMeshComponent* SkeletalMeshComponent, int32 ElementIndex) {
    return NULL;
}

bool UFortKismetLibrary::GetMeleeWeaponStatsRow(FDataTableRowHandle DataTableRowHandle, FFortMeleeWeaponStats& OutRow) {
    return false;
}

void UFortKismetLibrary::GetMatchmakingDifficultyRangeFromDifficultyInfo(const FGameDifficultyInfo& DifficultyInfo, float& OutMinDifficulty, float& OutMaxDifficulty) {
}

int32 UFortKismetLibrary::GetLootLevel(UObject* WorldContextObject) {
    return 0;
}

bool UFortKismetLibrary::GetLocalPlayerHasHeroHeadAccessories(UObject* WorldContextObject) {
    return false;
}

bool UFortKismetLibrary::GetLocalPlayerHasHeroBackpack(UObject* WorldContextObject) {
    return false;
}

TArray<AFortPlayerController*> UFortKismetLibrary::GetLocalFortPlayerControllers(UObject* WorldContextObject, bool bIncludeNonSpectators, bool bIncludeSpectators) {
    return TArray<AFortPlayerController*>();
}

int32 UFortKismetLibrary::GetItemQuantityOnPlayerByGUID(AFortPlayerController* PlayerController, const FGuid& ItemGuid) {
    return 0;
}

UFortItemDefinition* UFortKismetLibrary::GetItemDefinitionFromItemQuantityPair(const FFortItemQuantityPair& ItemQuantityPair) {
    return NULL;
}

bool UFortKismetLibrary::GetIsPlayingReplay(UObject* WorldContextObject) {
    return false;
}

bool UFortKismetLibrary::GetIsBroadcastClient(UObject* WorldContextObject) {
    return false;
}

void UFortKismetLibrary::GetImpulseData(FGameplayEffectContextHandle EffectContext, FVector& ImpulseDirection, float& KnockbackMagnitude, float& KnockbackZAngle) {
}

bool UFortKismetLibrary::GetIdleKickEnabled(const UObject* WorldContextObject) {
    return false;
}

FString UFortKismetLibrary::GetHumanReadableName(AActor* Actor) {
    return TEXT("");
}

int32 UFortKismetLibrary::GetHoursUntilDayPhase(UObject* WorldContextObject, EFortDayPhase DayPhase) {
    return 0;
}

float UFortKismetLibrary::GetHostilityPercentage(UObject* WorldContextObject) {
    return 0.0f;
}

UFortAbilityKit* UFortKismetLibrary::GetGrantedAbilityKit(const FFortSpecializationSlot& Slot) {
    return NULL;
}

float UFortKismetLibrary::GetGameDifficulty() {
    return 0.0f;
}

bool UFortKismetLibrary::GetGameContextGameplayTags(UObject* WorldContextObject, FGameplayTagContainer& OutGameContextGameplayTags) {
    return false;
}

void UFortKismetLibrary::GetFortPlayerPawnsInRange(UObject* WorldContextObject, const FVector& SourcePosition, float Range, TArray<AFortPlayerPawn*>& OutFortPlayerPawns) {
}

TArray<AFortPlayerPawn*> UFortKismetLibrary::GetFortPlayerPawns(UObject* WorldContextObject) {
    return TArray<AFortPlayerPawn*>();
}

AFortPlayerController* UFortKismetLibrary::GetFortPlayerControllerFromActor(AActor* Actor) {
    return NULL;
}

TEnumAsByte<EPhysicalSurface> UFortKismetLibrary::GetFortPhysicalSurface(const FHitResult& Hit) {
    return SurfaceType_Default;
}

void UFortKismetLibrary::GetFortPawnsInRange(UObject* WorldContextObject, const FVector& SourcePosition, float Range, TArray<AFortPawn*>& OutFortPawns) {
}

UFortGameUserSettings* UFortKismetLibrary::GetFortGameUserSettings() {
    return NULL;
}

float UFortKismetLibrary::GetFloatHoursUntilDayPhase(UObject* WorldContextObject, EFortDayPhase DayPhase) {
    return 0.0f;
}

FVector UFortKismetLibrary::GetEffectDirection(FGameplayEffectContextHandle EffectContext) {
    return FVector{};
}

FRotator UFortKismetLibrary::GetDirectionActorToActor(AActor* SourceActor, AActor* TargetActor) {
    return FRotator{};
}

float UFortKismetLibrary::GetDefaultAbsoluteTimeOfDaySpeed(UObject* WorldContextObject) {
    return 0.0f;
}

FString UFortKismetLibrary::GetDebugStringForUniqueId(const FUniqueNetIdRepl& UniqueId) {
    return TEXT("");
}

FVector UFortKismetLibrary::GetDayNightDirectionalLightVector(UObject* WorldContextObject) {
    return FVector{};
}

FLinearColor UFortKismetLibrary::GetDayNightDirectionalLightColor(UObject* WorldContextObject) {
    return FLinearColor{};
}

int32 UFortKismetLibrary::GetCurrentSafeZonePhase(UObject* WorldContextObject) {
    return 0;
}

EFortDayPhase UFortKismetLibrary::GetCurrentDayPhase(UObject* WorldContextObject) {
    return EFortDayPhase::Morning;
}

EAthenaWinCondition UFortKismetLibrary::GetCurrentAthenaWinCondition(const UObject* WorldContextObject) {
    return EAthenaWinCondition::LastManStanding;
}

AFortPlayerPawn* UFortKismetLibrary::GetClosestFortPlayerPawn(UObject* WorldContextObject, FVector Position) {
    return NULL;
}

ABuildingSMActor* UFortKismetLibrary::GetClosestBuildingActorFromArray(const AActor* Actor, const TArray<ABuildingSMActor*>& ArrayOfBuildings) {
    return NULL;
}

AActor* UFortKismetLibrary::GetClosestActorFromArray(const AActor* Actor, const TArray<AActor*>& ArrayOfActors) {
    return NULL;
}

void UFortKismetLibrary::GetCalendarEventInformation(UObject* WorldContextObject, const FString& EventName, bool& bIsEventActive, FTimespan& TimeSinceBegin, FTimespan& TimeUntilEnd, float& TimespanRatio) {
}

float UFortKismetLibrary::GetCalculatedGameDifficulty(UObject* WorldContextObject) {
    return 0.0f;
}

void UFortKismetLibrary::GetBuildingStructuralSupportSystem(UObject* WorldContextObject, UBuildingStructuralSupportSystem*& BuildingStructuralSupportSystem) {
}

float UFortKismetLibrary::GetBuildingHealthPercentage(const ABuildingActor* BuildingActor) {
    return 0.0f;
}

float UFortKismetLibrary::GetBroadcasterGrantWindowSecondsRemaining(UObject* WorldContextObject) {
    return 0.0f;
}

float UFortKismetLibrary::GetAngleDegrees(const FVector& Source, const FVector& Target) {
    return 0.0f;
}

void UFortKismetLibrary::GetAllFortPlayerPawns(UObject* WorldContextObject, TArray<AFortPlayerPawn*>& OutFortPlayerPawns) {
}

TArray<AFortPlayerController*> UFortKismetLibrary::GetAllFortPlayerControllers(UObject* WorldContextObject, bool bIncludeNonSpectators, bool bIncludeSpectators) {
    return TArray<AFortPlayerController*>();
}

AFortPawn* UFortKismetLibrary::GetAimedAtEnemy(const AFortPlayerController* SourcePlayer, const float RectHalfWidth, const float RectHalfHeight, const float Range, const bool bTargetAIPawns) {
    return NULL;
}

AFortAIGoalManager* UFortKismetLibrary::GetAIGoalManager(const UObject* WorldContextObject) {
    return NULL;
}

AFortAIDirector* UFortKismetLibrary::GetAIDirector(UObject* WorldContextObject) {
    return NULL;
}

AFortTeamInfo* UFortKismetLibrary::GetActorTeamInfo(AActor* Actor) {
    return NULL;
}

uint8 UFortKismetLibrary::GetActorTeam(const AActor* Actor) {
    return 0;
}

bool UFortKismetLibrary::GetActorPvPTeamIndex(const AActor* Actor, uint8& TeamIndex) {
    return false;
}

void UFortKismetLibrary::FortShippingLog(UObject* WorldContextObject, const FString& inString, bool bLogAsWarning) {
}

FVector UFortKismetLibrary::FindStaticGroundLocationWithExtentAt(UWorld* World, const FVector& InLocation, const FQuat& ActorRotation, const FVector& ActorExtent, const AActor* IgnoreActor, float TraceStartZ, float TraceEndZ) {
    return FVector{};
}

FVector UFortKismetLibrary::FindStaticGroundLocationAt(UWorld* World, const FVector& InLocation, const AActor* IgnoreActor, float TraceStartZ, float TraceEndZ) {
    return FVector{};
}

FVector UFortKismetLibrary::FindGroundLocationAt(UWorld* World, const AActor* IgnoreActor, const FVector& InLocation, float TraceStartZ, float TraceEndZ, FName TraceName) {
    return FVector{};
}

TArray<FHitResult> UFortKismetLibrary::FilterTargetHitResultList(UObject* WorldContextObject, const FFortTargetFilter& Filter, const AActor* RequestingActor, const TArray<FHitResult>& HitResultsToFilter, bool& bAtLeastOneActorLeft) {
    return TArray<FHitResult>();
}

TArray<AActor*> UFortKismetLibrary::FilterTargetActorList(UObject* WorldContextObject, const FFortTargetFilter& Filter, const AActor* RequestingActor, const TArray<AActor*>& ActorsToFilter, bool& bAtLeastOneActorLeft) {
    return TArray<AActor*>();
}

bool UFortKismetLibrary::FilterSingleTargetHitResult(UObject* WorldContextObject, const FFortTargetFilter& Filter, const AActor* RequestingActor, const FHitResult& HitResult) {
    return false;
}

bool UFortKismetLibrary::FilterSingleTargetActor(UObject* WorldContextObject, const FFortTargetFilter& Filter, const AActor* RequestingActor, AActor* TargetActor) {
    return false;
}

FVector UFortKismetLibrary::ExtractSkeletalMeshScale(TSubclassOf<AActor> BlueprintClass) {
    return FVector{};
}

USkeletalMesh* UFortKismetLibrary::ExtractSkeletalMesh(TSubclassOf<AActor> BlueprintClass) {
    return NULL;
}

void UFortKismetLibrary::ExecuteClientEvent(UObject* WorldContextObject, FFortClientEventName EventType, UObject* EventSource, UObject* EventFocus) {
}

bool UFortKismetLibrary::EvaluateCurveTableRow(FCurveTableRowHandle CurveTableRowHandle, float InXY, float& OutXY, const FString& ContextString) {
    return false;
}

bool UFortKismetLibrary::EquipItemToQuickBarSlot(UObject* WorldContextObject, const UFortItemDefinition* ItemDefinition, EFortQuickBars QuickBarType, int32 SlotIndex) {
    return false;
}

FFortAbilitySetHandle UFortKismetLibrary::EquipFortAbilitySet(TScriptInterface<IAbilitySystemInterface> AbilitySystemInterfaceActor, UFortAbilitySet* AbilitySet, UObject* OverrideSourceObject) {
    return FFortAbilitySetHandle{};
}

bool UFortKismetLibrary::EqualEqual_UniqueNetIdReplUniqueNetIdRepl(const FUniqueNetIdRepl& A, const FUniqueNetIdRepl& B) {
    return false;
}

bool UFortKismetLibrary::EqualEqual_FFortDialogWaitingForLatentActionHandle(const FFortDialogExternalLatentActionHandle& A, const FFortDialogExternalLatentActionHandle& B) {
    return false;
}

void UFortKismetLibrary::EndWaitForConfirmationDialog(UObject* WorldContextObject, FFortDialogExternalLatentActionHandle& Handle) {
}

void UFortKismetLibrary::EnableTutorialHighlight(UObject* WorldContextObject, FName WidgetName) {
}

bool UFortKismetLibrary::EmptyQuickBarSlot(UObject* WorldContextObject, EFortQuickBars QuickBarType, int32 SlotIndex) {
    return false;
}

void UFortKismetLibrary::EffectContextAddSourceObject(FGameplayEffectContextHandle EffectContext, UObject* Src) {
}

float UFortKismetLibrary::Divide_Int64Int64UsingFloatingPoint(int32 A, int32 B) {
    return 0.0f;
}

void UFortKismetLibrary::DisableTutorialHighlight(UObject* WorldContextObject, FName WidgetName) {
}

bool UFortKismetLibrary::DeviceSupportsForceFeedback() {
    return false;
}

void UFortKismetLibrary::DebugSphereSendToAll(UObject* WorldContextObject, const FVector& Center, float Radius, int32 Segments, const FColor& Color, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness) {
}

void UFortKismetLibrary::DebugLineSendToAll(UObject* WorldContextObject, const FVector& LineStart, const FVector& LineEnd, const FColor& Color, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness) {
}

void UFortKismetLibrary::DebugCapsuleSendToAll(UObject* WorldContextObject, const FVector& Center, float HalfHeight, float Radius, const FQuat& Rotation, const FColor& Color, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness) {
}

void UFortKismetLibrary::DebugBoxSendToAll(UObject* WorldContextObject, const FVector& Center, const FVector& Extent, const FColor& Color, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness) {
}

UFortSpline* UFortKismetLibrary::CreateNewSplineObject(UObject* Outer) {
    return NULL;
}

void UFortKismetLibrary::CopyJerseyElements(UMaterialInstanceDynamic* SourceMID, UMaterialInstanceDynamic* TargetMID) {
}

void UFortKismetLibrary::CopyHideElements(UMaterialInstanceDynamic* SourceMID, UMaterialInstanceDynamic* TargetMID) {
}

float UFortKismetLibrary::ConvertToRealTime(UObject* WorldContextObject, float InGameTime) {
    return 0.0f;
}

float UFortKismetLibrary::ConvertToGameTime(UObject* WorldContextObject, float InRealTime) {
    return 0.0f;
}

void UFortKismetLibrary::CloseTalkingHead(UObject* WorldContextObject) {
}

void UFortKismetLibrary::ClearTutorialHighlights(UObject* WorldContextObject) {
}

bool UFortKismetLibrary::CheckPlayerLineOfSightToPawn(const AFortPlayerPawn* SourcePawn, const AFortPawn* TargetPawn) {
    return false;
}

void UFortKismetLibrary::ChangeTeam(AActor* PlayerToSwitch, uint8 NewTeam) {
}

void UFortKismetLibrary::BroadcastSoundAtLocation(UObject* WorldContextObject, USoundBase* InSound, FVector Location, float VolumeMultiplier, float PitchMultiplier) {
}

void UFortKismetLibrary::BroadcastSound(UObject* WorldContextObject, USoundBase* InSound, float VolumeMultiplier, float PitchMultiplier) {
}

bool UFortKismetLibrary::BroadcastPlayerImpactAtLocation(UObject* WorldContextObject, APlayerController* Player, const FVector& Position, float& Loudness, float& Duration, bool bRelativePosition) {
    return false;
}

void UFortKismetLibrary::BroadcastMessage(UObject* WorldContextObject, const FText& MESSAGE) {
}

void UFortKismetLibrary::BroadcastAbilitySpinThrustAtLocation(UObject* WorldContextObject, USoundBase* InSound, UObject* Instigator, const FVector& Position, float Radius, FName Tag) {
}

void UFortKismetLibrary::BroadcastAbilityImpactAtLocation(UObject* WorldContextObject, USoundBase* InSound, UObject* Instigator, const FVector& Position, float Radius, FName Tag, const bool bSubtractLocalNoise) {
}

TArray<AFortPlayerPawn*> UFortKismetLibrary::AuthorityGetFortPossessedPlayerPawns(UObject* WorldContextObject) {
    return TArray<AFortPlayerPawn*>();
}

bool UFortKismetLibrary::AreCampaignVehiclesEnabled() {
    return false;
}

bool UFortKismetLibrary::AreAthenaVehiclesEnabled() {
    return false;
}

FActiveGameplayEffectHandle UFortKismetLibrary::ApplyGlobalEnvironmentGameplayEffectToActor(AActor* EffectTargetActor, TSubclassOf<UGameplayEffect> GameplayEffect, int32 GameplayEffectLevel, FGameplayTagContainer AdditionalContextTags) {
    return FActiveGameplayEffectHandle{};
}

void UFortKismetLibrary::ApplyGlobalEnvironmentGameplayEffect(UObject* WorldContextObject, TSubclassOf<UGameplayEffect> GameplayEffect, int32 GameplayEffectLevel, FGameplayTagContainer AdditionalContextTags) {
}

void UFortKismetLibrary::ApplyGlobalEnvironmentDamageToActor(AActor* DamageTargetActor, float EnvironmentDamage, FGameplayTagContainer AdditionalContextTags, TSubclassOf<UGameplayEffect> EnvironmentDamageGE) {
}

FFortEncounterSettings UFortKismetLibrary::ApplyEncounterOptionOverridesFromWaveDataToEncounterSettings(const FTieredWaveSetData& WaveData, FFortEncounterSettings& EncounterSettings) {
    return FFortEncounterSettings{};
}

void UFortKismetLibrary::AddScoringEvent(AFortPlayerController* Controller, FGameplayTagContainer TargetTags) {
}

void UFortKismetLibrary::AddRegenItemToInventoryOwner(TScriptInterface<IFortInventoryOwnerInterface> InventoryOwner, const UFortWorldItemDefinition* RegenItemDefinition, int32 NumberToGive, bool bNotifyPlayer, bool bResetRegenCooldown) {
}

UFortKismetLibrary::UFortKismetLibrary() {
}

