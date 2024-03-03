#pragma once
#include "CoreMinimal.h"
#include "ParticleVariant.h"
#include "VariantTypeBase.h"
#include "VariantTypeParticles.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UVariantTypeParticles : public UVariantTypeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FParticleVariant> VariantParticles;
    
    UVariantTypeParticles();
};

