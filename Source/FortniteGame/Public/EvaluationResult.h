#pragma once
#include "CoreMinimal.h"
#include "EvaluationResult.generated.h"

USTRUCT(BlueprintType)
struct FEvaluationResult {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSucceeded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ErrorCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ErrorMessage;
    
public:
    FORTNITEGAME_API FEvaluationResult();
};

