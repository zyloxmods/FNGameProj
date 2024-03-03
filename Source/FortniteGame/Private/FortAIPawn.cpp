#include "FortAIPawn.h"
#include "NavFilters/RecastFilter_UseDefaultArea.h"
#include "FortAIGoalComponent.h"
#include "FortAbilitySystemComponent.h"
#include "Net/UnrealNetwork.h"

void AFortAIPawn::TurnOnSleepingOptimizations() {
}

void AFortAIPawn::TriggerNoWeaponSpeech() {
}

bool AFortAIPawn::ShouldUseFiringCapsuleCollision_Implementation() {
    return false;
}

bool AFortAIPawn::ShouldUpdateSkeletalMesh_Implementation() {
    return false;
}

bool AFortAIPawn::ShouldApplyBuildingHitEffect(float Damage, FVector Location, FHitResult HitInfo, bool bPlayerPlaced) const {
    return false;
}

void AFortAIPawn::SetWeaponCollisionComponent(UShapeComponent* InWeaponCollisionComponent) {
}

void AFortAIPawn::SetUsesDBNO(bool bInUsesDBNO) {
}

void AFortAIPawn::SetSkinColor(FLinearColor NewSkinColor, float NewSkinBrightness) {
}

void AFortAIPawn::SetShouldStartSleeping(bool bHintStartSleeping) {
}

void AFortAIPawn::SetOverridenScoreDistribution(const EScoreDistributionType InOverriddenScoreDistribution) {
}

void AFortAIPawn::SetOverridenScore(int32 InOverriddenScore) {
}

void AFortAIPawn::SetMovementUrgency(TEnumAsByte<EFortMovementUrgency::Type> Urgency) {
}

void AFortAIPawn::SetMinSignificanceForAnimationCurves(float MinSignificance) {
}

void AFortAIPawn::SetMinimumAILOD(EFortAILODLevel MinimumAILOD) {
}

void AFortAIPawn::SetMiniMapViewableDistance(float NewMinimapViewableDistance) {
}

void AFortAIPawn::SetIsCharging(bool bNewIsCharging) {
}

void AFortAIPawn::SetForceBossSignificance(bool bEnabled) {
}

void AFortAIPawn::SetEyeColor(FLinearColor NewEyeColor, float NewEyeBrightness) {
}

void AFortAIPawn::SetEncounterInfo(UFortAIEncounterInfo* InEncounterInfo) {
}

void AFortAIPawn::SetDisplayName(const FText& Name) {
}

void AFortAIPawn::SetDefenderTrap(ABuildingTrapDefender* InDefenderTrap) {
}

void AFortAIPawn::SetCurrentAimTarget(AActor* AimTarget) {
}

void AFortAIPawn::SetCollisionProfileName(FName InCollisionProfileName) {
}

void AFortAIPawn::SetCanSleep(bool InCanSleep) {
}

void AFortAIPawn::SetCanInteract(bool CanInteract) {
}

void AFortAIPawn::SetBlockCollisionWithOtherAI(bool bInEnableBlockingCollisionWithOtherAI) {
}

void AFortAIPawn::SetAIType(EFortressAIType InAIType) {
}

void AFortAIPawn::SetAIRotationRate(const FRotator& AIRotationRate) {
}

void AFortAIPawn::SetAIFocalPoint(AActor* FocusTarget, FVector FocalPoint, bool bUseAttackingPriority) {
}

void AFortAIPawn::ReviveFromDBNO() {
}

void AFortAIPawn::ResetAIRotationRateToDefault() {
}

void AFortAIPawn::PlayAdditiveHitReactsNative(const FVector& HitDirection, UAnimMontage* NewAnimMontage) {
}








void AFortAIPawn::OnSleepingAIsFloorBuildingActorDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

void AFortAIPawn::OnRep_UpgradeUIData() {
}

void AFortAIPawn::OnRep_TetheredFollower() {
}

void AFortAIPawn::OnRep_SharedAnim() {
}

void AFortAIPawn::OnRep_ReplicatedAnimMontage() {
}

void AFortAIPawn::OnRep_MinimapViewableDistance() {
}

void AFortAIPawn::OnRep_Inventory() {
}

void AFortAIPawn::OnRep_EnableBlockingCollisionWithOtherAI() {
}

void AFortAIPawn::OnRep_CurrentAIRotationRate() {
}

void AFortAIPawn::OnRep_CanInteract(bool bOldCanInteract) {
}

void AFortAIPawn::OnRep_bIsSleeping() {
}

void AFortAIPawn::OnRep_AttributeProxy() {
}

void AFortAIPawn::OnRep_AppearanceOverrideEntryIndex() {
}


FVector AFortAIPawn::OnLaunchCharacter_Implementation(FVector LaunchVelocity, bool bXYOverride, bool bZOverride) {
    return FVector{};
}




void AFortAIPawn::OnEncounterSpawnEnableRangedAttacking() {
}

void AFortAIPawn::OnEncounterSpawnEnableMeleeAttacking() {
}







void AFortAIPawn::NetMulticast_BatchedDamageCues_Implementation(FFortAIBatchedDamageCues Data) {
}

UFortItem* AFortAIPawn::K2_GetDefenderItem() const {
    return NULL;
}

UFortItem* AFortAIPawn::K2_FindExistingItemForDefinition(const UFortItemDefinition* ItemDefinition, bool bInStorageVault) const {
    return NULL;
}

bool AFortAIPawn::IsInsideTetherBounds(bool bUseRelaxedTetherBounds) const {
    return false;
}

bool AFortAIPawn::IsInCombat() const {
    return false;
}

bool AFortAIPawn::IsDefender() const {
    return false;
}

bool AFortAIPawn::HasTether() const {
    return false;
}

void AFortAIPawn::GrabPickupCustomized(AFortPickup* Pickup, float FlyTime) {
}

void AFortAIPawn::GrabPickup(AFortPickup* Pickup) {
}

void AFortAIPawn::GiveAmmo(const int32 AmmoQuantity) {
}

bool AFortAIPawn::GetUsesDBNO() const {
    return false;
}

FRotator AFortAIPawn::GetSpawnRotation() const {
    return FRotator{};
}

int32 AFortAIPawn::GetSpawnPointValue() const {
    return 0;
}

FVector AFortAIPawn::GetSpawnLocation() const {
    return FVector{};
}

int32 AFortAIPawn::GetScoreWithoutMutliplierValue() const {
    return 0;
}

int32 AFortAIPawn::GetScoreValue() const {
    return 0;
}

EScoreDistributionType AFortAIPawn::GetScoreDistribution() const {
    return EScoreDistributionType::Default;
}

TEnumAsByte<EFortMovementUrgency::Type> AFortAIPawn::GetMovementUrgency(AFortAIPawn* FortAIPawn) {
    return EFortMovementUrgency::None;
}

TEnumAsByte<EFortMovementStyle::Type> AFortAIPawn::GetMovementStyle(const AFortAIPawn* FortAIPawn) {
    return EFortMovementStyle::Running;
}

UFortItem* AFortAIPawn::GetInventoryItem(FGuid ItemGuid) const {
    return NULL;
}

USoundBase* AFortAIPawn::GetImpactPhysicalSurfaceSound(const FHitResult& Impact) const {
    return NULL;
}

float AFortAIPawn::GetGroundSpeedForUrgency(AFortAIPawn* FortAIPawn, TEnumAsByte<EFortMovementUrgency::Type> Urgency) {
    return 0.0f;
}

float AFortAIPawn::GetDifficultyRating() const {
    return 0.0f;
}

float AFortAIPawn::GetDifficultyLevel() const {
    return 0.0f;
}

FString AFortAIPawn::GetDefenderItemInstanceId() const {
    return TEXT("");
}

AActor* AFortAIPawn::GetCurrentAimTarget() const {
    return NULL;
}

EFortCustomGender AFortAIPawn::GetCharacterGender() const {
    return EFortCustomGender::Invalid;
}

void AFortAIPawn::ForceKillNoDBNO() {
}

void AFortAIPawn::FinishedEncounterSpawn() {
}

void AFortAIPawn::FastSharedReplication_Implementation(const FFortAISharedRepMovement& SharedRepMovement) {
}

void AFortAIPawn::DropAllItems(bool bSpawnPickups) {
}

void AFortAIPawn::ClearAIFocalPoint(bool bUseAttackingPriority) {
}


bool AFortAIPawn::CanHitTargetWithAbility(FGameplayTagContainer GameplayAbilityTag, AActor* CanHitTarget, bool bUseIdealYawRotationToTarget) {
    return false;
}

void AFortAIPawn::AddUnreachablePickup(AFortPickup* Pickup) {
}

void AFortAIPawn::AddFortAbilitySet(UFortAbilitySet* FortAbilitySet) {
}

void AFortAIPawn::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAIPawn, AttributeReplicationProxy);
    DOREPLIFETIME(AFortAIPawn, RepAnimMontageInfo);
    DOREPLIFETIME(AFortAIPawn, RepSharedAnimInfo);
    DOREPLIFETIME(AFortAIPawn, SimulatedProxyGameplayCues);
    DOREPLIFETIME(AFortAIPawn, bHasGoalActor);
    DOREPLIFETIME(AFortAIPawn, bFrozen);
    DOREPLIFETIME(AFortAIPawn, bIsCharging);
    DOREPLIFETIME(AFortAIPawn, bIsCowering);
    DOREPLIFETIME(AFortAIPawn, bEnableBlockingCollisionWithOtherAI);
    DOREPLIFETIME(AFortAIPawn, FastReplicationMinimalReplicationTags);
    DOREPLIFETIME(AFortAIPawn, FastReplicationMinimalGameplayCueProxy);
    DOREPLIFETIME(AFortAIPawn, AIDifficultyLevel);
    DOREPLIFETIME(AFortAIPawn, SpawnRift);
    DOREPLIFETIME(AFortAIPawn, MinimapGoalByTagColorIndex);
    DOREPLIFETIME(AFortAIPawn, bIsSleeping);
    DOREPLIFETIME(AFortAIPawn, bShouldStartSleeping);
    DOREPLIFETIME(AFortAIPawn, bCanLookAtGoal);
    DOREPLIFETIME(AFortAIPawn, bCanInteract);
    DOREPLIFETIME(AFortAIPawn, MovementUrgency);
    DOREPLIFETIME(AFortAIPawn, AIType);
    DOREPLIFETIME(AFortAIPawn, Team);
    DOREPLIFETIME(AFortAIPawn, UpgradeUIData);
    DOREPLIFETIME(AFortAIPawn, PlayerManager);
    DOREPLIFETIME(AFortAIPawn, DefenderItemInstanceId);
    DOREPLIFETIME(AFortAIPawn, DefenderSquadId);
    DOREPLIFETIME(AFortAIPawn, DefenderPlacedTime);
    DOREPLIFETIME(AFortAIPawn, CurrentAIRotationRate);
    DOREPLIFETIME(AFortAIPawn, Inventory);
    DOREPLIFETIME(AFortAIPawn, AppearanceOverrideEntryIndex);
    DOREPLIFETIME(AFortAIPawn, MiniMapViewableDistance);
    DOREPLIFETIME(AFortAIPawn, SpawnModifierDefinitions);
    DOREPLIFETIME(AFortAIPawn, CurrentAimTarget);
    DOREPLIFETIME(AFortAIPawn, TetheredFollower);
    DOREPLIFETIME(AFortAIPawn, bIsTetheredBoosting);
}

AFortAIPawn::AFortAIPawn() {
    this->bAttacking = false;
    this->bDied = false;
    this->bHitReact = false;
    this->bFullBodyHitReact = false;
    this->bDancing = false;
    this->bRangedAttacking = false;
    this->bHasGoalActor = false;
    this->bFrozen = false;
    this->bUseSharedAnimation = false;
    this->bNeedsDeathNotification = true;
    this->bKilledOrDowned = false;
    this->bDespawnedDueToInactivity = false;
    this->bNotifySpawnRift = true;
    this->bUsesDBNO = false;
    this->bHasInventory = false;
    this->bShouldTossInventoryOnDeath = false;
    this->bUseDefenderInventoryManagement = true;
    this->bIgnoreDefender = false;
    this->bTrackNearbyPickups = false;
    this->bIsCharging = false;
    this->bIsCowering = false;
    this->bCanShowMinimapIndicator = true;
    this->bShowMinimapFarOffDirectionArrow = false;
    this->bHasEngaged = false;
    this->bIsAlwaysGameplayRelevant = false;
    this->bIsDebugSpawnedAI = false;
    this->bEncounterExpectedLifespanExpired = false;
    this->bEnableBlockingCollisionWithOtherAI = true;
    this->bSetMiniMapIconRotation = false;
    this->bHasDroppedLoot = false;
    this->bUseFastAbilityReplication = false;
    this->bUseAIGoalComponent = true;
    this->AIDifficultyLevel = 1;
    this->LevelRatingDisplayType = EFortAILevelRatingDisplayType::DisplayRatingBasedOnDifficulty;
    this->EncounterInfo = NULL;
    this->SpawnSetIndex = 0;
    this->EnemyIndexInSpawnGroup = 0;
    this->FinishEncounterSpawnFallbackTime = 1;
    this->EncounterSpawnDisableRangedAttackingTime = 1;
    this->EncounterSpawnDisableMeleeAttackingTime = 1;
    this->SpawnRift = NULL;
    this->SpawnSourceActor = NULL;
    this->AIGoalComponentClass = UFortAIGoalComponent::StaticClass();
    this->MaxTimeAllowedOutsideTether = 1;
    this->BehaviorTree = NULL;
    this->DefaultNavFilter = NULL;
    this->HuntingNavFilter = URecastFilter_UseDefaultArea::StaticClass();
    this->DBNOInteractionDuration = 1;
    this->MovementStyles[0] = EFortMovementStyle::Walking;
    this->MovementStyles[1] = EFortMovementStyle::Walking;
    this->MovementStyles[2] = EFortMovementStyle::Walking;
    this->MovementStyles[3] = EFortMovementStyle::Walking;
    this->UpdateNearbyPickupFrequency = 1;
    this->bUsePickupDirectionOverride = false;
    this->NumRunVariations = 0;
    this->CurrentRunVariationIndex = 0;
    this->RunVariationRadius = 1;
    this->EyeIndex = 0;
    this->SkinIndex = 0;
    this->DefaultEyeBrightness = 1;
    this->DefaultSkinGlow = 1;
    this->MinimapGoalByTagColorIndex = 0;
    this->AppearanceOverrideGender = EFortAIPawnGender::FAPG_Default;
    this->FollowPlayerEvent = EFortCombatEvents::HuskFollowing;
    this->InCombatNearPlayerEvent = EFortCombatEvents::HuskCombatNearby;
    this->FollowPlayerRange = 1;
    this->InteractionDuration = 1;
    this->DefenderTrap = NULL;
    this->DeepWaterImmersionDepth = 1;
    this->bDebugAI = false;
    this->bDebugAIAnim = false;
    this->bUseBuildingAttackingHotspots = false;
    this->bCanBeLaunched = true;
    this->bCanMoveThroughWalls = false;
    this->bCanUseNavWalking = true;
    this->bCanUseSimpleCollisions = true;
    this->bCanUseStepAside = false;
    this->bCanUseDoors = false;
    this->bCanUseShootingHotspots = false;
    this->bCanSleep = true;
    this->bIsSleeping = false;
    this->bShouldStartSleeping = false;
    this->bCanLookAtGoal = true;
    this->bAllowServerCosmeticComponentOptimizations = true;
    this->bAllowCapsuleComponentsOnServer = false;
    this->bRootComponentIgnoreQueryPawnCapsule = false;
    this->bCanUseMeshPooling = true;
    this->bUseCrowdSimulation = false;
    this->bControlWalkingOffLedges = false;
    this->bUseAppearanceOverride = false;
    this->bCanInteract = false;
    this->bHideHealthBar = false;
    this->bHasBuildingHitEffects = true;
    this->bReplicateGrantedTagsWithFastAbilityReplication = false;
    this->bReplicateGameplayCuesWithFastAbilityReplication = false;
    this->bOnlySkipAbilitySystemComponentWithFastAbilityReplication = false;
    this->MovementUrgency = EFortMovementUrgency::None;
    this->AIType = EFortressAIType::FAT_Dormant;
    this->Team = 2;
    this->SimpleCollisionsProfileName = TEXT("FortAIPawnEnemyCapsuleLowLOD");
    this->ScoreMultiplier = 1;
    this->OverriddenScore = 0;
    this->OverriddenScoreDistribution = EScoreDistributionType::Default;
    this->LootDropConeHalfAngle = 1;
    this->LootDropSpeed = 1;
    this->MinItemTossDist = 1;
    this->MaxItemTossDist = 1;
    this->ItemTossDirectionConeHalfAngle = 1;
    this->HotspotType = EFortHotSpotSlot::Melee;
    this->PartialPathUsage = EFortPartialPathUsage::Always;
    this->PlayerManager = NULL;
    this->DefenderPlacedTime = 1;
    this->RecentlySeenInterval = 1;
    this->MoveSoundStimulusBroadcastInterval = 1;
    this->MoveSoundStimulusMaxRange = 1;
    this->bGenerateMoveSoundInAllMovementModes = false;
    this->WeaponCollisionComponent = NULL;
    this->Inventory = NULL;
    this->AppearanceOverrideEntryIndex = 0;
    this->PelvisBoneName = TEXT("pelvis");
    this->HeadBoneName = TEXT("head");
    this->MinimapIndicatorUpdateFrequency = 1;
    this->MiniMapViewableDistance = 1;
    this->DistanceToPlayerManagerToShowHealthBar = 1;
    this->DistanceToOtherPlayersToShowHealthBar = 1;
    this->AttributesSet = NULL;
    this->CharacterAttrSet = NULL;
    this->WeaponAttrSet = NULL;
    this->ImpactPhysicalSurfaceSounds[0] = NULL;
    this->ImpactPhysicalSurfaceSounds[1] = NULL;
    this->ImpactPhysicalSurfaceSounds[2] = NULL;
    this->ImpactPhysicalSurfaceSounds[3] = NULL;
    this->ImpactPhysicalSurfaceSounds[4] = NULL;
    this->ImpactPhysicalSurfaceSounds[5] = NULL;
    this->ImpactPhysicalSurfaceSounds[6] = NULL;
    this->ImpactPhysicalSurfaceSounds[7] = NULL;
    this->ImpactPhysicalSurfaceSounds[8] = NULL;
    this->ImpactPhysicalSurfaceSounds[9] = NULL;
    this->ImpactPhysicalSurfaceSounds[10] = NULL;
    this->ImpactPhysicalSurfaceSounds[11] = NULL;
    this->ImpactPhysicalSurfaceSounds[12] = NULL;
    this->ImpactPhysicalSurfaceSounds[13] = NULL;
    this->ImpactPhysicalSurfaceSounds[14] = NULL;
    this->ImpactPhysicalSurfaceSounds[15] = NULL;
    this->ImpactPhysicalSurfaceSounds[16] = NULL;
    this->ImpactPhysicalSurfaceSounds[17] = NULL;
    this->ImpactPhysicalSurfaceSounds[18] = NULL;
    this->ImpactPhysicalSurfaceSounds[19] = NULL;
    this->ImpactPhysicalSurfaceSounds[20] = NULL;
    this->ImpactPhysicalSurfaceSounds[21] = NULL;
    this->ImpactPhysicalSurfaceSounds[22] = NULL;
    this->ImpactPhysicalSurfaceSounds[23] = NULL;
    this->ImpactPhysicalSurfaceSounds[24] = NULL;
    this->ImpactPhysicalSurfaceSounds[25] = NULL;
    this->ImpactPhysicalSurfaceEffects[0] = NULL;
    this->ImpactPhysicalSurfaceEffects[1] = NULL;
    this->ImpactPhysicalSurfaceEffects[2] = NULL;
    this->ImpactPhysicalSurfaceEffects[3] = NULL;
    this->ImpactPhysicalSurfaceEffects[4] = NULL;
    this->ImpactPhysicalSurfaceEffects[5] = NULL;
    this->ImpactPhysicalSurfaceEffects[6] = NULL;
    this->ImpactPhysicalSurfaceEffects[7] = NULL;
    this->ImpactPhysicalSurfaceEffects[8] = NULL;
    this->ImpactPhysicalSurfaceEffects[9] = NULL;
    this->ImpactPhysicalSurfaceEffects[10] = NULL;
    this->ImpactPhysicalSurfaceEffects[11] = NULL;
    this->ImpactPhysicalSurfaceEffects[12] = NULL;
    this->ImpactPhysicalSurfaceEffects[13] = NULL;
    this->ImpactPhysicalSurfaceEffects[14] = NULL;
    this->ImpactPhysicalSurfaceEffects[15] = NULL;
    this->ImpactPhysicalSurfaceEffects[16] = NULL;
    this->ImpactPhysicalSurfaceEffects[17] = NULL;
    this->ImpactPhysicalSurfaceEffects[18] = NULL;
    this->ImpactPhysicalSurfaceEffects[19] = NULL;
    this->ImpactPhysicalSurfaceEffects[20] = NULL;
    this->ImpactPhysicalSurfaceEffects[21] = NULL;
    this->ImpactPhysicalSurfaceEffects[22] = NULL;
    this->ImpactPhysicalSurfaceEffects[23] = NULL;
    this->ImpactPhysicalSurfaceEffects[24] = NULL;
    this->ImpactPhysicalSurfaceEffects[25] = NULL;
    this->MinimapIndicator = NULL;
    this->AIPawnAbilitySystemComponent = CreateDefaultSubobject<UFortAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
    this->CurrentAimTarget = NULL;
    this->NavObstacleComponent = NULL;
    this->BuildingHitMaxDistanceToPlayer = 1;
    this->BuildingHitMaxDistanceToHitLocation = 1;
    this->HeadHeightPercent = 1;
    this->bCanBeMarked = false;
    this->DefenderItem = NULL;
    this->TetheredFollower = NULL;
    this->TetheredCamera = NULL;
    this->TetheredTargetingCamera = NULL;
    this->bIsTetheredBoosting = false;
    this->TetherBoostMultiplier = 1;
    this->TetherJumpServerCorrectionIgnoreTime = 1;
    this->TetherJumpLastTime = 1;
    this->TetherBoundsXYSplineClass = NULL;
    this->TetherBoundsXYSplineComponent = NULL;
    this->CustomizationsToLoad = NULL;
    this->UsedCustomization = NULL;
    this->AIAssetLoader = NULL;
}

