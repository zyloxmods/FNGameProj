#include "BuildingActor.h"
#include "FortBuildingActorSet.h"
#include "Net/UnrealNetwork.h"

bool ABuildingActor::UseDefaultHealthBar_Implementation() const {
    return false;
}

void ABuildingActor::SnapDmgVisualsToCurrentHealth() {
}

void ABuildingActor::SilentDie() {
}

bool ABuildingActor::ShouldDie_Implementation(float Damage, AController* EventInstigator, AActor* DamageCauser) {
    return false;
}

void ABuildingActor::SetTeam(uint8 InTeam) {
}

void ABuildingActor::SetSuppressHealthBar(bool bNewValue) {
}

void ABuildingActor::SetQuestHighlight(bool Enabled) {
}

void ABuildingActor::SetNavigationModifier(bool bEnableModifier) {
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

void ABuildingActor::Resave() {
}

void ABuildingActor::RemoveEditorOnlyInstanceGameplayTags(const FGameplayTagContainer& TagsToRemove) {
}

void ABuildingActor::RemoveAbilitySystemComponentAfterAutoBuildIfFullHealth() {
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

void ABuildingActor::OnRep_bForceReplayRollback() {
}

void ABuildingActor::OnRep_bCollisionBlockedByPawns() {
}

void ABuildingActor::OnRep_AbilitySystemComponent() {
}




void ABuildingActor::OnDayPhaseChanged_Implementation(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation) {
}



void ABuildingActor::OnBuildingActorInitialized_Implementation(EFortBuildingInitializationReason InitializationReason, EFortBuildingPersistentState BuildingPersistentState) {
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







void ABuildingActor::AddEditorOnlyInstanceGameplayTags(const FGameplayTagContainer& NewTags) {
}

void ABuildingActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildingActor, OwnerPersistentID);
    DOREPLIFETIME(ABuildingActor, InitialOverlappingVehicles);
    DOREPLIFETIME(ABuildingActor, CurrentBuildingLevel);
    DOREPLIFETIME(ABuildingActor, ReplicatedBuildingAttributeSet);
    DOREPLIFETIME(ABuildingActor, ReplicatedAbilitySystemComponent);
    DOREPLIFETIME(ABuildingActor, HealthBarIndicatorDifficultyRating);
    DOREPLIFETIME(ABuildingActor, ForceMetadataRelevant);
    DOREPLIFETIME(ABuildingActor, bIsInvulnerable);
    DOREPLIFETIME(ABuildingActor, bDestroyed);
    DOREPLIFETIME(ABuildingActor, bPlayerPlaced);
    DOREPLIFETIME(ABuildingActor, bDoNotBlockBuildings);
    DOREPLIFETIME(ABuildingActor, bForceBlockBuildings);
    DOREPLIFETIME(ABuildingActor, bDestroyOnPlayerBuildingPlacement);
    DOREPLIFETIME(ABuildingActor, bUseCentroidForBlockBuildingsCheck);
    DOREPLIFETIME(ABuildingActor, bInstantDeath);
    DOREPLIFETIME(ABuildingActor, bForceReplayRollback);
    DOREPLIFETIME(ABuildingActor, TeamIndex);
    DOREPLIFETIME(ABuildingActor, bCollisionBlockedByPawns);
    DOREPLIFETIME(ABuildingActor, AssociatedMissionParam);
    DOREPLIFETIME(ABuildingActor, OriginatingPlacementActor);
    DOREPLIFETIME(ABuildingActor, CustomState);
    DOREPLIFETIME(ABuildingActor, BaselineScale);
}

ABuildingActor::ABuildingActor() {
    this->OwnerPersistentID = -1;
    this->SavedHealthPct = 1.00f;
    this->CurrentBuildingLevel = 0;
    this->MaximumBuildingLevel = 0;
    this->BuildingAttributeSetClass = UFortBuildingActorSet::StaticClass();
    this->BuildingAttributeSet = NULL;
    this->ReplicatedBuildingAttributeSet = NULL;
    this->AttributeInitLevelSource = EAttributeInitLevelSource::WorldDifficulty;
    this->AbilitySystemComponentCreationPolicy = EAbilitySystemComponentCreationPolicy::Never;
    this->PrimarySurfaceType = SurfaceType_Default;
    this->WeaponResponseType = EFortBaseWeaponDamage::Combat;
    this->LifespanAfterDeath = 5.00f;
    this->AbilitySystemComponent = NULL;
    this->ReplicatedAbilitySystemComponent = NULL;
    this->HealthBarIndicatorWidth = 75.00f;
    this->HealthBarIndicatorVerticalOffset = 0.00f;
    this->HealthBarIndicator = NULL;
    this->HealthBarIndicatorDifficultyRating = -1;
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
    this->bUseTickManager = true;
    this->bIsMovable = false;
    this->bRegisteredForDayPhaseChange = false;
    this->bForceDamagePing = false;
    this->bDestroyFoliageWhenPlaced = false;
    this->bObstructTrapTargeting = true;
    this->bPredictedBuildingActor = false;
    this->bDoNotBlockBuildings = true;
    this->bForceBlockBuildings = false;
    this->bIgnoreCollisionWithCriticalActors = false;
    this->bDestroyOnPlayerBuildingPlacement = false;
    this->bUseCentroidForBlockBuildingsCheck = true;
    this->bIsPlayerBuildable = false;
    this->bFireBuiltAndDestroyedEvents = true;
    this->bStructurallySupportOverlappingActors = false;
    this->bAllowInteract = false;
    this->bAllowHostileBlueprintInteraction = false;
    this->bInstantDeath = false;
    this->bEndAbilitiesOnDeath = true;
    this->InteractionText = FText::FromString(TEXT("Press E to Edit"));
    this->bAlwaysUseNetCullDistanceSquaredForRelevancy = false;
    this->bHighlightDirty = false;
    this->bForceReplayRollback = false;
    this->BuildingType = EFortBuildingType::None;
    this->Team = EFortTeam::Spectator;
    this->TeamIndex = 0;
    this->bIgnoreAffiliationInteractHighlight = false;
    this->bSuppressInteractionWidget = false;
    this->bCollisionBlockedByPawns = false;
    this->AssociatedMissionParam = NULL;
    this->OriginatingPlacementActor = NULL;
    this->BRMinDrawDistance = 0.00f;
    this->BRMaxDrawDistance = 0.00f;
    this->StWMinDrawDistance = 0.00f;
    this->StWMaxDrawDistance = 0.00f;
    this->DataVersion = 0;
    this->LastTakeHitTimeTimeout = 0.00f;
    this->PlayHitSound = NULL;
    this->CullDistance = 8000.00f;
    this->SnapGridSize = 512.00f;
    this->VertSnapGridSize = 384.00f;
    this->ComponentTypesWhitelistedForReplication.AddDefaulted(2);
    this->HotSpotConfig = NULL;
    this->VolumeSpawnedBy = NULL;
    this->BaselineScale = 1.00f;
    this->AccumulatedDeltaSinceLastVisualsTick = 0.00f;
}

