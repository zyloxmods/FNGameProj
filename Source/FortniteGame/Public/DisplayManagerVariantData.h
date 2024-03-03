#pragma once
#include "CoreMinimal.h"
#include "McpVariantChannelInfo.h"
#include "DisplayManagerVariantData.generated.h"

class UAthenaCosmeticItemDefinition;

USTRUCT(BlueprintType)
struct FDisplayManagerVariantData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaCosmeticItemDefinition* CosmeticItemDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMcpVariantChannelInfo> CosmeticVariantChannels;
    
public:
    FORTNITEGAME_API FDisplayManagerVariantData();
};

