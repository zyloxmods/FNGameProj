#pragma once
#include "CoreMinimal.h"
#include "EGfeSDKHighlightSignificance.h"
#include "EGfeSDKHighlightType.h"
#include "GfeSDKHighlightDefinition.generated.h"

USTRUCT(BlueprintType)
struct FGfeSDKHighlightDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UserDefaultInterest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGfeSDKHighlightType HighlightTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGfeSDKHighlightSignificance Significance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> NameTranslationTable;
    
    NVIDIAGFESDK_API FGfeSDKHighlightDefinition();
};

