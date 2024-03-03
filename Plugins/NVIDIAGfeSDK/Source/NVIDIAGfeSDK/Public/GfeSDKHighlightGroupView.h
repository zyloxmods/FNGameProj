#pragma once
#include "CoreMinimal.h"
#include "EGfeSDKHighlightSignificance.h"
#include "EGfeSDKHighlightType.h"
#include "GfeSDKHighlightGroupView.generated.h"

USTRUCT(BlueprintType)
struct FGfeSDKHighlightGroupView {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GroupId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGfeSDKHighlightType TagsFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGfeSDKHighlightSignificance SignificanceFilter;
    
    NVIDIAGFESDK_API FGfeSDKHighlightGroupView();
};

