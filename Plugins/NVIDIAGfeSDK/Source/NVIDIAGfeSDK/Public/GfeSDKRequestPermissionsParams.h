#pragma once
#include "CoreMinimal.h"
#include "EGfeSDKScope.h"
#include "GfeSDKRequestPermissionsParams.generated.h"

USTRUCT(BlueprintType)
struct FGfeSDKRequestPermissionsParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EGfeSDKScope> Scopes;
    
    NVIDIAGFESDK_API FGfeSDKRequestPermissionsParams();
};

