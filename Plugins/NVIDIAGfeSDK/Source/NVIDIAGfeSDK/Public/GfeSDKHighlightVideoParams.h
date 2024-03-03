#pragma once
#include "CoreMinimal.h"
#include "GfeSDKHighlightVideoParams.generated.h"

USTRUCT(BlueprintType)
struct FGfeSDKHighlightVideoParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GroupId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HighlightId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndDelta;
    
    NVIDIAGFESDK_API FGfeSDKHighlightVideoParams();
};

