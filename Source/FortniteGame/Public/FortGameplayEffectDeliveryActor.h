#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "GameplayCueInterface.h"
#include "FortGameplayEffectContainerSpec.h"
#include "FortSpawnContext.h"
#include "FortSpawnContextObjectInterface.h"
#include "FortTeamActorInterface.h"
#include "OverlapRestrictions.h"
#include "FortGameplayEffectDeliveryActor.generated.h"

class APawn;
class UPrimitiveComponent;

UCLASS(Abstract, Blueprintable)
class AFortGameplayEffectDeliveryActor : public AActor, public IFortTeamActorInterface, public IFortSpawnContextObjectInterface, public IGameplayCueInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGameplayEffectContainerSpec EffectContainerSpecToApplyOnTouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKillOnExplode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetHiddenOnKill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKillOnMaxTargetsTouched;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGameplayEffectContainerSpec EffectContainerSpecToApplyOnExplode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortGameplayEffectContainerSpec> AdditionalExplodeEffectContainers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifespanAfterKill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TouchingActorsEffectApplicationUpdateTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOverlapRestrictions> OverlapRestrictions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsBeingKilled, meta=(AllowPrivateAccess=true))
    uint8 bIsBeingKilled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HasExplodedReplay, meta=(AllowPrivateAccess=true))
    uint8 bHasExploded: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreInstigatorCollision: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAddHitResultToTouchApplication: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bExplosionTransformIgnoresRotation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanExplodeMultipleTimes: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* CollisionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortSpawnContext SpawnContext;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bDoExplosionReentrancyGuard: 1;
    
public:
    AFortGameplayEffectDeliveryActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetNoiseMakingInstigatorOverride(AActor* NewActor);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreInstigatorCollision(bool bShouldIgnore);
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionComponent(UPrimitiveComponent* NewCollisionComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTouched(AActor* OtherActor, UPrimitiveComponent* OtherComp, const FHitResult& HitResult, bool bIsOverlap);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsBeingKilled();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HasExplodedReplay();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExploded(const TArray<AActor*>& HitActors, const TArray<FHitResult>& HitResults);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnComponentTouch(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnComponentOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void KillTimerExpired();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Kill();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBeingKilled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPrimitiveComponent* GetCollisionComponent() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DoSingleActorHit(const FHitResult& Hit, const bool bBroadcastHit);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DoExplosionAtLocation(const FVector& ExplosionLocation);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DoExplosion();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ChangeInstigator(APawn* NewInstigator);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void BroadcastExplosion(const TArray<AActor*>& HitActors, const TArray<FHitResult>& HitResults);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddAdditionalExplodeEffectContainer(const FFortGameplayEffectContainerSpec& ExplodeContainer);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    uint8 GetTeam() const override PURE_VIRTUAL(GetTeam, return 0;);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void ForwardGameplayCueToParent() override PURE_VIRTUAL(ForwardGameplayCueToParent,);
    
};

