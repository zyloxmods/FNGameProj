#pragma once
#include "CoreMinimal.h"
#include "GameplayCueNotify_Static.h"
#include "GameplayEffectTypes.h"
#include "FortBurstEffectData.h"
#include "FortGameplayCueAttachInfo.h"
#include "FortGameplayCueSpawnCondition.h"
#include "FortGameplayCueNotify_Burst.generated.h"

class AActor;
class ADecalActor;
class UAudioComponent;
class UFXSystemComponent;
class UCameraShake;
class UNiagaraComponent;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class UFortGameplayCueNotify_Burst : public UGameplayCueNotify_Static {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGameplayCueSpawnCondition DefaultCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGameplayCueAttachInfo DefaultAttachment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortBurstEffectData BurstEffectData;
    
    UFortGameplayCueNotify_Burst();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBurstNiagara(AActor* MyTarget, const FGameplayCueParameters& Parameters, const TArray<UNiagaraComponent*>& ParticleComponents, const TArray<UAudioComponent*>& AudioComponents, UCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBurstGeneric(AActor* MyTarget, const FGameplayCueParameters& Parameters, const TArray<UFXSystemComponent*>& ParticleComponents, const TArray<UAudioComponent*>& AudioComponents, UCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBurst(AActor* MyTarget, const FGameplayCueParameters& Parameters, const TArray<UParticleSystemComponent*>& ParticleComponents, const TArray<UAudioComponent*>& AudioComponents, UCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance) const;
    
};

