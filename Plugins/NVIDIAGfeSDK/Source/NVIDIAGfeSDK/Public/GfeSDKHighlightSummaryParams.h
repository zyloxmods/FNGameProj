#pragma once
#include "CoreMinimal.h"
#include "GfeSDKHighlightGroupView.h"
#include "GfeSDKHighlightSummaryParams.generated.h"

USTRUCT(BlueprintType)
struct FGfeSDKHighlightSummaryParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGfeSDKHighlightGroupView> GroupViews;
    
    NVIDIAGFESDK_API FGfeSDKHighlightSummaryParams();
};

