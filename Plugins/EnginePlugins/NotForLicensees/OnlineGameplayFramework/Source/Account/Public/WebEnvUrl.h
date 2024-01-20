#pragma once
#include "CoreMinimal.h"
#include "WebEnvUrl.generated.h"

USTRUCT(BlueprintType)
struct FWebEnvUrl {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString URL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RedirectUrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Environment;
    
    ACCOUNT_API FWebEnvUrl();
};

