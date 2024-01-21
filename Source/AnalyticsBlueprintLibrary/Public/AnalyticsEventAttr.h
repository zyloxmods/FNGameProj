#pragma once
#include "CoreMinimal.h"
#include "AnalyticsEventAttr.generated.h"

USTRUCT(BlueprintType)
struct FAnalyticsEventAttr {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    ANALYTICSBLUEPRINTLIBRARY_API FAnalyticsEventAttr();
};

