#pragma once
#include "CoreMinimal.h"
#include "CreativeAdJsonObject.h"
#include "CreativeAdSource.generated.h"

USTRUCT(BlueprintType)
struct FCreativeAdSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString _title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString __locale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreativeAdJsonObject Ad_Info;
    
    FORTNITEUI_API FCreativeAdSource();
};

