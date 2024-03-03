#pragma once
#include "CoreMinimal.h"
#include "MaterialFloatVariant.h"
#include "MaterialVectorVariant.h"
#include "VectorParamVariant.h"
#include "ParticleParamterVariant.generated.h"

class UFXSystemAsset;

USTRUCT(BlueprintType)
struct FParticleParamterVariant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFXSystemAsset> ParticleSystemToAlter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaterialVectorVariant> ColorParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVectorParamVariant> VectorParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaterialFloatVariant> FloatParams;
    
    FORTNITEGAME_API FParticleParamterVariant();
};

