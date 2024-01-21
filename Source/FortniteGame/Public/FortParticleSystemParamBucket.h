#pragma once
#include "CoreMinimal.h"
#include "Particles/ParticleSystemComponent.h"
#include "FortParticleSystemParamBucket.generated.h"

USTRUCT(BlueprintType)
struct FFortParticleSystemParamBucket {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FParticleSysParam> Parameters;
    
public:
    FORTNITEGAME_API FFortParticleSystemParamBucket();
};

