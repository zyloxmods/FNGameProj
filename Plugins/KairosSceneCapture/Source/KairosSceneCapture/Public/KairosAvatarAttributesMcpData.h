#pragma once
#include "CoreMinimal.h"
#include "McpVariantReader.h"
#include "KairosAvatarAttributesMcpData.generated.h"

USTRUCT(BlueprintType)
struct KAIROSSCENECAPTURE_API FKairosAvatarAttributesMcpData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMcpVariantReader> Variants;
    
    FKairosAvatarAttributesMcpData();
};

