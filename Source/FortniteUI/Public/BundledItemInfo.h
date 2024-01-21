#pragma once
#include "CoreMinimal.h"
#include "BundledItemInfo.generated.h"

USTRUCT(BlueprintType)
struct FBundledItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TemplateId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOwned;
    
    FORTNITEUI_API FBundledItemInfo();
};

