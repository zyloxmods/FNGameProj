#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayEffectTypes.h"
#include "Abilities/GameplayAbility.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AbilityTrackedActorSettings.h"
#include "EFortAILODLevel.h"
#include "EFortAIWeaponUsage.h"
#include "EFortAbilityChargeState.h"
#include "EFortGameplayAbilityActivation.h"
#include "EFortGetPlayerPawnExecutions.h"
#include "FortAbilityCost.h"
#include "FortAnalyticsInterface.h"
#include "FortDamageSourceInterface.h"
#include "FortGameplayAbilityBehaviorDistanceData.h"
#include "FortGameplayAbilityMontageInfo.h"
#include "FortGameplayEffectContainer.h"
#include "FortGameplayEffectContainerSpec.h"
#include "FortTooltipInterface.h"
#include "Templates/SubclassOf.h"
#include "FortGameplayAbility.generated.h"

class AActor;
class AFortPawn;
class AFortPlayerPawn;
class AFortProjectileBase;
class AFortWeapon;
class APlayerController;
class UFortAbilitySystemComponent;
class UFortCameraMode;
class UFortTooltip;
class UFortTooltipDisplayStatsList;
class UFortWeaponItemDefinition;
class UFortWorldItemDefinition;
class UObject;
class UTexture2D;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortGameplayAbility : public UGameplayAbility, public IFortDamageSourceInterface, public IFortTooltipInterface, public IFortAnalyticsInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortGameplayAbilityActivation ActivationType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGameplayEffectContainer EffectContainers[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortGameplayEffectContainer> GameplayEffectContainers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FFortGameplayEffectContainer> DynamicGameplayEffectContainers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer OwnerPreviewImageOverrideTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortProjectileBase> ProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DamageStatHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAbilityCost> AbilityCosts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowWidgetForCosts: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bApplyingCostsEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ExplicitCooldownDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ExplicitCooldownTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bStartWithCooldown: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPersistOnDeath: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisableMoveCombining: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreClientActivationAttempts: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bStopsAIBehaviorLogic: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bStopsAIMovement: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bStopsRVOAvoidance: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceNormalAILOD: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortAILODLevel MinimumRequiredAILODLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRelevantForAIDespawning: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseTetheredPawnAsInstigator: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAcceptTargetActorVehicleForCanHitTests: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseAIFireLocationAndRotation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortAIWeaponUsage AIWeaponUsage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag WeaponTestApplicationTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bVerifyFireOffsetIsNotObstructedByWorldGeometry: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanHitBallisticTestsOnlyTestIndesructiblesWhileFalling: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FireOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationNoiseRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpactNoiseRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationNoiseLoudness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpactNoiseLoudness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ProhibitedTargetTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLeadPawnTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DesiredThrowAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxYawAngleToFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClampMaxYawAngleToFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseTargetActorLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialAccuracyMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialAccuracyMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetAccuracyMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetAccuracyMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinAccuracyDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAccuracyDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccuracyDistanceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumUsesToReachTargetAccuracy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UseCount;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMobileToggle;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortGameplayAbilityBehaviorDistanceData> GameplayAbilityBehaviorDistanceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGameplayAbilityMontageInfo MontageInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortWeaponItemDefinition* AbilityWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* SmallPreviewImageOverride;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ChargeStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFortAbilityChargeState ChargeState;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortTooltip> Tooltip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortTooltipDisplayStatsList* StatList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilityTrackedActorSettings ActorTrackingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCameraMode> CurrentAbilityCameraModeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AnalyticsTags;
    
public:
    UFortGameplayAbility();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void TrackGroupedActor(AActor* ActorToTrack, FGameplayTag GroupTag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void TrackActor(AActor* ActorToTrack);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldPlayFailedMontage(const FGameplayTagContainer& FailedReason) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetupPreviewImageOverride();
    
    UFUNCTION(BlueprintCallable)
    void SetCameraMode(TSubclassOf<UFortCameraMode> CameraModeClass);
    
    UFUNCTION(BlueprintCallable)
    void SetAIFocalPoint(AActor* FocusTarget, FVector FocalPoint, bool bUseAttackingPriority);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void QueryGameplayEffectContainerTargetExecutionModifiers(FGameplayAbilityTargetDataHandle TargetData, const UFortAbilitySystemComponent* SrcAbilitySystem, FGameplayTag ApplicationTag, int32 GameplayEffectLevel, const UObject* SourceObject, const TArray<FGameplayEffectExecutionScopedModifierInfo>& InScopedMods, TArray<FActiveGameplayEffectHandle> InIgnoreHandles, TArray<FGameplayModifierEvaluatedData>& OutOutputModifiers, bool bTooltipRequest) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReachedZeroCharge();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReachedMinCharge();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReachedMaxCharge();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGenericNotifyFromAnimation(FGameplayTag NotifyTag);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDischarge();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChargeStateChanged(EFortAbilityChargeState OldChargeState, EFortAbilityChargeState NewChargeState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAbilityInputReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAbilityInputPressed();
    
public:
    UFUNCTION(BlueprintCallable)
    void MakeGameplayEffectContainerSpecs(FGameplayTag ApplicationTag, int32 GameplayEffectLevel, TArray<FFortGameplayEffectContainerSpec>& OutSpecContainers);
    
    UFUNCTION(BlueprintCallable)
    FFortGameplayEffectContainerSpec MakeGameplayEffectContainerSpec(FGameplayTag ApplicationTag, int32 GameplayEffectLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_TriggerFromAnimation(FGameplayTag ApplicationTag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool K2_ShouldUseDecoTool(FGameplayAbilityActorInfo ActorInfo) const;
    
    UFUNCTION(BlueprintCallable)
    void K2_AbilityCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargetOutsideOfMaxYawRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChargeUpAbility() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure=false)
    TArray<AActor*> GetTrackedGroupedActors(FGameplayTag GroupTag) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure=false)
    TArray<AActor*> GetTrackedActors() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UFortTooltip> GetTooltip(bool bSummaryTooltip) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetProjectileInitialValues(float& outProjectileSpeed, FRotator& outSpawnDirection, float& outProjectileGravity, AActor*& HomingTarget, bool bApplyInaccuracy, bool bApplyClampedMaxYawAngleToFire, bool bApplyLeading) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOwningPlayerTeamPerkProgressiveActivationLevel() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    int32 GetMaxNumTrackedActors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetFireRotation(bool bApplyLeading, bool bApplyInaccuracy, bool bApplyClampedMaxYawAngleToFire) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetFireLocation() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortTooltipDisplayStatsList* GetDisplayStats() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FTransform GetCustomAbilitySourceTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortWeapon* GetCurrentSourceWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortWorldItemDefinition* GetCurrentSourceItemDefinition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentAbilitySourceLevel(float& OutSourceLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetChargeTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortAbilityChargeState GetChargeState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetChargePercent() const;
    
    UFUNCTION(BlueprintCallable)
    void GetAvatarAsValidFortPlayerPawn(EFortGetPlayerPawnExecutions& OutExec, AFortPlayerPawn*& OutFortPlayerPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortPlayerPawn* GetAvatarAsFortPlayerPawn() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetAimLocationNearestPawn(AFortPawn* Instigator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetAIAbilityTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortPawn* GetActivatingPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortAbilitySystemComponent* GetActivatingAbilityComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetAbilityTargetingLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetAbilityTags() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceCameraLookDown(APlayerController* PC);
    
    UFUNCTION(BlueprintCallable)
    void EquipVehicleWeapon(UFortWeaponItemDefinition* WeaponDefinition, const int32 SeatIndex, const int32 ItemLevel);
    
    UFUNCTION(BlueprintCallable)
    void EquipAbilityWeapon(UFortWeaponItemDefinition* WeaponDefinition, int32 ItemLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesTargetHaveTags(const AActor* Target, const FGameplayTagContainer& Tags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesTargetHaveProhibitedTagsForAI(const AActor* Target) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ClearTrackedGroupedActors(FGameplayTag GroupTag, bool bDestroyActors);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ClearTrackedActors(bool bDestroyActors);
    
    UFUNCTION(BlueprintCallable)
    void ClearCameraMode();
    
    UFUNCTION(BlueprintCallable)
    void ClearAIFocalPoint(bool bUseAttackingPriority);
    
    UFUNCTION(BlueprintCallable)
    static void CalculateProjectileTrajectorySplineWithHitProfile(FHitResult& OutHitResult, TArray<FVector>& OutSplinePoints, TArray<FVector>& OutSplineTangents, const AActor* Instigator, FVector InitialLocation, FVector InitialVelocity, float MaxSpeed, float Gravity, float Friction, float Bounciness, float TimeStep, float TraceExtent, FName CollisionProfile, int32 MaxBounces, int32 MaxSteps, float MaxDistanceBetweenSplinePoints, float InitialDistance);
    
    UFUNCTION(BlueprintCallable)
    static void CalculateProjectileTrajectorySplineWithHit(FHitResult& OutHitResult, TArray<FVector>& OutSplinePoints, TArray<FVector>& OutSplineTangents, const AActor* Instigator, FVector InitialLocation, FVector InitialVelocity, float MaxSpeed, float Gravity, float Friction, float Bounciness, float TimeStep, float TraceExtent, TEnumAsByte<ECollisionChannel> TraceChannel, int32 MaxBounces, int32 MaxSteps, float MaxDistanceBetweenSplinePoints, float InitialDistance);
    
    UFUNCTION(BlueprintCallable)
    static void CalculateProjectileTrajectorySplineProfile(TArray<FVector>& OutSplinePoints, TArray<FVector>& OutSplineTangents, const AActor* Instigator, FVector InitialLocation, FVector InitialVelocity, float MaxSpeed, float Gravity, float Friction, float Bounciness, float TimeStep, float TraceExtent, FName CollisionProfile, int32 MaxBounces, int32 MaxSteps, float MaxDistanceBetweenSplinePoints, float InitialDistance);
    
    UFUNCTION(BlueprintCallable)
    static void CalculateProjectileTrajectorySpline(TArray<FVector>& OutSplinePoints, TArray<FVector>& OutSplineTangents, const AActor* Instigator, FVector InitialLocation, FVector InitialVelocity, float MaxSpeed, float Gravity, float Friction, float Bounciness, float TimeStep, float TraceExtent, TEnumAsByte<ECollisionChannel> TraceChannel, int32 MaxBounces, int32 MaxSteps, float MaxDistanceBetweenSplinePoints, float InitialDistance);
    
    UFUNCTION(BlueprintCallable)
    void BP_GetGameplayEffectContainers(FGameplayTag ApplicationTag, TArray<FFortGameplayEffectContainer>& OutContainers);
    
    UFUNCTION(BlueprintCallable)
    FFortGameplayEffectContainer BP_GetGameplayEffectContainer(FGameplayTag ApplicationTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer BP_GetCooldownTags() const;
    
    UFUNCTION(BlueprintCallable)
    bool ApplySourcePropertyOverrides(TArray<FName>& OverriddenPropertyNames);
    
    UFUNCTION(BlueprintCallable)
    TArray<FActiveGameplayEffectHandle> ApplyGameplayEffectContainerWithCSVStats(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag, int32 GameplayEffectLevel, const FString& StatName);
    
    UFUNCTION(BlueprintCallable)
    TArray<FActiveGameplayEffectHandle> ApplyGameplayEffectContainer(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag, int32 GameplayEffectLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector ApplyAccuracyToTargetLocation(const FVector& SourceLocation, const FVector& TargetLocation, float inDesiredThrowAngle) const;
    
    UFUNCTION(BlueprintCallable)
    void AddDynamicGameplayEffectContainer(UPARAM(Ref) FGameplayTag& ApplicationTag, UPARAM(Ref) FFortGameplayEffectContainer& Container);
    
    
    // Fix for true pure virtual functions not being implemented
};

