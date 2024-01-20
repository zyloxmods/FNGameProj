#pragma once
#include "CoreMinimal.h"
#include "EMatchmakingErrorV2.h"
#include "FortMatchmakingErrorInfo.generated.h"

USTRUCT(BlueprintType)
struct FFortMatchmakingErrorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMatchmakingErrorV2 Error;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ErrorCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ResponseStr;
    
    FORTNITEGAME_API FFortMatchmakingErrorInfo();
};

