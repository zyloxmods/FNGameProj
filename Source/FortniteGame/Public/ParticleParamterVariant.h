#pragma once
#include "CoreMinimal.h"
#include "MaterialFloatVariant.h"
#include "MaterialVectorVariant.h"
#include "VectorParamVariant.h"
#include "ParticleParamterVariant.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FParticleParamterVariant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> ParticleSystemToAlter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaterialVectorVariant> ColorParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVectorParamVariant> VectorParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaterialFloatVariant> FloatParams;
    
    FORTNITEGAME_API FParticleParamterVariant();
};

