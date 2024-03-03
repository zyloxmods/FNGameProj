#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Particles/WorldPSCPool.h"
#include "GameplayCueNotify_Actor.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "FortParticleSystemParamBucket.h"
#include "FortGameplayCueNotify_Looping.generated.h"

class AActor;
class UAudioComponent;
class UParticleSystem;
class UParticleSystemComponent;
class USceneComponent;
class USoundBase;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortGameplayCueNotify_Looping : public AGameplayCueNotify_Actor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* StartSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* StopSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* StartParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortParticleSystemParamBucket StartParticleSystemParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* StopParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortParticleSystemParamBucket StopParticleSystemParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStayAttached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSnapToAttachPointAndPreserveWorldRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseHitResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer HUDElementTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPSCPoolMethod PoolingMethod;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ParticleSystemComponent;
    
public:
    AFortGameplayCueNotify_Looping();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWhileActiveParticleSystemDeactivate(UParticleSystemComponent* WhileActiveParticleSysComponent, const FGameplayCueParameters& Parameters) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWhileActiveParticleSystemActivate(UParticleSystemComponent* WhileActiveParticleSysComponent, const FGameplayCueParameters& Parameters) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStopParticleSystemSpawned(UParticleSystemComponent* SpawnedParticleSysComponent, const FGameplayCueParameters& Parameters) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartParticleSystemSpawned(UParticleSystemComponent* SpawnedParticleSysComponent, const FGameplayCueParameters& Parameters) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USceneComponent* GetTargetComponent(AActor* TargetActor, const FGameplayCueParameters& Parameters) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSpawnTransform(AActor* TargetActor, FName AttachPointName, const FGameplayCueParameters& Parameters, FTransform& OutTransform) const;
    
};

