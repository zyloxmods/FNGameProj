#pragma once
#include "CoreMinimal.h"
#include "JsonToxicityEvaluationResponse.generated.h"

USTRUCT(BlueprintType)
struct FJsonToxicityEvaluationResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool toxic;
    
    ONLINESUBSYSTEMMCP_API FJsonToxicityEvaluationResponse();
};

