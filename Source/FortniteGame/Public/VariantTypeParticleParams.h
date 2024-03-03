#pragma once
#include "CoreMinimal.h"
#include "ParticleParamterVariant.h"
#include "VariantTypeBase.h"
#include "VariantTypeParticleParams.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UVariantTypeParticleParams : public UVariantTypeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FParticleParamterVariant> VariantParticleParams;
    
    UVariantTypeParticleParams();
};

