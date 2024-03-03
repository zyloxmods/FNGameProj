#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionListenerInterface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
	#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayEffectTypes.h"
#include "GameplayCueInterface.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "Styling/SlateBrush.h"
#include "EFortAILODLevel.h"
#include "EFortAILevelRatingDisplayType.h"
#include "EFortAIPawnGender.h"
#include "EFortCombatEvents.h"
#include "EFortCustomGender.h"
#include "EFortHotSpotSlot.h"
#include "EFortMovementStyle.h"
#include "EFortMovementUrgency.h"
#include "EFortPartialPathUsage.h"
#include "EFortressAIType.h"
#include "EScoreDistributionType.h"
#include "FortAIAppearanceOverrideEntry.h"
#include "FortAIAttributeReplicationProxy.h"
#include "FortAIBatchedDamageCues.h"
#include "FortAIInteractionDelegate.h"
#include "FortAIInventoryUpdatedDelegate.h"
#include "FortAIOnInventoryInitializedDelegate.h"
#include "FortAIPawnCustomizationsLoadedDelegate.h"
#include "FortAISharedRepMovement.h"
#include "FortAISpawnGroupUpgradeUIData.h"
#include "FortAthenaVehicleInputState.h"
#include "FortCrowdOverlapDelegate.h"
#include "FortDBNODelegate.h"
#include "FortHUDTargetUnderReticleInterface.h"
#include "FortInteractInterface.h"
#include "FortInventoryOwnerInterface.h"
#include "FortMarkableActorInterface.h"
#include "FortPawn.h"
#include "FortSpawnableByPlacementSystemInterface.h"
#include "FortUpdateFromVehicleInputDelegate.h"
#include "GameplayAbilityRepSharedAnim.h"
#include "InteractionType.h"
#include "MarkedActorDisplayInfo.h"
#include "MinimapGoalByTagColorsData.h"
#include "TInteractionType.h"
#include "Templates/SubclassOf.h"
#include "FortAIPawn.generated.h"

class AActor;
class ABuildingActor;
class ABuildingTrapDefender;
class AController;
class AFortAIPawn;
class AFortInventory;
class AFortMission;
class AFortPickup;
class AFortPlayerStateZone;
class UAIGoalComponent;
class UAnimMontage;
class UBehaviorTree;
class UFortAIAssetLoader;
class UFortAIAttributesSet;
class UFortAIEncounterInfo;
class UFortAIPawnCustomizationDefinition;
class UFortAbilitySet;
class UFortAbilitySystemComponent;
class UFortAccountItem;
class UFortCameraMode;
class UFortCharacterAttrSet;
class UFortGameplayModifierItemDefinition;
class UFortItem;
class UFortItemDefinition;
class UFortNavObstacleComponent;
class UFortSimpleMiniMapIndicator;
class UFortWeaponAttrSet;
class UNavigationQueryFilter;
class UParticleSystem;
class UPrimitiveComponent;
class UShapeComponent;
class USoundBase;
class USplineComponent;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAIPawn : public AFortPawn, public IFortSpawnableByPlacementSystemInterface/*, public IAIPerceptionListenerInterface*/, public IFortInteractInterface, public IFortInventoryOwnerInterface, public IFortHUDTargetUnderReticleInterface, public IFortMarkableActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayCueParameters DeimosBatchedGameplayCueParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AttributeProxy, meta=(AllowPrivateAccess=true))
    FFortAIAttributeReplicationProxy AttributeReplicationProxy;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_ReplicatedAnimMontage, meta=(AllowPrivateAccess=true))
    FGameplayAbilityRepAnimMontage RepAnimMontageInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SharedAnim, meta=(AllowPrivateAccess=true))
    FGameplayAbilityRepSharedAnim RepSharedAnimInfo;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FMinimalGameplayCueReplicationProxy SimulatedProxyGameplayCues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bAttacking: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bDied: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bHitReact: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bFullBodyHitReact: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bDancing: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bRangedAttacking: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bHasGoalActor: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bFrozen: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseSharedAnimation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNeedsDeathNotification: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bKilledOrDowned: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bDespawnedDueToInactivity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNotifySpawnRift: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUsesDBNO: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasInventory: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldTossInventoryOnDeath: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseDefenderInventoryManagement: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreDefender: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTrackNearbyPickups: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsCharging: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsCowering: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanShowMinimapIndicator: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowMinimapFarOffDirectionArrow: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasEngaged: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsAlwaysGameplayRelevant: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsDebugSpawnedAI: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bEncounterExpectedLifespanExpired: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_EnableBlockingCollisionWithOtherAI, meta=(AllowPrivateAccess=true))
    uint8 bEnableBlockingCollisionWithOtherAI: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSetMiniMapIconRotation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bHasDroppedLoot: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bUseFastAbilityReplication: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseAIGoalComponent: 1;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FMinimalReplicationTagCountMap FastReplicationMinimalReplicationTags;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FMinimalGameplayCueReplicationProxy FastReplicationMinimalGameplayCueProxy;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAIOnInventoryInitialized OnInventoryInitialized;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAIInventoryUpdated OnInventoryUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float AIDifficultyLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortAILevelRatingDisplayType LevelRatingDisplayType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAIEncounterInfo* EncounterInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnSetIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SpawnGroupGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnemyIndexInSpawnGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FinishEncounterSpawnFallbackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EncounterSpawnDisableRangedAttackingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EncounterSpawnDisableMeleeAttackingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle EncounterExpectedLifespanTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* SpawnRift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpawnRiftLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SpawnSourceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAIGoalComponent> AIGoalComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTimeAllowedOutsideTether;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> DefaultNavFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> HuntingNavFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DBNOInteractionDuration;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortDBNO OnDowned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TInteractionType DBNOInteractionType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortMovementStyle::Type> MovementStyles[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateNearbyPickupFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RequiredWeaponPickupTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery RequiredWeaponPickupTagQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePickupDirectionOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PickupDirectionOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NoWeaponInCombatEventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NoWeaponOutOfCombatEventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector CachedHitLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TurnTransitionGameplayAbilityTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> DeathParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumRunVariations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentRunVariationIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RunVariationRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EyeIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SkinIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DefaultEyeColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultEyeBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DefaultSkinColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultSkinGlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor MinimapDefaultIconColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor PlayerManagerMinimapColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush MiniMapIconBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush MiniMapAboveBelowIconBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMinimapGoalByTagColorsData> MinimapGoalByTagColors;
    
    UPROPERTY(EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int8 MinimapGoalByTagColorIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AppearanceOverrideName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortAIPawnGender AppearanceOverrideGender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortCombatEvents FollowPlayerEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortCombatEvents InCombatNearPlayerEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TInteractionType InteractionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FollowPlayerRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionDuration;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAIInteraction OnInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABuildingTrapDefender* DefenderTrap;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortCrowdOverlap OnActorBeginCrowdOverlap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeepWaterImmersionDepth;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDebugAI: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDebugAIAnim: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseBuildingAttackingHotspots: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanBeLaunched: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanMoveThroughWalls: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanUseNavWalking: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanUseSimpleCollisions: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanUseStepAside: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanUseDoors: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanUseShootingHotspots: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanSleep: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bIsSleeping, meta=(AllowPrivateAccess=true))
    uint8 bIsSleeping: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bShouldStartSleeping: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bCanLookAtGoal: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowServerCosmeticComponentOptimizations: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowCapsuleComponentsOnServer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRootComponentIgnoreQueryPawnCapsule: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanUseMeshPooling: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseCrowdSimulation: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bControlWalkingOffLedges: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseAppearanceOverride: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CanInteract, meta=(AllowPrivateAccess=true))
    uint8 bCanInteract: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHideHealthBar: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasBuildingHitEffects: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bReplicateGrantedTagsWithFastAbilityReplication: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bReplicateGameplayCuesWithFastAbilityReplication: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOnlySkipAbilitySystemComponentWithFastAbilityReplication: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortMovementUrgency::Type> MovementUrgency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EFortressAIType AIType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 Team;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SimpleCollisionsProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UpgradeUIData, meta=(AllowPrivateAccess=true))
    FFortAISpawnGroupUpgradeUIData UpgradeUIData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSlateBrush CachedUpgradeUIDataUpgradeIconBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScoreMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OverriddenScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EScoreDistributionType OverriddenScoreDistribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LootDropConeHalfAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LootDropSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinItemTossDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxItemTossDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItemTossDirectionConeHalfAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortHotSpotSlot HotspotType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortPartialPathUsage PartialPathUsage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerStateZone* PlayerManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FString DefenderItemInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FName DefenderSquadId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float DefenderPlacedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecentlySeenInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentAIRotationRate, meta=(AllowPrivateAccess=true))
    FRotator CurrentAIRotationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveSoundStimulusBroadcastInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveSoundStimulusMaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGenerateMoveSoundInAllMovementModes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShapeComponent* WeaponCollisionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Inventory, meta=(AllowPrivateAccess=true))
    AFortInventory* Inventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortPickup*> NearbyPickups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AFortPickup*, float> UnreachablePickups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAIAppearanceOverrideEntry> AppearanceOverrideEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AppearanceOverrideEntryIndex, meta=(AllowPrivateAccess=true))
    int32 AppearanceOverrideEntryIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpawnLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator SpawnRotation;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ABuildingActor> SleepingFloor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PelvisBoneName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HeadBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimapIndicatorUpdateFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MinimapViewableDistance, meta=(AllowPrivateAccess=true))
    float MiniMapViewableDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToPlayerManagerToShowHealthBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToOtherPlayersToShowHealthBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortAIAttributesSet* AttributesSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCharacterAttrSet* CharacterAttrSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortWeaponAttrSet* WeaponAttrSet;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* ImpactPhysicalSurfaceSounds[26];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ImpactPhysicalSurfaceEffects[26];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortSimpleMiniMapIndicator* MinimapIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MinimapScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortAbilitySet*> DefaultGameplayAbilitySets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortAbilitySet*> SpawnInheritedCharacterAbilitySets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortGameplayModifierItemDefinition*> SpawnModifierDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortAbilitySystemComponent* AIPawnAbilitySystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer WallAttackGameplayAbilityTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer WallRangedAttackGameplayAbilityTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CeilingAttackGameplayAbilityTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer FloorAttackGameplayAbilityTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTagContainer> FailedAbilityQueryTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AActor* CurrentAimTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortNavObstacleComponent* NavObstacleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BuildingHitMaxDistanceToPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BuildingHitMaxDistanceToHitLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadHeightPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMarkedActorDisplayInfo MarkerDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeMarked;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAccountItem* DefenderItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TetheredFollower, meta=(AllowPrivateAccess=true))
    AFortPawn* TetheredFollower;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCameraMode> TetheredCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCameraMode> TetheredTargetingCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsTetheredBoosting;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TetherBoostMultiplier;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TetherJumpServerCorrectionIgnoreTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TetherJumpLastTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> TetherBoundsXYSplineClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USplineComponent* TetherBoundsXYSplineComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortUpdateFromVehicleInput OnUpdateFromVehicleInput;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAIPawnCustomizationDefinition* CustomizationsToLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAIPawnCustomizationDefinition* UsedCustomization;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAIPawnCustomizationsLoaded OnCustomizationsLoadedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAIAssetLoader* AIAssetLoader;
    
public:
    AFortAIPawn();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void TurnOnSleepingOptimizations();
    
    UFUNCTION(BlueprintCallable)
    void TriggerNoWeaponSpeech();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldUseFiringCapsuleCollision();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldUpdateSkeletalMesh();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    bool ShouldApplyBuildingHitEffect(float Damage, FVector Location, FHitResult HitInfo, bool bPlayerPlaced) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetWeaponCollisionComponent(UShapeComponent* InWeaponCollisionComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetUsesDBNO(bool bInUsesDBNO);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetSkinColor(FLinearColor NewSkinColor, float NewSkinBrightness);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldStartSleeping(bool bHintStartSleeping);
    
    UFUNCTION(BlueprintCallable)
    void SetOverridenScoreDistribution(const EScoreDistributionType InOverriddenScoreDistribution);
    
    UFUNCTION(BlueprintCallable)
    void SetOverridenScore(int32 InOverriddenScore);
    
    UFUNCTION(BlueprintCallable)
    void SetMovementUrgency(TEnumAsByte<EFortMovementUrgency::Type> Urgency);
    
    UFUNCTION(BlueprintCallable)
    void SetMinSignificanceForAnimationCurves(float MinSignificance);
    
    UFUNCTION(BlueprintCallable)
    void SetMinimumAILOD(EFortAILODLevel MinimumAILOD);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetMiniMapViewableDistance(float NewMinimapViewableDistance);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetIsCharging(bool bNewIsCharging);
    
    UFUNCTION(BlueprintCallable)
    void SetForceBossSignificance(bool bEnabled);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetEyeColor(FLinearColor NewEyeColor, float NewEyeBrightness);
    
    UFUNCTION(BlueprintCallable)
    void SetEncounterInfo(UFortAIEncounterInfo* InEncounterInfo);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetDisplayName(const FText& Name);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetDefenderTrap(ABuildingTrapDefender* InDefenderTrap);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentAimTarget(AActor* AimTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionProfileName(FName InCollisionProfileName);
    
    UFUNCTION(BlueprintCallable)
    void SetCanSleep(bool InCanSleep);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCanInteract(bool CanInteract);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetBlockCollisionWithOtherAI(bool bInEnableBlockingCollisionWithOtherAI);
    
    UFUNCTION(BlueprintCallable)
    void SetAIType(EFortressAIType InAIType);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetAIRotationRate(const FRotator& AIRotationRate);
    
    UFUNCTION(BlueprintCallable)
    void SetAIFocalPoint(AActor* FocusTarget, FVector FocalPoint, bool bUseAttackingPriority);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ReviveFromDBNO();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ResetAIRotationRateToDefault();
    
    UFUNCTION(BlueprintCallable)
    void PlayAdditiveHitReactsNative(const FVector& HitDirection, UAnimMontage* NewAnimMontage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWaterNavMeshExit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWaterNavMeshEnter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateTetheredFollower(AFortPawn* InTetheredFollower);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateFromVehicleInputEvent(float DeltaSeconds, const FFortAthenaVehicleInputState& VehicleInputState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTetherRequestJump();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTeamChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnStartedEncounterSpawn();
    
    UFUNCTION(BlueprintCallable)
    void OnSleepingAIsFloorBuildingActorDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_UpgradeUIData();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_TetheredFollower();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SharedAnim();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedAnimMontage();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_MinimapViewableDistance();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_Inventory();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EnableBlockingCollisionWithOtherAI();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentAIRotationRate();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_CanInteract(bool bOldCanInteract);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_bIsSleeping();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_AttributeProxy();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_AppearanceOverrideEntryIndex();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnOutsideOfTetherBeyondMaxTimeAllowed();
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    FVector OnLaunchCharacter(FVector LaunchVelocity, bool bXYOverride, bool bZOverride);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnFinishedEncounterSpawn();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnEndSleepEffects();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndDeepWaterInteraction(FVector PreviousWaterSurfaceLocation, float WaterDepth);
    
    UFUNCTION(BlueprintCallable)
    void OnEncounterSpawnEnableRangedAttacking();
    
    UFUNCTION(BlueprintCallable)
    void OnEncounterSpawnEnableMeleeAttacking();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDefenderTrapSet(ABuildingTrapDefender* OldDefenderTrap);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCustomizationsLoaded_BP();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCheatUpdateSpecialEventGE(bool bShouldUseSpecialEventGE);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnBeginSleepEffects();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginDeepWaterInteraction(FVector WaterSurfaceLocation, float WaterDepth);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAppearanceOverridden();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void NetMulticast_BatchedDamageCues(FFortAIBatchedDamageCues Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortItem* K2_GetDefenderItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortItem* K2_FindExistingItemForDefinition(const UFortItemDefinition* ItemDefinition, bool bInStorageVault) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInsideTetherBounds(bool bUseRelaxedTetherBounds) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInCombat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDefender() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTether() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void GrabPickupCustomized(AFortPickup* Pickup, float FlyTime);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void GrabPickup(AFortPickup* Pickup);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void GiveAmmo(const int32 AmmoQuantity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUsesDBNO() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    FRotator GetSpawnRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSpawnPointValue() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    FVector GetSpawnLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScoreWithoutMutliplierValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScoreValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EScoreDistributionType GetScoreDistribution() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<EFortMovementUrgency::Type> GetMovementUrgency(AFortAIPawn* FortAIPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<EFortMovementStyle::Type> GetMovementStyle(const AFortAIPawn* FortAIPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortItem* GetInventoryItem(FGuid ItemGuid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USoundBase* GetImpactPhysicalSurfaceSound(const FHitResult& Impact) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetGroundSpeedForUrgency(AFortAIPawn* FortAIPawn, TEnumAsByte<EFortMovementUrgency::Type> Urgency);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDifficultyRating() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDifficultyLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDefenderItemInstanceId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetCurrentAimTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortCustomGender GetCharacterGender() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ForceKillNoDBNO();
    
    UFUNCTION(BlueprintCallable)
    void FinishedEncounterSpawn();
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void FastSharedReplication(const FFortAISharedRepMovement& SharedRepMovement);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DropAllItems(bool bSpawnPickups);
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearAIFocalPoint(bool bUseAttackingPriority);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CanTetherJump();
    
    UFUNCTION(BlueprintCallable)
    bool CanHitTargetWithAbility(FGameplayTagContainer GameplayAbilityTag, AActor* CanHitTarget, bool bUseIdealYawRotationToTarget);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddUnreachablePickup(AFortPickup* Pickup);
    
    UFUNCTION(BlueprintCallable)
    void AddFortAbilitySet(UFortAbilitySet* FortAbilitySet);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    FGuid GetMissionGuid() const override PURE_VIRTUAL(GetMissionGuid, return FGuid{};);
    
    UFUNCTION(BlueprintCallable)
    AFortMission* GetMission() const override PURE_VIRTUAL(GetMission, return NULL;);
    
    UFUNCTION()
    bool ServerOnAttemptInteract(const FInteractionType& InteractType) override PURE_VIRTUAL(ServerOnAttemptInteract, return false;);
    
    UFUNCTION(BlueprintCallable)
    FText GetHUDTargetUpgradeDisplayName() override PURE_VIRTUAL(GetHUDTargetUpgradeDisplayName, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    float GetHUDTargetHealthPercentage() override PURE_VIRTUAL(GetHUDTargetHealthPercentage, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    FText GetHUDTargetDisplayName() override PURE_VIRTUAL(GetHUDTargetDisplayName, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    TArray<FText> GetHUDTargetDisplayModifiers() override PURE_VIRTUAL(GetHUDTargetDisplayModifiers, return TArray<FText>(););
    
    UFUNCTION(BlueprintCallable)
    float GetHUDTargetDifficultyRating() override PURE_VIRTUAL(GetHUDTargetDifficultyRating, return 0.0f;);
    
};

