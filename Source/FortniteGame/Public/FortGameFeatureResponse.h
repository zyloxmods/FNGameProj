#pragma once
#include "CoreMinimal.h"
#include "EFortErrorSeverity.h"
#include "FortGameFeatureResponse.generated.h"

USTRUCT(BlueprintType)
struct FFortGameFeatureResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ErrorCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ErrorText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortErrorSeverity ErrorSeverity;
    
    FORTNITEGAME_API FFortGameFeatureResponse();
};

