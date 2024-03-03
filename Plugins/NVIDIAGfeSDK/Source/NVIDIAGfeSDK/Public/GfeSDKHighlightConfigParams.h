#pragma once
#include "CoreMinimal.h"
#include "GfeSDKHighlightDefinition.h"
#include "GfeSDKHighlightConfigParams.generated.h"

USTRUCT(BlueprintType)
struct FGfeSDKHighlightConfigParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGfeSDKHighlightDefinition> HighlightDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultLocale;
    
    NVIDIAGFESDK_API FGfeSDKHighlightConfigParams();
};

