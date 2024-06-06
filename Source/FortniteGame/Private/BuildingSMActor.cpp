#include "BuildingSMActor.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

bool ABuildingSMActor::WillRegisterWithStructuralGrid() const {
    return false;
}

void ABuildingSMActor::UpdateRepairMaterialAnim(float CurveValue) {
}

void ABuildingSMActor::UpdateLODOverrideEffect(float CurveValue) {
}

void ABuildingSMActor::UpdateDynamicShrinkAndDestroyEffect(float CurveValue) {
}

void ABuildingSMActor::UpdateComponentCollisionModes() {
}

void ABuildingSMActor::TransferFromDuplicationData(FBuildingDuplicationData SourceData) {
}

void ABuildingSMActor::TransferBuildingData(ABuildingSMActor* SourceDataActor) {
}

void ABuildingSMActor::StartBounceAnimation(const float StartTime, const float Radius, const FVector& Normal, const FVector& Center, TEnumAsByte<EFortBounceType::Type> InBounceType, const bool bLocalInstigator) {
}

void ABuildingSMActor::SetTextureData(const TArray<UTexture2D*>& InTextures) {
}

void ABuildingSMActor::SetParentActorToAttachTo(ABuildingSMActor* InParentActorToAttachTo) {
}

void ABuildingSMActor::SetMirrored(bool bIsMirrored) {
}

void ABuildingSMActor::SetDeathParticles(UParticleSystem* InPS) {
}

void ABuildingSMActor::RepairBuilding(AFortPlayerController* RepairingController, int32 ResourcesSpent) {
}

TArray<UTexture2D*> ABuildingSMActor::ReadTextureData() {
    return TArray<UTexture2D*>();
}

void ABuildingSMActor::PreForceMove(AController* EventInstigator) {
}

void ABuildingSMActor::PostForceMove() {
}

void ABuildingSMActor::PlayFullHealthEffects() {
}

void ABuildingSMActor::PlayDestructionEffects() {
}

void ABuildingSMActor::PlayConstructionBounce() {
}

void ABuildingSMActor::PlayBreakEffects() {
}


void ABuildingSMActor::OnRep_ResourceType(EFortResourceType OldType) {
}

void ABuildingSMActor::OnRep_ReplicationProxy() {
}

void ABuildingSMActor::OnRep_ReplicatedDrawScale3D() {
}

void ABuildingSMActor::OnRep_RelevantBASE() {
}

void ABuildingSMActor::OnRep_ProxyGameplayCueDamage() {
}

void ABuildingSMActor::OnRep_NoCollision() {
}

void ABuildingSMActor::OnRep_NoCameraCollision() {
}

void ABuildingSMActor::OnRep_MetaData() {
}

void ABuildingSMActor::OnRep_HiddenDueToTrapPlacement() {
}

void ABuildingSMActor::OnRep_EditingPlayer() {
}

void ABuildingSMActor::OnRep_bUnderRepair() {
}

void ABuildingSMActor::OnRep_bUnderConstruction() {
}

void ABuildingSMActor::OnRep_BuildingAnimation() {
}

void ABuildingSMActor::OnLODOverrideEffectFinished() {
}


void ABuildingSMActor::OnDynamicShrinkAndDestroyEffectFinished() {
}




void ABuildingSMActor::NetMulticast_InvokeGameplayCuesExecuted_WithParams_Implementation(const FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters) {
}

void ABuildingSMActor::NetMulticast_InvokeGameplayCuesExecuted_Implementation(const FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext) {
}

void ABuildingSMActor::NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams_Implementation(const FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters) {
}

void ABuildingSMActor::NetMulticast_InvokeGameplayCueExecuted_WithParams_Implementation(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters) {
}

void ABuildingSMActor::NetMulticast_InvokeGameplayCueExecuted_FromSpec_Implementation(const FGameplayEffectSpecForRPC Spec, FPredictionKey PredictionKey) {
}

void ABuildingSMActor::NetMulticast_InvokeGameplayCueExecuted_Implementation(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext) {
}

void ABuildingSMActor::NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams_Implementation(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters) {
}

void ABuildingSMActor::NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec_Implementation(const FGameplayEffectSpecForRPC& Spec, FPredictionKey PredictionKey) {
}

void ABuildingSMActor::NetMulticast_InvokeGameplayCueAdded_WithParams_Implementation(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters Parameters) {
}

void ABuildingSMActor::NetMulticast_InvokeGameplayCueAdded_Implementation(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext) {
}

void ABuildingSMActor::MulticastPlayFullHealthEffects_Implementation() {
}

void ABuildingSMActor::MarkConnectedBuildingsForStructuralIntegrityCheck() {
}

bool ABuildingSMActor::IsUnderConstruction() const {
    return false;
}

bool ABuildingSMActor::IsSupportedByWorld() const {
    return false;
}

bool ABuildingSMActor::IsStructurallySupported() const {
    return false;
}

bool ABuildingSMActor::HasDestructionLoot() const {
    return false;
}

UCurveLinearColor* ABuildingSMActor::GetWindSpeedCurveForPreview() const {
    return NULL;
}

UCurveLinearColor* ABuildingSMActor::GetWindPannerSpeedCurveForPreview() const {
    return NULL;
}

float ABuildingSMActor::GetWeakSpotEnabledTimeout_Implementation(AFortPlayerController* Controller) const {
    return 0.0f;
}

TEnumAsByte<EBuildingReplacementType> ABuildingSMActor::GetReplacementDestructionReason() {
    return BRT_None;
}


UMaterialInstanceDynamic* ABuildingSMActor::GetOrCreateMIDOnDefaultMesh(int32 ElementIndex) {
    return NULL;
}

int32 ABuildingSMActor::GetLogicalBuildingIndex() const {
    return 0;
}

bool ABuildingSMActor::GetIntenseWindMaterialsForPreview(TArray<UMaterialInterface*>& Materials) {
    return false;
}

FBuildingDuplicationData ABuildingSMActor::GetDuplicationData() {
    return FBuildingDuplicationData{};
}

FName ABuildingSMActor::GetDestructionLootTierGroup() const {
    return NAME_None;
}

UParticleSystem* ABuildingSMActor::GetDeathParticles() const {
    return NULL;
}

void ABuildingSMActor::GetBuildingTextureData(TArray<UBuildingTextureData*>& OutTextureDataArray) const {
}

UStaticMeshComponent* ABuildingSMActor::GetBuildingMeshComponent() const {
    return NULL;
}

TArray<ABuildingSMActor*> ABuildingSMActor::GetAttachedBuildingSMActors() const {
    return TArray<ABuildingSMActor*>();
}

TArray<ABuildingActor*> ABuildingSMActor::GetAttachedBuildingActors() const {
    return TArray<ABuildingActor*>();
}

void ABuildingSMActor::GameplayCue_Abilities_Activation_Generic_BannerWallBuff2(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters) {
}

void ABuildingSMActor::GameplayCue_Abilities_Activation_Generic_BannerWallBuff1(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters) {
}

void ABuildingSMActor::ForceVisualState(EBuildingAnim VisualState) {
}

void ABuildingSMActor::ForceIntoStructuralGridDuringRuntime_Implementation() {
}

int32 ABuildingSMActor::FindDestructionLootTier() const {
    return 0;
}

void ABuildingSMActor::EditorOnlySetInstanceMaterialVectorParameter(FName ParamName, FLinearColor Value) {
}

void ABuildingSMActor::EditorOnlySetInstanceMaterialTextureParameter(FName ParamName, UTexture* Value) {
}

void ABuildingSMActor::EditorOnlySetInstanceMaterialScalarParameter(FName ParamName, float Value) {
}

void ABuildingSMActor::EditorOnlyRemoveInstanceMaterialVectorParameter(FName ParamName) {
}

void ABuildingSMActor::EditorOnlyRemoveInstanceMaterialTextureParameter(FName ParamName) {
}

void ABuildingSMActor::EditorOnlyRemoveInstanceMaterialScalarParameter(FName ParamName) {
}

void ABuildingSMActor::DetachBuildingActorFromMe(ABuildingActor* ActorToAttach, bool bBeingDestroyed, AController* Killer) {
}

void ABuildingSMActor::ClearRequestedBuildingAnimation() {
}

bool ABuildingSMActor::CanDoBuildingAnimations() const {
    return false;
}

void ABuildingSMActor::CancelAutoBuild() {
}

void ABuildingSMActor::BlueprintOnStructurallyUnstable_Implementation() {
}

void ABuildingSMActor::BlueprintOnStructurallyStable_Implementation() {
}

bool ABuildingSMActor::BlueprintCanAttemptGenerateResources_Implementation(const FGameplayTagContainer& InTags, AController* InstigatorController) const {
    return false;
}

void ABuildingSMActor::AttachBuildingActorToMe(ABuildingActor* ActorToAttach, bool bForceAttachment) {
}

void ABuildingSMActor::AddToGrid() {
}

void ABuildingSMActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildingSMActor, TextureData);
    DOREPLIFETIME(ABuildingSMActor, StaticMesh);
    DOREPLIFETIME(ABuildingSMActor, bNoPhysicsCollision);
    DOREPLIFETIME(ABuildingSMActor, bNoCameraCollision);
    DOREPLIFETIME(ABuildingSMActor, AltMeshIdx);
    DOREPLIFETIME(ABuildingSMActor, ResourceType);
    DOREPLIFETIME(ABuildingSMActor, bMirrored);
    DOREPLIFETIME(ABuildingSMActor, bNoCollision);
    DOREPLIFETIME(ABuildingSMActor, bSupportsRepairing);
    DOREPLIFETIME(ABuildingSMActor, bHiddenDueToTrapPlacement);
    DOREPLIFETIME(ABuildingSMActor, bAttachmentPlacementBlockedFront);
    DOREPLIFETIME(ABuildingSMActor, bAttachmentPlacementBlockedBack);
    DOREPLIFETIME(ABuildingSMActor, bIsForPreviewing);
    DOREPLIFETIME(ABuildingSMActor, bUnderConstruction);
    DOREPLIFETIME(ABuildingSMActor, bUnderRepair);
    DOREPLIFETIME(ABuildingSMActor, bIsInitiallyBuilding);
    DOREPLIFETIME(ABuildingSMActor, BuildingAnimation);
    DOREPLIFETIME(ABuildingSMActor, ReplicatedDrawScale3D);
    DOREPLIFETIME(ABuildingSMActor, MinimalReplicationProxy);
    DOREPLIFETIME(ABuildingSMActor, BuildingReplacementType);
    DOREPLIFETIME(ABuildingSMActor, EditingPlayer);
    DOREPLIFETIME(ABuildingSMActor, BuildingAttachmentSlot);
    DOREPLIFETIME(ABuildingSMActor, DamagerOwner);
    DOREPLIFETIME(ABuildingSMActor, RelevantBASE);
    DOREPLIFETIME(ABuildingSMActor, ProxyGameplayCueDamage);
}

ABuildingSMActor::ABuildingSMActor() {
    TextureData[0] = NULL;
    TextureData[1] = NULL;
    TextureData[2] = NULL;
    TextureData[3] = NULL;
    StaticMesh = NULL;
    bForceReplicateSubObjects = false;
    bNoPhysicsCollision = false;
    bNoCameraCollision = false;
    bNoPawnCollision = false;
    bNoAIPawnCollision = false;
    bBlocksCeilingPlacement = false;
    bBlocksAttachmentPlacement = false;
    bUsePhysicalSurfaceForFootstep = false;
    bRandomYawOnPlacement = false;
    bRandomScaleOnPlacement = false;
    bClearMIDWhenReturningToUndamagedState = true;
    NumFrameSubObjects = 0;
    ShieldBuffMaterialParamValue1 = 1;
    ShieldBuffMaterialParamValue2 = 1;
    AnimatingDistanceFieldSelfShadowBias = 1;
    AnimatingSubObjects = 1;
    PlayerGridSnapSize = 1;
    AltMeshIdx = 0;
    ResourceType = EFortResourceType::None;
    bAllowBuildingCheat = false;
    bMirrored = false;
    bNoCollision = false;
    bSupportsRepairing = false;
    bHiddenDueToTrapPlacement = false;
    bAttachmentPlacementBlockedFront = false;
    bAttachmentPlacementBlockedBack = false;
    bIsForPreviewing = false;
    bUnderConstruction = false;
    bUnderRepair = false;
    bIsInitiallyBuilding = false;
    bCameraOnlyCollision = false;
    bNoWeaponCollision = false;
    bNoRangedWeaponCollision = false;
    bNoProjectileCollision = false;
    bDoNotBlockInteract = false;
    bNeedsMIDsForCreative = false;
    bAllowResourceDrop = true;
    bHideOnDeath = true;
    bPlayDestructionEffects = true;
    bSkipConstructionSounds = false;
    bSupportedDirectly = false;
    bForciblyStructurallySupported = false;
    bRegisterWithStructuralGrid = false;
    bCurrentlyBeingEdited = false;
    bAllowWeakSpots = true;
    bUseComplexForWeakSpots = true;
    bCanSpawnAtLowerQuotaLevels = false;
    bNeedsWindMaterialParameters = false;
    bPlayBounce = true;
    bPropagateBounce = true;
    bPropagatesBounceEffects = true;
    bNeedsDamageOverlay = true;
    bDeriveCurieIdentifierFromResourceType = true;
    bUseSingleMeshCullDistance = false;
    SavedDirectlySupportedStatus = ESavedSupportStatus::UnknownState;
    MaximumQuotaLevelBound = ELootQuotaLevel::Unlimited;
    BuildingAnimation = EBuildingAnim::EBA_None;
    CurAnimSubObjectNum = 0;
    CurAnimSubObjectTargetNum = 0;
    DestroyedTime = 1;
    InfluenceMapWeight = 1;
    BASEEffectMeshComponent = NULL;
    StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0"));
    BaseMaterial = NULL;
    MaxResourcesToSpawn = 0;
    BreakEffect = NULL;
    DeathParticlesInst = NULL;
    DeathSound = NULL;
    ConstructedEffect = NULL;
    ConstructionAudioComponent = NULL;
    CachedDestructionInstigator = NULL;
    DamageOverlayComponent = NULL;
    DamageAmountStart = 1;
    LastDamageAmount = 1;
    EditModePatternData = NULL;
    UndermineGroup = 0;
    LogicalBuildingIdx = 0;
    EditModeSupportClass = NULL;
    EditModeSupport = NULL;
    HealthToAutoBuild = 1;
    AccumulatedAutoBuildTime = 1;
    BuildingReplacementType = BRT_None;
    ReplacementDestructionReason = BRT_None;
    CurBuildingAnimType = EBuildingAnim::EBA_None;
    DamageVisualsState = EFortDamageVisualsState::UnDamaged;
    CurBuildProgress = 1;
    OutwardMotionMagnitude = 1;
    CurBuildingAnimStartTime = 1;
    BlueprintMeshComp = NULL;
    EditingPlayer = NULL;
    BuildingAttachmentRadius = 1;
    BuildingAttachmentSlot = SLOT_None;
    BuildingAttachmentType = EBuildingAttachmentType::ATTACH_None;
    BuildingPlacementType = EPlacementType::Free;
    LastStructuralCheck = EStructuralSupportCheck::Stable;
    ParentActorToAttachTo = NULL;
    AttachmentPlacementBlockingActors[0] = NULL;
    AttachmentPlacementBlockingActors[1] = NULL;
    ActorIndexInFoundation = 0;
    DamagerOwner = NULL;
    RelevantBASE = NULL;
    LastRelevantBASE = NULL;
}

