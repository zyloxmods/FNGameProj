#pragma once
#include "CoreMinimal.h"
#include "AsyncTaskResult.generated.h"

USTRUCT(BlueprintType)
struct FAsyncTaskResult {
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
    FORTNITEGAME_API FAsyncTaskResult();
};

