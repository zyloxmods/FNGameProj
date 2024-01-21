#pragma once
#include "CoreMinimal.h"
#include "ProfileUpdate.h"
#include "AccountIdAndProfileResponse.generated.h"

USTRUCT(BlueprintType)
struct FAccountIdAndProfileResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AccountId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProfileUpdate Response;
    
    MCPPROFILESYS_API FAccountIdAndProfileResponse();
};

