#pragma once
#include "CoreMinimal.h"
#include "McpLootEntry.h"
#include "FortTransmogResultNotification.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortTransmogResultNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMcpLootEntry> TransmoggedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMcpLootEntry> RecycledItems;
    
    FFortTransmogResultNotification();
};

