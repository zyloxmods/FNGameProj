#pragma once
#include "CoreMinimal.h"
#include "McpVariantChannelInfo.h"
#include "OmahaCharacterVariantInfoData.generated.h"

USTRUCT(BlueprintType)
struct FOmahaCharacterVariantInfoData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMcpVariantChannelInfo> VariantChannelInfo;
    
    FORTNITEGAME_API FOmahaCharacterVariantInfoData();
};

