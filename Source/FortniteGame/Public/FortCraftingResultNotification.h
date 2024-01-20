#pragma once
#include "CoreMinimal.h"
#include "McpLootEntry.h"
#include "FortCraftingResultNotification.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortCraftingResultNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMcpLootEntry> ItemsCrafted;
    
    FFortCraftingResultNotification();
};

