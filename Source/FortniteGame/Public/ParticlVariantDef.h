#pragma once
#include "CoreMinimal.h"
#include "BaseVariantDef.h"
#include "MaterialParamterDef.h"
#include "MaterialVariants.h"
#include "ParticleParamterVariant.h"
#include "ParticleVariant.h"
#include "VariantParticleSystemInitializerData.h"
#include "ParticlVariantDef.generated.h"

USTRUCT(BlueprintType)
struct FParticlVariantDef : public FBaseVariantDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaterialVariants> VariantMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaterialParamterDef> VariantMaterialParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVariantParticleSystemInitializerData> InitalParticelSystemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FParticleVariant> VariantParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FParticleParamterVariant> VariantParticleParams;
    
    FORTNITEGAME_API FParticlVariantDef();
};

