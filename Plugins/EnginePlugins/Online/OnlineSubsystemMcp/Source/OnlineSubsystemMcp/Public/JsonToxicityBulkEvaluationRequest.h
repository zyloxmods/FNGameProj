#pragma once
#include "CoreMinimal.h"
#include "JsonToxicityBulkEvaluationRequest.generated.h"

USTRUCT(BlueprintType)
struct FJsonToxicityBulkEvaluationRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> texts;
    
    ONLINESUBSYSTEMMCP_API FJsonToxicityBulkEvaluationRequest();
};

