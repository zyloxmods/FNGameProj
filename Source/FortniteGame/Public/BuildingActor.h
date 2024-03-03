#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/CurveTable.h"
#include "Engine/EngineTypes.h"
#include "AI/Navigation/NavAgentInterface.h"
#include "AI/Navigation/NavRelevantInterface.h"
#include "GameplayEffectTypes.h"
#include "GameplayCueInterface.h"
#include "GameplayEffectTypes.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "NavLinkHostInterface.h"
#include "Chaos/ChaosEngineInterface.h"
#include "ActorHealthChangedDelegate.h"
#include "BuildingActorOnInteractDelegate.h"
#include "BuildingDamagedSignatureDelegate.h"
#include "BuildingHealthChangedDelegate.h"
#include "EAbilitySystemComponentCreationPolicy.h"
#include "EAttributeInitLevelSource.h"
#include "EDynamicBuildingPlacementType.h"
#include "EFortBaseWeaponDamage.h"
#include "EFortBuildingInitializationReason.h"
#include "EFortBuildingPersistentState.h"
#include "EFortBuildingType.h"
#include "EFortDayPhase.h"
#include "EFortTeam.h"
#include "EInteractionBeingAttempted.h"
#include "ENavigationObstacleOverride.h"
#include "FortAbilitySystemInterface.h"
#include "FortAttributeInitializationKey.h"
#include "FortCurieInterface.h"
#include "FortDamageableActorInterface.h"
#include "FortInitializationInterface.h"
#include "FortInteractInterface.h"
#include "FortMarkableActorInterface.h"
#include "FortSpawnableByPlacementSystemInterface.h"
#include "FortTeamActorInterface.h"
#include "InteractionType.h"
#include "LevelSaveSpawnable.h"
#include "MarkedActorDisplayInfo.h"
#include "TInteractionType.h"
#include "Templates/SubclassOf.h"
#include "BuildingActor.generated.h"

class ABuildingActor;
class AController;
class AFortAthenaVehicle;
class AFortDecoTool;
class AFortMission;
class AFortPawn;
class AFortPlacementActor;
class AFortPlayerController;
class AFortPlayerPawn;
class AFortPlayerState;
class AFortPlayerStateZone;
class UActorComponent;
class UBuildingActorHotSpotConfig;
class UFortAbilitySystemComponent;
class UFortBuildingActorSet;
class UFortHealthBarIndicator;
class UNavArea;
class UNavLinkDefinition;
class UObject;
class UPrimitiveComponent;
class UProjectileMovementComponent;
class USoundBase;

UCLASS(Abstract, Blueprintable, Config=Game)
class FORTNITEGAME_API ABuildingActor : public AActor, public IFortInteractInterface, public INavLinkHostInterface, public IFortTeamActorInterface, public IFortInitializationInterface, public INavRelevantInterface, public INavAgentInterface, public IFortSpawnableByPlacementSystemInterface, public IGameplayTagAssetInterface, public IGameplayCueInterface, public IFortDamageableActorInterface/*, public IFortAbilitySystemInterface*/, public ILevelSaveSpawnable, public IFortCurieInterface, public IFortMarkableActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid MyGuid;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float SavedHealthPct;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UNavArea> AreaClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UNavLinkDefinition> NavigationLinksClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_InitialOverlappingVehicles, meta=(AllowPrivateAccess=true))
    TArray<AFortAthenaVehicle*> InitialOverlappingVehicles;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_CurrentBuildingLevel, meta=(AllowPrivateAccess=true))
    int32 CurrentBuildingLevel;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumBuildingLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortBuildingActorSet> BuildingAttributeSetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortBuildingActorSet* BuildingAttributeSet;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, ReplicatedUsing=OnRep_BuildingAttributeSet, meta=(AllowPrivateAccess=true))
    UFortBuildingActorSet* ReplicatedBuildingAttributeSet;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MaxHealthInitializationValue;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAttributeInitializationKey AttributeInitKeys[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttributeInitLevelSource AttributeInitLevelSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAbilitySystemComponentCreationPolicy AbilitySystemComponentCreationPolicy;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPhysicalSurface> PrimarySurfaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortBaseWeaponDamage::Type> WeaponResponseType;
    
private:
    UPROPERTY(EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    int16 OwnerPersistentID;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifespanAfterDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseMinLifeSpan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortAbilitySystemComponent* AbilitySystemComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, ReplicatedUsing=OnRep_AbilitySystemComponent, meta=(AllowPrivateAccess=true))
    UFortAbilitySystemComponent* ReplicatedAbilitySystemComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGameplayCueParameters> PendingDamageImpactCues;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthBarIndicatorWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthBarIndicatorVerticalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HealthBarIndicatorSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortHealthBarIndicator* HealthBarIndicator;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 HealthBarIndicatorDifficultyRating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 ForceMetadataRelevant;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 LastMetadataRelevant;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EDynamicBuildingPlacementType::Type> DynamicBuildingPlacementType;
    
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENavigationObstacleOverride NavigationObstacleOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery IncomingDamageFilterQuery;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bIsInvulnerable: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bPreviewBuildingActor: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bPlayedDying: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bHasRegisteredActorStateAtLeastOnce: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bDirtyForLevelRecordSave: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bSavedMetaPropertiesProcessed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUpgradeUsesSameClass: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisplayLevelInInfoWidget: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowUpgradeRegardlessOfPlayerBuildLevel: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisplayDamageNumbersInAthena: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseFortHealthBarIndicator: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSurpressHealthBar: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCreateVerboseHealthLogs: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsIndestructibleForTargetSelection: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=HandleDestroyed, meta=(AllowPrivateAccess=true))
    uint8 bDestroyed: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPersistToWorld: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRefreshFullSaveDataBeforeZoneSave: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bBeingDragged: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRotateInPlaceGame: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bBeingOneHitDisassembled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bBoundsAreInvalidForMelee: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsNavigationModifier: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bBlockNavigationLinks: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanExportNavigationCollisions: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanExportNavigationObstacle: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bMirrorNavLinksX: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bMirrorNavLinksY: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreMoveGoalCollisionRadius: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceDisableRootNavigationRelevance: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceAutomationPass: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceAutomationPass_NavmeshOnTop: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceAutomationPass_SmashableFlat: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanBeSavedInCreativeVolume: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsNavigationRelevant: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsNavigationIndestructible: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bBlockNavLinksInCell: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseHotSpotAsMoveGoalReplacement: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasCustomAttackLocation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bWorldReadyCalled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bBeingRotatedOrScaled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bBeingTranslated: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRotateInPlaceEditor: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bEditorPlaced: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bPlayerPlaced: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bShouldTick: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUsesDayPhaseChange: 1;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsDynamic: 1;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsDynamicOnDedicatedServer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsDedicatedServer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bUseTickManager: 1;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsMovable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bRegisteredForDayPhaseChange: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceDamagePing: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDestroyFoliageWhenPlaced: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bObstructTrapTargeting: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_InstantDeath, meta=(AllowPrivateAccess=true))
    uint8 bInstantDeath: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bDoNotBlockBuildings: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bForceBlockBuildings: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bDestroyOnPlayerBuildingPlacement: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bUseCentroidForBlockBuildingsCheck: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bPredictedBuildingActor: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreCollisionWithCriticalActors: 1;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsPlayerBuildable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFireBuiltAndDestroyedEvents: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bStructurallySupportOverlappingActors: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowInteract: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowFirstInteractPrompt: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowSecondInteractPrompt: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowHostileBlueprintInteraction: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEndAbilitiesOnDeath: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAlwaysUseNetCullDistanceSquaredForRelevancy: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bHighlightDirty: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_bCollisionBlockedByPawns, meta=(AllowPrivateAccess=true))
    uint8 bCollisionBlockedByPawns: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowTeamDamage: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreAffiliationInteractHighlight: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSuppressInteractionWidget: 1;
    
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortBuildingType::Type> BuildingType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortTeam::Type> Team;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Team, meta=(AllowPrivateAccess=true))
    uint8 TeamIndex;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ConstTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer StaticGameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InteractionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CanInteractPerformNativeActionTag;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuildingDamagedSignature OnDied;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuildingDamagedSignature OnDamaged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AFortMission* AssociatedMissionParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    AFortPlacementActor* OriginatingPlacementActor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BRMinDrawDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BRMaxDrawDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StWMinDrawDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StWMaxDrawDistance;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuildingActorOnInteract OnInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle InteractionSpeed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DataVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastTakeHitTimeTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* PlayHitSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CullDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnapGridSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VertSnapGridSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SnapOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CentroidOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BaseLocToPivotOffset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_CustomState, meta=(AllowPrivateAccess=true))
    FString CustomState;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UActorComponent>> ComponentTypesWhitelistedForReplication;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> OverridePrimitivesToExcludeFoliage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBuildingActorHotSpotConfig* HotSpotConfig;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuildingHealthChanged OnBuildingHealthChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorHealthChanged OnActorHealthChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SavedActorGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    float BaselineScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AccumulatedDeltaSinceLastVisualsTick;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UProjectileMovementComponent* ProjectileMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanBeMarked: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bBlockMarking: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MarkerPositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMarkedActorDisplayInfo MarkerDisplay;
    
public:
    ABuildingActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool UseDefaultHealthBar() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void SnapDmgVisualsToCurrentHealth();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SilentDie(const bool bPropagateSilentDeath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldDisplayMobileInteractPrompt() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldDisplayDamageNumbers() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    bool ShouldDie(float Damage, AController* EventInstigator, AActor* DamageCauser);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetUsesDayPhaseChange(bool bUseDayPhase);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTeam(uint8 InTeam);
    
    UFUNCTION(BlueprintCallable)
    void SetSuppressHealthBar(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetQuestHighlight(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetNavigationModifier(bool bEnableModifier);
    
    UFUNCTION(BlueprintCallable)
    void SetNavigationIndestructible(const bool bNavIndestructible);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetHealthBarIndicatorDifficultyRating(int32 InDisplayLevel);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetHealth(float NewHealth);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCustomState(const FString& NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetCanExportNavigationObstacle(bool InCanExportNavigationObstacle);
    
    UFUNCTION(BlueprintCallable)
    void SetCanBeSavedToCreativeVolume(bool bCanBeSaved);
    
    UFUNCTION(BlueprintCallable)
    void SetBRDrawDistances(float NewBRMinDrawDistance, float NewBRMaxDrawDistance);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Resave();
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveEditorOnlyInstanceGameplayTags(const FGameplayTagContainer& TagsToRemove);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveAbilitySystemComponentAfterAutoBuildIfFullHealth();
    
    UFUNCTION(BlueprintCallable)
    void RefreshRemovedFoliageAroundBounds(bool bUseNonCollidingBounds);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void PlacedByPlayer(const AFortPlayerStateZone* PlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlacedByPlacementTool();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWorldReady();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetCustomDepthStencilValue(const TArray<UPrimitiveComponent*>& PrimComponents, bool bUseCustomDepth, int32 StencilValue, bool& bOutConsume);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Team();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_InstantDeath();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_InitialOverlappingVehicles();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CustomState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentBuildingLevel();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_BuildingAttributeSet();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_bCollisionBlockedByPawns();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_AbilitySystemComponent();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMatchStarted();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void OnDeathServer(float Damage, const FGameplayTagContainer& DamageTags, FVector Momentum, const FHitResult& HitInfo, AController* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle EffectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnDeathPlayEffects(float Damage, const FGameplayTagContainer& DamageTags, FVector Momentum, const FHitResult& HitInfo, AFortPawn* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle EffectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDayPhaseChanged(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void OnDamageServer(float Damage, const FGameplayTagContainer& DamageTags, FVector Momentum, const FHitResult& HitInfo, AController* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle EffectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnDamagePlayEffects(float Damage, const FGameplayTagContainer& DamageTags, FVector Momentum, const FHitResult& HitInfo, AFortPawn* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle EffectContext);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void OnBuildingActorInitialized(EFortBuildingInitializationReason InitializationReason, EFortBuildingPersistentState BuildingPersistentState);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ABuildingActor* K2_SpawnBuildingActor(const UObject* WorldContextObject, TSubclassOf<ABuildingActor> Class, const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerBuilt() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDamaged() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsAcceptablePositionForPlacement(const FVector& InLocation, const FRotator& InRotation, AFortDecoTool* DecoTool, bool bIsCDO, FText& OutFailureReason) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void InitializeKismetSpawnedBuildingActor(ABuildingActor* BuildingOwner, AFortPlayerController* SpawningController, bool bUsePlayerBuildAnimations);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasHealthLeft() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleDestroyed();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetShieldPercent() const;
    
    UFUNCTION(BlueprintCallable)
    float GetShieldOrHealthPercent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetShield() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortPlayerState* GetOwningPlayerState() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    AController* GetOwningController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMissingHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxShield() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxHealth() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    FName GetLootTierGroupOverride();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEditorTestTags(FGameplayTagContainer& TagContainer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCustomState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentBuildingLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCentroid() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void GameplayCue_InstantDeath(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters);
    
    UFUNCTION(BlueprintCallable)
    void GameplayCue_Healing(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters);
    
    UFUNCTION(BlueprintCallable)
    void GameplayCue_Damage(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ForceBuildingHealth(float NewHealth);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CustomStateChanged();
    
    UFUNCTION(BlueprintCallable)
    void ClearPlayedDying();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    bool BlueprintOnLocalInteract(AFortPlayerPawn* InteractingPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BlueprintOnInterruptInteract();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintOnInteract(const AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BlueprintOnBeginInteract(const AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted, const TInteractionType InteractionType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BlueprintGetInteractionTime(const AFortPawn* InteractingPawn, float& OutInteractionTime, const EInteractionBeingAttempted InteractionBeingAttempted) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FText BlueprintGetInteractionString(const AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FText BlueprintGetFailedInteractionString(const AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void BlueprintDie(FGameplayTag DeathReason, AController* Killer, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool BlueprintCanInteract(const AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted, const TInteractionType InteractionType) const;
    
    UFUNCTION(BlueprintCallable)
    void AddEditorOnlyInstanceGameplayTags(const FGameplayTagContainer& NewTags);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    bool ServerOnAttemptInteract(const FInteractionType& InteractType) override PURE_VIRTUAL(ServerOnAttemptInteract, return false;);
    
    UFUNCTION()
    uint8 GetTeam() const override PURE_VIRTUAL(GetTeam, return 0;);
    
    UFUNCTION()
    void WorldReady() override PURE_VIRTUAL(WorldReady,);
    
    UFUNCTION()
    bool NeedsWorldReady() const override PURE_VIRTUAL(NeedsWorldReady, return false;);
    
    UFUNCTION()
    void MatchStarted() override PURE_VIRTUAL(MatchStarted,);
    
    UFUNCTION(BlueprintCallable)
    FGuid GetMissionGuid() const override PURE_VIRTUAL(GetMissionGuid, return FGuid{};);
    
    UFUNCTION(BlueprintCallable)
    AFortMission* GetMission() const override PURE_VIRTUAL(GetMission, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void ForwardGameplayCueToParent() override PURE_VIRTUAL(ForwardGameplayCueToParent,);
    virtual FPrimaryAssetId GetPrimaryAssetId() const override
    {
        return FPrimaryAssetId("PlayerBuildingClass", GetFName());
    }
};

