#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MaterialFloatVariant.h"
#include "MaterialVectorVariant.h"
#include "VectorParamVariant.h"
#include "ManagedParticleParamVariant.generated.h"

USTRUCT(BlueprintType)
struct FManagedParticleParamVariant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ParamGroupTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaterialVectorVariant> ColorParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVectorParamVariant> VectorParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaterialFloatVariant> FloatParams;
    
    FORTNITEGAME_API FManagedParticleParamVariant();
};

