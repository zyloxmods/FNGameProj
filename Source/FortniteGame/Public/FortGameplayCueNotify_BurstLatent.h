#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "FortBurstEffectData.h"
#include "FortGameplayCueNotify_Actor.h"
#include "FortGameplayCueSpawnResult.h"
#include "FortGameplayCueNotify_BurstLatent.generated.h"

class AActor;
class ADecalActor;
class UAudioComponent;
class UFXSystemComponent;
class UCameraShake;
class UNiagaraComponent;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class AFortGameplayCueNotify_BurstLatent : public AFortGameplayCueNotify_Actor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortBurstEffectData BurstEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGameplayCueSpawnResult BurstResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxBurstLatentLifetime;
    
    AFortGameplayCueNotify_BurstLatent();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBurstNiagara(AActor* MyTarget, const FGameplayCueParameters& Parameters, const TArray<UNiagaraComponent*>& ParticleComponents, const TArray<UAudioComponent*>& AudioComponents, UCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBurstGeneric(AActor* MyTarget, const FGameplayCueParameters& Parameters, const TArray<UFXSystemComponent*>& ParticleComponents, const TArray<UAudioComponent*>& AudioComponents, UCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBurst(AActor* MyTarget, const FGameplayCueParameters& Parameters, const TArray<UParticleSystemComponent*>& ParticleComponents, const TArray<UAudioComponent*>& AudioComponents, UCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance) const;
    
};

