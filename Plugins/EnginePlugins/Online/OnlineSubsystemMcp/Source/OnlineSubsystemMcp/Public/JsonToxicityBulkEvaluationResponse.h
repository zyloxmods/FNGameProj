#pragma once
#include "CoreMinimal.h"
#include "JsonToxicityBulkEvaluationResponse.generated.h"

USTRUCT(BlueprintType)
struct FJsonToxicityBulkEvaluationResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> isToxic;
    
    ONLINESUBSYSTEMMCP_API FJsonToxicityBulkEvaluationResponse();
};

