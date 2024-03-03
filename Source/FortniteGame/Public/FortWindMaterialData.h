#pragma once
#include "CoreMinimal.h"
#include "FortWindMaterialParameterPairID.h"
#include "WindScalarMaterialInterpolationData.h"
#include "WindVectorMaterialInterpolationData.h"
#include "FortWindMaterialData.generated.h"

class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FFortWindMaterialData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Mid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* IntenseStateMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialParameterPairIndices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WindVectorParameterIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWindScalarMaterialInterpolationData> ScalarInterpolationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWindVectorMaterialInterpolationData> VectorInterpolationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortWindMaterialParameterPairID> ParametersToSet;
    
    FORTNITEGAME_API FFortWindMaterialData();
};

