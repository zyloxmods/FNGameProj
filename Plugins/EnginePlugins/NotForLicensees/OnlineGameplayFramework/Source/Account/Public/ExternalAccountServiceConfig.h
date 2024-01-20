#pragma once
#include "CoreMinimal.h"
#include "EExternalAccountType.h"
#include "ExternalAccountServiceConfig.generated.h"

USTRUCT(BlueprintType)
struct FExternalAccountServiceConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EExternalAccountType Type;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ExternalServiceName;
    
    ACCOUNT_API FExternalAccountServiceConfig();
};

