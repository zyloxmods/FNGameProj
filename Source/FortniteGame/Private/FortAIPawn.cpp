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
    bAttacking = false;
    bDied = false;
    bHitReact = false;
    bFullBodyHitReact = false;
    bDancing = false;
    bRangedAttacking = false;
    bHasGoalActor = false;
    bFrozen = false;
    bUseSharedAnimation = false;
    bNeedsDeathNotification = true;
    bKilledOrDowned = false;
    bDespawnedDueToInactivity = false;
    bNotifySpawnRift = true;
    bUsesDBNO = false;
    bHasInventory = false;
    bShouldTossInventoryOnDeath = false;
    bUseDefenderInventoryManagement = true;
    bIgnoreDefender = false;
    bTrackNearbyPickups = false;
    bIsCharging = false;
    bIsCowering = false;
    bCanShowMinimapIndicator = true;
    bShowMinimapFarOffDirectionArrow = false;
    bHasEngaged = false;
    bIsAlwaysGameplayRelevant = false;
    bIsDebugSpawnedAI = false;
    bEncounterExpectedLifespanExpired = false;
    bEnableBlockingCollisionWithOtherAI = true;
    bSetMiniMapIconRotation = false;
    bHasDroppedLoot = false;
    bUseFastAbilityReplication = false;
    bUseAIGoalComponent = true;
    AIDifficultyLevel = 1;
    LevelRatingDisplayType = EFortAILevelRatingDisplayType::DisplayRatingBasedOnDifficulty;
    EncounterInfo = NULL;
    SpawnSetIndex = 0;
    EnemyIndexInSpawnGroup = 0;
    FinishEncounterSpawnFallbackTime = 1;
    EncounterSpawnDisableRangedAttackingTime = 1;
    EncounterSpawnDisableMeleeAttackingTime = 1;
    SpawnRift = NULL;
    SpawnSourceActor = NULL;
    AIGoalComponentClass = UFortAIGoalComponent::StaticClass();
    MaxTimeAllowedOutsideTether = 1;
    BehaviorTree = NULL;
    DefaultNavFilter = NULL;
    HuntingNavFilter = URecastFilter_UseDefaultArea::StaticClass();
    DBNOInteractionDuration = 1;
    MovementStyles[0] = EFortMovementStyle::Walking;
    MovementStyles[1] = EFortMovementStyle::Walking;
    MovementStyles[2] = EFortMovementStyle::Walking;
    MovementStyles[3] = EFortMovementStyle::Walking;
    UpdateNearbyPickupFrequency = 1;
    bUsePickupDirectionOverride = false;
    NumRunVariations = 0;
    CurrentRunVariationIndex = 0;
    RunVariationRadius = 1;
    EyeIndex = 0;
    SkinIndex = 0;
    DefaultEyeBrightness = 1;
    DefaultSkinGlow = 1;
    MinimapGoalByTagColorIndex = 0;
    AppearanceOverrideGender = EFortAIPawnGender::FAPG_Default;
    FollowPlayerEvent = EFortCombatEvents::HuskFollowing;
    InCombatNearPlayerEvent = EFortCombatEvents::HuskCombatNearby;
    FollowPlayerRange = 1;
    InteractionDuration = 1;
    DefenderTrap = NULL;
    DeepWaterImmersionDepth = 1;
    bDebugAI = false;
    bDebugAIAnim = false;
    bUseBuildingAttackingHotspots = false;
    bCanBeLaunched = true;
    bCanMoveThroughWalls = false;
    bCanUseNavWalking = true;
    bCanUseSimpleCollisions = true;
    bCanUseStepAside = false;
    bCanUseDoors = false;
    bCanUseShootingHotspots = false;
    bCanSleep = true;
    bIsSleeping = false;
    bShouldStartSleeping = false;
    bCanLookAtGoal = true;
    bAllowServerCosmeticComponentOptimizations = true;
    bAllowCapsuleComponentsOnServer = false;
    bRootComponentIgnoreQueryPawnCapsule = false;
    bCanUseMeshPooling = true;
    bUseCrowdSimulation = false;
    bControlWalkingOffLedges = false;
    bUseAppearanceOverride = false;
    bCanInteract = false;
    bHideHealthBar = false;
    bHasBuildingHitEffects = true;
    bReplicateGrantedTagsWithFastAbilityReplication = false;
    bReplicateGameplayCuesWithFastAbilityReplication = false;
    bOnlySkipAbilitySystemComponentWithFastAbilityReplication = false;
    MovementUrgency = EFortMovementUrgency::None;
    AIType = EFortressAIType::FAT_Dormant;
    Team = 2;
    SimpleCollisionsProfileName = TEXT("FortAIPawnEnemyCapsuleLowLOD");
    ScoreMultiplier = 1;
    OverriddenScore = 0;
    OverriddenScoreDistribution = EScoreDistributionType::Default;
    LootDropConeHalfAngle = 1;
    LootDropSpeed = 1;
    MinItemTossDist = 1;
    MaxItemTossDist = 1;
    ItemTossDirectionConeHalfAngle = 1;
    HotspotType = EFortHotSpotSlot::Melee;
    PartialPathUsage = EFortPartialPathUsage::Always;
    PlayerManager = NULL;
    DefenderPlacedTime = 1;
    RecentlySeenInterval = 1;
    MoveSoundStimulusBroadcastInterval = 1;
    MoveSoundStimulusMaxRange = 1;
    bGenerateMoveSoundInAllMovementModes = false;
    WeaponCollisionComponent = NULL;
    Inventory = NULL;
    AppearanceOverrideEntryIndex = 0;
    PelvisBoneName = TEXT("pelvis");
    HeadBoneName = TEXT("head");
    MinimapIndicatorUpdateFrequency = 1;
    MiniMapViewableDistance = 1;
    DistanceToPlayerManagerToShowHealthBar = 1;
    DistanceToOtherPlayersToShowHealthBar = 1;
    AttributesSet = NULL;
    CharacterAttrSet = NULL;
    WeaponAttrSet = NULL;
    ImpactPhysicalSurfaceSounds[0] = NULL;
    ImpactPhysicalSurfaceSounds[1] = NULL;
    ImpactPhysicalSurfaceSounds[2] = NULL;
    ImpactPhysicalSurfaceSounds[3] = NULL;
    ImpactPhysicalSurfaceSounds[4] = NULL;
    ImpactPhysicalSurfaceSounds[5] = NULL;
    ImpactPhysicalSurfaceSounds[6] = NULL;
    ImpactPhysicalSurfaceSounds[7] = NULL;
    ImpactPhysicalSurfaceSounds[8] = NULL;
    ImpactPhysicalSurfaceSounds[9] = NULL;
    ImpactPhysicalSurfaceSounds[10] = NULL;
    ImpactPhysicalSurfaceSounds[11] = NULL;
    ImpactPhysicalSurfaceSounds[12] = NULL;
    ImpactPhysicalSurfaceSounds[13] = NULL;
    ImpactPhysicalSurfaceSounds[14] = NULL;
    ImpactPhysicalSurfaceSounds[15] = NULL;
    ImpactPhysicalSurfaceSounds[16] = NULL;
    ImpactPhysicalSurfaceSounds[17] = NULL;
    ImpactPhysicalSurfaceSounds[18] = NULL;
    ImpactPhysicalSurfaceSounds[19] = NULL;
    ImpactPhysicalSurfaceSounds[20] = NULL;
    ImpactPhysicalSurfaceSounds[21] = NULL;
    ImpactPhysicalSurfaceSounds[22] = NULL;
    ImpactPhysicalSurfaceSounds[23] = NULL;
    ImpactPhysicalSurfaceSounds[24] = NULL;
    ImpactPhysicalSurfaceSounds[25] = NULL;
    ImpactPhysicalSurfaceEffects[0] = NULL;
    ImpactPhysicalSurfaceEffects[1] = NULL;
    ImpactPhysicalSurfaceEffects[2] = NULL;
    ImpactPhysicalSurfaceEffects[3] = NULL;
    ImpactPhysicalSurfaceEffects[4] = NULL;
    ImpactPhysicalSurfaceEffects[5] = NULL;
    ImpactPhysicalSurfaceEffects[6] = NULL;
    ImpactPhysicalSurfaceEffects[7] = NULL;
    ImpactPhysicalSurfaceEffects[8] = NULL;
    ImpactPhysicalSurfaceEffects[9] = NULL;
    ImpactPhysicalSurfaceEffects[10] = NULL;
    ImpactPhysicalSurfaceEffects[11] = NULL;
    ImpactPhysicalSurfaceEffects[12] = NULL;
    ImpactPhysicalSurfaceEffects[13] = NULL;
    ImpactPhysicalSurfaceEffects[14] = NULL;
    ImpactPhysicalSurfaceEffects[15] = NULL;
    ImpactPhysicalSurfaceEffects[16] = NULL;
    ImpactPhysicalSurfaceEffects[17] = NULL;
    ImpactPhysicalSurfaceEffects[18] = NULL;
    ImpactPhysicalSurfaceEffects[19] = NULL;
    ImpactPhysicalSurfaceEffects[20] = NULL;
    ImpactPhysicalSurfaceEffects[21] = NULL;
    ImpactPhysicalSurfaceEffects[22] = NULL;
    ImpactPhysicalSurfaceEffects[23] = NULL;
    ImpactPhysicalSurfaceEffects[24] = NULL;
    ImpactPhysicalSurfaceEffects[25] = NULL;
    MinimapIndicator = NULL;
    AIPawnAbilitySystemComponent = CreateDefaultSubobject<UFortAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
    CurrentAimTarget = NULL;
    NavObstacleComponent = NULL;
    BuildingHitMaxDistanceToPlayer = 1;
    BuildingHitMaxDistanceToHitLocation = 1;
    HeadHeightPercent = 1;
    bCanBeMarked = false;
    DefenderItem = NULL;
    TetheredFollower = NULL;
    TetheredCamera = NULL;
    TetheredTargetingCamera = NULL;
    bIsTetheredBoosting = false;
    TetherBoostMultiplier = 1;
    TetherJumpServerCorrectionIgnoreTime = 1;
    TetherJumpLastTime = 1;
    TetherBoundsXYSplineClass = NULL;
    TetherBoundsXYSplineComponent = NULL;
    CustomizationsToLoad = NULL;
    UsedCustomization = NULL;
    AIAssetLoader = NULL;
}

