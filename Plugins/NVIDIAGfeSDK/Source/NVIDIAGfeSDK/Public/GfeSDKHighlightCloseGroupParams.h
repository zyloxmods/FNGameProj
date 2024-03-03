#pragma once
#include "CoreMinimal.h"
#include "GfeSDKHighlightCloseGroupParams.generated.h"

USTRUCT(BlueprintType)
struct FGfeSDKHighlightCloseGroupParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GroupId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DestroyHighlights;
    
    NVIDIAGFESDK_API FGfeSDKHighlightCloseGroupParams();
};

