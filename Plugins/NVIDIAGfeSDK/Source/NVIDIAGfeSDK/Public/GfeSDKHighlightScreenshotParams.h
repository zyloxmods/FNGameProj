#pragma once
#include "CoreMinimal.h"
#include "GfeSDKHighlightScreenshotParams.generated.h"

USTRUCT(BlueprintType)
struct FGfeSDKHighlightScreenshotParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GroupId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HighlightId;
    
    NVIDIAGFESDK_API FGfeSDKHighlightScreenshotParams();
};

