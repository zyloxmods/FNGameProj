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
    this->TextureData[0] = NULL;
    this->TextureData[1] = NULL;
    this->TextureData[2] = NULL;
    this->TextureData[3] = NULL;
    this->StaticMesh = NULL;
    this->bForceReplicateSubObjects = false;
    this->bNoPhysicsCollision = false;
    this->bNoCameraCollision = false;
    this->bNoPawnCollision = false;
    this->bNoAIPawnCollision = false;
    this->bBlocksCeilingPlacement = false;
    this->bBlocksAttachmentPlacement = false;
    this->bUsePhysicalSurfaceForFootstep = false;
    this->bRandomYawOnPlacement = false;
    this->bRandomScaleOnPlacement = false;
    this->bClearMIDWhenReturningToUndamagedState = true;
    this->NumFrameSubObjects = 0;
    this->ShieldBuffMaterialParamValue1 = 1;
    this->ShieldBuffMaterialParamValue2 = 1;
    this->AnimatingDistanceFieldSelfShadowBias = 1;
    this->AnimatingSubObjects = 1;
    this->PlayerGridSnapSize = 1;
    this->AltMeshIdx = 0;
    this->ResourceType = EFortResourceType::None;
    this->bAllowBuildingCheat = false;
    this->bMirrored = false;
    this->bNoCollision = false;
    this->bSupportsRepairing = false;
    this->bHiddenDueToTrapPlacement = false;
    this->bAttachmentPlacementBlockedFront = false;
    this->bAttachmentPlacementBlockedBack = false;
    this->bIsForPreviewing = false;
    this->bUnderConstruction = false;
    this->bUnderRepair = false;
    this->bIsInitiallyBuilding = false;
    this->bCameraOnlyCollision = false;
    this->bNoWeaponCollision = false;
    this->bNoRangedWeaponCollision = false;
    this->bNoProjectileCollision = false;
    this->bDoNotBlockInteract = false;
    this->bNeedsMIDsForCreative = false;
    this->bAllowResourceDrop = true;
    this->bHideOnDeath = true;
    this->bPlayDestructionEffects = true;
    this->bSkipConstructionSounds = false;
    this->bSupportedDirectly = false;
    this->bForciblyStructurallySupported = false;
    this->bRegisterWithStructuralGrid = false;
    this->bCurrentlyBeingEdited = false;
    this->bAllowWeakSpots = true;
    this->bUseComplexForWeakSpots = true;
    this->bCanSpawnAtLowerQuotaLevels = false;
    this->bNeedsWindMaterialParameters = false;
    this->bPlayBounce = true;
    this->bPropagateBounce = true;
    this->bPropagatesBounceEffects = true;
    this->bNeedsDamageOverlay = true;
    this->bDeriveCurieIdentifierFromResourceType = true;
    this->bUseSingleMeshCullDistance = false;
    this->SavedDirectlySupportedStatus = ESavedSupportStatus::UnknownState;
    this->MaximumQuotaLevelBound = ELootQuotaLevel::Unlimited;
    this->BuildingAnimation = EBuildingAnim::EBA_None;
    this->CurAnimSubObjectNum = 0;
    this->CurAnimSubObjectTargetNum = 0;
    this->DestroyedTime = 1;
    this->InfluenceMapWeight = 1;
    this->BASEEffectMeshComponent = NULL;
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0"));
    this->BaseMaterial = NULL;
    this->MaxResourcesToSpawn = 0;
    this->BreakEffect = NULL;
    this->DeathParticlesInst = NULL;
    this->DeathSound = NULL;
    this->ConstructedEffect = NULL;
    this->ConstructionAudioComponent = NULL;
    this->CachedDestructionInstigator = NULL;
    this->DamageOverlayComponent = NULL;
    this->DamageAmountStart = 1;
    this->LastDamageAmount = 1;
    this->EditModePatternData = NULL;
    this->UndermineGroup = 0;
    this->LogicalBuildingIdx = 0;
    this->EditModeSupportClass = NULL;
    this->EditModeSupport = NULL;
    this->HealthToAutoBuild = 1;
    this->AccumulatedAutoBuildTime = 1;
    this->BuildingReplacementType = BRT_None;
    this->ReplacementDestructionReason = BRT_None;
    this->CurBuildingAnimType = EBuildingAnim::EBA_None;
    this->DamageVisualsState = EFortDamageVisualsState::UnDamaged;
    this->CurBuildProgress = 1;
    this->OutwardMotionMagnitude = 1;
    this->CurBuildingAnimStartTime = 1;
    this->BlueprintMeshComp = NULL;
    this->EditingPlayer = NULL;
    this->BuildingAttachmentRadius = 1;
    this->BuildingAttachmentSlot = SLOT_None;
    this->BuildingAttachmentType = EBuildingAttachmentType::ATTACH_None;
    this->BuildingPlacementType = EPlacementType::Free;
    this->LastStructuralCheck = EStructuralSupportCheck::Stable;
    this->ParentActorToAttachTo = NULL;
    this->AttachmentPlacementBlockingActors[0] = NULL;
    this->AttachmentPlacementBlockingActors[1] = NULL;
    this->ActorIndexInFoundation = 0;
    this->DamagerOwner = NULL;
    this->RelevantBASE = NULL;
    this->LastRelevantBASE = NULL;
}

