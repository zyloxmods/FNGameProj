#pragma once
#include "CoreMinimal.h"
#include "McpVariantChannelInfo.h"
#include "FortCosmeticVariantPreviewElement.generated.h"

class UAthenaCosmeticItemDefinition;

USTRUCT(BlueprintType)
struct FFortCosmeticVariantPreviewElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMcpVariantChannelInfo> VariantOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaCosmeticItemDefinition* Item;
    
    FORTNITEGAME_API FFortCosmeticVariantPreviewElement();
};

