#pragma once
#include "CoreMinimal.h"
#include "JsonObjectWrapper.h"
#include "McpAddItemRequest.h"
#include "McpChangeAttributesRequest.h"
#include "McpChangeQuantityRequest.h"
#include "McpRemoveItemRequest.h"
#include "McpProfileChangeRequest.generated.h"

USTRUCT(BlueprintType)
struct MCPPROFILESYS_API FMcpProfileChangeRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseCommandRevision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMcpAddItemRequest> AddRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMcpRemoveItemRequest> RemoveRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMcpChangeQuantityRequest> ChangeQuantityRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMcpChangeAttributesRequest> ChangeAttributesRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FJsonObjectWrapper> ChangeStatRequests;
    
    FMcpProfileChangeRequest();
};

