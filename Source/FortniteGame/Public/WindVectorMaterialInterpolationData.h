#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WindVectorMaterialInterpolationData.generated.h"

USTRUCT(BlueprintType)
struct FWindVectorMaterialInterpolationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialParameterIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor LerpFromValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor LerpToValue;
    
    FORTNITEGAME_API FWindVectorMaterialInterpolationData();
};

