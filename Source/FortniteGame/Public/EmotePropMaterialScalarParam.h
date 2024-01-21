#pragma once
#include "CoreMinimal.h"
#include "EmotePropMaterialScalarParam.generated.h"

USTRUCT(BlueprintType)
struct FEmotePropMaterialScalarParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ParamValue;
    
    FORTNITEGAME_API FEmotePropMaterialScalarParam();
};

