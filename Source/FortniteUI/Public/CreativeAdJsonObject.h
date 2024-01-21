#pragma once
#include "CoreMinimal.h"
#include "CreativeAdData.h"
#include "CreativeAdJsonObject.generated.h"

USTRUCT(BlueprintType)
struct FCreativeAdJsonObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCreativeAdData> Ads;
    
    FORTNITEUI_API FCreativeAdJsonObject();
};

