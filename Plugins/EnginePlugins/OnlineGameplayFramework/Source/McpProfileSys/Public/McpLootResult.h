#pragma once
#include "CoreMinimal.h"
#include "McpLootEntry.h"
#include "McpLootResult.generated.h"

USTRUCT(BlueprintType)
struct MCPPROFILESYS_API FMcpLootResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TierGroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMcpLootEntry> Items;
    
    FMcpLootResult();
};

