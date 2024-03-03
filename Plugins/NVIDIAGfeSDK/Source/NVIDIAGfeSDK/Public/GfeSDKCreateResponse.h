#pragma once
#include "CoreMinimal.h"
#include "EGfeSDKPermission.h"
#include "EGfeSDKScope.h"
#include "GfeSDKCreateResponse.generated.h"

USTRUCT(BlueprintType)
struct FGfeSDKCreateResponse {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 VersionMajor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 VersionMinor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NVIDIAGfeVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EGfeSDKScope, EGfeSDKPermission> ScopePermissions;
    
    NVIDIAGFESDK_API FGfeSDKCreateResponse();
};

