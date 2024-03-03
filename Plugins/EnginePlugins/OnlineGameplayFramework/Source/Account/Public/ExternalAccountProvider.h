#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ExternalAccountServiceConfig.h"
#include "ExternalAccountProvider.generated.h"

UCLASS(Blueprintable)
class ACCOUNT_API UExternalAccountProvider : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FExternalAccountServiceConfig> Services;
    
public:
    UExternalAccountProvider();
};

