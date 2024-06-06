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
    SavedHealthPct = 1;
    CurrentBuildingLevel = 0;
    MaximumBuildingLevel = 0;
    BuildingAttributeSetClass = UFortBuildingActorSet::StaticClass();
    BuildingAttributeSet = NULL;
    ReplicatedBuildingAttributeSet = NULL;
    MaxHealthInitializationValue = 1;
    AttributeInitLevelSource = EAttributeInitLevelSource::WorldDifficulty;
    AbilitySystemComponentCreationPolicy = EAbilitySystemComponentCreationPolicy::Never;
    PrimarySurfaceType = SurfaceType_Default;
    WeaponResponseType = EFortBaseWeaponDamage::Combat;
    OwnerPersistentID = 0;
    LifespanAfterDeath = 1;
    bUseMinLifeSpan = false;
    AbilitySystemComponent = NULL;
    ReplicatedAbilitySystemComponent = NULL;
    HealthBarIndicatorWidth = 1;
    HealthBarIndicatorVerticalOffset = 1;
    HealthBarIndicator = NULL;
    HealthBarIndicatorDifficultyRating = 0;
    ForceMetadataRelevant = 0;
    LastMetadataRelevant = 0;
    DynamicBuildingPlacementType = EDynamicBuildingPlacementType::DestroyIfColliding;
    NavigationObstacleOverride = ENavigationObstacleOverride::UseMeshSettings;
    bIsInvulnerable = false;
    bPreviewBuildingActor = false;
    bPlayedDying = false;
    bHasRegisteredActorStateAtLeastOnce = false;
    bDirtyForLevelRecordSave = false;
    bSavedMetaPropertiesProcessed = false;
    bUpgradeUsesSameClass = false;
    bDisplayLevelInInfoWidget = false;
    bAllowUpgradeRegardlessOfPlayerBuildLevel = false;
    bDisplayDamageNumbersInAthena = false;
    bUseFortHealthBarIndicator = false;
    bSurpressHealthBar = false;
    bCreateVerboseHealthLogs = false;
    bIsIndestructibleForTargetSelection = false;
    bDestroyed = false;
    bPersistToWorld = false;
    bRefreshFullSaveDataBeforeZoneSave = false;
    bBeingDragged = false;
    bRotateInPlaceGame = false;
    bBeingOneHitDisassembled = false;
    bBoundsAreInvalidForMelee = false;
    bIsNavigationModifier = false;
    bBlockNavigationLinks = true;
    bCanExportNavigationCollisions = false;
    bCanExportNavigationObstacle = true;
    bMirrorNavLinksX = false;
    bMirrorNavLinksY = false;
    bIgnoreMoveGoalCollisionRadius = false;
    bForceDisableRootNavigationRelevance = false;
    bForceAutomationPass = false;
    bForceAutomationPass_NavmeshOnTop = false;
    bForceAutomationPass_SmashableFlat = false;
    bCanBeSavedInCreativeVolume = true;
    bIsNavigationRelevant = false;
    bIsNavigationIndestructible = false;
    bBlockNavLinksInCell = false;
    bUseHotSpotAsMoveGoalReplacement = false;
    bHasCustomAttackLocation = false;
    bWorldReadyCalled = false;
    bBeingRotatedOrScaled = false;
    bBeingTranslated = false;
    bRotateInPlaceEditor = true;
    bEditorPlaced = true;
    bPlayerPlaced = false;
    bShouldTick = false;
    bUsesDayPhaseChange = false;
    bIsDynamic = false;
    bIsDynamicOnDedicatedServer = false;
    bIsDedicatedServer = false;
    bUseTickManager = true;
    bIsMovable = false;
    bRegisteredForDayPhaseChange = false;
    bForceDamagePing = false;
    bDestroyFoliageWhenPlaced = false;
    bObstructTrapTargeting = true;
    bInstantDeath = false;
    bDoNotBlockBuildings = true;
    bForceBlockBuildings = false;
    bDestroyOnPlayerBuildingPlacement = false;
    bUseCentroidForBlockBuildingsCheck = true;
    bPredictedBuildingActor = false;
    bIgnoreCollisionWithCriticalActors = false;
    bIsPlayerBuildable = false;
    bFireBuiltAndDestroyedEvents = true;
    bStructurallySupportOverlappingActors = false;
    bAllowInteract = false;
    bShowFirstInteractPrompt = true;
    bShowSecondInteractPrompt = false;
    bAllowHostileBlueprintInteraction = false;
    bEndAbilitiesOnDeath = true;
    bAlwaysUseNetCullDistanceSquaredForRelevancy = false;
    bHighlightDirty = false;
    bCollisionBlockedByPawns = false;
    bAllowTeamDamage = true;
    bIgnoreAffiliationInteractHighlight = false;
    bSuppressInteractionWidget = false;
    BuildingType = EFortBuildingType::None;
    Team = EFortTeam::Spectator;
    TeamIndex = 0;
    InteractionText = FText::FromString(TEXT("Press E to Edit"));
    AssociatedMissionParam = NULL;
    OriginatingPlacementActor = NULL;
    BRMinDrawDistance = 1;
    BRMaxDrawDistance = 1;
    StWMinDrawDistance = 1;
    StWMaxDrawDistance = 1;
    DataVersion = 0;
    LastTakeHitTimeTimeout = 1;
    PlayHitSound = NULL;
    CullDistance = 1;
    SnapGridSize = 1;
    VertSnapGridSize = 1;
    HotSpotConfig = NULL;
    BaselineScale = 1;
    AccumulatedDeltaSinceLastVisualsTick = 1;
    ProjectileMovementComponent = NULL;
    bCanBeMarked = false;
    bBlockMarking = true;
}

