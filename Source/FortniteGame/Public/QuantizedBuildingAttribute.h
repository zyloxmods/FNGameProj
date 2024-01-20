#pragma once
#include "CoreMinimal.h"
#include "QuantizedBuildingAttribute.generated.h"

USTRUCT(BlueprintType)
struct FQuantizedBuildingAttribute {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    FORTNITEGAME_API FQuantizedBuildingAttribute();
};

