#pragma once
#include "CoreMinimal.h"
#include "WindScalarMaterialInterpolationData.generated.h"

USTRUCT(BlueprintType)
struct FWindScalarMaterialInterpolationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialParameterIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LerpFromValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LerpToValue;
    
    FORTNITEGAME_API FWindScalarMaterialInterpolationData();
};

