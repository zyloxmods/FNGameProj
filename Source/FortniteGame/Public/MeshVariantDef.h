#pragma once
#include "CoreMinimal.h"
#include "BaseVariantDef.h"
#include "CosmeticMetaTagContainer.h"
#include "FoleySoundVariant.h"
#include "MaterialParamterDef.h"
#include "MaterialVariants.h"
#include "MeshVariant.h"
#include "ParticleParamterVariant.h"
#include "ParticleVariant.h"
#include "ScriptedActionVariant.h"
#include "SocketTransformVariant.h"
#include "SoundVariant.h"
#include "VariantParticleSystemInitializerData.h"
#include "MeshVariantDef.generated.h"

USTRUCT(BlueprintType)
struct FMeshVariantDef : public FBaseVariantDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMeshVariant> VariantMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaterialVariants> VariantMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaterialParamterDef> VariantMaterialParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVariantParticleSystemInitializerData> InitialParticleSystemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FParticleVariant> VariantParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FParticleParamterVariant> VariantParticleParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSocketTransformVariant> SocketTransforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoundVariant> VariantSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFoleySoundVariant> VariantFoley;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScriptedActionVariant> VariantActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCosmeticMetaTagContainer MetaTags;
    
    FORTNITEGAME_API FMeshVariantDef();
};

