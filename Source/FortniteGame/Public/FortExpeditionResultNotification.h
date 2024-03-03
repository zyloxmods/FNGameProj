#pragma once
#include "CoreMinimal.h"
#include "McpLootEntry.h"
#include "FortExpeditionResultNotification.generated.h"

USTRUCT(BlueprintType)
struct FFortExpeditionResultNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExpeditionSucceeded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMcpLootEntry> ExpeditionRewards;
    
    FORTNITEGAME_API FFortExpeditionResultNotification();
};

