#pragma once
#include "CoreMinimal.h"
#include "FortCosmeticVariantBackedByArray.h"
#include "ParticlVariantDef.h"
#include "FortCosmeticParticleVariant.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortCosmeticParticleVariant : public UFortCosmeticVariantBackedByArray {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true, TitleProperty="VariantName"))
    TArray<FParticlVariantDef> ParticleOptions;
    
public:
    UFortCosmeticParticleVariant();
};

