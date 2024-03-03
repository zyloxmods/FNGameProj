#pragma once
#include "CoreMinimal.h"
#include "McpChangeQuantityRequest.generated.h"

USTRUCT(BlueprintType)
struct MCPPROFILESYS_API FMcpChangeQuantityRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DeltaQuantity;
    
    FMcpChangeQuantityRequest();
};

