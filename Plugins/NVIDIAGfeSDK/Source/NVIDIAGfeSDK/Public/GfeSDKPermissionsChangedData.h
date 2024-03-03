#pragma once
#include "CoreMinimal.h"
#include "EGfeSDKPermission.h"
#include "EGfeSDKScope.h"
#include "GfeSDKPermissionsChangedData.generated.h"

USTRUCT(BlueprintType)
struct FGfeSDKPermissionsChangedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EGfeSDKScope, EGfeSDKPermission> ScopePermissions;
    
    NVIDIAGFESDK_API FGfeSDKPermissionsChangedData();
};

