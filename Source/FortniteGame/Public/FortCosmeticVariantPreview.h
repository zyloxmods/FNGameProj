#pragma once
#include "CoreMinimal.h"
#include "FortCosmeticVariantPreviewElement.h"
#include "McpVariantChannelInfo.h"
#include "FortCosmeticVariantPreview.generated.h"

USTRUCT(BlueprintType)
struct FFortCosmeticVariantPreview {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UnlockCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreviewTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMcpVariantChannelInfo> VariantOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortCosmeticVariantPreviewElement> AdditionalItems;
    
    FORTNITEGAME_API FFortCosmeticVariantPreview();
};

