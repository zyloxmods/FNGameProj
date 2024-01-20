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

void ABuildingSMActor::SetMirrored(bool bIsMirrored) {
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


void ABuildingSMActor::OnRep_ResourceType(EFortResourceType OldType) {
}

void ABuildingSMActor::OnRep_ReplicationProxy() {
}

void ABuildingSMActor::OnRep_ReplicatedDrawScale3D() {
}

void ABuildingSMActor::OnRep_RelevantBASE() {
}

void ABuildingSMActor::OnRep_ProxyGameplayCueDamagePhysical() {
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

TEnumAsByte<EBuildingReplacementType> ABuildingSMActor::GetReplacementDestructionReason() {
    return BRT_None;
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

void ABuildingSMActor::GetBuildingTextureData(TArray<UBuildingTextureData*>& OutTextureDataArray) const {
}

UStaticMeshComponent* ABuildingSMActor::GetBuildingMeshComponent() const {
    return NULL;
}

TArray<ABuildingSMActor*> ABuildingSMActor::GetAttachedBuildingActors() {
    return TArray<ABuildingSMActor*>();
}

UMaterialInstanceDynamic* ABuildingSMActor::GetAnimatingMID(int32 ElementIndex) {
    return NULL;
}

void ABuildingSMActor::GameplayCue_Abilities_Activation_Generic_BannerWallBuff2(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters) {
}

void ABuildingSMActor::GameplayCue_Abilities_Activation_Generic_BannerWallBuff1(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters) {
}

void ABuildingSMActor::ForceIntoStructuralGridDuringRuntime_Implementation() {
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

void ABuildingSMActor::DetachBuildingActorFromMe(ABuildingSMActor* ActorToAttach, bool bBeingDestroyed) {
}

void ABuildingSMActor::ClearRequestedBuildingAnimation() {
}

void ABuildingSMActor::BlueprintOnStructurallyUnstable_Implementation() {
}

void ABuildingSMActor::BlueprintOnStructurallyStable_Implementation() {
}

void ABuildingSMActor::AttachBuildingActorToMe(ABuildingSMActor* ActorToAttach, bool bForceAttachment) {
}

void ABuildingSMActor::AddToGrid() {
}

void ABuildingSMActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildingSMActor, TextureData);
    DOREPLIFETIME(ABuildingSMActor, StaticMesh);
    DOREPLIFETIME(ABuildingSMActor, AltMeshIdx);
    DOREPLIFETIME(ABuildingSMActor, ResourceType);
    DOREPLIFETIME(ABuildingSMActor, bMirrored);
    DOREPLIFETIME(ABuildingSMActor, bNoCollision);
    DOREPLIFETIME(ABuildingSMActor, bNoPhysicsCollision);
    DOREPLIFETIME(ABuildingSMActor, bNoCameraCollision);
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
    DOREPLIFETIME(ABuildingSMActor, DamagerOwner);
    DOREPLIFETIME(ABuildingSMActor, RelevantBASE);
    DOREPLIFETIME(ABuildingSMActor, ProxyGameplayCueDamagePhysical);
}

ABuildingSMActor::ABuildingSMActor() {
    this->TextureData[0] = NULL;
    this->TextureData[1] = NULL;
    this->TextureData[2] = NULL;
    this->TextureData[3] = NULL;
    this->StaticMesh = NULL;
    this->AltMeshIdx = -1;
    this->ResourceType = EFortResourceType::None;
    this->bForceReplicateSubObjects = false;
    this->bAllowBuildingCheat = false;
    this->bMirrored = false;
    this->bNoCollision = false;
    this->bNoPhysicsCollision = false;
    this->bNoCameraCollision = false;
    this->bCameraOnlyCollision = false;
    this->bNoPawnCollision = false;
    this->bNoAIPawnCollision = false;
    this->bNoWeaponCollision = false;
    this->bNoRangedWeaponCollision = false;
    this->bNoProjectileCollision = false;
    this->bDoNotBlockInteract = false;
    this->bBlocksCeilingPlacement = false;
    this->bBlocksAttachmentPlacement = false;
    this->bSupportsRepairing = false;
    this->bUsePhysicalSurfaceForFootstep = false;
    this->bRandomYawOnPlacement = false;
    this->bRandomScaleOnPlacement = false;
    this->bClearMIDWhenReturningToUndamagedState = true;
    this->bNeedsMIDsForCreative = false;
    this->bHiddenDueToTrapPlacement = false;
    this->bAttachmentPlacementBlockedFront = false;
    this->bAttachmentPlacementBlockedBack = false;
    this->bAllowResourceDrop = true;
    this->bHideOnDeath = true;
    this->bPlayDestructionEffects = true;
    this->bSkipConstructionSounds = false;
    this->bSupportedDirectly = false;
    this->bForciblyStructurallySupported = false;
    this->bRegisterWithStructuralGrid = false;
    this->bIsForPreviewing = false;
    this->bUnderConstruction = false;
    this->bUnderRepair = false;
    this->bCurrentlyBeingEdited = false;
    this->bAllowWeakSpots = true;
    this->bUseComplexForWeakSpots = true;
    this->bCanSpawnAtLowerQuotaLevels = false;
    this->bNeedsWindMaterialParameters = false;
    this->bPropagatesBounceEffects = true;
    this->bNeedsDamageOverlay = true;
    this->bIsInitiallyBuilding = false;
    this->SavedDirectlySupportedStatus = ESavedSupportStatus::UnknownState;
    this->MaximumQuotaLevelBound = ELootQuotaLevel::Unlimited;
    this->BuildingAnimation = EBA_None;
    this->DestroyedTime = 0.00f;
    this->InfluenceMapWeight = 0.00f;
    this->BASEEffectMeshComponent = NULL;
    this->CachedNavAreaHusk = NULL;
    this->CachedNavAreaSmasher = NULL;
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0"));
    this->BaseMaterial = NULL;
    this->MaxResourcesToSpawn = -1;
    this->BreakEffect = NULL;
    this->DeathParticles = NULL;
    this->DeathSound = NULL;
    this->ConstructedEffect = NULL;
    this->ShieldBuffMaterialParamValue1 = 0.50f;
    this->ShieldBuffMaterialParamValue2 = 1.00f;
    this->AnimatingDistanceFieldSelfShadowBias = 100.00f;
    this->ConstructionAudioComponent = NULL;
    this->CachedDestructionInstigator = NULL;
    this->DamageOverlayComponent = NULL;
    this->MIDDamageOverlay = NULL;
    this->DamageAmountStart = 0.00f;
    this->LastDamageAmount = 0.00f;
    this->EditModePatternData = NULL;
    this->UndermineGroup = -1;
    this->LogicalBuildingIdx = -1;
    this->AnimatingSubObjects = 0.00f;
    this->NumFrameSubObjects = 0;
    this->EditModeSupportClass = NULL;
    this->EditModeSupport = NULL;
    this->HealthToAutoBuild = 0.00f;
    this->AccumulatedAutoBuildTime = 0.00f;
    this->BuildingReplacementType = BRT_None;
    this->ReplacementDestructionReason = BRT_None;
    this->CurBuildingAnimType = EBA_None;
    this->DamageVisualsState = EFortDamageVisualsState::UnDamaged;
    this->CurAnimSubObjectNum = 0;
    this->CurBuildingAnimStartTime = 0.00f;
    this->CurAnimSubObjectTargetNum = 0;
    this->BlueprintMeshComp = NULL;
    this->EditingPlayer = NULL;
    this->ConnectivityIcon = NULL;
    this->BuildingAttachmentRadius = 32.00f;
    this->BuildingAttachmentSlot = SLOT_None;
    this->BuildingAttachmentType = ATTACH_None;
    this->BuildingPlacementType = EPlacementType::Free;
    this->LastStructuralCheck = EStructuralSupportCheck::Max_None;
    this->PlayerGridSnapSize = 16.00f;
    this->ParentActorToAttachTo = NULL;
    this->AttachmentPlacementBlockingActors[0] = NULL;
    this->AttachmentPlacementBlockingActors[1] = NULL;
    this->ConnectivityComponent = NULL;
    this->LODActorIndexInFoundation = 0;
    this->ActorIndexInFoundation = 0;
    this->DamagerOwner = NULL;
    this->RelevantBASE = NULL;
    this->LastRelevantBASE = NULL;
}

