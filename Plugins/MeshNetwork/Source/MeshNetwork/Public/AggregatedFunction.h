#pragma once
#include "CoreMinimal.h"
#include "AggregatedFunction.generated.h"

class UFunction;

USTRUCT(BlueprintType)
struct FAggregatedFunction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFunction* Function;
    
    MESHNETWORK_API FAggregatedFunction();
};

