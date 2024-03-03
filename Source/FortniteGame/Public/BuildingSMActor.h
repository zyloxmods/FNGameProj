#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/CurveTable.h"
#include "Engine/NetSerialization.h"
#include "AbilitySystemReplicationProxyInterface.h"
#include "GameplayEffectTypes.h"
#include "GameplayEffectTypes.h"
#include "GameplayEffectTypes.h"
#include "GameplayEffectTypes.h"
#include "GameplayPrediction.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AnimatingMaterialPair.h"
#include "BuildingActor.h"
#include "BuildingActorMinimalReplicationProxy.h"
#include "BuildingDuplicationData.h"
#include "BuildingNavObstacle.h"
#include "BuildingReplacementDestructionDelegate.h"
#include "ChosenQuotaInfo.h"
#include "EBuildingAnim.h"
#include "EBuildingAttachmentSlot.h"
#include "EBuildingAttachmentType.h"
#include "EBuildingReplacementType.h"
#include "EFortBounceType.h"
#include "EFortDamageVisualsState.h"
#include "EFortResourceType.h"
#include "ELootQuotaLevel.h"
#include "EPlacementType.h"
#include "ESavedSupportStatus.h"
#include "EStructuralSupportCheck.h"
#include "EditorOnlyBuildingInstanceMaterialParameters.h"
#include "FortAttachToActorInterface.h"
#include "FortBounceData.h"
#include "OnConstructionCompleteDelegate.h"
#include "ProxyGameplayCueDamage.h"
#include "RandomDayphaseFX.h"
#include "RepairFinishedDelegateDelegate.h"
#include "RepairStartedDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "TierMeshSets.h"
#include "TrapAttachedDelegateDelegate.h"
#include "BuildingSMActor.generated.h"

class AActor;
class ABuildingFoundation;
class ABuildingSMActor;
class AController;
class AFortConstructorBASE;
class AFortPawn;
class AFortPlayerController;
class AFortPlayerStateZone;
class UAudioComponent;
class UBuildingEditModeMetadata;
class UBuildingEditModeSupport;
class UBuildingTextureData;
class UCurveLinearColor;
class UMaterialInstanceConstant;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UParticleSystem;
class USoundBase;
class UStaticMesh;
class UStaticMeshComponent;
class UTexture;
class UTexture2D;

UCLASS(Abstract, Blueprintable)
class FORTNITEGAME_API ABuildingSMActor : public ABuildingActor, public IFortAttachToActorInterface/*, public IAbilitySystemReplicationProxyInterface*/ {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, SaveGame, ReplicatedUsing=OnRep_MetaData, meta=(AllowPrivateAccess=true))
    UBuildingTextureData* TextureData[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MetaData, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTierMeshSets> AlternateMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceReplicateSubObjects: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NoCollision, meta=(AllowPrivateAccess=true))
    uint8 bNoPhysicsCollision: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NoCameraCollision, meta=(AllowPrivateAccess=true))
    uint8 bNoCameraCollision: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNoPawnCollision: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNoAIPawnCollision: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bBlocksCeilingPlacement: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bBlocksAttachmentPlacement: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUsePhysicalSurfaceForFootstep: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRandomYawOnPlacement: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRandomScaleOnPlacement: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bClearMIDWhenReturningToUndamagedState: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NumFrameSubObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RandomScaleRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DestructionLootTierGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCurveLinearColor> WindSpeedCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCurveLinearColor> WindPannerSpeedCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> WindAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShieldBuffMaterialParamValue1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShieldBuffMaterialParamValue2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimatingDistanceFieldSelfShadowBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimatingSubObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerGridSnapSize;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_MetaData, meta=(AllowPrivateAccess=true))
    int32 AltMeshIdx;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_ResourceType, meta=(AllowPrivateAccess=true))
    EFortResourceType ResourceType;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowBuildingCheat: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    uint8 bMirrored: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NoCollision, meta=(AllowPrivateAccess=true))
    uint8 bNoCollision: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bSupportsRepairing: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_HiddenDueToTrapPlacement, meta=(AllowPrivateAccess=true))
    uint8 bHiddenDueToTrapPlacement: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bAttachmentPlacementBlockedFront: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bAttachmentPlacementBlockedBack: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bIsForPreviewing: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bUnderConstruction, meta=(AllowPrivateAccess=true))
    uint8 bUnderConstruction: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bUnderRepair, meta=(AllowPrivateAccess=true))
    uint8 bUnderRepair: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsInitiallyBuilding: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCameraOnlyCollision: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNoWeaponCollision: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNoRangedWeaponCollision: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNoProjectileCollision: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDoNotBlockInteract: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bNeedsMIDsForCreative: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowResourceDrop: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHideOnDeath: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPlayDestructionEffects: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSkipConstructionSounds: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bSupportedDirectly: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForciblyStructurallySupported: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint8 bRegisterWithStructuralGrid: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bCurrentlyBeingEdited: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowWeakSpots: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseComplexForWeakSpots: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanSpawnAtLowerQuotaLevels: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNeedsWindMaterialParameters: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPlayBounce: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPropagateBounce: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPropagatesBounceEffects: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNeedsDamageOverlay: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDeriveCurieIdentifierFromResourceType: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseSingleMeshCullDistance: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    ESavedSupportStatus SavedDirectlySupportedStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ELootQuotaLevel::Type> MaximumQuotaLevelBound;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BuildingAnimation, meta=(AllowPrivateAccess=true))
    EBuildingAnim BuildingAnimation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 CurAnimSubObjectNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 CurAnimSubObjectTargetNum;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortBounceData BounceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DestroyedTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InfluenceMapWeight;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BASEEffectMeshComponent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBuildingNavObstacle> NavObstacles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BuildingPlacementDistance;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReplicatedDrawScale3D, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize100 ReplicatedDrawScale3D;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEditorOnlyBuildingInstanceMaterialParameters EditorOnlyInstanceMaterialParameters;
    
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* BaseMaterial;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnConstructionComplete OnConstructionComplete;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicationProxy, meta=(AllowPrivateAccess=true))
    FBuildingActorMinimalReplicationProxy MinimalReplicationProxy;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FChosenQuotaInfo DestructionLootTierChosenQuotaInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName DestructionLootTierKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle BuildingResourceAmountOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MaxResourcesToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMaterialInterface>> IntenseWindMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* BreakEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> DeathParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystem* DeathParticlesInst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DeathParticleSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* DeathSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ConstructedEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRandomDayphaseFX> RandomDayphaseFXList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* ConstructionAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPawn* CachedDestructionInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* DamageOverlayComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DamageAmountStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastDamageAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LastDamageHitImpulseDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> CachedAnimatingStaticMeshes;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRepairStartedDelegate OnRepairBuildingStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRepairFinishedDelegate OnRepairBuildingFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBuildingEditModeMetadata* EditModePatternData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 UndermineGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LogicalBuildingIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimatingMaterialPair> AnimatingMaterialMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimatingMaterialPair> DamagedButNotAnimatingMaterialMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBuildingEditModeSupport> EditModeSupportClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBuildingEditModeSupport* EditModeSupport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HealthToAutoBuild;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AccumulatedAutoBuildTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EBuildingReplacementType> BuildingReplacementType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EBuildingReplacementType> ReplacementDestructionReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EBuildingAnim CurBuildingAnimType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFortDamageVisualsState DamageVisualsState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurBuildProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float OutwardMotionMagnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurBuildingAnimStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceConstant*> BlueprintMICs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> BlueprintMIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BlueprintMeshComp;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_EditingPlayer, meta=(AllowPrivateAccess=true))
    AFortPlayerStateZone* EditingPlayer;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BuildingAttachmentPointOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BuildingAttachmentRadius;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EBuildingAttachmentSlot> BuildingAttachmentSlot;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBuildingAttachmentType BuildingAttachmentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPlacementType::Type> BuildingPlacementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EStructuralSupportCheck LastStructuralCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuildingSMActor* ParentActorToAttachTo;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ABuildingActor*> AttachedBuildingActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ABuildingActor*> BuildingActorsAttachedTo;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTrapAttachedDelegate OnTrapPlacementChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuildingReplacementDestruction OnReplacementDestruction;
    
protected:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABuildingActor* AttachmentPlacementBlockingActors[2];
    
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ABuildingFoundation> Foundation;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint16 ActorIndexInFoundation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ABuildingSMActor* DamagerOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RelevantBASE, meta=(AllowPrivateAccess=true))
    AFortConstructorBASE* RelevantBASE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortConstructorBASE* LastRelevantBASE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ProxyGameplayCueDamage, meta=(AllowPrivateAccess=true))
    FProxyGameplayCueDamage ProxyGameplayCueDamage;
    
public:
    ABuildingSMActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool WillRegisterWithStructuralGrid() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateRepairMaterialAnim(float CurveValue);
    
    UFUNCTION(BlueprintCallable)
    void UpdateLODOverrideEffect(float CurveValue);
    
    UFUNCTION(BlueprintCallable)
    void UpdateDynamicShrinkAndDestroyEffect(float CurveValue);
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateComponentCollisionModes();
    
protected:
    UFUNCTION(BlueprintCallable)
    void TransferFromDuplicationData(FBuildingDuplicationData SourceData);
    
    UFUNCTION(BlueprintCallable)
    void TransferBuildingData(ABuildingSMActor* SourceDataActor);
    
public:
    UFUNCTION(BlueprintCallable)
    void StartBounceAnimation(const float StartTime, const float Radius, const FVector& Normal, const FVector& Center, TEnumAsByte<EFortBounceType::Type> InBounceType, const bool bLocalInstigator);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetTextureData(const TArray<UTexture2D*>& InTextures);
    
    UFUNCTION(BlueprintCallable)
    void SetParentActorToAttachTo(ABuildingSMActor* InParentActorToAttachTo);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetMirrored(bool bIsMirrored);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetDeathParticles(UParticleSystem* InPS);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RepairBuilding(AFortPlayerController* RepairingController, int32 ResourcesSpent);
    
protected:
    UFUNCTION(BlueprintCallable)
    TArray<UTexture2D*> ReadTextureData();
    
public:
    UFUNCTION(BlueprintCallable)
    void PreForceMove(AController* EventInstigator);
    
    UFUNCTION(BlueprintCallable)
    void PostForceMove();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void PlayFullHealthEffects();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void PlayDestructionEffects();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void PlayConstructionBounce();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void PlayBreakEffects();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRepairStarted();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ResourceType(EFortResourceType OldType);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicationProxy();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedDrawScale3D();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RelevantBASE();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_ProxyGameplayCueDamage();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NoCollision();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NoCameraCollision();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_MetaData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HiddenDueToTrapPlacement();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EditingPlayer();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bUnderRepair();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bUnderConstruction();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BuildingAnimation();
    
    UFUNCTION(BlueprintCallable)
    void OnLODOverrideEffectFinished();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIsForPreviewingChangedBP(const bool bNewIsForPreviewing);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDynamicShrinkAndDestroyEffectFinished();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDetachFromBuilding(ABuildingActor* AttachedToBuilding, bool bBeingDestroyed);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnBounceAnimationUpdate(const FFortBounceData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAttachToBuilding(ABuildingActor* AttachedToBuilding);
    
    UFUNCTION(NetMulticast, Unreliable)
    void NetMulticast_InvokeGameplayCuesExecuted_WithParams(const FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters);
    
    UFUNCTION(NetMulticast, Unreliable)
    void NetMulticast_InvokeGameplayCuesExecuted(const FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext);
    
    UFUNCTION(NetMulticast, Unreliable)
    void NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams(const FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters);
    
    UFUNCTION(NetMulticast, Unreliable)
    void NetMulticast_InvokeGameplayCueExecuted_WithParams(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters);
    
    UFUNCTION(NetMulticast, Unreliable)
    void NetMulticast_InvokeGameplayCueExecuted_FromSpec(const FGameplayEffectSpecForRPC Spec, FPredictionKey PredictionKey);
    
    UFUNCTION(NetMulticast, Unreliable)
    void NetMulticast_InvokeGameplayCueExecuted(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext);
    
    UFUNCTION(NetMulticast, Unreliable)
    void NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters);
    
    UFUNCTION( NetMulticast, Unreliable)
    void NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(const FGameplayEffectSpecForRPC& Spec, FPredictionKey PredictionKey);
    
    UFUNCTION(NetMulticast, Unreliable)
    void NetMulticast_InvokeGameplayCueAdded_WithParams(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters Parameters);
    
    UFUNCTION(NetMulticast, Unreliable)
    void NetMulticast_InvokeGameplayCueAdded(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayFullHealthEffects();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void MarkConnectedBuildingsForStructuralIntegrityCheck();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnderConstruction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSupportedByWorld() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStructurallySupported() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDestructionLoot() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCurveLinearColor* GetWindSpeedCurveForPreview() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCurveLinearColor* GetWindPannerSpeedCurveForPreview() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetWeakSpotEnabledTimeout(AFortPlayerController* Controller) const;
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EBuildingReplacementType> GetReplacementDestructionReason();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UMaterialInterface* GetOverrideMeshMaterial(UStaticMeshComponent* MeshComp, int32 MatIdx) const;
    
public:
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetOrCreateMIDOnDefaultMesh(int32 ElementIndex);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    int32 GetLogicalBuildingIndex() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    bool GetIntenseWindMaterialsForPreview(TArray<UMaterialInterface*>& Materials);
    
    UFUNCTION(BlueprintCallable)
    FBuildingDuplicationData GetDuplicationData();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetDestructionLootTierGroup() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UParticleSystem* GetDeathParticles() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetBuildingTextureData(TArray<UBuildingTextureData*>& OutTextureDataArray) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStaticMeshComponent* GetBuildingMeshComponent() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    TArray<ABuildingSMActor*> GetAttachedBuildingSMActors() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    TArray<ABuildingActor*> GetAttachedBuildingActors() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void GameplayCue_Abilities_Activation_Generic_BannerWallBuff2(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters);
    
    UFUNCTION(BlueprintCallable)
    void GameplayCue_Abilities_Activation_Generic_BannerWallBuff1(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ForceVisualState(EBuildingAnim VisualState);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ForceIntoStructuralGridDuringRuntime();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure=false)
    int32 FindDestructionLootTier() const;
    
    UFUNCTION(BlueprintCallable)
    void EditorOnlySetInstanceMaterialVectorParameter(FName ParamName, FLinearColor Value);
    
    UFUNCTION(BlueprintCallable)
    void EditorOnlySetInstanceMaterialTextureParameter(FName ParamName, UTexture* Value);
    
    UFUNCTION(BlueprintCallable)
    void EditorOnlySetInstanceMaterialScalarParameter(FName ParamName, float Value);
    
    UFUNCTION(BlueprintCallable)
    void EditorOnlyRemoveInstanceMaterialVectorParameter(FName ParamName);
    
    UFUNCTION(BlueprintCallable)
    void EditorOnlyRemoveInstanceMaterialTextureParameter(FName ParamName);
    
    UFUNCTION(BlueprintCallable)
    void EditorOnlyRemoveInstanceMaterialScalarParameter(FName ParamName);
    
    UFUNCTION(BlueprintCallable)
    void DetachBuildingActorFromMe(ABuildingActor* ActorToAttach, bool bBeingDestroyed, AController* Killer);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClearRequestedBuildingAnimation();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanDoBuildingAnimations() const;
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void CancelAutoBuild();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BlueprintOnStructurallyUnstable();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BlueprintOnStructurallyStable();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BlueprintCanAttemptGenerateResources(const FGameplayTagContainer& InTags, AController* InstigatorController) const;
    
    UFUNCTION(BlueprintCallable)
    void AttachBuildingActorToMe(ABuildingActor* ActorToAttach, bool bForceAttachment);
    
    UFUNCTION(BlueprintCallable)
    void AddToGrid();
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void SetActorAttachedTo(AActor* ActorAttachedTo) override PURE_VIRTUAL(SetActorAttachedTo,);
    
    UFUNCTION(BlueprintCallable)
    AActor* GetActorAttachedTo() const override PURE_VIRTUAL(GetActorAttachedTo, return NULL;);
    
};

