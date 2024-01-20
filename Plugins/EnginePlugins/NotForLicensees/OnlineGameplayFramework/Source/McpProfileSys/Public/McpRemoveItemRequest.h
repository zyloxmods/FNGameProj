#pragma once
#include "CoreMinimal.h"
#include "McpRemoveItemRequest.generated.h"

USTRUCT(BlueprintType)
struct MCPPROFILESYS_API FMcpRemoveItemRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemId;
    
    FMcpRemoveItemRequest();
};

