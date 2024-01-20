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
class UCameraShake;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortGameplayCueNotify_BurstLatent : public AFortGameplayCueNotify_Actor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortBurstEffectData BurstEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGameplayCueSpawnResult BurstResult;
    
    AFortGameplayCueNotify_BurstLatent();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBurst(AActor* MyTarget, const FGameplayCueParameters& Parameters, const TArray<UParticleSystemComponent*>& ParticleComponents, const TArray<UAudioComponent*>& AudioComponents, UCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance) const;
    
};

