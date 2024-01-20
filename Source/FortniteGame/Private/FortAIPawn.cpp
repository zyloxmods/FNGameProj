#include "FortAIPawn.h"
#include "NavFilters/RecastFilter_UseDefaultArea.h"
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

void AFortAIPawn::SetMovementUrgency(EFortMovementUrgency Urgency) {
}

void AFortAIPawn::SetMinSignificanceForAnimationCurves(float MinSignificance) {
}

void AFortAIPawn::SetMinimumAILOD(EFortAILODLevel MinimumAILOD) {
}

void AFortAIPawn::SetMinimapViewableDistance(float NewMinimapViewableDistance) {
}

void AFortAIPawn::SetIsCharging(bool bNewIsCharging) {
}

void AFortAIPawn::SetEyeColor(FLinearColor NewEyeColor, float NewEyeBrightness) {
}

void AFortAIPawn::SetEncounterInfo(UFortAIEncounterInfo* InEncounterInfo) {
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

void AFortAIPawn::OnRep_SharedAnim() {
}

void AFortAIPawn::OnRep_MinimapViewableDistance() {
}

void AFortAIPawn::OnRep_Inventory() {
}

void AFortAIPawn::OnRep_EnableBlockingCollisionWithOtherAI() {
}

void AFortAIPawn::OnRep_CurrentFortAILODLevel() {
}

void AFortAIPawn::OnRep_CurrentAIRotationRate() {
}

void AFortAIPawn::OnRep_bIsSleeping() {
}

void AFortAIPawn::OnRep_AttributeProxy() {
}

void AFortAIPawn::OnRep_AppearanceOverrideEntryIndex() {
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

EFortMovementUrgency AFortAIPawn::GetMovementUrgency(AFortAIPawn* FortAIPawn) {
    return EFortMovementUrgency::None;
}

EFortMovementStyle AFortAIPawn::GetMovementStyle(const AFortAIPawn* FortAIPawn) {
    return EFortMovementStyle::Running;
}

UFortItem* AFortAIPawn::GetInventoryItem(FGuid ItemGuid) const {
    return NULL;
}

USoundBase* AFortAIPawn::GetImpactPhysicalSurfaceSound(const FHitResult& Impact) const {
    return NULL;
}

float AFortAIPawn::GetGroundSpeedForUrgency(AFortAIPawn* FortAIPawn, EFortMovementUrgency Urgency) {
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
    DOREPLIFETIME(AFortAIPawn, CurrentFortAILODLevel);
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
    this->AIDifficultyLevel = 0.00f;
    this->LevelRatingDisplayType = EFortAILevelRatingDisplayType::DisplayRatingBasedOnDifficulty;
    this->EncounterInfo = NULL;
    this->SpawnSetIndex = -1;
    this->EnemyIndexInSpawnGroup = 0;
    this->FinishEncounterSpawnFallbackTime = 2.00f;
    this->EncounterSpawnDisableRangedAttackingTime = 2.00f;
    this->EncounterSpawnDisableMeleeAttackingTime = 2.00f;
    this->SpawnRift = NULL;
    this->SpawnSourceActor = NULL;
    this->MaxTimeAllowedOutsideTether = 0.00f;
    this->BehaviorTree = NULL;
    this->DefaultNavFilter = NULL;
    this->HuntingNavFilter = URecastFilter_UseDefaultArea::StaticClass();
    this->DBNOInteractionDuration = 0.00f;
    this->DBNOInteractionType = IT_NoInteraction;
    this->MovementStyles[0] = EFortMovementStyle::Walking;
    this->MovementStyles[1] = EFortMovementStyle::Walking;
    this->MovementStyles[2] = EFortMovementStyle::Walking;
    this->MovementStyles[3] = EFortMovementStyle::Walking;
    this->UpdateNearbyPickupFrequency = 0.50f;
    this->NumRunVariations = 0;
    this->CurrentRunVariationIndex = 0;
    this->RunVariationRadius = 0.00f;
    this->EyeIndex = -1;
    this->SkinIndex = -1;
    this->DefaultEyeBrightness = 5.00f;
    this->DefaultSkinGlow = 5.00f;
    this->MinimapGoalByTagColorIndex = -1;
    this->AppearanceOverrideGender = EFortAIPawnGender::FAPG_Default;
    this->FollowPlayerEvent = EFortCombatEvents::HuskFollowing;
    this->InCombatNearPlayerEvent = EFortCombatEvents::HuskCombatNearby;
    this->InteractionType = IT_NoInteraction;
    this->FollowPlayerRange = 1000.00f;
    this->InteractionDuration = 3.00f;
    this->DefenderTrap = NULL;
    this->bDebugAI = false;
    this->bDebugAIAnim = false;
    this->bUseBuildingAttackingHotspots = false;
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
    this->bCanUseMeshPooling = true;
    this->bUseCrowdSimulation = false;
    this->bControlWalkingOffLedges = false;
    this->bUseAppearanceOverride = false;
    this->bCanInteract = false;
    this->bHideHealthBar = false;
    this->bHasBuildingHitEffects = true;
    this->MovementUrgency = EFortMovementUrgency::None;
    this->AIType = EFortressAIType::FAT_DebugOnly;
    this->Team = 2;
    this->SimpleCollisionsProfileName = TEXT("FortAIPawnEnemyCapsuleLowLOD");
    this->ScoreMultiplier = 1.00f;
    this->OverriddenScore = -1;
    this->LootDropConeHalfAngle = 15.00f;
    this->LootDropSpeed = 950.00f;
    this->HotspotType = EFortHotSpotSlot::Melee;
    this->PartialPathUsage = EFortPartialPathUsage::OnlyGoalsOnDestructible;
    this->PlayerManager = NULL;
    this->DefenderPlacedTime = 0.00f;
    this->RecentlySeenInterval = 2.00f;
    this->MoveSoundStimulusBroadcastInterval = 0.00f;
    this->WeaponCollisionComponent = NULL;
    this->Inventory = NULL;
    this->AppearanceOverrideEntryIndex = -1;
    this->PelvisBoneName = TEXT("pelvis");
    this->HeadBoneName = TEXT("head");
    this->MinimapIndicatorUpdateFrequency = 0.25f;
    this->MiniMapViewableDistance = 8000.00f;
    this->DistanceToPlayerManagerToShowHealthBar = 0.00f;
    this->DistanceToOtherPlayersToShowHealthBar = 0.00f;
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
    this->BuildingHitMaxDistanceToPlayer = 0.00f;
    this->BuildingHitMaxDistanceToHitLocation = 0.00f;
    this->HeadHeightPercent = 0.80f;
    this->CurrentFortAILODLevel = EFortAILODLevel::Invalid;
    this->DefenderItem = NULL;
}

