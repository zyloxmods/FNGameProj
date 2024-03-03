#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/CollisionProfile.h"
#include "Engine/CurveTable.h"
#include "Engine/DataTable.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/LatentActionManager.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GameplayEffectTypes.h"
#include "GameplayAbilitySpec.h"
#include "GameplayEffectTypes.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "Chaos/ChaosEngineInterface.h"
#include "AmmoItemState.h"
#include "AttributeInfo.h"
#include "EAnalyticMatchCounts.h"
#include "EAthenaWinCondition.h"
#include "EFortBuildingState.h"
#include "EFortDayPhase.h"
#include "EFortDisplayGender.h"
#include "EFortFeedbackBroadcastFilter.h"
#include "EFortItemEntryState.h"
#include "EFortMovementStyle.h"
#include "EFortPickupSourceTypeFlag.h"
#include "EFortPickupSpawnSource.h"
#include "EFortQuickBars.h"
#include "EFortRarity.h"
#include "EFortResourceType.h"
#include "EFortSoundIndicatorTypes.h"
#include "EFortTeamAffiliation.h"
#include "EFortWeaponCoreAnimation.h"
#include "EFortWeaponUpgradeDirection.h"
#include "ELicensedAudioTreatment.h"
#include "ESubGame.h"
#include "FortAbilitySetHandle.h"
#include "FortBaseWeaponStats.h"
#include "FortClientEventName.h"
#include "FortDialogExternalLatentActionHandle.h"
#include "FortFeedbackHandle.h"
#include "FortGameplayEffectContainer.h"
#include "FortGameplayEffectContainerSpec.h"
#include "FortItemEntry.h"
#include "FortItemQuantityPair.h"
#include "FortMeleeWeaponStats.h"
#include "FortPawnStats.h"
#include "FortRangedWeaponStats.h"
#include "FortRewardInfo.h"
#include "FortTargetFilter.h"
#include "FortTrapStats.h"
#include "FortWeaponDurabilityByRarityStats.h"
#include "GameDifficultyInfo.h"
#include "ProjectileMovementDrunkConfig.h"
#include "SpawnItemVariantParams.h"
#include "Templates/SubclassOf.h"
#include "FortKismetLibrary.generated.h"

class AActor;
class ABuildingActor;
class ABuildingGameplayActor;
class ABuildingSMActor;
class AController;
class AFortAIDirector;
class AFortAIGoalManager;
class AFortAreaOfEffectCloud;
class AFortGameStateAthena;
class AFortMusicManager;
class AFortPawn;
class AFortPickup;
class AFortPlayerController;
class AFortPlayerPawn;
class AFortPlayerState;
class AFortProjectileBase;
class AFortTeamInfo;
class AFortThreatVisualsManager;
class AFortTracerBase;
class ANavigationData;
class APawn;
class APlayerController;
class IAbilitySystemInterface;
class UAbilitySystemInterface;
class IFortInventoryOwnerInterface;
class UFortInventoryOwnerInterface;
class UAbilitySystemComponent;
class UActorComponent;
class UBuildingStructuralSupportSystem;
class UCameraModifier;
class UControllerComponent;
class UCurveFloat;
class UCustomCharacterPart;
class UForceFeedbackEffect;
class UFortAbilitySet;
class UFortAbilitySystemComponent;
class UFortGameUserSettings;
class UFortHeldObjectComponent;
class UFortItem;
class UFortItemDefinition;
class UFortRegisteredPlayerInfo;
class UFortResourceItemDefinition;
class UFortSeasonalEventManager;
class UFortSpline;
class UFortTooltip;
class UFortTooltipContext;
class UFortWeaponItemDefinition;
class UFortWorldItemDefinition;
class UGameplayAbility;
class UGameplayEffect;
class UMaterialInstance;
class UMaterialInstanceDynamic;
class UObject;
class USkeletalMesh;
class USkeletalMeshComponent;
class USoundBase;
class UTexture;
class UWorld;

UCLASS(Blueprintable, MinimalAPI)
class UFortKismetLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortKismetLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float VectorToNormalizedAngleInDegrees(FVector V);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector VectorSlerp(const FVector& Origin, const FVector& Start, const FVector& End, const float Alpha);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ValidateOwnershipForGroupEmote(AFortPawn* Pawn, const UFortItemDefinition* EmoteDef);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool UpgradeAllWeaponsVerticalToRarity(AFortPlayerController* PlayerController, EFortRarity NewRarity);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void UpdatePlayerCustomCharacterPartsVisualization(AFortPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static void UnhideTutorialWidget(UObject* WorldContextObject, FName WidgetName);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static void UnhideAllTutorialWidgets(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void UnequipFortAbilitySet(UPARAM(Ref) FFortAbilitySetHandle& AbilitySetHandle);
    
    UFUNCTION(BlueprintCallable)
    static bool TrySmartConsumeResources(int32 ResourceCost, AFortPlayerController* SourcePlayer);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TriggerFeedbackEvent(UObject* WorldContextObject, FFortFeedbackHandle EventHandle, AFortPawn* InstigatorPawn, AFortPawn* Recipient, float OverriddenDelay, bool bOverriddenQueuing, bool bAllowReplication);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TossPickupFromContainer(UObject* WorldContextObject, AActor* Container, AFortPickup* Pickup, const int32 NumSteps, const int32 Step, const float LootTossConeHalfAngle, const FRotator& LootTossDirection, const float LootTossSpeed, const bool bForceHidePickupMinimapIndicator);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AFortTracerBase* SpawnTracerFromPool(UObject* WorldContextObject, TSubclassOf<AFortTracerBase> TracerClass, const FVector& Origin, const FVector& Destination, AFortPawn* Instigator);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static AFortProjectileBase* SpawnProjectile(TSubclassOf<AFortProjectileBase> ProjectileClass, AActor* RequestedBy, const FVector& SpawnLocation, const FRotator SpawnRotation, const FRotator& SpawnDirection, FFortGameplayEffectContainerSpec EffectContainerSpecToApplyOnHit, FFortGameplayEffectContainerSpec EffectContainerSpecToApplyOnExplode, bool bUseDefaultPhysics, AActor* HomingTarget, float InitialSpeed, float GravityScale, float ChargePercent);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AFortPickup* SpawnItemVariantPickupInWorld(UObject* WorldContextObject, FSpawnItemVariantParams Params);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SpawnInstancedPickupInWorld(UObject* WorldContextObject, UFortWorldItemDefinition* ItemDefinition, int32 NumberToSpawn, FVector position, FVector Direction, int32 OverrideMaxStackCount, bool bToss, bool bRandomRotation, bool bBlockedFromAutoPickup);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ABuildingGameplayActor* SpawnBuildingGameplayActorFromWorldContext(UObject* WorldContextObject, TSubclassOf<ABuildingGameplayActor> BGAClass, const FTransform& Transform, AActor* OptionalOwner, APawn* OptionalInstigator);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static ABuildingGameplayActor* SpawnBuildingGameplayActor(TSubclassOf<ABuildingGameplayActor> BGAClass, const FTransform& Transform, AActor* Instigator);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static AFortAreaOfEffectCloud* SpawnAreaOfEffectCloud(TSubclassOf<AFortAreaOfEffectCloud> AreaOfEffectClass, AActor* RequestedBy, const FVector& SpawnLocation, const FRotator& SpawnRotation, FFortGameplayEffectContainerSpec EffectContainerSpecToApplyOnHit, FFortGameplayEffectContainerSpec EffectContainerSpecToApplyOnExplode);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static void ShowSoundIndicatorLocalForTeam(UObject* WorldContextObject, AActor* TrackedActor, FVector Location, float MaxAudibleDistance, EFortSoundIndicatorTypes IndicatorType, uint8 Team, TArray<TEnumAsByte<EFortTeamAffiliation::Type>> Affiliations, const AActor* Instigator, FLinearColor Tint, UTexture* OverrideIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static void ShowSoundIndicatorLocal(UObject* WorldContextObject, AActor* TrackedActor, FVector Location, float MaxAudibleDistance, EFortSoundIndicatorTypes IndicatorType, const TArray<AFortPlayerController*>& IgnoreOnControllers, const AActor* Instigator, FLinearColor Tint, UTexture* OverrideIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static bool ShouldHideTutorialWidget(FName WidgetName);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static bool ShouldDisableMatchStatsDisplay(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetTimeOfDaySpeed(UObject* WorldContextObject, float TimeOfDaySpeedFactor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetTimeOfDay(UObject* WorldContextObject, float TimeOfDay);
    
    UFUNCTION(BlueprintCallable)
    static void SetProjectileMovementDrunkData(AFortProjectileBase* Projectile, const FProjectileMovementDrunkConfig& NewConfig);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetPostProcessMaterialMIDEnabled(UObject* WorldContextObject, const bool bEnablePostProcess);
    
    UFUNCTION(BlueprintCallable)
    static void SetExtendedSafeZoneInfo(const AActor* ControllerOrPawn, bool bEnable);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetEndGameTimeDilation(const UObject* WorldContextObject, float TimeDilation);
    
    UFUNCTION(BlueprintCallable)
    static void SetComponentAffectNavigationGeneration(UActorComponent* Component, bool bAffectNavigation);
    
    UFUNCTION(BlueprintCallable)
    static void SetCanBeDamaged(AActor* Actor, bool bCanBeDamaged);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UMaterialInstance* SelectMaterialInstance(UMaterialInstance* A, UMaterialInstance* B, bool bSelectA);
    
    UFUNCTION(BlueprintCallable)
    static void ScriptError(const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    static void ScriptEnsureIsValid(const FString& Message, UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    static FVector RotateVectorTowardVector(const FVector& Source, const FVector& Target, const float Degrees);
    
    UFUNCTION(BlueprintCallable)
    static FFortGameplayEffectContainer ReplaceRangeInGameplayEffectContainer(FFortGameplayEffectContainer EffectContainer, const FScalableFloat& NewRange);
    
    UFUNCTION(BlueprintCallable)
    static FFortGameplayEffectContainer ReplaceHalfExtentsInGameplayEffectContainer(FFortGameplayEffectContainer EffectContainer, const FVector& NewHalfExtents);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveGlobalEnvironmentGameplayEffect(UObject* WorldContextObject, TSubclassOf<UGameplayEffect> GameplayEffect);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveEventOverrides(const FString& EventSection, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveControllerComponent(AController* Controller, TSubclassOf<UControllerComponent> ControllerCompClass);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveArbitraryComponent(AActor* TargetActor, TSubclassOf<UActorComponent> ComponentClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void RemoveActorsOfClassFromBuildingSMActorArray(const TArray<ABuildingSMActor*>& ArrayToRemoveClassFrom, TSubclassOf<ABuildingSMActor> ClassToRemove, TArray<ABuildingSMActor*>& ArrayWithClassRemoved);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterDayTimeHitCallback(UObject* Object, const FString& FunctionName, float TimeInHours, bool bRecurring, bool bBlockTriggeringThisCycle);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterDayPhaseHitCallback(UObject* Object, const FString& FunctionName, EFortDayPhase Phase, bool bRecurring, bool bBlockTriggeringThisCycle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D RandPointInDonut(const float& InnerCircleRadius, const float& OuterCircleRadius);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool RandomGroundLocationInCircle(UObject* WorldContextObject, const FVector& CircleCenter, float CircleRadius, const AActor* TraceIgnoreActor, float TraceStartZ, float TraceEndZ, float TraceRadius, FCollisionProfileName TraceProfile, FVector& OutLocation);
    
    UFUNCTION(BlueprintCallable)
    static FTransform PushOffTransformByHitLocation(AActor* RequestedBy, const FTransform& InTransform, const FHitResult& Hit, float Distance);
    
    UFUNCTION(BlueprintCallable)
    static FVector PushOffHitLocation(AActor* RequestedBy, const FHitResult& Hit, float Distance);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static void PlayLocalForceFeedbackAtLocationMulti(UObject* WorldContextObject, UForceFeedbackEffect* NearForceFeedbackEffect, UForceFeedbackEffect* FarForceFeedbackEffect, FVector Location, float InnerRadius, float OuterRadius, FName Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static void PlayLocalForceFeedbackAtLocation(UObject* WorldContextObject, UForceFeedbackEffect* ForceFeedbackEffect, FVector Location, float Radius, FName Tag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool PickLootDropsWithNamedWeights(UObject* WorldContextObject, TArray<FFortItemEntry>& OutLootToDrop, const FName TierGroupName, const int32 WorldLevel, const TMap<FName, float>& NamedWeightsMap, const int32 ForcedLootTier);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool PickLootDrops(UObject* WorldContextObject, TArray<FFortItemEntry>& OutLootToDrop, const FName TierGroupName, const int32 WorldLevel, const int32 ForcedLootTier);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool OpenActor(AActor* OpenableInterfaceActor, AController* OptionalControllerInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool OnSameTeam(const AActor* ActorA, const AActor* ActorB);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void NotifyProjectileThrown(TSubclassOf<AFortProjectileBase> ProjClass, AActor* RequestedBy, const FVector& SpawnLocation, const FRotator& SpawnRotation, float Speed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_UniqueNetIdReplUniqueNetIdRepl(const FUniqueNetIdRepl& A, const FUniqueNetIdRepl& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_FFortDialogWaitingForLatentActionHandle(const FFortDialogExternalLatentActionHandle& A, const FFortDialogExternalLatentActionHandle& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector NormalizedAngleInDegreesToVector(float A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<EFortWeaponCoreAnimation::Type> MakeWeaponCoreAnimation(TEnumAsByte<EFortWeaponCoreAnimation::Type> Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EFortResourceType MakeResourceType(EFortResourceType Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FProjectileMovementDrunkConfig MakeProjectileMovementDrunkConfig(UCurveFloat* DrunkSpeedScaleCurve, UCurveFloat* DrunkGravityScaleCurve, float InitialDelay, float Duration, float DirectionChangeRate, float TurnAngle, float MinPitch, float TurnAngleClamp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<EFortMovementStyle::Type> MakeMovementStyle(TEnumAsByte<EFortMovementStyle::Type> Value);
    
    UFUNCTION(BlueprintCallable)
    static FFortGameplayEffectContainerSpec MakeGameplayEffectContainerSpecFromAbilityComponent(const FFortGameplayEffectContainer& EffectContainer, UAbilitySystemComponent* AbilityComp, int32 GameplayEffectLevel);
    
    UFUNCTION(BlueprintCallable)
    static FFortGameplayEffectContainerSpec MakeGameplayEffectContainerSpecFromAbility(const FFortGameplayEffectContainer& EffectContainer, UGameplayAbility* Ability, int32 GameplayEffectLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EFortDayPhase MakeDayNightPhase(EFortDayPhase Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<EFortBuildingState::Type> MakeBuildingState(TEnumAsByte<EFortBuildingState::Type> Value);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void MakeAllPlayersTalkToSelf(UObject* WorldContextObject, FLatentActionInfo LatentInfo, USoundBase* Audio, float Delay, bool bInterruptCurrentLine, bool bCanBeInterrupted, bool bCanCue, TEnumAsByte<EFortFeedbackBroadcastFilter> BroadcastFilter, bool bLatent);
    
    UFUNCTION(BlueprintCallable)
    static void KeepCGPathOptimizations(const AController* RequestedBy, int64 ExpectedBudget, float Duration);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<AFortPickup*> K2_SpawnPickupInWorldWithLootTier(UObject* WorldContextObject, FName LootTierName, FVector position, int32 OverrideMaxStackCount, bool bToss, EFortPickupSourceTypeFlag SourceType, EFortPickupSpawnSource Source);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AFortPickup* K2_SpawnPickupInWorldWithClass(UObject* WorldContextObject, UFortWorldItemDefinition* ItemDefinition, TSubclassOf<AFortPickup> PickupClass, int32 NumberToSpawn, FVector position, FVector Direction, int32 OverrideMaxStackCount, bool bToss, bool bRandomRotation, bool bBlockedFromAutoPickup, int32 PickupInstigatorHandle, EFortPickupSourceTypeFlag SourceType, EFortPickupSpawnSource Source, AFortPlayerController* OptionalOwnerPC, bool bPickupOnlyRelevantToOwner);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AFortPickup* K2_SpawnPickupInWorld(UObject* WorldContextObject, UFortWorldItemDefinition* ItemDefinition, int32 NumberToSpawn, FVector position, FVector Direction, int32 OverrideMaxStackCount, bool bToss, bool bRandomRotation, bool bBlockedFromAutoPickup, int32 PickupInstigatorHandle, EFortPickupSourceTypeFlag SourceType, EFortPickupSpawnSource Source, AFortPlayerController* OptionalOwnerPC, bool bPickupOnlyRelevantToOwner);
    
    UFUNCTION(BlueprintCallable)
    void K2_SetCurrentResourceType(AFortPlayerController* Controller, EFortResourceType NewMaterial);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static int32 K2_RemoveItemsFromPlayerByNameStateValue(AFortPlayerController* PlayerController, EFortItemEntryState StateType, FName StateValue, bool bForceRemoval);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static int32 K2_RemoveItemsFromPlayerByIntStateValue(AFortPlayerController* PlayerController, EFortItemEntryState StateType, int32 StateValue, bool bForceRemoval);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static int32 K2_RemoveItemFromPlayerByGuid(AFortPlayerController* PlayerController, FGuid ItemGuid, int32 AmountToRemove, bool bForceRemoval);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static int32 K2_RemoveItemFromPlayer(AFortPlayerController* PlayerController, UFortWorldItemDefinition* ItemDefinition, int32 AmountToRemove, bool bForceRemoval);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void K2_RemoveItemFromAllPlayers(UObject* WorldContextObject, UFortWorldItemDefinition* ItemDefinition, int32 AmountToRemove);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static int32 K2_RemoveFortItemFromPlayer(AFortPlayerController* PlayerController, UFortItem* Item, int32 AmountToRemove, bool bForceRemoval);
    
    UFUNCTION(BlueprintCallable)
    static int32 K2_PayBuildingResourceCost(AFortPlayerController* Controller, const EFortResourceType ResourceType, const int32 ResourceAmount);
    
    UFUNCTION(BlueprintCallable)
    static bool K2_HasBuildingResourcesAvailable(AFortPlayerController* Controller, const EFortResourceType ResourceType, const int32 ResourceAmount);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void K2_GiveItemToPlayer(AFortPlayerController* PlayerController, const UFortWorldItemDefinition* ItemDefinition, int32 NumberToGive, bool bNotifyPlayer);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void K2_GiveItemToAllPlayers(UObject* WorldContextObject, UFortWorldItemDefinition* ItemDefinition, int32 NumberToGive, bool bNotifyPlayer);
    
    UFUNCTION(BlueprintCallable)
    static void K2_GiveBuildingResource(AFortPlayerController* Controller, const EFortResourceType ResourceType, const int32 ResourceAmount);
    
    UFUNCTION(BlueprintCallable)
    static UFortResourceItemDefinition* K2_GetResourceItemDefinition(const EFortResourceType ResourceType);
    
    UFUNCTION(BlueprintCallable)
    static int32 K2_GetNumAvailableBuildingResources(AFortPlayerController* Controller, const EFortResourceType ResourceType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 K2_GetItemQuantityOnPlayer(AFortPlayerController* PlayerController, UFortItemDefinition* ItemDefinition);
    
    UFUNCTION(BlueprintCallable)
    static EFortResourceType K2_GetCurrentResourceType(AFortPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector K2_GetClosestAxisXY(FVector InVector);
    
    UFUNCTION(BlueprintCallable)
    void K2_CycleBuildingMaterial(AFortPlayerController* Controller, bool bBroadcast, bool bDoUIFeedback, bool bHonorAutoSwitch);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UObject*> JonLHack_GetAllObjectsOfClassFromPath(const FString& Path, UClass* Class);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsXPSystemEnabledForWorld(const UWorld* World);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsXPSystemEnabled(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid_UniqueNetIdRepl(const FUniqueNetIdRepl& InUniqueNetIdRepl);
    
    UFUNCTION(BlueprintCallable)
    static bool IsValid(const FAttributeInfo& AttributeInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUsingBattlEye();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTabletGame();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRunningNoMCP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPhoneGame();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNavigationDataBuildInProgress(ANavigationData* NavigationData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMobilePlatform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsMobileGame(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool IsLinkingStreamedAccountsEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLatentActionHandleValid(const FFortDialogExternalLatentActionHandle& Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsItemDefRandomCustomizationSelector(const UFortItemDefinition* InItemDef);
    
    UFUNCTION(BlueprintCallable)
    static bool IsItemDefinitionAnAbilityOrVehcileWeapon(const UFortItemDefinition* ItemDefinition);
    
    UFUNCTION(BlueprintCallable)
    static bool IsHeldObjectBeingHeld(const AActor* HeldObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFullBodyHit(FGameplayEffectContextHandle EffectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFatalHit(FGameplayEffectContextHandle EffectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDiceCritical(FGameplayEffectContextHandle EffectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCurveTableRowValid(const FCurveTableRowHandle& CurveTableRowHandle, const FString& ContextString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCriticalHit(FGameplayEffectContextHandle EffectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsCreativeOrPlaygroundModePlaylist(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsConsolePlatform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCellConnection();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAssetNull(TSoftObjectPtr<UObject> Asset);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsActorWithinGoldenPOI(const UObject* WorldContextObject, const AActor* InActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsActorSubmergedInOcean(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void InvalidateLatentActionHandle(UPARAM(Ref) FFortDialogExternalLatentActionHandle& Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool InEditorOrPIE(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 IncrementAnalyticMatchCount(const UObject* WorldContextObject, const EAnalyticMatchCounts MatchCountID, const int32 AmountToAdd);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static void HideTutorialWidget(UObject* WorldContextObject, FName WidgetName);
    
    UFUNCTION(BlueprintCallable)
    static bool HasSelectableRewards(const FFortRewardInfo& RewardInfo);
    
    UFUNCTION(BlueprintCallable)
    static bool HasRewards(const FFortRewardInfo& RewardInfo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool HasOpenBroadcasterGrantWindow(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool HasMultipleVisibleRewards(const FFortRewardInfo& RewardInfo);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void GiveItemToInventoryOwner(TScriptInterface<IFortInventoryOwnerInterface> InventoryOwner, const UFortWorldItemDefinition* ItemDefinition, int32 NumberToGive, bool bNotifyPlayer, int32 ItemLevel, int32 PickupInstigatorHandle);
    
    UFUNCTION(BlueprintCallable)
    static bool GetWeaponStatsRow(FDataTableRowHandle DataTableRowHandle, FFortBaseWeaponStats& OutRow);
    
    UFUNCTION(BlueprintCallable)
    static bool GetWeaponDurabilityByRarityStatsRow(FDataTableRowHandle DataTableRowHandle, FFortWeaponDurabilityByRarityStats& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UFortWeaponItemDefinition* GetUpgradedWeaponItemVerticalToRarity(const UFortWeaponItemDefinition* ItemToUpgrade, EFortRarity NewRarity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UFortWeaponItemDefinition* GetUpgradedWeaponItemFromTable(UFortWeaponItemDefinition* ItemToUpgrade, EFortWeaponUpgradeDirection UpgradeDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetUnmodifiedDamage(FGameplayEffectContextHandle EffectContext);
    
    UFUNCTION(BlueprintCallable)
    static bool GetTrapStatsRow(FDataTableRowHandle DataTableRowHandle, FFortTrapStats& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetTooltipTextFromTokenFromTooltipClass(UObject* WorldContextObject, const UObject* ObjectToDescribe, TSubclassOf<UFortTooltip> TooltipClass, const FGameplayTag Tag, const UFortTooltipContext* Context, const FGameplayTag Token, FText& OutText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetTooltipTextFromToken(UObject* WorldContextObject, const UObject* ObjectToDescribe, const FGameplayTag Tag, const UFortTooltipContext* Context, const FGameplayTag Token, FText& OutText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetTooltipNumericValueFromTooltipClass(UObject* WorldContextObject, const UObject* ObjectToDescribe, TSubclassOf<UFortTooltip> TooltipClass, FGameplayTag Tag, const UFortTooltipContext* Context, const FGameplayTag Token, float& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetTooltipNumericValue(UObject* WorldContextObject, const UObject* ObjectToDescribe, FGameplayTag Tag, const UFortTooltipContext* Context, const FGameplayTag Token, float& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetTooltipDescriptionFromTooltipClass(UObject* WorldContextObject, const UObject* ObjectToDescribe, TSubclassOf<UFortTooltip> TooltipClass, FGameplayTag Tag, const UFortTooltipContext* Context, TArray<FText>& Description, bool bSummaryTooltip);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetTooltipDescription(UObject* WorldContextObject, const UObject* ObjectToDescribe, FGameplayTag Tag, const UFortTooltipContext* Context, TArray<FText>& Description, bool bSummaryTooltip);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetTimeUntilInRealTimeSeconds(UObject* WorldContextObject, float GameTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetTimeOfDaySpeed(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetTimeOfDayAccumulator(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetTimeOfDay(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetTimeDayPhaseBegins(UObject* WorldContextObject, EFortDayPhase DayPhase);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AFortThreatVisualsManager* GetThreatVisualsManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AFortTeamInfo* GetTeamInfo(UObject* WorldContextObject, uint8 Team);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TEnumAsByte<EFortTeamAffiliation::Type> GetTeamAffiliationToLocalPlayer(UObject* WorldContextObject, uint8 Team, bool bIncludeNonSpectators, bool bIncludeSpectators);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<EFortTeamAffiliation::Type> GetTeamAffiliationBetweenTeams(uint8 TeamA, uint8 TeamB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<EFortTeamAffiliation::Type> GetTeamAffiliation(const AActor* ActorA, const AActor* ActorB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ESubGame GetSubGame(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetStunTime(FGameplayEffectContextHandle EffectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FDataTableRowHandle GetSpecialActorInputActionDataTableRow(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetShowTeamSelectButton(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetServerWorldTimeSeconds(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UFortSeasonalEventManager* GetSeasonalEventManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetSafeZoneLocation(UObject* WorldContextObject, int32 SafeZoneIndex, FVector& OutLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetResourceMaxStackSize(AFortPlayerController* Controller, const EFortResourceType ResourceType);
    
    UFUNCTION(BlueprintCallable)
    static bool GetRangedWeaponStatsRow(FDataTableRowHandle DataTableRowHandle, FFortRangedWeaponStats& OutRow);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FText GetRandomSurvivorName(UObject* WorldContextObject, TEnumAsByte<EFortDisplayGender::Type> Gender, bool bRemoveFromList);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FText GetRandomLiveStreamingViewerName(UObject* WorldContextObject, bool bRemoveFromList);
    
    UFUNCTION(BlueprintCallable)
    static UGameplayAbility* GetPrimaryInstance(const FGameplayAbilitySpec& Spec);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EFortDayPhase GetPreviousDayPhase(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetPlaylistUsesCustomCharacterParts(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetPlaylistAllowsTeamSwitching(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetPlayerOrObjectNameSafe(const AActor* InActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetPlayerNameSafe(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UFortRegisteredPlayerInfo* GetPlayerInfoFromUniqueID(UObject* WorldContextObject, const FUniqueNetIdRepl& UniqueId);
    
    UFUNCTION(BlueprintCallable)
    static FHitResult GetPlayerAimPointHit(const AFortPlayerController* SourcePlayer, const float MaxRange, const TArray<AActor*>& IgnoredActors);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetPlayerAimPoint(const AFortPlayerController* SourcePlayer, const float MaxRange, const TArray<AActor*>& IgnoredActors, const bool NoTrace);
    
    UFUNCTION(BlueprintPure)
    static int64 GetPhysicalMemoryMB();
    
    UFUNCTION(BlueprintCallable)
    static bool GetPawnStatsRow(FDataTableRowHandle DataTableRowHandle, FFortPawnStats& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetOceanTotalHeight(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetNumericCVar(const FString& CVar, float& OutValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetNumberOfRegisteredPlayers(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetNumActorsOfClass(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ANavigationData* GetNavigationDataForActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AFortMusicManager* GetMusicManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static UMaterialInstanceDynamic* GetMIDForSkeletalMeshComponent(USkeletalMeshComponent* SkeletalMeshComponent, int32 ElementIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool GetMeleeWeaponStatsRow(FDataTableRowHandle DataTableRowHandle, FFortMeleeWeaponStats& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMatchmakingDifficultyRangeFromDifficultyInfo(const FGameDifficultyInfo& DifficultyInfo, float& OutMinDifficulty, float& OutMaxDifficulty);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetLootLevel(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<AFortPlayerController*> GetLocalFortPlayerControllers(UObject* WorldContextObject, bool bIncludeNonSpectators, bool bIncludeSpectators);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ELicensedAudioTreatment GetLicensedAudioTreatment(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetItemQuantityOnPlayerByGUID(AFortPlayerController* PlayerController, const FGuid& ItemGuid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UFortItemDefinition* GetItemDefinitionFromItemQuantityPair(const FFortItemQuantityPair& ItemQuantityPair);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetIsPlayingReplay(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetIsBroadcastClient(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetImpulseData(FGameplayEffectContextHandle EffectContext, FVector& ImpulseDirection, float& KnockbackMagnitude, float& KnockbackZAngle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetHumanReadableName(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetHoursUntilDayPhase(UObject* WorldContextObject, EFortDayPhase DayPhase);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetHostilityPercentage(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static AFortPlayerPawn* GetHeldObjectsOwningPlayer(const AActor* HeldObject);
    
    UFUNCTION(BlueprintCallable)
    static UFortHeldObjectComponent* GetHeldObjectComponentAttachedToPlayer(const AFortPlayerPawn* FortPawn);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetHeldObjectAttachedToPlayer(const AFortPlayerPawn* FortPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AFortGameStateAthena* GetGameStateAthena(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetGameContextGameplayTags(UObject* WorldContextObject, FGameplayTagContainer& OutGameContextGameplayTags);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetFortPlayerPawnsInRange(UObject* WorldContextObject, const FVector& SourcePosition, const float Range, const bool bDo2DCheck, TArray<AFortPlayerPawn*>& OutFortPlayerPawns);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<AFortPlayerPawn*> GetFortPlayerPawns(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AFortPlayerController* GetFortPlayerControllerFromActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<EPhysicalSurface> GetFortPhysicalSurface(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetFortPawnsInRange(UObject* WorldContextObject, const FVector& SourcePosition, const float Range, const bool bDo2DCheck, TArray<AFortPawn*>& OutFortPawns);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UFortGameUserSettings* GetFortGameUserSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetFloatHoursUntilDayPhase(UObject* WorldContextObject, EFortDayPhase DayPhase);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AFortPlayerController* GetFirstLocalFortPlayerController(UObject* WorldContextObject, bool bIncludeNonSpectators, bool bIncludeSpectators);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTagContainer GetFactionTagContainerForActor(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetEffectDirection(FGameplayEffectContextHandle EffectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator GetDirectionActorToActor(AActor* SourceActor, AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetDefaultAbsoluteTimeOfDaySpeed(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FString GetDebugStringForUniqueId(const FUniqueNetIdRepl& UniqueId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FVector GetDayNightDirectionalLightVector(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FLinearColor GetDayNightDirectionalLightColor(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetCurrentSafeZonePhase(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EFortDayPhase GetCurrentDayPhase(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EAthenaWinCondition GetCurrentAthenaWinCondition(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AFortPlayerPawn* GetClosestFortPlayerPawn(UObject* WorldContextObject, FVector position);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ABuildingSMActor* GetClosestBuildingActorFromArray(const AActor* Actor, const TArray<ABuildingSMActor*>& ArrayOfBuildings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AActor* GetClosestActorFromArray(const AActor* Actor, const TArray<AActor*>& ArrayOfActors);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetCalendarEventInformation(UObject* WorldContextObject, const FString& EventName, bool& bIsEventActive, FTimespan& TimeSinceBegin, FTimespan& TimeUntilEnd, float& TimespanRatio);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetBuildingStructuralSupportSystem(UObject* WorldContextObject, UBuildingStructuralSupportSystem*& BuildingStructuralSupportSystem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetBuildingHealthPercentage(const ABuildingActor* BuildingActor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetBroadcasterGrantWindowSecondsRemaining(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static AFortPawn* GetBestAimedAtPawnByAngle(const AFortPlayerPawn* SourcePawn, FVector DestOffsetVec, const float MaxAngleInDegree, const float Range, const bool bTargetAIPawns, TEnumAsByte<EFortTeamAffiliation::Type> TeamAffiliationRequirement);
    
    UFUNCTION(BlueprintCallable)
    static float GetAngleDegrees(const FVector& Source, const FVector& Target);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    static TArray<FAmmoItemState> GetAmmoItemDefinitionsFromInventoryWeapons(AFortPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetAllFortPlayerPawns(UObject* WorldContextObject, TArray<AFortPlayerPawn*>& OutFortPlayerPawns);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<AFortPlayerController*> GetAllFortPlayerControllers(UObject* WorldContextObject, bool bIncludeNonSpectators, bool bIncludeSpectators);
    
    UFUNCTION(BlueprintCallable)
    static AFortPawn* GetAimedAtEnemy(const AFortPlayerController* SourcePlayer, const float RectHalfWidth, const float RectHalfHeight, const float Range, const bool bTargetAIPawns);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AFortAIGoalManager* GetAIGoalManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AFortAIDirector* GetAIDirector(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AFortTeamInfo* GetActorTeamInfo(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 GetActorTeam(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetActorPvPTeamIndex(const AActor* Actor, uint8& TeamIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void FortShippingLog(UObject* WorldContextObject, const FString& inString, bool bLogAsWarning);
    
    UFUNCTION(BlueprintCallable)
    static FVector FindStaticGroundLocationWithExtentAt(UWorld* World, const FVector& InLocation, const FQuat& ActorRotation, const FVector& ActorExtent, const AActor* IgnoreActor, float TraceStartZ, float TraceEndZ);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FVector FindStaticGroundLocationUsingWorldContextAt(UObject* WorldContextObject, const FVector& InLocation, const AActor* IgnoreActor, float TraceStartZ, float TraceEndZ);
    
    UFUNCTION(BlueprintCallable)
    static FVector FindStaticGroundLocationAt(UWorld* World, const FVector& InLocation, const AActor* IgnoreActor, float TraceStartZ, float TraceEndZ);
    
    UFUNCTION(BlueprintCallable)
    static UActorComponent* FindOrAddArbitraryComponent(AActor* TargetActor, TSubclassOf<UActorComponent> ComponentClass);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FVector FindGroundLocationUsingWorldContextAt(UObject* WorldContextObject, const AActor* IgnoreActor, const FVector& InLocation, float TraceStartZ, float TraceEndZ, FName TraceName);
    
    UFUNCTION(BlueprintCallable)
    static FVector FindGroundLocationAt(UWorld* World, const AActor* IgnoreActor, const FVector& InLocation, float TraceStartZ, float TraceEndZ, FName TraceName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<AActor*> FindActorsContainingName(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, const FString& Name);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FHitResult> FilterTargetHitResultList(UObject* WorldContextObject, const FFortTargetFilter& Filter, const AActor* RequestingActor, const TArray<FHitResult>& HitResultsToFilter, bool& bAtLeastOneActorLeft);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<AActor*> FilterTargetActorList(UObject* WorldContextObject, const FFortTargetFilter& Filter, const AActor* RequestingActor, const TArray<AActor*>& ActorsToFilter, bool& bAtLeastOneActorLeft);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool FilterSingleTargetHitResult(UObject* WorldContextObject, const FFortTargetFilter& Filter, const AActor* RequestingActor, const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool FilterSingleTargetActor(UObject* WorldContextObject, const FFortTargetFilter& Filter, const AActor* RequestingActor, AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector ExtractSkeletalMeshScale(TSubclassOf<AActor> BlueprintClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USkeletalMesh* ExtractSkeletalMesh(TSubclassOf<AActor> BlueprintClass);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static void ExecuteClientEvent(UObject* WorldContextObject, FFortClientEventName EventType, UObject* EventSource, UObject* EventFocus);
    
    UFUNCTION(BlueprintCallable)
    static bool EvaluateCurveTableRow(FCurveTableRowHandle CurveTableRowHandle, float InXY, float& OutXY, const FString& ContextString);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static bool EquipItemToQuickBarSlot(UObject* WorldContextObject, const UFortItemDefinition* ItemDefinition, EFortQuickBars QuickBarType, int32 SlotIndex);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static FFortAbilitySetHandle EquipFortAbilitySet(TScriptInterface<IAbilitySystemInterface> AbilitySystemInterfaceActor, UFortAbilitySet* AbilitySet, UObject* OverrideSourceObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_UniqueNetIdReplUniqueNetIdRepl(const FUniqueNetIdRepl& A, const FUniqueNetIdRepl& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_FFortDialogWaitingForLatentActionHandle(const FFortDialogExternalLatentActionHandle& A, const FFortDialogExternalLatentActionHandle& B);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void EndWaitForConfirmationDialog(UObject* WorldContextObject, UPARAM(Ref) FFortDialogExternalLatentActionHandle& Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static void EnableTutorialHighlight(UObject* WorldContextObject, FName WidgetName);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static bool EmptyQuickBarSlot(UObject* WorldContextObject, EFortQuickBars QuickBarType, int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    static void EffectContextAddSourceObject(FGameplayEffectContextHandle EffectContext, UObject* Src);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<AFortPickup*> DropInstancedLootAtLocation(UObject* WorldContextObject, const FName LootTierGroup, const TArray<AFortPlayerController*>& RelevantPlayers, bool bAllowCombining, FVector DropLocation, EFortPickupSourceTypeFlag SourceTypeFlag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static TArray<AFortPickup*> DropInstancedLoot(AFortPawn* PawnContext, const FName LootTierGroup, const TArray<AFortPlayerController*>& RelevantPlayers, bool bAllowCombining);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesItemDefinitionHaveGameplayTag(const UFortItemDefinition* ItemDefinition, const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintPure)
    static float Divide_Int64Int64UsingFloatingPoint(int64 A, int64 B);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static void DisableTutorialHighlight(UObject* WorldContextObject, FName WidgetName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DeviceSupportsForceFeedback();
    
    UFUNCTION(BlueprintCallable)
    static void DestroyItemInQuickBarSlot(AFortPlayerPawn* PlayerPawn, const UFortItemDefinition* ItemToDestroyFromInventory);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DebugSphereSendToAll(UObject* WorldContextObject, const FVector& Center, float Radius, int32 Segments, const FColor& Color, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DebugOrientedBoxSendToAll(UObject* WorldContextObject, const FVector& Center, const FVector& Extent, const FRotator& Rotation, const FColor& Color, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DebugLineSendToAll(UObject* WorldContextObject, const FVector& LineStart, const FVector& LineEnd, const FColor& Color, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DebugCapsuleSendToAll(UObject* WorldContextObject, const FVector& Center, float HalfHeight, float Radius, const FQuat& Rotation, const FColor& Color, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DebugBoxSendToAll(UObject* WorldContextObject, const FVector& Center, const FVector& Extent, const FColor& Color, bool bPersistentLines, float LifeTime, uint8 DepthPriority, float Thickness);
    
    UFUNCTION(BlueprintCallable)
    static void CustomHandleActorStreamedInEditor(AActor* SourceActor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CreateTossAmmoPickupForWeaponItemDefinitionAtLocation(UObject* WorldContextObject, const UFortWeaponItemDefinition* WeaponItemDefinition, const FGameplayTagContainer& SourceTags, const FVector& Location, const EFortPickupSourceTypeFlag SourceTypeFlag, const EFortPickupSpawnSource SpawnSource);
    
    UFUNCTION(BlueprintCallable)
    static UFortSpline* CreateNewSplineObject(UObject* Outer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFortItemEntry CreateItemEntry(const UFortItemDefinition* InItemDefinition, int32 InCount, int32 InLevel);
    
    UFUNCTION(BlueprintCallable)
    static void CopyJerseyElements(UMaterialInstanceDynamic* SourceMID, UMaterialInstanceDynamic* TargetMID);
    
    UFUNCTION(BlueprintCallable)
    static void CopyHideElements(UMaterialInstanceDynamic* SourceMID, UMaterialInstanceDynamic* TargetMID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float ConvertToRealTime(UObject* WorldContextObject, float InGameTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float ConvertToGameTime(UObject* WorldContextObject, float InRealTime);
    
    UFUNCTION(BlueprintCallable)
    static FVector ComputePhysicsAngularVelocity(const FVector& Current, const FVector& Target, const FVector& BackupAxis, const float SpeedCoef, const float DeltaTime);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool CloseActor(AActor* OpenableInterfaceActor, AController* OptionalControllerInstigator);
    
    UFUNCTION(BlueprintCallable)
    static void ClientForceFireSelectedWeapon(AFortPlayerPawn* PlayerPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static void ClearTutorialHighlights(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckPlayerLineOfSightToPawn(const AFortPlayerPawn* SourcePawn, const AFortPawn* TargetPawn);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckLineOfSightToActor(const FVector& SourcePos, const AActor* Target, const AActor* Source);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckHasEnoughResourcesForSmartConsume(int32 ResourceCost, AFortPlayerController* SourcePlayer);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void ChangeTeam(AActor* PlayerToSwitch, AActor* Instigator, uint8 NewTeam, FGameplayTagContainer ChangeTeamTags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanPerformNativeAction(const UFortAbilitySystemComponent* FortAbilitySystem, const FGameplayTag& NativeActionTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanFollowNextOrPreviousTeammate(const APlayerController* OwningControler);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BroadcastSoundAtLocation(UObject* WorldContextObject, USoundBase* InSound, FVector Location, float VolumeMultiplier, float PitchMultiplier);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BroadcastSound(UObject* WorldContextObject, USoundBase* InSound, float VolumeMultiplier, float PitchMultiplier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool BroadcastPlayerImpactAtLocation(UObject* WorldContextObject, APlayerController* Player, const FVector& position, float& Loudness, float& Duration, bool bRelativePosition);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BroadcastMessage(UObject* WorldContextObject, const FText& Message);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BroadcastAbilitySpinThrustAtLocation(UObject* WorldContextObject, USoundBase* InSound, UObject* Instigator, const FVector& position, float Radius, FName Tag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BroadcastAbilityImpactAtLocation(UObject* WorldContextObject, USoundBase* InSound, UObject* Instigator, const FVector& position, float Radius, FName Tag, const bool bSubtractLocalNoise);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<AFortPlayerPawn*> AuthorityGetFortPossessedPlayerPawns(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static AFortPlayerState* AttemptGetPlayerStateForPawn(const AFortPlayerPawn* FortPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AreCampaignVehiclesEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AreAthenaVehiclesEnabled();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static FActiveGameplayEffectHandle ApplyGlobalEnvironmentGameplayEffectToActor(AActor* EffectTargetActor, TSubclassOf<UGameplayEffect> GameplayEffect, int32 GameplayEffectLevel, FGameplayTagContainer AdditionalContextTags);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ApplyGlobalEnvironmentGameplayEffect(UObject* WorldContextObject, TSubclassOf<UGameplayEffect> GameplayEffect, int32 GameplayEffectLevel, FGameplayTagContainer AdditionalContextTags);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void ApplyGlobalEnvironmentDamageToActor(AActor* DamageTargetActor, float EnvironmentDamage, FGameplayTagContainer AdditionalContextTags, TSubclassOf<UGameplayEffect> EnvironmentDamageGE);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ApplyGameplayEffectToActorsInRange(UObject* WorldContextObject, TArray<TSubclassOf<UGameplayEffect>> EffectsToApply, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, const FVector& SourcePosition, float Range, TArray<AActor*>& IgnoredActors, const bool bRequireLOS, const int32 GameplayEffectLevel, UAbilitySystemComponent* InstigatorAbilitySystemComp);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ApplyGameplayEffectsToActorsInBox(UObject* WorldContextObject, TArray<TSubclassOf<UGameplayEffect>> EffectsToApply, const FVector& BoxCenter, const FVector& BoxExtents, const FRotator& BoxOrientation, TArray<AActor*>& IgnoredActors, const bool bRequireLOS, const int32 GameplayEffectLevel, const float DebugLifeTime);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyGameplayEffectsToActor(AActor* TargetActor, TArray<TSubclassOf<UGameplayEffect>> EffectsToApply, const FVector& SourcePos, const bool bRequireLOS, const int32 EffectLevel, UAbilitySystemComponent* InstigatorAbilitySystemComp);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyEventOverrides(const FString& EventSection, bool& bSuccess);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ApplyCharacterCosmetics(UObject* WorldContextObject, TArray<UCustomCharacterPart*> CharacterParts, AFortPlayerState* PlayerState, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable)
    static void AddScoringEvent(AFortPlayerController* Controller, FGameplayTagContainer TargetTags);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void AddRegenItemToInventoryOwner(TScriptInterface<IFortInventoryOwnerInterface> InventoryOwner, const UFortWorldItemDefinition* RegenItemDefinition, int32 NumberToGive, bool bNotifyPlayer, bool bResetRegenCooldown);
    
    UFUNCTION(BlueprintCallable)
    static UControllerComponent* AddControllerComponent(AController* Controller, TSubclassOf<UControllerComponent> ControllerCompClass);
    
    UFUNCTION(BlueprintCallable)
    static UCameraModifier* AddCameraModifierForOwningPlayerController(TSubclassOf<UCameraModifier> InCameraModifierClass, AActor* InActor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddActorToClear(UObject* WorldContextObject, ABuildingActor* Building);
    
    UFUNCTION(BlueprintCallable)
    static void ActivateQuickbarSlot(AFortPlayerPawn* PlayerPawn, EFortQuickBars InQuickBar, int32 Slot, float ActivateDelay, bool bUpdatePreviousFocusedSlot, bool bForceExecution);
    
};

