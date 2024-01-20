#pragma once
#include "CoreMinimal.h"
#include "FortGameplayCueSpawnResult.generated.h"

class ADecalActor;
class AEmitterCameraLensEffectBase;
class UAudioComponent;
class UCameraShake;
class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct FFortGameplayCueSpawnResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystemComponent*> ParticleComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAudioComponent*> AudioComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCameraShake* CameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AEmitterCameraLensEffectBase* CameraLensEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ADecalActor* DecalActor;
    
    FORTNITEGAME_API FFortGameplayCueSpawnResult();
};

