#pragma once
#include "CoreMinimal.h"
#include "FortCosmeticVariantBackedByArray.h"
#include "ManagedParticleVariantDef.h"
#include "FortCosmeticManagedParticleVariant.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortCosmeticManagedParticleVariant : public UFortCosmeticVariantBackedByArray {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true, TitleProperty="VariantName"))
    TArray<FManagedParticleVariantDef> ParticleOptions;
    
public:
    UFortCosmeticManagedParticleVariant();
};

