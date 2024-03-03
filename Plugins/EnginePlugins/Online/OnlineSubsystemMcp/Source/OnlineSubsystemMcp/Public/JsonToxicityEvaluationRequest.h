#pragma once
#include "CoreMinimal.h"
#include "JsonToxicityEvaluationRequest.generated.h"

USTRUCT(BlueprintType)
struct FJsonToxicityEvaluationRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Text;
    
    ONLINESUBSYSTEMMCP_API FJsonToxicityEvaluationRequest();
};

