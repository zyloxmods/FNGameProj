#pragma once
#include "CoreMinimal.h"
#include "McpLootEntry.h"
#include "McpItemIdAndQuantity.generated.h"

USTRUCT(BlueprintType)
struct MCPPROFILESYS_API FMcpItemIdAndQuantity : public FMcpLootEntry {
    GENERATED_BODY()
public:
    FMcpItemIdAndQuantity();
};

