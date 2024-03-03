#pragma once
#include "CoreMinimal.h"
#include "BaseVariantDef.h"
#include "CosmeticMetaTagContainer.h"
#include "FoleySoundVariant.h"
#include "ManagedParticleParamVariant.h"
#include "ManagedParticleSwapVariant.h"
#include "MaterialParamterDef.h"
#include "MaterialVariants.h"
#include "ParticleParamterVariant.h"
#include "ParticleVariant.h"
#include "ScriptedActionVariant.h"
#include "SocketTransformVariant.h"
#include "VariantParticleSystemInitializerData.h"
#include "PartVariantDef.generated.h"

class UCustomCharacterPart;

USTRUCT(BlueprintType)
struct FPartVariantDef : public FBaseVariantDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UCustomCharacterPart>> VariantParts;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FManagedParticleSwapVariant> VariantSwapInParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FManagedParticleParamVariant> VariantAlteredParticleParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFoleySoundVariant> VariantFoley;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSocketTransformVariant> SocketTransforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScriptedActionVariant> VariantActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCosmeticMetaTagContainer MetaTags;
    
    FORTNITEGAME_API FPartVariantDef();
};

