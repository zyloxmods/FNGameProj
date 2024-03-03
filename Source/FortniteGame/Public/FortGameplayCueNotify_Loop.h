#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "FortBurstEffectData.h"
#include "FortGameplayCueAttachInfo.h"
#include "FortGameplayCueAudioInfo_Looping.h"
#include "FortGameplayCueCameraLensEffectInfo.h"
#include "FortGameplayCueCameraShakeInfo.h"
#include "FortGameplayCueForceFeedbackInfo.h"
#include "FortGameplayCueNotify_Actor.h"
#include "FortGameplayCueParticleInfo.h"
#include "FortGameplayCueSpawnResult.h"
#include "FortGameplayCueNotify_Loop.generated.h"

class AActor;
class ADecalActor;
class UAudioComponent;
class UFXSystemComponent;
class UCameraShake;
class UNiagaraComponent;
class UParticleSystemComponent;

UCLASS(Blueprintable, MinimalAPI)
class AFortGameplayCueNotify_Loop : public AFortGameplayCueNotify_Actor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortBurstEffectData ApplicationBurst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGameplayCueSpawnResult ApplicationResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGameplayCueAttachInfo DefaultLoopingAttachment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortGameplayCueParticleInfo> LoopingParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortGameplayCueAudioInfo_Looping> LoopingSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGameplayCueForceFeedbackInfo LoopingForceFeedbackEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGameplayCueCameraLensEffectInfo LoopingCameraLensEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGameplayCueCameraShakeInfo LoopingCameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGameplayCueSpawnResult LoopingResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortBurstEffectData RecurringBurst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGameplayCueSpawnResult RecurringResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortBurstEffectData RemovalBurst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGameplayCueSpawnResult RemovalResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTickEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickInterval;
    
    AFortGameplayCueNotify_Loop();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRemovalNiagara(AActor* MyTarget, const FGameplayCueParameters& Parameters, const TArray<UNiagaraComponent*>& ParticleComponents, const TArray<UAudioComponent*>& AudioComponents, UCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRemovalGeneric(AActor* MyTarget, const FGameplayCueParameters& Parameters, const TArray<UFXSystemComponent*>& ParticleComponents, const TArray<UAudioComponent*>& AudioComponents, UCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRemoval(AActor* MyTarget, const FGameplayCueParameters& Parameters, const TArray<UParticleSystemComponent*>& ParticleComponents, const TArray<UAudioComponent*>& AudioComponents, UCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRecurringNiagara(AActor* MyTarget, const FGameplayCueParameters& Parameters, const TArray<UNiagaraComponent*>& ParticleComponents, const TArray<UAudioComponent*>& AudioComponents, UCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRecurringGeneric(AActor* MyTarget, const FGameplayCueParameters& Parameters, const TArray<UFXSystemComponent*>& ParticleComponents, const TArray<UAudioComponent*>& AudioComponents, UCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRecurring(AActor* MyTarget, const FGameplayCueParameters& Parameters, const TArray<UParticleSystemComponent*>& ParticleComponents, const TArray<UAudioComponent*>& AudioComponents, UCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoopingStartNiagara(AActor* MyTarget, const FGameplayCueParameters& Parameters, const TArray<UNiagaraComponent*>& ParticleComponents, const TArray<UAudioComponent*>& AudioComponents);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoopingStartGeneric(AActor* MyTarget, const FGameplayCueParameters& Parameters, const TArray<UFXSystemComponent*>& ParticleComponents, const TArray<UAudioComponent*>& AudioComponents);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoopingStart(AActor* MyTarget, const FGameplayCueParameters& Parameters, const TArray<UParticleSystemComponent*>& ParticleComponents, const TArray<UAudioComponent*>& AudioComponents);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnApplicationNiagara(AActor* MyTarget, const FGameplayCueParameters& Parameters, const TArray<UNiagaraComponent*>& ParticleComponents, const TArray<UAudioComponent*>& AudioComponents, UCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnApplicationGeneric(AActor* MyTarget, const FGameplayCueParameters& Parameters, const TArray<UFXSystemComponent*>& ParticleComponents, const TArray<UAudioComponent*>& AudioComponents, UCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnApplication(AActor* MyTarget, const FGameplayCueParameters& Parameters, const TArray<UParticleSystemComponent*>& ParticleComponents, const TArray<UAudioComponent*>& AudioComponents, UCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance);
    
};

