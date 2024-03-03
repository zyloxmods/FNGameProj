#pragma once
#include "CoreMinimal.h"
#include "FortGameplayCueSpawnResult.generated.h"

class ADecalActor;
class AEmitterCameraLensEffectBase;
class UAudioComponent;
class UFXSystemComponent;
class UCameraShake;

USTRUCT(BlueprintType)
struct FFortGameplayCueSpawnResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFXSystemComponent*> ParticleComponents;
    
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

