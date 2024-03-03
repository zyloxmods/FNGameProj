#pragma once
#include "CoreMinimal.h"
#include "NoAggregationParameters.generated.h"

USTRUCT(BlueprintType)
struct FNoAggregationParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> Parameters;
    
    MESHNETWORK_API FNoAggregationParameters();
};

