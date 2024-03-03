#pragma once
#include "CoreMinimal.h"
#include "GfeSDKHighlightOpenGroupParams.generated.h"

USTRUCT(BlueprintType)
struct FGfeSDKHighlightOpenGroupParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GroupId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> GroupDescriptionTranslationTable;
    
    NVIDIAGFESDK_API FGfeSDKHighlightOpenGroupParams();
};

