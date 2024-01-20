#pragma once
#include "CoreMinimal.h"
#include "JsonObjectWrapper.h"
#include "McpChangeAttributesRequest.generated.h"

USTRUCT(BlueprintType)
struct MCPPROFILESYS_API FMcpChangeAttributesRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJsonObjectWrapper Attributes;
    
    FMcpChangeAttributesRequest();
};

