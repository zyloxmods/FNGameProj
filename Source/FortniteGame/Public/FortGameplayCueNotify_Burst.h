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
class UCameraShake;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortGameplayCueNotify_Burst : public UGameplayCueNotify_Static {
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
    void OnBurst(AActor* MyTarget, const FGameplayCueParameters& Parameters, const TArray<UParticleSystemComponent*>& ParticleComponents, const TArray<UAudioComponent*>& AudioComponents, UCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance) const;
    
};

