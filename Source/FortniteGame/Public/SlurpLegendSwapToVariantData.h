#pragma once
#include "CoreMinimal.h"
#include "McpVariantChannelInfo.h"
#include "SlurpLegendSwapToVariantData.generated.h"

USTRUCT(BlueprintType)
struct FSlurpLegendSwapToVariantData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBeforeSwitching;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMcpVariantChannelInfo VariantData;
    
    FORTNITEGAME_API FSlurpLegendSwapToVariantData();
};

