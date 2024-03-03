#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayEffectTypes.h"
#include "GameplayCueInterface.h"
#include "GameplayEffectTypes.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "Chaos/ChaosEngineInterface.h"
#include "EFortBaseWeaponDamage.h"
#include "FortAbilitySystemInterface.h"
#include "FortAttributeInitializationKey.h"
#include "FortDamageableActorInterface.h"
#include "FortPhysicsPawn.h"
#include "HitData.h"
#include "OnSurfaceTypeVehicleIsOnChangedDelegate.h"
#include "PhysicsPawnObjectInitialParameters.h"
#include "Templates/SubclassOf.h"
#include "TimeStampedPhysicsPawnState.h"
#include "VehicleHealthChangedDelegate.h"
#include "VehicleTargetOrientation.h"
#include "FortPhysicsPawnObject.generated.h"

class AActor;
class ABuildingActor;
class AController;
class AFortPawn;
class AFortPhysicsPawnObject;
class APawn;
class APlayerController;
class UBuildingEditModeMetadata;
class UFortAbilitySet;
class UFortAbilitySystemComponent;
class UFortAthenaImpulseResponseSet;
class UFortDamageSet;
class UFortHealthBarIndicator;
class UFortHealthSet;
class UGameplayEffect;
class UObject;
class UPrimitiveComponent;
class UStaticMeshComponent;
class UWeaponHitNotifyAudioBank;

UCLASS(Blueprintable)
class AFortPhysicsPawnObject : public AFortPhysicsPawn, public IFortDamageableActorInterface/*, public IFortAbilitySystemInterface*/, public IGameplayCueInterface, public IGameplayTagAssetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* PhysicsMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* VisibleMeshComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPhysicalSurface> PrimarySurfaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortBaseWeaponDamage::Type> WeaponResponseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowDamageNumbers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayDamageAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PhysicsObjectTags;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpulseResponseMultiplier;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpulseResponseZBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TestInitialLinearVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TestInitialAngularVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitResult LookAheadHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CachedSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWeaponHitNotifyAudioBank* DefaultHitNotifyAudioBank;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleHealthChanged OnHealthChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LifespanAfterDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPlayedDying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastDamagedTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> PlayerCollisionGameplayEffect;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CorrectTargetOrientation, meta=(AllowPrivateAccess=true))
    FVehicleTargetOrientation CorrectTargetOrientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAttributeInitializationKey AttributeInitKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, ReplicatedUsing=OnRep_AbilitySystemComponent, meta=(AllowPrivateAccess=true))
    UFortAbilitySystemComponent* AbilitySystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, ReplicatedUsing=OnRep_HealthSet, meta=(AllowPrivateAccess=true))
    UFortHealthSet* HealthSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaImpulseResponseSet* ImpulseResponseSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDamageSet* DamageSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortHealthBarIndicator* HealthBarIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PendingDeath, meta=(AllowPrivateAccess=true))
    bool bPendingDeath;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBuildingEditModeMetadata*> WallsPhysicsObjectCanDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ABuildingActor>> BuildingPropClassesPhysicsObjectCanDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SurfaceTypePhysicsObjectOn, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPhysicalSurface> SurfaceTypePhysicsObjectOn;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSurfaceTypeVehicleIsOnChanged OnSurfaceTypePhysicsObjectIsOnChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAbilitySet* StartupAbilitySet;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentServerPhysicsState, meta=(AllowPrivateAccess=true))
    FTimeStampedPhysicsPawnState CurrentServerPhysicsState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_LastServerConfirmedHit, meta=(AllowPrivateAccess=true))
    FHitData LastServerConfirmedHit;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_InitialParameters, meta=(AllowPrivateAccess=true))
    FPhysicsPawnObjectInitialParameters InitialParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> ActorsObjectDiesWhenHitting;
    
public:
    AFortPhysicsPawnObject();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void WakeUpOnGroundDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum);
    
    UFUNCTION(BlueprintCallable)
    void WakeUp();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void UpdateClientWithPhysicsObjectTestInput(FVector LinearVelocity, FVector AngularVelocity);
    
private:
    UFUNCTION(BlueprintCallable)
    void TurnOffClientPrediction();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AFortPhysicsPawnObject* SpawnPhysicsPawnObject(const UObject* WorldContextObject, TSubclassOf<AFortPhysicsPawnObject> ActorClass, const FTransform& Transform, const FPhysicsPawnObjectInitialParameters& NewInitialParameters);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetPropDestructionParams(TArray<TSubclassOf<ABuildingActor>> InBuildingPropClassesPhysicsObjectCanDestroy, TArray<UBuildingEditModeMetadata*> InWallsPhysicsObjectCanDestroy);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetImpulseResponseZBias(const float ZBias);
    
    UFUNCTION(BlueprintCallable)
    void SetImpulseResponseMultiplier(const float Multiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetHealthPercent(float Percent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetDyingPhysics();
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ServerBroadcastHitFromClient(APlayerController* HittingController, APawn* HittingPawn, const FVector& VelocityOfHitter, const FVector& HitNormal, const FTimeStampedPhysicsPawnState& ClientBallState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ServerBroadcastHit(APawn* ImpulseInstigator, const FVector ImpactPoint, const FVector ImpulseValue);
    
    UFUNCTION(BlueprintCallable)
    void SendClientStateToServer_Helper();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PawnHitByPhysicsObject(AFortPawn* Pawn, const FVector& ImpactPoint, const FVector& ImpactNormal, const FVector LaunchVector);
    
protected:
   // UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    //void OnSurfaceTypePhysicsObjectIsOnChanged(TEnumAsByte<EPhysicalSurface> SurfaceTypePhysicsObjectIsOn);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStopTick();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartTick();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_SurfaceTypePhysicsObjectOn(TEnumAsByte<EPhysicalSurface> PreviousSurfaceOn);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_PendingDeath();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LastServerConfirmedHit();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_InitialParameters();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HealthSet();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentServerPhysicsState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CorrectTargetOrientation();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AbilitySystemComponent();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPxComponentWake(UPrimitiveComponent* WakingComponent, FName BoneName);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnImpactDamageApplied(const float Damage, const FVector ImpactNormal);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExitedWaterVolume(const FVector& WaterSurfacePoint);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnteredWaterVolume(const FVector& WaterSurfacePoint);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnDeathPlayEffects(float Damage, const FGameplayTagContainer& DamageTags, FVector Momentum, const FHitResult& HitInfo, AFortPawn* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle EffectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnDamagePlayEffects(float Damage, const FGameplayTagContainer& DamageTags, FVector Momentum, const FHitResult& HitInfo, AFortPawn* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle EffectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDamaged(float Damage, const FGameplayTagContainer& DamageTags, const FGameplayEffectContextHandle& EffectContext, AController* EventInstigator, AActor* DamageCauser);
    
  //  UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    //void OnCollisionHitServer(const FVector HitLocation, const FVector VelocityOfHitter, const FVector HitNormal, AActor* HitActor, TEnumAsByte<EPhysicalSurface> HitSurfaceType);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnCollisionHitDamageEffects(float DamageTaken);
    
  //  UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    //void OnCollisionHitClient(const FVector HitLocation, const FVector VelocityOfHitter, const FVector HitNormal, AActor* HitActor, TEnumAsByte<EPhysicalSurface> HitSurfaceType);
    
    UFUNCTION(BlueprintCallable)
    float ModifyIncomingDamage(float Damage, const FGameplayTagContainer& InTags, const FGameplayEffectContextHandle& EffectContext, AController* EventInstigator, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsScrapingSidesOrTop() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInWater() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInAir() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCorrectingOrientation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAsleep() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPermissionToAlterBuildings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPreviousLinearVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPreviousLinearAcceleration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPreviousForwardSpeedKmh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPhysicsObjectVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetForwardSpeedKmh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDisplayName() const;
    
    UFUNCTION(BlueprintCallable)
    void GameplayCue_Damage(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void DrawServerAndClientBallPosition(const FVector ServerPosition);
    
public:
    UFUNCTION(BlueprintCallable)
    void DestroyPhysicsObject();
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void DebugDrawImpactBucket(FVector Location, FVector ImpactVector, FColor Color);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanTeleport() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanCorrectOrientation(AFortPawn* FP) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ApplyPredictedImpulseFromPawnHitClient(const FVector& VelocityOfHitter, const FVector& NormalTowardObject, APawn* HittingPawn);
    
    UFUNCTION(BlueprintCallable)
    void ApplyImpulseFromPawnHit(const FVector& VelocityOfHitter, const FVector& NormalTowardObject, APawn* HittingPawn);
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplyImpulse(AActor* ImpulseInstigator, const FVector& ImpulseToApply);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void ForwardGameplayCueToParent() override PURE_VIRTUAL(ForwardGameplayCueToParent,);
    
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    
};

