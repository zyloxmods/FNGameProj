#pragma once
#include "CoreMinimal.h"
#include "FortFloatParamAnimationInfo.h"
#include "FortParticleAnimSet.generated.h"

class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct FFortParticleAnimSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* PSC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortFloatParamAnimationInfo> ParamAnims;
    
    FORTNITEGAME_API FFortParticleAnimSet();
};

