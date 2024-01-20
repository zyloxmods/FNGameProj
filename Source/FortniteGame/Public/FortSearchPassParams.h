#pragma once
#include "CoreMinimal.h"
#include "FortSearchPassParams.generated.h"

USTRUCT(BlueprintType)
struct FFortSearchPassParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ControllerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SessionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BestDatacenterId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxProcessedSearchResults;
    
    FORTNITEGAME_API FFortSearchPassParams();
};

