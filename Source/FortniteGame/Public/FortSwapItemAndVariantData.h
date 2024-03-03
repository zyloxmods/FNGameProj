#pragma once
#include "CoreMinimal.h"
#include "McpVariantChannelInfo.h"
#include "FortSwapItemAndVariantData.generated.h"

class UFortItemDefinition;

USTRUCT(BlueprintType)
struct FFortSwapItemAndVariantData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMcpVariantChannelInfo> ChannelInfoList;
    
    FORTNITEGAME_API FFortSwapItemAndVariantData();
};

