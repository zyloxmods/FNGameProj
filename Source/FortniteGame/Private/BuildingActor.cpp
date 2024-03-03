#include "BuildingActor.h"
#include "FortBuildingActorSet.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

bool ABuildingActor::UseDefaultHealthBar_Implementation() const {
    return false;
}

void ABuildingActor::SnapDmgVisualsToCurrentHealth() {
}

void ABuildingActor::SilentDie(const bool bPropagateSilentDeath) {
}

bool ABuildingActor::ShouldDisplayMobileInteractPrompt() const {
    return false;
}

bool ABuildingActor::ShouldDisplayDamageNumbers_Implementation() const {
    return false;
}

bool ABuildingActor::ShouldDie_Implementation(float Damage, AController* EventInstigator, AActor* DamageCauser) {
    return false;
}

void ABuildingActor::SetUsesDayPhaseChange(bool bUseDayPhase) {
}

void ABuildingActor::SetTeam(uint8 InTeam) {
}

void ABuildingActor::SetSuppressHealthBar(bool bNewValue) {
}

void ABuildingActor::SetQuestHighlight(bool Enabled) {
}

void ABuildingActor::SetNavigationModifier(bool bEnableModifier) {
}

void ABuildingActor::SetNavigationIndestructible(const bool bNavIndestructible) {
}

void ABuildingActor::SetHealthBarIndicatorDifficultyRating(int32 InDisplayLevel) {
}

void ABuildingActor::SetHealth(float NewHealth) {
}

void ABuildingActor::SetCustomState(const FString& NewState) {
}

void ABuildingActor::SetCanExportNavigationObstacle(bool InCanExportNavigationObstacle) {
}

void ABuildingActor::SetCanBeSavedToCreativeVolume(bool bCanBeSaved) {
}

void ABuildingActor::SetBRDrawDistances(float NewBRMinDrawDistance, float NewBRMaxDrawDistance) {
}

void ABuildingActor::Resave() {
}

void ABuildingActor::RemoveEditorOnlyInstanceGameplayTags(const FGameplayTagContainer& TagsToRemove) {
}

void ABuildingActor::RemoveAbilitySystemComponentAfterAutoBuildIfFullHealth() {
}

void ABuildingActor::RefreshRemovedFoliageAroundBounds(bool bUseNonCollidingBounds) {
}


void ABuildingActor::PlacedByPlacementTool_Implementation() {
}



void ABuildingActor::OnRep_Team() {
}

void ABuildingActor::OnRep_InstantDeath() {
}

void ABuildingActor::OnRep_InitialOverlappingVehicles() {
}

void ABuildingActor::OnRep_CustomState() {
}

void ABuildingActor::OnRep_CurrentBuildingLevel() {
}

void ABuildingActor::OnRep_BuildingAttributeSet() {
}

void ABuildingActor::OnRep_bCollisionBlockedByPawns() {
}

void ABuildingActor::OnRep_AbilitySystemComponent() {
}




void ABuildingActor::OnDayPhaseChanged_Implementation(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation) {
}



void ABuildingActor::OnBuildingActorInitialized_Implementation(EFortBuildingInitializationReason InitializationReason, EFortBuildingPersistentState BuildingPersistentState) {
}

ABuildingActor* ABuildingActor::K2_SpawnBuildingActor(const UObject* WorldContextObject, TSubclassOf<ABuildingActor> Class, const FTransform& Transform) {
    return NULL;
}

bool ABuildingActor::IsPlayerBuilt() const {
    return false;
}

bool ABuildingActor::IsDamaged() const {
    return false;
}

bool ABuildingActor::IsAcceptablePositionForPlacement_Implementation(const FVector& InLocation, const FRotator& InRotation, AFortDecoTool* DecoTool, bool bIsCDO, FText& OutFailureReason) const {
    return false;
}

void ABuildingActor::InitializeKismetSpawnedBuildingActor(ABuildingActor* BuildingOwner, AFortPlayerController* SpawningController, bool bUsePlayerBuildAnimations) {
}

bool ABuildingActor::HasHealthLeft() const {
    return false;
}

void ABuildingActor::HandleDestroyed() {
}

float ABuildingActor::GetShieldPercent() const {
    return 0.0f;
}

float ABuildingActor::GetShieldOrHealthPercent() {
    return 0.0f;
}

float ABuildingActor::GetShield() const {
    return 0.0f;
}

AFortPlayerState* ABuildingActor::GetOwningPlayerState() const {
    return NULL;
}

AController* ABuildingActor::GetOwningController() const {
    return NULL;
}

float ABuildingActor::GetMissingHealth() const {
    return 0.0f;
}

float ABuildingActor::GetMaxShield() const {
    return 0.0f;
}

float ABuildingActor::GetMaxHealth() const {
    return 0.0f;
}

FName ABuildingActor::GetLootTierGroupOverride() {
    return NAME_None;
}

float ABuildingActor::GetHealthPercent() const {
    return 0.0f;
}

float ABuildingActor::GetHealth() const {
    return 0.0f;
}

void ABuildingActor::GetEditorTestTags(FGameplayTagContainer& TagContainer) const {
}

FString ABuildingActor::GetCustomState() const {
    return TEXT("");
}

int32 ABuildingActor::GetCurrentBuildingLevel() const {
    return 0;
}

FVector ABuildingActor::GetCentroid() const {
    return FVector{};
}

void ABuildingActor::GameplayCue_InstantDeath(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters) {
}

void ABuildingActor::GameplayCue_Healing(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters) {
}

void ABuildingActor::GameplayCue_Damage(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters) {
}

void ABuildingActor::ForceBuildingHealth(float NewHealth) {
}


void ABuildingActor::ClearPlayedDying() {
}





bool ABuildingActor::BlueprintGetInteractionTime_Implementation(const AFortPawn* InteractingPawn, float& OutInteractionTime, const EInteractionBeingAttempted InteractionBeingAttempted) const {
    return false;
}



void ABuildingActor::BlueprintDie(FGameplayTag DeathReason, AController* Killer, AActor* DamageCauser) {
}


void ABuildingActor::AddEditorOnlyInstanceGameplayTags(const FGameplayTagContainer& NewTags) {
}

void ABuildingActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildingActor, InitialOverlappingVehicles);
    DOREPLIFETIME(ABuildingActor, CurrentBuildingLevel);
    DOREPLIFETIME(ABuildingActor, ReplicatedBuildingAttributeSet);
    DOREPLIFETIME(ABuildingActor, OwnerPersistentID);
    DOREPLIFETIME(ABuildingActor, ReplicatedAbilitySystemComponent);
    DOREPLIFETIME(ABuildingActor, HealthBarIndicatorDifficultyRating);
    DOREPLIFETIME(ABuildingActor, ForceMetadataRelevant);
    DOREPLIFETIME(ABuildingActor, bIsInvulnerable);
    DOREPLIFETIME(ABuildingActor, bDestroyed);
    DOREPLIFETIME(ABuildingActor, bPlayerPlaced);
    DOREPLIFETIME(ABuildingActor, bInstantDeath);
    DOREPLIFETIME(ABuildingActor, bDoNotBlockBuildings);
    DOREPLIFETIME(ABuildingActor, bForceBlockBuildings);
    DOREPLIFETIME(ABuildingActor, bDestroyOnPlayerBuildingPlacement);
    DOREPLIFETIME(ABuildingActor, bUseCentroidForBlockBuildingsCheck);
    DOREPLIFETIME(ABuildingActor, bCollisionBlockedByPawns);
    DOREPLIFETIME(ABuildingActor, TeamIndex);
    DOREPLIFETIME(ABuildingActor, AssociatedMissionParam);
    DOREPLIFETIME(ABuildingActor, OriginatingPlacementActor);
    DOREPLIFETIME(ABuildingActor, CustomState);
    DOREPLIFETIME(ABuildingActor, BaselineScale);
}

ABuildingActor::ABuildingActor() {
    this->SavedHealthPct = 1;
    this->CurrentBuildingLevel = 0;
    this->MaximumBuildingLevel = 0;
    this->BuildingAttributeSetClass = UFortBuildingActorSet::StaticClass();
    this->BuildingAttributeSet = NULL;
    this->ReplicatedBuildingAttributeSet = NULL;
    this->MaxHealthInitializationValue = 1;
    this->AttributeInitLevelSource = EAttributeInitLevelSource::WorldDifficulty;
    this->AbilitySystemComponentCreationPolicy = EAbilitySystemComponentCreationPolicy::Never;
    this->PrimarySurfaceType = SurfaceType_Default;
    this->WeaponResponseType = EFortBaseWeaponDamage::Combat;
    this->OwnerPersistentID = 0;
    this->LifespanAfterDeath = 1;
    this->bUseMinLifeSpan = false;
    this->AbilitySystemComponent = NULL;
    this->ReplicatedAbilitySystemComponent = NULL;
    this->HealthBarIndicatorWidth = 1;
    this->HealthBarIndicatorVerticalOffset = 1;
    this->HealthBarIndicator = NULL;
    this->HealthBarIndicatorDifficultyRating = 0;
    this->ForceMetadataRelevant = 0;
    this->LastMetadataRelevant = 0;
    this->DynamicBuildingPlacementType = EDynamicBuildingPlacementType::DestroyIfColliding;
    this->NavigationObstacleOverride = ENavigationObstacleOverride::UseMeshSettings;
    this->bIsInvulnerable = false;
    this->bPreviewBuildingActor = false;
    this->bPlayedDying = false;
    this->bHasRegisteredActorStateAtLeastOnce = false;
    this->bDirtyForLevelRecordSave = false;
    this->bSavedMetaPropertiesProcessed = false;
    this->bUpgradeUsesSameClass = false;
    this->bDisplayLevelInInfoWidget = false;
    this->bAllowUpgradeRegardlessOfPlayerBuildLevel = false;
    this->bDisplayDamageNumbersInAthena = false;
    this->bUseFortHealthBarIndicator = false;
    this->bSurpressHealthBar = false;
    this->bCreateVerboseHealthLogs = false;
    this->bIsIndestructibleForTargetSelection = false;
    this->bDestroyed = false;
    this->bPersistToWorld = false;
    this->bRefreshFullSaveDataBeforeZoneSave = false;
    this->bBeingDragged = false;
    this->bRotateInPlaceGame = false;
    this->bBeingOneHitDisassembled = false;
    this->bBoundsAreInvalidForMelee = false;
    this->bIsNavigationModifier = false;
    this->bBlockNavigationLinks = true;
    this->bCanExportNavigationCollisions = false;
    this->bCanExportNavigationObstacle = true;
    this->bMirrorNavLinksX = false;
    this->bMirrorNavLinksY = false;
    this->bIgnoreMoveGoalCollisionRadius = false;
    this->bForceDisableRootNavigationRelevance = false;
    this->bForceAutomationPass = false;
    this->bForceAutomationPass_NavmeshOnTop = false;
    this->bForceAutomationPass_SmashableFlat = false;
    this->bCanBeSavedInCreativeVolume = true;
    this->bIsNavigationRelevant = false;
    this->bIsNavigationIndestructible = false;
    this->bBlockNavLinksInCell = false;
    this->bUseHotSpotAsMoveGoalReplacement = false;
    this->bHasCustomAttackLocation = false;
    this->bWorldReadyCalled = false;
    this->bBeingRotatedOrScaled = false;
    this->bBeingTranslated = false;
    this->bRotateInPlaceEditor = true;
    this->bEditorPlaced = true;
    this->bPlayerPlaced = false;
    this->bShouldTick = false;
    this->bUsesDayPhaseChange = false;
    this->bIsDynamic = false;
    this->bIsDynamicOnDedicatedServer = false;
    this->bIsDedicatedServer = false;
    this->bUseTickManager = true;
    this->bIsMovable = false;
    this->bRegisteredForDayPhaseChange = false;
    this->bForceDamagePing = false;
    this->bDestroyFoliageWhenPlaced = false;
    this->bObstructTrapTargeting = true;
    this->bInstantDeath = false;
    this->bDoNotBlockBuildings = true;
    this->bForceBlockBuildings = false;
    this->bDestroyOnPlayerBuildingPlacement = false;
    this->bUseCentroidForBlockBuildingsCheck = true;
    this->bPredictedBuildingActor = false;
    this->bIgnoreCollisionWithCriticalActors = false;
    this->bIsPlayerBuildable = false;
    this->bFireBuiltAndDestroyedEvents = true;
    this->bStructurallySupportOverlappingActors = false;
    this->bAllowInteract = false;
    this->bShowFirstInteractPrompt = true;
    this->bShowSecondInteractPrompt = false;
    this->bAllowHostileBlueprintInteraction = false;
    this->bEndAbilitiesOnDeath = true;
    this->bAlwaysUseNetCullDistanceSquaredForRelevancy = false;
    this->bHighlightDirty = false;
    this->bCollisionBlockedByPawns = false;
    this->bAllowTeamDamage = true;
    this->bIgnoreAffiliationInteractHighlight = false;
    this->bSuppressInteractionWidget = false;
    this->BuildingType = EFortBuildingType::None;
    this->Team = EFortTeam::Spectator;
    this->TeamIndex = 0;
    this->InteractionText = FText::FromString(TEXT("Press E to Edit"));
    this->AssociatedMissionParam = NULL;
    this->OriginatingPlacementActor = NULL;
    this->BRMinDrawDistance = 1;
    this->BRMaxDrawDistance = 1;
    this->StWMinDrawDistance = 1;
    this->StWMaxDrawDistance = 1;
    this->DataVersion = 0;
    this->LastTakeHitTimeTimeout = 1;
    this->PlayHitSound = NULL;
    this->CullDistance = 1;
    this->SnapGridSize = 1;
    this->VertSnapGridSize = 1;
    this->HotSpotConfig = NULL;
    this->BaselineScale = 1;
    this->AccumulatedDeltaSinceLastVisualsTick = 1;
    this->ProjectileMovementComponent = NULL;
    this->bCanBeMarked = false;
    this->bBlockMarking = true;
}

